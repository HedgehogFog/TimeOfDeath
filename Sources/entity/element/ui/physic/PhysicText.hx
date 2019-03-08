package entity.element.ui.physic;

import scene.managment.SceneManager;
import kha.graphics2.Graphics;
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

class PhysicText extends PhysicUI {
    
    public var text: String;

    var size: Int;
    var risizeble: Bool;

    public function new(x: Float, y: Float, text: String = "", size: Int = 12,?width: Float){
        super(x, y);

        body = new Body();
        body.position.setxy(x, y);
        this.text   = text;
        this.size   = size;
        this.height = size;

        if (width != null) {
            risizeble = false;
            this.width = width;   
        } else {
            this.width = text.length + 3 * size;
        }

        body.shapes.add(new Polygon(Polygon.rect(x, y, this.width, this.height)));
        body.space = space;      
    }
    
    
    public override function draw(gr: Graphics){
		gr.pushRotation(body.rotation, body.position.x, body.position.y);
		gr.fontSize = size;
        
		gr.drawString(text, body.position.x, body.position.y);
	  
		gr.drawRect(body.position.x, body.position.y, width, height);
        gr.popTransformation();
	}

    public override function update(dt: Float){
    }
}