// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor0
#include <hxinc/kha/audio2/ogg/vorbis/data/Floor0.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d98ba3cfb1ea9348_130_new,"kha.audio2.ogg.vorbis.data.Floor0","new",0xc75d6aa6,"kha.audio2.ogg.vorbis.data.Floor0.new","kha/audio2/ogg/vorbis/data/Floor.hx",130,0x2f4d0043)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void Floor0_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d98ba3cfb1ea9348_130_new)
            	}

Dynamic Floor0_obj::__CreateEmpty() { return new Floor0_obj; }

void *Floor0_obj::_hx_vtable = 0;

Dynamic Floor0_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Floor0_obj > _hx_result = new Floor0_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Floor0_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76b986b4;
}


Floor0_obj::Floor0_obj()
{
}

void Floor0_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Floor0);
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(barkMapSize,"barkMapSize");
	HX_MARK_MEMBER_NAME(amplitudeBits,"amplitudeBits");
	HX_MARK_MEMBER_NAME(amplitudeOffset,"amplitudeOffset");
	HX_MARK_MEMBER_NAME(numberOfBooks,"numberOfBooks");
	HX_MARK_MEMBER_NAME(bookList,"bookList");
	HX_MARK_END_CLASS();
}

void Floor0_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(order,"order");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(barkMapSize,"barkMapSize");
	HX_VISIT_MEMBER_NAME(amplitudeBits,"amplitudeBits");
	HX_VISIT_MEMBER_NAME(amplitudeOffset,"amplitudeOffset");
	HX_VISIT_MEMBER_NAME(numberOfBooks,"numberOfBooks");
	HX_VISIT_MEMBER_NAME(bookList,"bookList");
}

hx::Val Floor0_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return hx::Val( rate ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { return hx::Val( order ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bookList") ) { return hx::Val( bookList ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"barkMapSize") ) { return hx::Val( barkMapSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeBits") ) { return hx::Val( amplitudeBits ); }
		if (HX_FIELD_EQ(inName,"numberOfBooks") ) { return hx::Val( numberOfBooks ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"amplitudeOffset") ) { return hx::Val( amplitudeOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Floor0_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bookList") ) { bookList=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"barkMapSize") ) { barkMapSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeBits") ) { amplitudeBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numberOfBooks") ) { numberOfBooks=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"amplitudeOffset") ) { amplitudeOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Floor0_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("order",8e,f0,20,35));
	outFields->push(HX_("rate",e0,52,a4,4b));
	outFields->push(HX_("barkMapSize",25,6d,93,07));
	outFields->push(HX_("amplitudeBits",e9,99,72,ad));
	outFields->push(HX_("amplitudeOffset",36,f5,ea,51));
	outFields->push(HX_("numberOfBooks",ca,d7,c9,19));
	outFields->push(HX_("bookList",27,95,27,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Floor0_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Floor0_obj,order),HX_("order",8e,f0,20,35)},
	{hx::fsInt,(int)offsetof(Floor0_obj,rate),HX_("rate",e0,52,a4,4b)},
	{hx::fsInt,(int)offsetof(Floor0_obj,barkMapSize),HX_("barkMapSize",25,6d,93,07)},
	{hx::fsInt,(int)offsetof(Floor0_obj,amplitudeBits),HX_("amplitudeBits",e9,99,72,ad)},
	{hx::fsInt,(int)offsetof(Floor0_obj,amplitudeOffset),HX_("amplitudeOffset",36,f5,ea,51)},
	{hx::fsInt,(int)offsetof(Floor0_obj,numberOfBooks),HX_("numberOfBooks",ca,d7,c9,19)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(Floor0_obj,bookList),HX_("bookList",27,95,27,1d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Floor0_obj_sStaticStorageInfo = 0;
#endif

static ::String Floor0_obj_sMemberFields[] = {
	HX_("order",8e,f0,20,35),
	HX_("rate",e0,52,a4,4b),
	HX_("barkMapSize",25,6d,93,07),
	HX_("amplitudeBits",e9,99,72,ad),
	HX_("amplitudeOffset",36,f5,ea,51),
	HX_("numberOfBooks",ca,d7,c9,19),
	HX_("bookList",27,95,27,1d),
	::String(null()) };

hx::Class Floor0_obj::__mClass;

void Floor0_obj::__register()
{
	Floor0_obj _hx_dummy;
	Floor0_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.Floor0",b4,df,a5,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Floor0_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Floor0_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Floor0_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Floor0_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data