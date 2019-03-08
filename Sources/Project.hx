package;

import kha.StringExtensions;
import kha.graphics2.Graphics;
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
		var glyphs:String=" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя";

		Graphics.fontGlyphs = StringExtensions.toCharArray(glyphs);
		SceneManager.instance.draw(g2);
	}
}
