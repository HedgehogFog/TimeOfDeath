package scene.impl;

import zui.Id;
import zui.Zui;
import nape.phys.BodyType;
import entity.base.Entity;
import nape.shape.Circle;
import nape.phys.Body;
// Nape
import nape.space.Space;
import nape.geom.Vec2;
// Kha
import kha.Assets;
import kha.Color;
import kha.graphics2.Graphics;

// Local;
import scene.managment.SceneManager;
import world.Stage;	
import entity.group.Group;
import entity.element.user.Player;
import entity.element.ui.label.PhysicText;
import entity.element.enemy.Rebel;

class GameScene implements Scene {
	public var currentStage: Stage;
	public var bgColor: Color;

	var playerGroup: TypedGroup<Player>;
	var textGroup: 	 TypedGroup<PhysicText>;
	var enemy: 		 TypedGroup<Rebel>;
	public function new(){

		
		
		textGroup = new TypedGroup<PhysicText>();
		textGroup.add(new PhysicText(100, 100, "I Физика", 24));
		// for(member in textGroup.members){
		// 	member.space = space;
		// 	member.init();
		// }

		currentStage = new Stage("l0_xml");
		
		enemy = new TypedGroup<Rebel>();
		currentStage.spawn(enemy, "enemy");

		trace(enemy.members.length);

		playerGroup = new TypedGroup<Player>();
		var x: Float = currentStage.getValue("startPosX");
		var y: Float = currentStage.getValue("startPosY");

		playerGroup.add(new Player(x, y));
		// playerGroup.add(new Player(10, 10));
		
		ui = new Zui({ font: Assets.fonts.OpenSans, khaWindowId: 0, scaleFactor: 1.0 });
	}

	var ui: Zui;

	public function draw(gr: Graphics){
		gr.begin(true, bgColor);
	    gr.font = Assets.fonts.OpenSans;
		// gr.drawRect(body.position.x, body.position.y, 10, 10);
		
		playerGroup.draw(gr);
		textGroup.draw(gr);
		enemy.draw(gr);
		gr.end();
 
		ui.begin(gr);
		if (ui.window(Id.handle(), 10, 10, 240, 600, true)) {
			if (ui.panel(Id.handle({selected: true}), "Панель")) {
				ui.textInput(Id.handle({text: "Hello"}), "Input");	
			}
		}
		ui.end();
	}
	
	var loadTime = 2.0;

	public function update(dt: Float){
		playerGroup.update(dt);
		textGroup.update(dt);
	}
	public function destroy(){

	}

}