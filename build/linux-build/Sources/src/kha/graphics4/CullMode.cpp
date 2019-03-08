// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_CullMode
#include <hxinc/kha/graphics4/CullMode.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::CullMode CullMode_obj::Clockwise;

::kha::graphics4::CullMode CullMode_obj::CounterClockwise;

::kha::graphics4::CullMode CullMode_obj::None;

bool CullMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clockwise",d2,5d,72,de)) { outValue = CullMode_obj::Clockwise; return true; }
	if (inName==HX_("CounterClockwise",76,cb,bb,ce)) { outValue = CullMode_obj::CounterClockwise; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = CullMode_obj::None; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CullMode_obj)

int CullMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clockwise",d2,5d,72,de)) return 0;
	if (inName==HX_("CounterClockwise",76,cb,bb,ce)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 2;
	return super::__FindIndex(inName);
}

int CullMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clockwise",d2,5d,72,de)) return 0;
	if (inName==HX_("CounterClockwise",76,cb,bb,ce)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val CullMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clockwise",d2,5d,72,de)) return Clockwise;
	if (inName==HX_("CounterClockwise",76,cb,bb,ce)) return CounterClockwise;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	return super::__Field(inName,inCallProp);
}

static ::String CullMode_obj_sStaticFields[] = {
	HX_("Clockwise",d2,5d,72,de),
	HX_("CounterClockwise",76,cb,bb,ce),
	HX_("None",d8,3e,e3,33),
	::String(null())
};

hx::Class CullMode_obj::__mClass;

Dynamic __Create_CullMode_obj() { return new CullMode_obj; }

void CullMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.CullMode",64,bc,53,51), hx::TCanCast< CullMode_obj >,CullMode_obj_sStaticFields,0,
	&__Create_CullMode_obj, &__Create,
	&super::__SGetClass(), &CreateCullMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CullMode_obj::__GetStatic;
}

void CullMode_obj::__boot()
{
Clockwise = hx::CreateConstEnum< CullMode_obj >(HX_("Clockwise",d2,5d,72,de),0);
CounterClockwise = hx::CreateConstEnum< CullMode_obj >(HX_("CounterClockwise",76,cb,bb,ce),1);
None = hx::CreateConstEnum< CullMode_obj >(HX_("None",d8,3e,e3,33),2);
}


} // end namespace kha
} // end namespace graphics4
