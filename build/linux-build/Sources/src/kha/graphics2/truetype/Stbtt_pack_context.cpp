// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_context
#include <hxinc/kha/graphics2/truetype/Stbtt_pack_context.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_pack_context_obj::__construct() { }

Dynamic Stbtt_pack_context_obj::__CreateEmpty() { return new Stbtt_pack_context_obj; }

void *Stbtt_pack_context_obj::_hx_vtable = 0;

Dynamic Stbtt_pack_context_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_pack_context_obj > _hx_result = new Stbtt_pack_context_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_pack_context_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5f7e3016;
}


Stbtt_pack_context_obj::Stbtt_pack_context_obj()
{
}

void Stbtt_pack_context_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt_pack_context);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(stride_in_bytes,"stride_in_bytes");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(h_oversample,"h_oversample");
	HX_MARK_MEMBER_NAME(v_oversample,"v_oversample");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

void Stbtt_pack_context_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(stride_in_bytes,"stride_in_bytes");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(h_oversample,"h_oversample");
	HX_VISIT_MEMBER_NAME(v_oversample,"v_oversample");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
}

hx::Val Stbtt_pack_context_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return hx::Val( pixels ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return hx::Val( padding ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { return hx::Val( h_oversample ); }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { return hx::Val( v_oversample ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stride_in_bytes") ) { return hx::Val( stride_in_bytes ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_pack_context_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::kha::internal::BytesBlob >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { h_oversample=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { v_oversample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stride_in_bytes") ) { stride_in_bytes=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_pack_context_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("stride_in_bytes",77,b1,10,b4));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("h_oversample",35,fe,9e,56));
	outFields->push(HX_("v_oversample",e7,fc,16,ef));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_pack_context_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,stride_in_bytes),HX_("stride_in_bytes",77,b1,10,b4)},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,padding),HX_("padding",d1,59,7d,d0)},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,h_oversample),HX_("h_oversample",35,fe,9e,56)},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,v_oversample),HX_("v_oversample",e7,fc,16,ef)},
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(Stbtt_pack_context_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_pack_context_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_pack_context_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("stride_in_bytes",77,b1,10,b4),
	HX_("padding",d1,59,7d,d0),
	HX_("h_oversample",35,fe,9e,56),
	HX_("v_oversample",e7,fc,16,ef),
	HX_("pixels",2d,ef,a9,8c),
	::String(null()) };

hx::Class Stbtt_pack_context_obj::__mClass;

void Stbtt_pack_context_obj::__register()
{
	Stbtt_pack_context_obj _hx_dummy;
	Stbtt_pack_context_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_pack_context",3c,39,7b,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_pack_context_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_pack_context_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_pack_context_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_pack_context_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
