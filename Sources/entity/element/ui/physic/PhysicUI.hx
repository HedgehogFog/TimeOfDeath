package entity.element.ui.physic;

import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

import scene.managment.SceneManager;

class PhysicUI extends Entity {
    protected var space: Space;
    protected var body:  Body;
	protected var shape: Polygon;
	
	public function new(x: Float, y: Float){
	    this.x = x;
	    this.y = y;
	    
	    SceneManager.instance.currentScene().space = space;
	}
}