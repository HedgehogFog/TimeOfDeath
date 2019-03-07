package scene.impl;

import kha.Assets;
import kha.Color;
import kha.graphics2.Graphics;

import scene.managment.SceneManager;

class PreloaderScene implements Scene{
	public var bgColor: Color;

	public function new(){
	}

	public function draw(gr: Graphics){
		gr.begin(true, Color.Black);
		
		gr.font = Assets.fonts.OpenSans;
		gr.fontSize = 24;
		gr.drawString("Hello world", 100, 100);
		gr.end();
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