// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <hxinc/nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <hxinc/nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <hxinc/nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <hxinc/zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <hxinc/zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <hxinc/zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9be3745163f2db49_185_new,"nape.callbacks.BodyCallback","new",0x1cd59e3f,"nape.callbacks.BodyCallback.new","nape/callbacks/BodyCallback.hx",185,0x8ff3bd0f)
HX_LOCAL_STACK_FRAME(_hx_pos_9be3745163f2db49_193_get_body,"nape.callbacks.BodyCallback","get_body",0x0342bfec,"nape.callbacks.BodyCallback.get_body","nape/callbacks/BodyCallback.hx",193,0x8ff3bd0f)
HX_LOCAL_STACK_FRAME(_hx_pos_9be3745163f2db49_198_toString,"nape.callbacks.BodyCallback","toString",0x7adb5a6d,"nape.callbacks.BodyCallback.toString","nape/callbacks/BodyCallback.hx",198,0x8ff3bd0f)
static const ::String _hx_array_data_2c8412cd_3[] = {
	HX_("WAKE",24,24,b3,39),HX_("SLEEP",f7,f4,b2,fc),
};
namespace nape{
namespace callbacks{

void BodyCallback_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9be3745163f2db49_185_new)
HXDLIN( 185)		super::__construct();
            	}

Dynamic BodyCallback_obj::__CreateEmpty() { return new BodyCallback_obj; }

void *BodyCallback_obj::_hx_vtable = 0;

Dynamic BodyCallback_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BodyCallback_obj > _hx_result = new BodyCallback_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BodyCallback_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ae4efa1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0ae4efa1;
	} else {
		return inClassId==(int)0x1e829ba7;
	}
}

 ::nape::phys::Body BodyCallback_obj::get_body(){
            	HX_STACKFRAME(&_hx_pos_9be3745163f2db49_193_get_body)
HXDLIN( 193)		return this->zpp_inner->body->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BodyCallback_obj,get_body,return )

::String BodyCallback_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_9be3745163f2db49_198_toString)
HXLINE( 199)		::String ret = HX_("Cb:",9b,2c,33,00);
HXLINE( 200)		ret = (ret + ::Array_obj< ::String >::fromData( _hx_array_data_2c8412cd_3,2)->__get((this->zpp_inner->event - 2)));
HXLINE( 201)		ret = (ret + (HX_(":",3a,00,00,00) + this->zpp_inner->body->outer->toString()));
HXLINE( 202)		ret = (ret + (HX_(" : listener: ",60,26,46,e2) + ::Std_obj::string(this->zpp_inner->listener->outer)));
HXLINE( 203)		return ret;
            	}



hx::ObjectPtr< BodyCallback_obj > BodyCallback_obj::__new() {
	hx::ObjectPtr< BodyCallback_obj > __this = new BodyCallback_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BodyCallback_obj > BodyCallback_obj::__alloc(hx::Ctx *_hx_ctx) {
	BodyCallback_obj *__this = (BodyCallback_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BodyCallback_obj), true, "nape.callbacks.BodyCallback"));
	*(void **)__this = BodyCallback_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BodyCallback_obj::BodyCallback_obj()
{
}

hx::Val BodyCallback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_body() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_body") ) { return hx::Val( get_body_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void BodyCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("body",a2,7a,1b,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *BodyCallback_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BodyCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String BodyCallback_obj_sMemberFields[] = {
	HX_("get_body",2b,36,d6,c0),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class BodyCallback_obj::__mClass;

void BodyCallback_obj::__register()
{
	BodyCallback_obj _hx_dummy;
	BodyCallback_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.BodyCallback",cd,12,84,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BodyCallback_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BodyCallback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BodyCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BodyCallback_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks