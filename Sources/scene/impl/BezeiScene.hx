package scene.impl;

import util.Draw;
import kha.graphics2.Graphics;
import kha.Color;
import kha.math.Vector2;

import scene.managment.SceneManager;

class BezeiScene implements Scene{
	public  var bgColor: Color;
	private var points: Array<Vector2>;

	public function new(){
		// space = new Space();
	}

	public function draw(gr: Graphics){
		Draw.g1.begin();

		// for(pixel in points)
			// Draw.g1.setPixel(Std.int(pixel.x), Std.int(pixel.y), Color.Green);

		Draw.g1.end();
		// gr.begin(true, Color.Black);
		
		// gr.end();
	}
	
	var loadTime = 2.0;

	public function update(dt: Float){
		if (loadTime > 0){
			loadTime -= dt;
		} else {
			SceneManager.instance.setScene(new GameScene());
		}
	}
	public function destroy(){

	}
}