package;

import kha.Assets;
import kha.System;

class Main {
	public static function main() {
		System.init({title: "Project", width: 1024, height: 768}, 
			function () {
				Assets.loadEverything(
					function (){
						new Project();

					}
				);
		});
	}
}
