// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <hxinc/zpp_nape/geom/ZPP_MarchSpan.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c41d7b8741b8610e_174_new,"zpp_nape.geom.ZPP_MarchSpan","new",0x55819ba9,"zpp_nape.geom.ZPP_MarchSpan.new","zpp_nape/geom/MarchingSquares.hx",174,0xc3305538)
HX_LOCAL_STACK_FRAME(_hx_pos_c41d7b8741b8610e_206_free,"zpp_nape.geom.ZPP_MarchSpan","free",0x76a6b143,"zpp_nape.geom.ZPP_MarchSpan.free","zpp_nape/geom/MarchingSquares.hx",206,0xc3305538)
HX_LOCAL_STACK_FRAME(_hx_pos_c41d7b8741b8610e_210_alloc,"zpp_nape.geom.ZPP_MarchSpan","alloc",0x764193fe,"zpp_nape.geom.ZPP_MarchSpan.alloc","zpp_nape/geom/MarchingSquares.hx",210,0xc3305538)
HX_LOCAL_STACK_FRAME(_hx_pos_c41d7b8741b8610e_179_boot,"zpp_nape.geom.ZPP_MarchSpan","boot",0x73ff98c9,"zpp_nape.geom.ZPP_MarchSpan.boot","zpp_nape/geom/MarchingSquares.hx",179,0xc3305538)
namespace zpp_nape{
namespace geom{

void ZPP_MarchSpan_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c41d7b8741b8610e_174_new)
HXLINE( 178)		this->next = null();
HXLINE( 177)		this->out = false;
HXLINE( 176)		this->rank = 0;
HXLINE( 175)		this->parent = null();
HXLINE( 215)		this->parent = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic ZPP_MarchSpan_obj::__CreateEmpty() { return new ZPP_MarchSpan_obj; }

void *ZPP_MarchSpan_obj::_hx_vtable = 0;

Dynamic ZPP_MarchSpan_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_MarchSpan_obj > _hx_result = new ZPP_MarchSpan_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_MarchSpan_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1607e32f;
}

void ZPP_MarchSpan_obj::free(){
            	HX_STACKFRAME(&_hx_pos_c41d7b8741b8610e_206_free)
HXDLIN( 206)		this->parent = hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,free,(void))

void ZPP_MarchSpan_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_c41d7b8741b8610e_210_alloc)
HXLINE( 211)		this->out = false;
HXLINE( 212)		this->rank = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,alloc,(void))

 ::zpp_nape::geom::ZPP_MarchSpan ZPP_MarchSpan_obj::zpp_pool;


ZPP_MarchSpan_obj::ZPP_MarchSpan_obj()
{
}

void ZPP_MarchSpan_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchSpan);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_MarchSpan_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(next,"next");
}

hx::Val ZPP_MarchSpan_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return hx::Val( out ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { return hx::Val( rank ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_MarchSpan_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZPP_MarchSpan_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_MarchSpan_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::geom::ZPP_MarchSpan >(); return true; }
	}
	return false;
}

void ZPP_MarchSpan_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("rank",ac,4d,a4,4b));
	outFields->push(HX_("out",8e,a0,54,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_MarchSpan_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_MarchSpan */ ,(int)offsetof(ZPP_MarchSpan_obj,parent),HX_("parent",2a,05,7e,ed)},
	{hx::fsInt,(int)offsetof(ZPP_MarchSpan_obj,rank),HX_("rank",ac,4d,a4,4b)},
	{hx::fsBool,(int)offsetof(ZPP_MarchSpan_obj,out),HX_("out",8e,a0,54,00)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_MarchSpan */ ,(int)offsetof(ZPP_MarchSpan_obj,next),HX_("next",f3,84,02,49)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_MarchSpan_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_MarchSpan */ ,(void *) &ZPP_MarchSpan_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_MarchSpan_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("rank",ac,4d,a4,4b),
	HX_("out",8e,a0,54,00),
	HX_("next",f3,84,02,49),
	HX_("free",ac,9c,c2,43),
	HX_("alloc",75,a4,93,21),
	::String(null()) };

static void ZPP_MarchSpan_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_MarchSpan_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_MarchSpan_obj::__mClass;

static ::String ZPP_MarchSpan_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZPP_MarchSpan_obj::__register()
{
	ZPP_MarchSpan_obj _hx_dummy;
	ZPP_MarchSpan_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_MarchSpan",37,93,76,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_MarchSpan_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_MarchSpan_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_MarchSpan_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_MarchSpan_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_MarchSpan_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MarchSpan_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_MarchSpan_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_MarchSpan_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_MarchSpan_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_MarchSpan_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c41d7b8741b8610e_179_boot)
HXDLIN( 179)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace geom
