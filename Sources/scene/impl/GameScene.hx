package scene.impl;

// Kha
import kha.Assets;
import kha.Color;
import kha.graphics2.Graphics;

// Local;
import scene.managment.SceneManager;
import world.Stage;	
import entity.group.Group;
import entity.element.user.Player;


class GameScene implements Scene {
	public var currentStage: Stage;
	public var bgColor: Color;
	public var space:   Space;
	
	var playerGroup: TypedGroup<Player>;
	public function new(){
		space = new Space();
		
		playerGroup = new TypedGroup<Player>();
		playerGroup.add(new Player(250, 250));
		playerGroup.add(new Player(10, 10));
		
		currentStage = new Stage("l0_xml");
	}

	public function draw(gr: Graphics){
		gr.begin(true, bgColor);


		playerGroup.draw(gr);
		gr.end();
	}
	
	var loadTime = 2.0;

	public function update(dt: Float){
		playerGroup.update(dt);
	}
	public function destroy(){

	}
}