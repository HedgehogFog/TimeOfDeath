package entity.element;

import kha.graphics2.Graphics;

class Entity implements IEntity {
	
	public var width:  Int;
	public var height: Int;
	
	public var name    = "Entity";
	public var active  = true;
	public var visible = true;
	public var alive   = true;
	
	public function new() {

	}
	
	public function draw(gr: Graphics){
		
	}

	public function update(dt: Float){
		
	}
	public function destroy(){

	}

	public function kill() {
		alive = false;
	}
	
	public function revive(){
		alive = true;
	}
}

interface IEntity {	
	var name: String;
	
	var active:  Bool;
	var visible: Bool;
	var alive:   Bool;

	public function draw(gr: Graphics): Void;
	public function update(dt: Float):  Void;
	public function destroy():          Void;

	function kill():  Void;
	function revive():Void;
}