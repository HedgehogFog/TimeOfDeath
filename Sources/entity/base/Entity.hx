package entity.base;

import kha.graphics2.Graphics;

class Entity implements IEntity {

	public var x: Float;
	public var y: Float;
	
	public var width:  Float;
	public var height: Float;
	public var angle:  Float;

	public var name    = "Entity";
	public var active  = true;
	public var visible = true;
	public var alive   = true;
	
	public function new(?x: Float = 0, ?y: Float = 0) {
		this.x = x;
		this.y = y;
	}

	public function init(){
		
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