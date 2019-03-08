package scene.managment;

import nape.geom.Vec2;
import nape.space.Space;
import scene.impl.*;
import util.Timer;

import kha.graphics2.Graphics;

class SceneManager {
	public static var instance(default, null):SceneManager = new SceneManager();

	var timer: Timer;
	public var currentScene: Scene;
	public var space:   Space;

	private function new(){
		currentScene = new PreloaderScene();
		space        = new Space(new Vec2(0, 300));
		timer        = new Timer();
	}

	public function draw(gr: Graphics){
		currentScene.draw(gr);
	}

	public function update(){
		space.step(1 / 60);		
		timer.update();
		currentScene.update(timer.delta);
	}

	public function setScene(scene: Scene){
		currentScene.destroy();
		currentScene = scene;

	}

}