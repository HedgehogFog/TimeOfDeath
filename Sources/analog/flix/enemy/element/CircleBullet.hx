package entity.enemy.element;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.math.FlxPoint;

class CircleBullet extends FlxSprite {
    public var speed:Float;
	
	public function new()
	{
		super();
		
        makeGraphic(8, 8, FlxColor.YELLOW);
		
        speed = 120;
	}

    override public function update(elapsed:Float) {
		if (!alive)
            exists = false;
		else if (touching != 0)
			kill();

		super.update(elapsed);
	}

    override public function kill() {
		if (!alive)
			return;

		velocity.set();
		// if (isOnScreen())
			// FlxG.sound.play(FlxAssets.getSound("assets/sounds/jump"));

		alive = false;
		solid = false;
		// animation.play("poof");
	}

    public function shoot(pos: FlxPoint, angle:Float):Void
	{
		// FlxG.sound.play(FlxAssets.getSound("assets/sounds/enemy"), 0.5);
		
		super.reset(pos.x - width / 2, pos.y - height / 2);
		_point.set(0, -speed);
		_point.rotate(FlxPoint.weak(0, 0), angle);
		velocity.x = _point.x;
		velocity.y = _point.y;
		solid = true;
		// animation.play("idle");
	}
	
}