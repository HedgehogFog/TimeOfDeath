package entity.base;

import scene.managment.SceneManager;
import nape.shape.Polygon;
import nape.phys.Body;
import nape.space.Space;

import kha.Image;

class PhysicSprite extends Entity {
	
	public var image: Image; 
  	
	public var space: Space;

    public var body:  Body;
	public var shape: Polygon;

	public function new(?x: Float = 0, ?y: Float = 0, ?image: Image){
		super(x, y);
		
		active  = false;
		alive   = true;
		
		if (image != null){
			this.image = image;
		
			width  = image.width;
			height = image.width;
		}

		space = SceneManager.instance.space;

	}
 

}