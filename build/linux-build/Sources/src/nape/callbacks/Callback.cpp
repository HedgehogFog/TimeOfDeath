// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <hxinc/nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <hxinc/nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <hxinc/zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <hxinc/zpp_nape/callbacks/ZPP_Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc7d6c51e6938fe9_180_new,"nape.callbacks.Callback","new",0x4c54d17d,"nape.callbacks.Callback.new","nape/callbacks/Callback.hx",180,0x8f946491)
HX_LOCAL_STACK_FRAME(_hx_pos_dc7d6c51e6938fe9_191_get_event,"nape.callbacks.Callback","get_event",0xc794594e,"nape.callbacks.Callback.get_event","nape/callbacks/Callback.hx",191,0x8f946491)
HX_LOCAL_STACK_FRAME(_hx_pos_dc7d6c51e6938fe9_199_get_listener,"nape.callbacks.Callback","get_listener",0xac1227c0,"nape.callbacks.Callback.get_listener","nape/callbacks/Callback.hx",199,0x8f946491)
HX_LOCAL_STACK_FRAME(_hx_pos_dc7d6c51e6938fe9_215_toString,"nape.callbacks.Callback","toString",0xbc83a66f,"nape.callbacks.Callback.toString","nape/callbacks/Callback.hx",215,0x8f946491)
namespace nape{
namespace callbacks{

void Callback_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dc7d6c51e6938fe9_180_new)
HXLINE( 184)		this->zpp_inner = null();
HXLINE( 206)		if (!(::zpp_nape::callbacks::ZPP_Callback_obj::internal)) {
HXLINE( 207)			HX_STACK_DO_THROW(HX_("Error: Callback cannot be instantiated derp!",09,0f,45,0f));
            		}
            	}

Dynamic Callback_obj::__CreateEmpty() { return new Callback_obj; }

void *Callback_obj::_hx_vtable = 0;

Dynamic Callback_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Callback_obj > _hx_result = new Callback_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Callback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e829ba7;
}

 ::nape::callbacks::CbEvent Callback_obj::get_event(){
            	HX_STACKFRAME(&_hx_pos_dc7d6c51e6938fe9_191_get_event)
HXDLIN( 191)		return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast<  ::nape::callbacks::CbEvent >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_event,return )

 ::nape::callbacks::Listener Callback_obj::get_listener(){
            	HX_STACKFRAME(&_hx_pos_dc7d6c51e6938fe9_199_get_listener)
HXDLIN( 199)		return this->zpp_inner->listener->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_listener,return )

::String Callback_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_dc7d6c51e6938fe9_215_toString)
HXDLIN( 215)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,toString,return )


hx::ObjectPtr< Callback_obj > Callback_obj::__new() {
	hx::ObjectPtr< Callback_obj > __this = new Callback_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Callback_obj > Callback_obj::__alloc(hx::Ctx *_hx_ctx) {
	Callback_obj *__this = (Callback_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Callback_obj), true, "nape.callbacks.Callback"));
	*(void **)__this = Callback_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Callback_obj::Callback_obj()
{
}

void Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Callback);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val Callback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_event() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_listener() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		if (HX_FIELD_EQ(inName,"get_event") ) { return hx::Val( get_event_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_listener") ) { return hx::Val( get_listener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Callback_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("event",1a,c8,c4,75));
	outFields->push(HX_("listener",74,00,32,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Callback_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::callbacks::ZPP_Callback */ ,(int)offsetof(Callback_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Callback_obj_sStaticStorageInfo = 0;
#endif

static ::String Callback_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_event",71,24,6e,b9),
	HX_("get_listener",7d,b4,4b,ed),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Callback_obj::__mClass;

void Callback_obj::__register()
{
	Callback_obj _hx_dummy;
	Callback_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.Callback",0b,4f,dd,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Callback_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Callback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Callback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Callback_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks