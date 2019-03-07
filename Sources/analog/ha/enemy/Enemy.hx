package actor.enemy;

import nape.space.Space;


@:enum
abstract State(Int) {
	var None   = 0;
	var Move   = 1;
	var Attack = 2; 
	var Death  = 100;
}

class Enemy extends Actor {
	public var state: State;
	public var health: Int;
	public var name: String;

	public function new(space: Space){
		super();
	}

	public function initPos(args: Array<String>){

	}

}