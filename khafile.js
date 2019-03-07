let project = new Project('New Project');
project.addAssets('Assets/Font/**');
project.addAssets('Assets/Levels/**')
project.addSources('Sources');

project.addDefine('HXCPP_DEBUGGER');
project.addCDefine('HXCPP_DEBUGGER'); 

project.addLibrary('zui');
project.addLibrary('hxcpp-debugger');

project.addParameter('-debug');
resolve(project);
