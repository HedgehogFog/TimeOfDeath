// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <hxinc/zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e535ad8130a29ace_15674_new,"zpp_nape.util.ZNPNode_ZPP_Vec2","new",0xd76f2b61,"zpp_nape.util.ZNPNode_ZPP_Vec2.new","zpp_nape/util/Lists.hx",15674,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_e535ad8130a29ace_15702_alloc,"zpp_nape.util.ZNPNode_ZPP_Vec2","alloc",0x7a7c81b6,"zpp_nape.util.ZNPNode_ZPP_Vec2.alloc","zpp_nape/util/Lists.hx",15702,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_e535ad8130a29ace_15706_free,"zpp_nape.util.ZNPNode_ZPP_Vec2","free",0xa496e28b,"zpp_nape.util.ZNPNode_ZPP_Vec2.free","zpp_nape/util/Lists.hx",15706,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_e535ad8130a29ace_15713_elem,"zpp_nape.util.ZNPNode_ZPP_Vec2","elem",0xa3e91e6e,"zpp_nape.util.ZNPNode_ZPP_Vec2.elem","zpp_nape/util/Lists.hx",15713,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_e535ad8130a29ace_15675_boot,"zpp_nape.util.ZNPNode_ZPP_Vec2","boot",0xa1efca11,"zpp_nape.util.ZNPNode_ZPP_Vec2.boot","zpp_nape/util/Lists.hx",15675,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZNPNode_ZPP_Vec2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e535ad8130a29ace_15674_new)
HXLINE(15708)		this->elt = null();
HXLINE(15699)		this->next = null();
            	}

Dynamic ZNPNode_ZPP_Vec2_obj::__CreateEmpty() { return new ZNPNode_ZPP_Vec2_obj; }

void *ZNPNode_ZPP_Vec2_obj::_hx_vtable = 0;

Dynamic ZNPNode_ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZNPNode_ZPP_Vec2_obj > _hx_result = new ZNPNode_ZPP_Vec2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZNPNode_ZPP_Vec2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c01eb33;
}

void ZNPNode_ZPP_Vec2_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_e535ad8130a29ace_15702_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Vec2_obj,alloc,(void))

void ZNPNode_ZPP_Vec2_obj::free(){
            	HX_STACKFRAME(&_hx_pos_e535ad8130a29ace_15706_free)
HXDLIN(15706)		this->elt = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Vec2_obj,free,(void))

 ::zpp_nape::geom::ZPP_Vec2 ZNPNode_ZPP_Vec2_obj::elem(){
            	HX_STACKFRAME(&_hx_pos_e535ad8130a29ace_15713_elem)
HXDLIN(15713)		return this->elt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Vec2_obj,elem,return )

 ::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPNode_ZPP_Vec2_obj::zpp_pool;


hx::ObjectPtr< ZNPNode_ZPP_Vec2_obj > ZNPNode_ZPP_Vec2_obj::__new() {
	hx::ObjectPtr< ZNPNode_ZPP_Vec2_obj > __this = new ZNPNode_ZPP_Vec2_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZNPNode_ZPP_Vec2_obj > ZNPNode_ZPP_Vec2_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZNPNode_ZPP_Vec2_obj *__this = (ZNPNode_ZPP_Vec2_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZNPNode_ZPP_Vec2_obj), true, "zpp_nape.util.ZNPNode_ZPP_Vec2"));
	*(void **)__this = ZNPNode_ZPP_Vec2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZNPNode_ZPP_Vec2_obj::ZNPNode_ZPP_Vec2_obj()
{
}

void ZNPNode_ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Vec2);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

hx::Val ZNPNode_ZPP_Vec2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return hx::Val( elt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		if (HX_FIELD_EQ(inName,"elem") ) { return hx::Val( elem_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZNPNode_ZPP_Vec2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZNPNode_ZPP_Vec2_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_Vec2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Vec2 >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("elt",2d,02,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZNPNode_ZPP_Vec2_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Vec2 */ ,(int)offsetof(ZNPNode_ZPP_Vec2_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Vec2 */ ,(int)offsetof(ZNPNode_ZPP_Vec2_obj,elt),HX_("elt",2d,02,4d,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZNPNode_ZPP_Vec2_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Vec2 */ ,(void *) &ZNPNode_ZPP_Vec2_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZNPNode_ZPP_Vec2_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	HX_("elt",2d,02,4d,00),
	HX_("elem",8f,d8,14,43),
	::String(null()) };

static void ZNPNode_ZPP_Vec2_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZNPNode_ZPP_Vec2_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_Vec2_obj::__mClass;

static ::String ZNPNode_ZPP_Vec2_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZNPNode_ZPP_Vec2_obj::__register()
{
	ZNPNode_ZPP_Vec2_obj _hx_dummy;
	ZNPNode_ZPP_Vec2_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.ZNPNode_ZPP_Vec2",ef,e6,03,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_Vec2_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_Vec2_obj::__SetStatic;
	__mClass->mMarkFunc = ZNPNode_ZPP_Vec2_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZNPNode_ZPP_Vec2_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZNPNode_ZPP_Vec2_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_Vec2_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZNPNode_ZPP_Vec2_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZNPNode_ZPP_Vec2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZNPNode_ZPP_Vec2_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZNPNode_ZPP_Vec2_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e535ad8130a29ace_15675_boot)
HXDLIN(15675)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util
