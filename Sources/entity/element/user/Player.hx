package entity.element.user;

import kha.graphics2.Graphics;
import kha.input.Keyboard;
import kha.input.KeyCode;

import entity.base.Entity;

class Player extends Entity {
	public function new(x: Float, y: Float){
		super();

		this.x = x;
		this.y = y;

		Keyboard.get().notify(downListener, upListener, null);
	}
	public override function update(dt: Float){

	}

	public override function draw(gr: Graphics){
		gr.drawRect(x, y, x + 50, y + 50, 10);
	}

	private function downListener(code: KeyCode){
		switch (code) {
			case A: x -= 1;
			default: return;
		}
	}

	private function upListener(code: KeyCode){

	}		

	// private function pressListener(code: String){
		// trace(code);
	// }	
}