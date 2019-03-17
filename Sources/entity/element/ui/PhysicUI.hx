package entity.element.ui;

import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

import entity.base.Entity;
import scene.managment.SceneManager;

class PhysicUI extends Entity {
    public var space: Space;

    public var body:  Body;
	public var shape: Polygon;
	
	public function new(?x: Float = 0, ?y: Float = 0){
		super(x, y);

	    // this.x = x;
	    // this.y = y;
		
		space = SceneManager.instance.space;
	}
}