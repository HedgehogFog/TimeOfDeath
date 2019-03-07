package actor.block;

import actor.Actor;

import kha.graphics2.Graphics;
import kha.Color;

import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

class Wall extends Actor{
	private var body:  Body;
	
	private var shape: Polygon;
	private var shapes: Array<Polygon>;
	public var width:  Int;
	public var height: Int;
	private var space: Space;
	public function new(space: Space){
		super();

		this.space = space;
	}

	public override function initFromFile(desc: String) {
		var rSplit = desc.split(';');
		if (rSplit[0] == '0'){
			body = null;
			return;
		}

		if (rSplit[1] == 'width') this.width = Main.width;
		else this.width = Std.parseInt(rSplit[1]);

		if (rSplit[2] == 'height') this.height = Main.height;
		else this.height = Std.parseInt(rSplit[2]);

		body = new Body(BodyType.STATIC);

		body.shapes.add(new Polygon(Polygon.rect(2, 0, 2, this.height)));
		body.shapes.add(new Polygon(Polygon.rect(this.width - 2, 0, 2, this.height)));
	
		body.shapes.add(new Polygon(Polygon.rect(0, 0, this.width, 2)));
		body.shapes.add(new Polygon(Polygon.rect(0, this.height - 2, this.width, 2)));

		body.space = space;
	}

	public override function render(gr: Graphics){
		for(shape in body.shapes){
			gr.drawRect(shape.bounds.x, shape.bounds.y, shape.bounds.width, shape.bounds.height);
		}
	}

}