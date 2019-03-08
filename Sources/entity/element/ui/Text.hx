package entity.element.ui;

import kha.graphics2.Graphics;

class Text extends Entity {
	public var text: String;
	public var size: Int;

    public function new(x: Float, y: Float, text: String = "", size: Int = 12){
        super(x, y);

        // body = new Body();
        // body.position.setxy(x, y);
        this.text   = text;
        this.size   = size;
        this.height = size;
    }
    
    
    public override function draw(gr: Graphics){
		// gr.pushRotation(body.rotation, body.position.x, body.position.y);
		gr.fontSize = size;
        
		gr.drawString(text, x, y);
	  
		// gr.drawRect(body.position.x, body.position.y, width, height);
        // gr.popTransformation();
	}

    public override function update(dt: Float){
    }
}
}	