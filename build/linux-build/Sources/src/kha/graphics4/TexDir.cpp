// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TexDir
#include <hxinc/kha/graphics4/TexDir.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TexDir TexDir_obj::U;

::kha::graphics4::TexDir TexDir_obj::V;

bool TexDir_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("U",55,00,00,00)) { outValue = TexDir_obj::U; return true; }
	if (inName==HX_("V",56,00,00,00)) { outValue = TexDir_obj::V; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TexDir_obj)

int TexDir_obj::__FindIndex(::String inName)
{
	if (inName==HX_("U",55,00,00,00)) return 0;
	if (inName==HX_("V",56,00,00,00)) return 1;
	return super::__FindIndex(inName);
}

int TexDir_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("U",55,00,00,00)) return 0;
	if (inName==HX_("V",56,00,00,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TexDir_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("U",55,00,00,00)) return U;
	if (inName==HX_("V",56,00,00,00)) return V;
	return super::__Field(inName,inCallProp);
}

static ::String TexDir_obj_sStaticFields[] = {
	HX_("U",55,00,00,00),
	HX_("V",56,00,00,00),
	::String(null())
};

hx::Class TexDir_obj::__mClass;

Dynamic __Create_TexDir_obj() { return new TexDir_obj; }

void TexDir_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.TexDir",15,7e,af,f1), hx::TCanCast< TexDir_obj >,TexDir_obj_sStaticFields,0,
	&__Create_TexDir_obj, &__Create,
	&super::__SGetClass(), &CreateTexDir_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TexDir_obj::__GetStatic;
}

void TexDir_obj::__boot()
{
U = hx::CreateConstEnum< TexDir_obj >(HX_("U",55,00,00,00),0);
V = hx::CreateConstEnum< TexDir_obj >(HX_("V",56,00,00,00),1);
}


} // end namespace kha
} // end namespace graphics4
