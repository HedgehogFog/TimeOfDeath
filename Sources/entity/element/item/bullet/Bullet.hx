package entity.element.item.bullet;

import entity.base.PhysicSprite;

class Bullet extends PhysicSprite {
	
	public function new(?x: Float = 0, ?y: Float = 0, ?lifespan: Float = 1){
		super(x, y);
		this.lifespan = lifespan;
	}

	var lifespan: Float;

	public override function update(elapsed: Float){	
		if (lifespan > 0){
			lifespan -= elapsed;
			
			if (lifespan <= 0)
				kill();
		}
		
		// if (!FlxMath.pointInFlxRect(Math.floor(x), Math.floor(y), bounds))
		// {
			// kill();
		// }
		
		super.update(elapsed);
	}

}