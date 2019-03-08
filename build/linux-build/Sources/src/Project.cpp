// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Project
#include <hxinc/Project.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <hxinc/kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <hxinc/kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_System
#include <hxinc/kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_scene_managment_SceneManager
#include <hxinc/scene/managment/SceneManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d85277f79961908f_10_new,"Project","new",0xf2be2c2b,"Project.new","Project.hx",10,0xbb0fc1a5)
HX_LOCAL_STACK_FRAME(_hx_pos_d85277f79961908f_16_update,"Project","update",0x1f745b1e,"Project.update","Project.hx",16,0xbb0fc1a5)
HX_LOCAL_STACK_FRAME(_hx_pos_d85277f79961908f_19_render,"Project","render",0x9d98406b,"Project.render","Project.hx",19,0xbb0fc1a5)

void Project_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d85277f79961908f_10_new)
HXLINE(  11)		::kha::System_obj::notifyOnRender(this->render_dyn(),null());
HXLINE(  12)		::kha::Scheduler_obj::addTimeTask(this->update_dyn(),( (Float)(0) ),((Float)0.0166666666666666664),null());
            	}

Dynamic Project_obj::__CreateEmpty() { return new Project_obj; }

void *Project_obj::_hx_vtable = 0;

Dynamic Project_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Project_obj > _hx_result = new Project_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Project_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1af0ced5;
}

void Project_obj::update(){
            	HX_STACKFRAME(&_hx_pos_d85277f79961908f_16_update)
HXDLIN(  16)		::scene::managment::SceneManager_obj::instance->update();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Project_obj,update,(void))

void Project_obj::render( ::kha::Framebuffer framebuffer){
            	HX_STACKFRAME(&_hx_pos_d85277f79961908f_19_render)
HXLINE(  20)		 ::kha::graphics2::Graphics g2 = framebuffer->get_g2();
HXLINE(  22)		::scene::managment::SceneManager_obj::instance->draw(g2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Project_obj,render,(void))


hx::ObjectPtr< Project_obj > Project_obj::__new() {
	hx::ObjectPtr< Project_obj > __this = new Project_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Project_obj > Project_obj::__alloc(hx::Ctx *_hx_ctx) {
	Project_obj *__this = (Project_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Project_obj), false, "Project"));
	*(void **)__this = Project_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Project_obj::Project_obj()
{
}

hx::Val Project_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Project_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Project_obj_sStaticStorageInfo = 0;
#endif

static ::String Project_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("render",56,6b,29,05),
	::String(null()) };

hx::Class Project_obj::__mClass;

void Project_obj::__register()
{
	Project_obj _hx_dummy;
	Project_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Project",b9,3a,3c,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Project_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Project_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Project_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Project_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

