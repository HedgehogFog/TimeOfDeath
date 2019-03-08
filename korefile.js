let fs = require('fs');
let path = require('path');
let project = new Project('New Project');
project.addDefine('HXCPP_API_LEVEL=332');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build/linux');
await project.addProject('build/linux-build');
await project.addProject('/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha');
if (fs.existsSync(path.join('/home/hedgehog/haxe/lib/nape4', 'korefile.js'))) {
	await project.addProject('/home/hedgehog/haxe/lib/nape4');
}
if (fs.existsSync(path.join('/home/hedgehog/haxe/lib/zui', 'korefile.js'))) {
	await project.addProject('/home/hedgehog/haxe/lib/zui');
}
resolve(project);
