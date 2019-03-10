package entity.element.item;

import kha.Image;

class Sprite extends Entity{
	
	public var image: Image; 

	public function new(?x: Float = 0, ?y: Float = 0, ?image: Image){
		super(x, y);
		
		active  = false;
		alive   = true;
		
		if (image != null){
			this.image = image;
		
			width  = image.width;
			height = image.width;
		}
	}


}