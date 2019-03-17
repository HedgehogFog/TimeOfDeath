package entity.element.enemy;

import kha.graphics2.Graphics;
import nape.shape.Circle;
import nape.phys.BodyType;
import nape.phys.Body;
import kha.Assets;
import entity.base.PhysicSprite;

class Rebel extends PhysicSprite {

	private var angularVel = 30;
	
	public function new(){
		super(image = Assets.images.rebel);

	}

	public override function init(){
				
		body = new Body(BodyType.KINEMATIC);

		body.shapes.add(new Circle(width));
		body.position.setxy(x, y);
		
        body.space = space;		
	}

	public override function update(elapsed: Float){
        super.update(elapsed);		
	}

	public override function draw(gr: Graphics){
		gr.pushRotation(body.rotation, body.position.x, body.position.y);
        
		gr.drawImage(image, body.position.x, body.position.y);
		gr.drawRect(body.position.x, body.position.y, width, height);
		
        gr.popTransformation();		
	}	

}