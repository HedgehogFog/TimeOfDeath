let project = new Project('New Project');
project.addAssets('Assets/Font/**');
project.addAssets('Assets/Levels/**');
project.addAssets('Assets/Img/**');

project.addSources('Sources');

project.addLibrary("nape4");
project.addLibrary("zui");
// project.addDefine('HXCPP_DEBUGGER');
// project.addCDefine('HXCPP_DEBUGGER'); 

// project.addLibrary('zui');
// project.addLibrary('hxcpp-debugger');

// project.addParameter('-debug');
resolve(project);
