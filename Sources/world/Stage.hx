package world;

import entity.base.Entity;
import haxe.xml.Parser;
import haxe.xml.Access;

import kha.Color;
import kha.Blob;
import kha.Assets;

import entity.base.Sprite;
import entity.element.ui.label.Text;
import entity.element.ui.label.PhysicText;


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

		loadStage(file);

	}

	private function loadStage(file: String){
		var data = Assets.blobs.get(file).toString();
		
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

		if (fastXml.hasNode.values)
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
						var val:Float = Std.parseFloat(element.att.value);
						values.arrayWrite(element.att.id, val);
						trace(element.att.id + " = " + val);

					case "String":
						var const:String = element.att.value;
						values.arrayWrite(element.att.id, const);					
				}
			}	
		}
	}

	public function spawn(container: TypedGroup<Dynamic>, layerId: String): TypedGroup<Dynamic>{
		var layerNodes = fastXml.nodes.layer;
		for (layer in layerNodes) {
			if (layer.att.id != layerId) continue;				
			
			for (element in layer.elements){
				switch (element.name){
					case "sprite":
						var instance = new Sprite();
						applyEntityProperties(instance, element);
						applySpriteProperties(instance, element);

						container.add(instance);
						if (element.has.id)
							objects.set(element.att.id, instance);
					case "entity":	
						var instance = Type.createInstance(Type.resolveClass(element.att.type), []);
						
						applyEntityProperties(instance, element);						
						applySpriteProperties(instance, element);

						instance.init();
						container.add(instance);

						if (element.has.id)
							objects.set(element.att.id, instance);
					case "text":
						var instance = new Text();
						
						applyEntityProperties(instance, element);
						applyTextProperties(instance, element);

						container.add(instance);
						if (element.has.id)						
							objects.set(element.att.id, instance);
					// case "button":
						// var instance = new FlxButton();
						// applySpriteProperties(instance, element);
						// applyTextProperties(instance.label, element);
						// addInstance(instance, container, element);						
				}
			}
		}

		return container;
	}
	private	function applySpriteProperties(instance: Dynamic, element: Access) {
		if (element.has.image)
			instance.image = Assets.images.get(element.att.image);
	}

	private function applyEntityProperties(instance: Entity, element: Access) {
		if (element.has.x)
			instance.x     = Std.parseFloat(element.att.x);
		if (element.has.y)
			instance.y     = Std.parseFloat(element.att.y);

		if (element.has.width)
			instance.width = Std.parseFloat(element.att.width);

		if (element.has.height)
			instance.height = Std.parseFloat(element.att.height);	
		if (element.has.angle)
			instance.angle = Std.parseFloat(element.att.angle);
		
		if (element.has.visible)
			instance.visible = parseBool(element.att.visible);
	}

	private	function applyTextProperties(instance: Text, element:Access){
		if (instance == null || element == null) return;

		if (element.has.text)
			instance.text = element.att.text;

		if (element.has.size)
			instance.size = Std.parseInt(element.att.size);
	}

	public function object(id:String):Dynamic{
		if (objects.exists(id))
			return objects.get(id);

		return null;
	}

	public function getValue(id: String): Dynamic{
		if (values.exists(id))
			return values.get(id);

		return null;
	}
	private function parseBool(value:String):Bool{
		if (value == "false" || Std.parseInt(value) == 0)
			return false;
		else
			return true;
	}
}