package world;

import haxe.xml.Parser;
import haxe.xml.Access;

import kha.Color;
import kha.Blob;
import kha.Assets;

import entity.element.item.Sprite;
import entity.element.ui.Text;

import entity.group.Group;
import scene.managment.SceneManager;

class Stage {

	public var width( 	default, null): Int;
	public var height(	default, null): Int;
	public var name(  	default, null): String;
	public var desc(  	default, null): String;
	public var version(	default, null): String;

	var values:  Map<String, Dynamic>;
	var objects: Map<String, Dynamic>;

	var xml: 		Xml;
	var fastXml:	Access;

	public function new(?file: String){
		if (file != null)
			setStage(file);
	}
	
	public function setStage(file: String){
		values  = new Map<String, Dynamic>();
		objects = new Map<String, Dynamic>(); 

		Assets.loadBlob(file, loadSucc, fail -> { trace(fail);});

	}

	private function loadSucc(blob: Blob){
		var data = blob.toString();
		
		xml 	= Parser.parse(data);
		fastXml = new Access(xml.firstElement());

		// <scene> attr
		if (fastXml.has.width)
			width  = Std.parseInt(fastXml.att.width);
		if (fastXml.has.height)
			height = Std.parseInt(fastXml.att.height);	
			
		if (fastXml.has.name)
			name   = fastXml.att.name;	

		if (fastXml.has.desc)
			desc   = fastXml.att.desc;

		if (fastXml.has.version)
			version = fastXml.att.version;

		if (fastXml.has.bgColor)
			SceneManager.instance.currentScene.bgColor = Color.fromString(fastXml.att.bgColor);

		if (fastXml.has.values)
			loadValues();
	}

	private function loadValues(){
		var valuesNode = fastXml.node.resolve("values");

		for (element in valuesNode.elements){
			if (element.name == "val" && element.has.id && element.has.type && element.has.value){
				switch (element.att.type){
					case "Bool":
						var const:Bool = parseBool(element.att.value);
						values.arrayWrite(element.att.id, const);
					case "Int":
						var const:Int = Std.parseInt(element.att.value);
						values.arrayWrite(element.att.id, const);
					
					case "Float":
						var const:Float = Std.parseFloat(element.att.value);
						values.arrayWrite(element.att.id, const);

					case "String":
						var const:String = element.att.value;
						values.arrayWrite(element.att.id, const);					
				}
			}	
		}
	}

	public function spawn(container: TypedGroup<Dynamic>, layerId: String){
		var layerNodes = fastXml.nodes.layer;
		for (layer in layerNodes) {
			if (layer.att.id != layerId) continue;				
			
			for (element in layer.elements){
				switch (element.name){
					case "sprite":
						var instance = new Sprite();
						applySpriteProperties(instance, element);

						addInstance(instance, container, element);
					case "entity":
						var instance = Type.createInstance(Type.resolveClass(element.att.type), []);
						applySpriteProperties(instance, element);

						addInstance(instance, container, element);
					case "text":
						var instance = new Text();
						
						applySpriteProperties(instance, element);
						applyTextProperties(instance, element);

						addInstance(instance, container, element);
					// case "button":
						// var instance = new FlxButton();
						// applySpriteProperties(instance, element);
						// applyTextProperties(instance.label, element);
						// addInstance(instance, container, element);						
				}
			}
		}
	}

	private function parseBool(value:String):Bool{
		if (value == "false" || Std.parseInt(value) == 0)
			return false;
		else
			return true;
	}
}