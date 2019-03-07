package scene;

import kha.Color;
import kha.graphics2.Graphics;
import nape.space.Space;

interface Scene {
	var bgColor: Color;
	var space:   Space;
	
	function draw(gr: Graphics): Void;
	function update(dt: Float): Void;
	function destroy(): Void;
}