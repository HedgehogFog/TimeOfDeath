package entity.enemy;

import flixel.FlxSprite;
import flixel.group.FlxGroup;

import entity.enemy.element.CircleBullet;

class Rebel extends Enemy {

    var bullets: FlxTypedGroup<CircleBullet>;


    public function new(){   
        super();     
        loadGraphic("assets/images/rebel.png");
		angularVelocity = 30;
        immovable = true;        

    }

    public override function initialize(bullets: FlxTypedGroup<CircleBullet>) {
        this.bullets = bullets;
    }

    var shotClock: Float;
    override public function update(elapsed:Float) {
        shotClock += elapsed;
        if (shotClock >= 0.1){
            var enemyBullet = bullets.recycle(CircleBullet.new);
            enemyBullet.shoot(getMidpoint(_point), angle + 0);
            
            enemyBullet = bullets.recycle(CircleBullet.new);
            enemyBullet.shoot(getMidpoint(_point), angle + 90);

            enemyBullet = bullets.recycle(CircleBullet.new);
            enemyBullet.shoot(getMidpoint(_point), angle + 180);

            enemyBullet = bullets.recycle(CircleBullet.new);
            enemyBullet.shoot(getMidpoint(_point), angle + 270);
            shotClock = 0;
        }
        super.update(elapsed);
    }
}