package actor.enemy.impl;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;

import nape.space.Space;
import kha.graphics2.Graphics;

using kha.graphics2.GraphicsExtension;

class Rebel {
	private var body:   Body;
	private var shape: 	Circle;
	private var radius: Float;
	public function new(space: Space){
		// super(space);
		// name = "The Rebel";

		body = new Body(BodyType.STATIC);
		
		body.space = space;
		body.gravMassScale = 0; 

	}

	public function initPos(args: Array<String>){
		var x  = Std.parseFloat(args[0]);
		var y  = Std.parseFloat(args[1]);
		radius = Std.parseFloat(args[2]);
		body.position.setxy(x, y);
		shape  = new Circle(radius);
		shape.body = body;
		shape.body.position.setxy(x, y);
		body.shapes.add(shape);
	}

	public function update(dt: Float){

	}

	public function render(gr: Graphics){
		gr.pushRotation(body.rotation, body.position.x, body.position.y);
	    // gr.drawImage(sprite, body.position.x - 16, body.position.y - 16);
		// gr.drawRect(body.position.x - 16, body.position.y - 16, 32, 32);
		GraphicsExtension.drawCircle(gr, body.position.x, body.position.y, radius, 1, 1);
		gr.popTransformation();
	}
}