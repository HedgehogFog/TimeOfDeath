package scene.impl;

import zui.Id;
import zui.Zui;
import nape.phys.BodyType;
import entity.element.Entity;
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
import entity.element.ui.physic.PhysicText;


class GameScene implements Scene {
	public var currentStage: Stage;
	public var bgColor: Color;

	var playerGroup: TypedGroup<Player>;
	var textGroup: 	 TypedGroup<PhysicText>;
	public function new(){

		playerGroup = new TypedGroup<Player>();
		playerGroup.add(new Player(250, 250));
		playerGroup.add(new Player(10, 10));
		
		textGroup = new TypedGroup<PhysicText>();
		textGroup.add(new PhysicText(100, 100, "I Физика", 24));
		// for(member in textGroup.members){
		// 	member.space = space;
		// 	member.init();
		// }

		currentStage = new Stage("l0_xml");
		ui = new Zui({ font: Assets.fonts.OpenSans, khaWindowId: 0, scaleFactor: 1.0 });
	}

	var ui: Zui;

	public function draw(gr: Graphics){
		gr.begin(true, bgColor);
	    gr.font = Assets.fonts.OpenSans;
		// gr.drawRect(body.position.x, body.position.y, 10, 10);

		playerGroup.draw(gr);
		textGroup.draw(gr);
		gr.end();

		ui.begin(gr);
		// if (ui.window(Id.handle(), 10, 10, 240, 600, true)) {
		// 	if (ui.panel(Id.handle({selected: true}), "Панель")) {
		// 		ui.textInput(Id.handle({text: "Hello"}), "Input");	
		// 	}
		// }
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