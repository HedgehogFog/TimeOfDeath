package entity.user;

import flixel.FlxSprite;
import flixel.FlxG;

class Player extends FlxSprite{

    var speed: Float = 300;
    var dir: Float;
    var rot: Float = 150;

	public function new(x: Float, y: Float){
        super(x, y);
        
        loadGraphic("assets/images/Player.png", false);

        width  = 32;
        height = 32;
    }

    override public function update(elapsed:Float) {
        super.update(elapsed);

        if (FlxG.keys.anyPressed([UP, W])) {
            speed = 150;
        }

        if (FlxG.keys.anyPressed([LEFT, A])){
            dir -= rot * elapsed;
        }
        
        if (FlxG.keys.anyPressed([RIGHT, D])){
            dir += rot * elapsed;
        }

        velocity.set(speed * Math.cos((angle-90)* Math.PI / 180),
                     speed * Math.sin((angle-90)* Math.PI / 180));
        speed *= elapsed * 0.5;
        angle = dir;
    }

}