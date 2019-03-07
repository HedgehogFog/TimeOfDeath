package actor;

import kha.System;
import kha.Scheduler;
import kha.Assets;
import kha.graphics2.Graphics;
import kha.Image;
import kha.input.KeyCode;
import kha.math.FastMatrix3;
import kha.math.Vector2;

import util.InputType;

class Player {
	private var dirX: Int;
	private var dirY: Int;

	var pos: Vector2;
	var vel: Vector2;
	var speed    = 0.3;

	var rotSpeed = 3.6;
	var rotation: Float;
	var friction = 0.95; 

	private var sprite: Image;
	public function new(x: Int, y: Int){
		pos.x = x;
		pos.y = y;

		sprite = Assets.images.Player;
	}

	public function update(dt: Float){
		if (dirY > 0){
			vel.x += Math.cos(degToRad(rotation)) * speed;
			vel.y += Math.sin(degToRad(rotation)) * speed;
		} else if (dirY == 0){
			vel.x *= friction;
			vel.y *= friction;
		}

		if (dirX > 0)
			rotation -= Math.round(rotSpeed) * friction;
		else if (dirX < 0)
			rotation += Math.round(rotSpeed) * friction;
			
		pos.x += vel.x;
		pos.y += vel.y;
	}

	public function render(gr: Graphics){
		gr.pushTransformation(FastMatrix3.translation(-32, -32));
		gr.rotate(degToRad(rotation), pos.x, pos.y);
		gr.drawRect(pos.x, pos.y, 32, 32);
		gr.drawImage(sprite, pos.x, pos.y);
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
			case KeyCode.S:
				dirY = -1;
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

	public function degToRad(degrees:Float):Float {
		return degrees * Math.PI / 180;
	}
}