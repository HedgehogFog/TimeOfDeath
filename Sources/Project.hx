package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

import scene.managment.SceneManager;

class Project {
	public function new() {
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
	}

	function update(): Void {
		SceneManager.instance.update();
	}

	function render(framebuffer: Framebuffer): Void {
		var g2 = framebuffer.g2;

		SceneManager.instance.draw(g2);
	}
}
