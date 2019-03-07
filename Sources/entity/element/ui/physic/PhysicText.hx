package entity.element.ui.physic;

import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

class PhysicText extends PhysicUI {
    
    var size: Float;
    var risizeble: Bool;
    
    public function new(x: Float, y: Float, text: String = "", size: Float = 12,?width: Float){
        super(x, y);
        
        body = new Body(BodyType.STATIC);
        body.shapes.add(new Polygon(Polygon.rect(x, y, width, height)));
        
        if (width != null) {
            this.resizeble = false;
            this.size      = size;   
        }
        
    }
    
    public function draw(gr: Graphics){
		gr.pushRotation(body.rotation, body.position.x, body.position.y);
	    
	    gr.font = Assets.fonts.OpenSans;
		gr.fontSize = 24;
		gr.drawString(text, x, y);
	    
		gr.drawRect(body.position.x - (width/2), body.position.y - (height/2)), width, height);
		gr.popTransformation();
	}
}