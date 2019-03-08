package entity.element.ui.physic;

import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

import scene.managment.SceneManager;

class PhysicUI extends Entity {
    public var space: Space;

    public var body:  Body;
	public var shape: Polygon;
	
	public function new(x: Float, y: Float){
		super();

	    this.x = x;
	    this.y = y;
		
		space = SceneManager.instance.space;
	}
}