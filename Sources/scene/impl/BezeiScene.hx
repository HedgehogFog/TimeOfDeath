package scene.impl;

import util.Draw;
import kha.graphics2.Graphics;
import kha.Color;
import kha.math.Vector2;
import kha.input.Mouse;

import scene.managment.SceneManager;

class BezeiScene implements Scene{
	public  var bgColor: Color;
	private var points: Array<Vector2>;
	private var pointsCurve: Array<Vector2>;

	public function new(){
		// space = new Space();
		points = [];
		pointsCurve = [];
		
		// points.push(new Vector2(250, 250));
		// points.push(new Vector2(100, 200));
		// points.push(new Vector2(500, 500));

		Mouse.get().notify(downListener, null, null, null);
	}

	public function draw(gr: Graphics){
		// Draw.g1.begin();

		// for(pixel in points)
			// Draw.g1.setPixel(Std.int(pixel.x), Std.int(pixel.y), Color.Green);

		// Draw.g1.end();


		gr.begin(true, Color.Black);

		for (i in 0...points.length - 1){
			gr.drawLine(points[i].x, points[i].y, points[i + 1].x, points[i + 1].y);
		}


		for(i in 0...index){
			gr.drawLine(pointsCurve[i].x, pointsCurve[i].y, pointsCurve[i + 1].x, pointsCurve[i + 1].y);
		}
		trace(f(index));
		gr.end();
	}
	
	var loadTime = 2.0;

	public function update(dt: Float){
		if (loadTime > 1){
			loadTime -= dt;
		} else {
			if (index + 1 < pointsCurve.length)
				index++;
			// SceneManager.instance.setScene(new GameScene());
		}
	}
	public function destroy(){

	}
	var index = 0;
	public function calcBezeiPoint(step: Float) {
		var t = 0.0;
	
		while (t < 1 + step){
			if (t > 1)
				t = 1;		
			var index = pointsCurve.length;
			pointsCurve.push(new Vector2());
			
			for (i in 0...points.length){
				var b = getBezeiLine(i, points.length - 1, t);
				pointsCurve[index].x += points[i].x * b;
				pointsCurve[index].y += points[i].y * b;
			}

			t += step;
		}
	}

	public function getBezeiLine(i: Int, n: Int, t: Float){
		return (f(n) / (f(i) * f(n - i))) * Math.pow(t, i) * Math.pow(1 - t, n - i);
	} 

	private function f(n: Int): Float {
		if (n <= 1) return 1;
		var res = 1;
		for(i in 1...n + 1)
			res *= i;

		return res;
	}

	private function downListener(btn: Int, x: Int, y: Int){
		index = 0;
		if (btn == 0){
		points.push(new Vector2(x, y));
		} else {
			points.pop();	
		}
		pointsCurve = [];
		if (points.length < 2) return; 

		calcBezeiPoint(0.05);
	}

}