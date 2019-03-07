package scene.managment;

import scene.impl.*;
import util.Timer;

import kha.graphics2.Graphics;

class SceneManager {
	public static var instance(default, null):SceneManager = new SceneManager();

	var timer: Timer;
	public var currentScene: Scene;

	private function new(){
		currentScene = new PreloaderScene();
		timer        = new Timer();
	}

	public function draw(gr: Graphics){
		currentScene.draw(gr);
	}

	public function update(){
		timer.update();
		currentScene.update(timer.delta);
	}

	public function setScene(scene: Scene){
		currentScene.destroy();
		currentScene = scene;
	}

}