// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <hxinc/zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_985aee786169fab8_14943_new,"zpp_nape.util.ZNPNode_ZPP_Constraint","new",0xdd42d2a0,"zpp_nape.util.ZNPNode_ZPP_Constraint.new","zpp_nape/util/Lists.hx",14943,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_985aee786169fab8_14971_alloc,"zpp_nape.util.ZNPNode_ZPP_Constraint","alloc",0x59f7b6b5,"zpp_nape.util.ZNPNode_ZPP_Constraint.alloc","zpp_nape/util/Lists.hx",14971,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_985aee786169fab8_14975_free,"zpp_nape.util.ZNPNode_ZPP_Constraint","free",0xb7f5926c,"zpp_nape.util.ZNPNode_ZPP_Constraint.free","zpp_nape/util/Lists.hx",14975,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_985aee786169fab8_14982_elem,"zpp_nape.util.ZNPNode_ZPP_Constraint","elem",0xb747ce4f,"zpp_nape.util.ZNPNode_ZPP_Constraint.elem","zpp_nape/util/Lists.hx",14982,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_985aee786169fab8_14944_boot,"zpp_nape.util.ZNPNode_ZPP_Constraint","boot",0xb54e79f2,"zpp_nape.util.ZNPNode_ZPP_Constraint.boot","zpp_nape/util/Lists.hx",14944,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZNPNode_ZPP_Constraint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_985aee786169fab8_14943_new)
HXLINE(14977)		this->elt = null();
HXLINE(14968)		this->next = null();
            	}

Dynamic ZNPNode_ZPP_Constraint_obj::__CreateEmpty() { return new ZNPNode_ZPP_Constraint_obj; }

void *ZNPNode_ZPP_Constraint_obj::_hx_vtable = 0;

Dynamic ZNPNode_ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > _hx_result = new ZNPNode_ZPP_Constraint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZNPNode_ZPP_Constraint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6111d1f2;
}

void ZNPNode_ZPP_Constraint_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_985aee786169fab8_14971_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,alloc,(void))

void ZNPNode_ZPP_Constraint_obj::free(){
            	HX_STACKFRAME(&_hx_pos_985aee786169fab8_14975_free)
HXDLIN(14975)		this->elt = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,free,(void))

 ::zpp_nape::constraint::ZPP_Constraint ZNPNode_ZPP_Constraint_obj::elem(){
            	HX_STACKFRAME(&_hx_pos_985aee786169fab8_14982_elem)
HXDLIN(14982)		return this->elt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,elem,return )

 ::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPNode_ZPP_Constraint_obj::zpp_pool;


hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > ZNPNode_ZPP_Constraint_obj::__new() {
	hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > __this = new ZNPNode_ZPP_Constraint_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > ZNPNode_ZPP_Constraint_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZNPNode_ZPP_Constraint_obj *__this = (ZNPNode_ZPP_Constraint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZNPNode_ZPP_Constraint_obj), true, "zpp_nape.util.ZNPNode_ZPP_Constraint"));
	*(void **)__this = ZNPNode_ZPP_Constraint_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZNPNode_ZPP_Constraint_obj::ZNPNode_ZPP_Constraint_obj()
{
}

void ZNPNode_ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Constraint);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

hx::Val ZNPNode_ZPP_Constraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZNPNode_ZPP_Constraint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZNPNode_ZPP_Constraint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_Constraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("elt",2d,02,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZNPNode_ZPP_Constraint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Constraint */ ,(int)offsetof(ZNPNode_ZPP_Constraint_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsObject /*  ::zpp_nape::constraint::ZPP_Constraint */ ,(int)offsetof(ZNPNode_ZPP_Constraint_obj,elt),HX_("elt",2d,02,4d,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZNPNode_ZPP_Constraint_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Constraint */ ,(void *) &ZNPNode_ZPP_Constraint_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZNPNode_ZPP_Constraint_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	HX_("elt",2d,02,4d,00),
	HX_("elem",8f,d8,14,43),
	::String(null()) };

static void ZNPNode_ZPP_Constraint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZNPNode_ZPP_Constraint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_Constraint_obj::__mClass;

static ::String ZNPNode_ZPP_Constraint_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZNPNode_ZPP_Constraint_obj::__register()
{
	ZNPNode_ZPP_Constraint_obj _hx_dummy;
	ZNPNode_ZPP_Constraint_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.ZNPNode_ZPP_Constraint",ae,42,05,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_Constraint_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_Constraint_obj::__SetStatic;
	__mClass->mMarkFunc = ZNPNode_ZPP_Constraint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZNPNode_ZPP_Constraint_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZNPNode_ZPP_Constraint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_Constraint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZNPNode_ZPP_Constraint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZNPNode_ZPP_Constraint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZNPNode_ZPP_Constraint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZNPNode_ZPP_Constraint_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_985aee786169fab8_14944_boot)
HXDLIN(14944)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util