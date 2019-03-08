// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <hxinc/kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_System
#include <hxinc/kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <hxinc/kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <hxinc/kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics5_Graphics
#include <hxinc/kha/graphics5/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17e473de805b4eb1_17_new,"kha.Framebuffer","new",0x353baff5,"kha.Framebuffer.new","kha/Framebuffer.hx",17,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_27_init,"kha.Framebuffer","init",0x5bb6fddb,"kha.Framebuffer.init","kha/Framebuffer.hx",27,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_40_get_g1,"kha.Framebuffer","get_g1",0x01ba3cbe,"kha.Framebuffer.get_g1","kha/Framebuffer.hx",40,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_49_get_g2,"kha.Framebuffer","get_g2",0x01ba3cbf,"kha.Framebuffer.get_g2","kha/Framebuffer.hx",49,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_58_get_g4,"kha.Framebuffer","get_g4",0x01ba3cc1,"kha.Framebuffer.get_g4","kha/Framebuffer.hx",58,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_67_get_g5,"kha.Framebuffer","get_g5",0x01ba3cc2,"kha.Framebuffer.get_g5","kha/Framebuffer.hx",67,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_76_get_width,"kha.Framebuffer","get_width",0xd0a34fb2,"kha.Framebuffer.get_width","kha/Framebuffer.hx",76,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_85_get_height,"kha.Framebuffer","get_height",0x7491e4bb,"kha.Framebuffer.get_height","kha/Framebuffer.hx",85,0x5860e4dc)
namespace kha{

void Framebuffer_obj::__construct(int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4,::Dynamic g5){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_17_new)
HXLINE(  18)		this->window = window;
HXLINE(  19)		this->graphics1 = g1;
HXLINE(  20)		this->graphics2 = g2;
HXLINE(  21)		this->graphics4 = g4;
HXLINE(  22)		this->graphics5 = g5;
            	}

Dynamic Framebuffer_obj::__CreateEmpty() { return new Framebuffer_obj; }

void *Framebuffer_obj::_hx_vtable = 0;

Dynamic Framebuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Framebuffer_obj > _hx_result = new Framebuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Framebuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1236b895;
}

static ::kha::Canvas_obj _hx_kha_Framebuffer__hx_kha_Canvas= {
	( ::Dynamic (hx::Object::*)())&::kha::Framebuffer_obj::get_g4,
	(  ::kha::graphics2::Graphics (hx::Object::*)())&::kha::Framebuffer_obj::get_g2,
	( ::Dynamic (hx::Object::*)())&::kha::Framebuffer_obj::get_g1,
	( int (hx::Object::*)())&::kha::Framebuffer_obj::get_height,
	( int (hx::Object::*)())&::kha::Framebuffer_obj::get_width,
};

void *Framebuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x36d1dbdc: return &_hx_kha_Framebuffer__hx_kha_Canvas;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Framebuffer_obj::init(::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4,::Dynamic g5){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_27_init)
HXLINE(  28)		this->graphics1 = g1;
HXLINE(  29)		this->graphics2 = g2;
HXLINE(  30)		this->graphics4 = g4;
HXLINE(  31)		this->graphics5 = g5;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Framebuffer_obj,init,(void))

::Dynamic Framebuffer_obj::get_g1(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_40_get_g1)
HXDLIN(  40)		return this->graphics1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g1,return )

 ::kha::graphics2::Graphics Framebuffer_obj::get_g2(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_49_get_g2)
HXDLIN(  49)		return this->graphics2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g2,return )

::Dynamic Framebuffer_obj::get_g4(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_58_get_g4)
HXDLIN(  58)		return this->graphics4;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g4,return )

::Dynamic Framebuffer_obj::get_g5(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_67_get_g5)
HXDLIN(  67)		return this->graphics5;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g5,return )

int Framebuffer_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_76_get_width)
HXDLIN(  76)		return ::kha::System_obj::windowWidth(this->window);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_width,return )

int Framebuffer_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_85_get_height)
HXDLIN(  85)		return ::kha::System_obj::windowHeight(this->window);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_height,return )


hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__new(int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4,::Dynamic g5) {
	hx::ObjectPtr< Framebuffer_obj > __this = new Framebuffer_obj();
	__this->__construct(window,g1,g2,g4,g5);
	return __this;
}

hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__alloc(hx::Ctx *_hx_ctx,int window,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4,::Dynamic g5) {
	Framebuffer_obj *__this = (Framebuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Framebuffer_obj), true, "kha.Framebuffer"));
	*(void **)__this = Framebuffer_obj::_hx_vtable;
	__this->__construct(window,g1,g2,g4,g5);
	return __this;
}

Framebuffer_obj::Framebuffer_obj()
{
}

void Framebuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Framebuffer);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(graphics1,"graphics1");
	HX_MARK_MEMBER_NAME(graphics2,"graphics2");
	HX_MARK_MEMBER_NAME(graphics4,"graphics4");
	HX_MARK_MEMBER_NAME(graphics5,"graphics5");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Framebuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(graphics1,"graphics1");
	HX_VISIT_MEMBER_NAME(graphics2,"graphics2");
	HX_VISIT_MEMBER_NAME(graphics4,"graphics4");
	HX_VISIT_MEMBER_NAME(graphics5,"graphics5");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

hx::Val Framebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_g1() ); }
		if (HX_FIELD_EQ(inName,"g2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_g2() ); }
		if (HX_FIELD_EQ(inName,"g4") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_g4() ); }
		if (HX_FIELD_EQ(inName,"g5") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_g5() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"get_g1") ) { return hx::Val( get_g1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g2") ) { return hx::Val( get_g2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g4") ) { return hx::Val( get_g4_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g5") ) { return hx::Val( get_g5_dyn() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { return hx::Val( graphics1 ); }
		if (HX_FIELD_EQ(inName,"graphics2") ) { return hx::Val( graphics2 ); }
		if (HX_FIELD_EQ(inName,"graphics4") ) { return hx::Val( graphics4 ); }
		if (HX_FIELD_EQ(inName,"graphics5") ) { return hx::Val( graphics5 ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Framebuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { graphics1=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { graphics2=inValue.Cast<  ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { graphics4=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics5") ) { graphics5=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("graphics1",06,b9,91,08));
	outFields->push(HX_("graphics2",07,b9,91,08));
	outFields->push(HX_("graphics4",09,b9,91,08));
	outFields->push(HX_("graphics5",0a,b9,91,08));
	outFields->push(HX_("g1",ea,59,00,00));
	outFields->push(HX_("g2",eb,59,00,00));
	outFields->push(HX_("g4",ed,59,00,00));
	outFields->push(HX_("g5",ee,59,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Framebuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Framebuffer_obj,window),HX_("window",f0,93,8c,52)},
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(Framebuffer_obj,graphics1),HX_("graphics1",06,b9,91,08)},
	{hx::fsObject /*  ::kha::graphics2::Graphics */ ,(int)offsetof(Framebuffer_obj,graphics2),HX_("graphics2",07,b9,91,08)},
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(Framebuffer_obj,graphics4),HX_("graphics4",09,b9,91,08)},
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(Framebuffer_obj,graphics5),HX_("graphics5",0a,b9,91,08)},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,height),HX_("height",e7,07,4c,02)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Framebuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Framebuffer_obj_sMemberFields[] = {
	HX_("window",f0,93,8c,52),
	HX_("graphics1",06,b9,91,08),
	HX_("graphics2",07,b9,91,08),
	HX_("graphics4",09,b9,91,08),
	HX_("graphics5",0a,b9,91,08),
	HX_("init",10,3b,bb,45),
	HX_("get_g1",33,f1,2f,a3),
	HX_("get_g2",34,f1,2f,a3),
	HX_("get_g4",36,f1,2f,a3),
	HX_("get_g5",37,f1,2f,a3),
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	::String(null()) };

hx::Class Framebuffer_obj::__mClass;

void Framebuffer_obj::__register()
{
	Framebuffer_obj _hx_dummy;
	Framebuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Framebuffer",83,91,65,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Framebuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Framebuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Framebuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Framebuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha