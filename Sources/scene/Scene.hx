package scene;

import kha.Color;
import kha.graphics2.Graphics;

interface Scene {
	var bgColor: Color;
	function draw(gr: Graphics): Void;
	function update(dt: Float): Void;
	function destroy(): Void;
}