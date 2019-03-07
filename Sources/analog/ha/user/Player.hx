package actor.user;

import kha.Assets;
import kha.graphics2.Graphics;
import kha.Image;
import kha.input.KeyCode;
import kha.math.FastMatrix3;
import kha.math.Vector2;


import util.InputType;

import nape.space.Space;
import nape.shape.Circle;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.geom.Vec2;



class Player {
	private var dirX: Int;
	private var dirY: Int;

	var speed    = 500;

	var rotSpeed = 3.6;
	var rotation: Float;
	var friction = 0.95; 

	private var sprite: Image;
	private var body:   Body;
	private var shape: 	Circle;

	public function new(x: Float, y: Float, space: Space){
		sprite = Assets.images.Player;
		body   = new Body(BodyType.DYNAMIC);
		shape  = new Circle(16);
		shape.body = body;
		shape.body.position.setxy(x, y);
		body.shapes.add(shape);
		body.space = space;

		body.gravMassScale = 0; 
	}

	public function update(dt: Float){
		var delta = new Vec2(
			Math.cos(body.rotation),
			Math.sin(body.rotation)
		).mul(speed).mul(dirY).mul(dt);
		body.applyImpulse(delta);

		var angularDelta = -dirX * 300 * dt;
		body.applyAngularImpulse(angularDelta);

		body.applyImpulse(body.velocity.mul(-1).mul(dt));
		body.applyAngularImpulse(body.angularVel * -100 * dt);
	}

	public function render(gr: Graphics){
		gr.pushRotation(body.rotation, body.position.x, body.position.y);
	    gr.drawImage(sprite, body.position.x - 16, body.position.y - 16);
		gr.drawRect(body.position.x - 16, body.position.y - 16, 32, 32);
		gr.popTransformation();
	}

	public function inputUpdate(keyCode: KeyCode, type: InputType){
		switch(type){
			case InputType.KeyDown:
				keyDown(keyCode);
			case InputType.KeyUp:
				keyUp(keyCode);
			default: return;
		}
	}

	private function keyDown(keyCode: KeyCode){
		switch (keyCode){
			case KeyCode.W:
				dirY = 1;
			case KeyCode.A:
				dirX = 1;
			case KeyCode.D:
				dirX = -1;	
			default: return;
		}
	}
	private function keyUp(keyCode: KeyCode){
		switch(keyCode){
			case KeyCode.W:
				dirY = 0;
			case KeyCode.S:
				dirY = 0;
			case KeyCode.A:
				dirX = 0;
			case KeyCode.D:
				dirX = 0;	
			default: return;
		}
	}

	public function axisListener(axis: Int, value: Float){
		if (axis == 0){
			if (value < 0 ){
				dirX = 1;
			} else if (value > 0){
				dirX = -1;
			} else {
				dirX = 0;
			}
		}
		if (axis == 1){
			if (value > 0 ){
				dirY = 1;
			} else {
				dirY = 0;
			}	
		}
	}

	public function setPos(x: Float, y: Float){
		body.position.setxy(x, y);
	}
	public function degToRad(degrees:Float):Float {
		return degrees * Math.PI / 180;
	}
}