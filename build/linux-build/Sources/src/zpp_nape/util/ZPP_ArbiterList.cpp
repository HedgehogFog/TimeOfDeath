// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <hxinc/nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <hxinc/nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <hxinc/zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <hxinc/zpp_nape/util/ZPP_ArbiterList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b60f7c4079efb172_17301_new,"zpp_nape.util.ZPP_ArbiterList","new",0xcbfaff29,"zpp_nape.util.ZPP_ArbiterList.new","zpp_nape/util/Lists.hx",17301,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17322_valmod,"zpp_nape.util.ZPP_ArbiterList","valmod",0xf3166f58,"zpp_nape.util.ZPP_ArbiterList.valmod","zpp_nape/util/Lists.hx",17322,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17332_modified,"zpp_nape.util.ZPP_ArbiterList","modified",0x761573e0,"zpp_nape.util.ZPP_ArbiterList.modified","zpp_nape/util/Lists.hx",17332,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17339_modify_test,"zpp_nape.util.ZPP_ArbiterList","modify_test",0x58d2f540,"zpp_nape.util.ZPP_ArbiterList.modify_test","zpp_nape/util/Lists.hx",17339,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17343_validate,"zpp_nape.util.ZPP_ArbiterList","validate",0x6431692d,"zpp_nape.util.ZPP_ArbiterList.validate","zpp_nape/util/Lists.hx",17343,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17348_invalidate,"zpp_nape.util.ZPP_ArbiterList","invalidate",0x878045d2,"zpp_nape.util.ZPP_ArbiterList.invalidate","zpp_nape/util/Lists.hx",17348,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17315_get,"zpp_nape.util.ZPP_ArbiterList","get",0xcbf5af5f,"zpp_nape.util.ZPP_ArbiterList.get","zpp_nape/util/Lists.hx",17315,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_b60f7c4079efb172_17309_boot,"zpp_nape.util.ZPP_ArbiterList","boot",0xa7bd4549,"zpp_nape.util.ZPP_ArbiterList.boot","zpp_nape/util/Lists.hx",17309,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZPP_ArbiterList_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b60f7c4079efb172_17301_new)
HXLINE(17356)		this->user_length = 0;
HXLINE(17355)		this->zip_length = false;
HXLINE(17354)		this->push_ite = null();
HXLINE(17353)		this->at_ite = null();
HXLINE(17352)		this->at_index = 0;
HXLINE(17314)		this->reverse_flag = false;
HXLINE(17313)		this->dontremove = false;
HXLINE(17312)		this->subber = null();
HXLINE(17311)		this->post_adder = null();
HXLINE(17310)		this->adder = null();
HXLINE(17308)		this->_modifiable = null();
HXLINE(17307)		this->_validate = null();
HXLINE(17306)		this->_invalidate = null();
HXLINE(17305)		this->_invalidated = false;
HXLINE(17304)		this->immutable = false;
HXLINE(17303)		this->inner = null();
HXLINE(17302)		this->outer = null();
HXLINE(17358)		this->inner =  ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__alloc( HX_CTX );
HXLINE(17359)		this->_invalidated = true;
            	}

Dynamic ZPP_ArbiterList_obj::__CreateEmpty() { return new ZPP_ArbiterList_obj; }

void *ZPP_ArbiterList_obj::_hx_vtable = 0;

Dynamic ZPP_ArbiterList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_ArbiterList_obj > _hx_result = new ZPP_ArbiterList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_ArbiterList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3f4466f3;
}

void ZPP_ArbiterList_obj::valmod(){
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17322_valmod)
HXLINE(17323)		this->validate();
HXLINE(17324)		if (this->inner->modified) {
HXLINE(17325)			if (this->inner->pushmod) {
HXLINE(17325)				this->push_ite = null();
            			}
HXLINE(17326)			this->at_ite = null();
HXLINE(17327)			this->inner->modified = false;
HXLINE(17328)			this->inner->pushmod = false;
HXLINE(17329)			this->zip_length = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,valmod,(void))

void ZPP_ArbiterList_obj::modified(){
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17332_modified)
HXLINE(17333)		this->zip_length = true;
HXLINE(17334)		this->at_ite = null();
HXLINE(17335)		this->push_ite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,modified,(void))

void ZPP_ArbiterList_obj::modify_test(){
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17339_modify_test)
HXDLIN(17339)		if (hx::IsNotNull( this->_modifiable )) {
HXDLIN(17339)			this->_modifiable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,modify_test,(void))

void ZPP_ArbiterList_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17343_validate)
HXDLIN(17343)		if (this->_invalidated) {
HXLINE(17344)			this->_invalidated = false;
HXLINE(17345)			if (hx::IsNotNull( this->_validate )) {
HXLINE(17345)				this->_validate();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,validate,(void))

void ZPP_ArbiterList_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17348_invalidate)
HXLINE(17349)		this->_invalidated = true;
HXLINE(17350)		if (hx::IsNotNull( this->_invalidate )) {
HXLINE(17350)			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,invalidate,(void))

bool ZPP_ArbiterList_obj::internal;

 ::nape::dynamics::ArbiterList ZPP_ArbiterList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Arbiter list,hx::Null< bool >  __o_imm){
            		bool imm = __o_imm.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b60f7c4079efb172_17315_get)
HXLINE(17316)		 ::nape::dynamics::ArbiterList ret =  ::nape::dynamics::ArbiterList_obj::__alloc( HX_CTX );
HXLINE(17317)		ret->zpp_inner->inner = list;
HXLINE(17318)		if (imm) {
HXLINE(17318)			ret->zpp_inner->immutable = true;
            		}
HXLINE(17319)		ret->zpp_inner->zip_length = true;
HXLINE(17320)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ArbiterList_obj,get,return )


hx::ObjectPtr< ZPP_ArbiterList_obj > ZPP_ArbiterList_obj::__new() {
	hx::ObjectPtr< ZPP_ArbiterList_obj > __this = new ZPP_ArbiterList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_ArbiterList_obj > ZPP_ArbiterList_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_ArbiterList_obj *__this = (ZPP_ArbiterList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_ArbiterList_obj), true, "zpp_nape.util.ZPP_ArbiterList"));
	*(void **)__this = ZPP_ArbiterList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_ArbiterList_obj::ZPP_ArbiterList_obj()
{
}

void ZPP_ArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ArbiterList);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(_invalidated,"_invalidated");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_modifiable,"_modifiable");
	HX_MARK_MEMBER_NAME(adder,"adder");
	HX_MARK_MEMBER_NAME(post_adder,"post_adder");
	HX_MARK_MEMBER_NAME(subber,"subber");
	HX_MARK_MEMBER_NAME(dontremove,"dontremove");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(push_ite,"push_ite");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(user_length,"user_length");
	HX_MARK_END_CLASS();
}

void ZPP_ArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(_invalidated,"_invalidated");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_modifiable,"_modifiable");
	HX_VISIT_MEMBER_NAME(adder,"adder");
	HX_VISIT_MEMBER_NAME(post_adder,"post_adder");
	HX_VISIT_MEMBER_NAME(subber,"subber");
	HX_VISIT_MEMBER_NAME(dontremove,"dontremove");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(push_ite,"push_ite");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(user_length,"user_length");
}

hx::Val ZPP_ArbiterList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return hx::Val( outer ); }
		if (HX_FIELD_EQ(inName,"inner") ) { return hx::Val( inner ); }
		if (HX_FIELD_EQ(inName,"adder") ) { return hx::Val( adder ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { return hx::Val( subber ); }
		if (HX_FIELD_EQ(inName,"valmod") ) { return hx::Val( valmod_dyn() ); }
		if (HX_FIELD_EQ(inName,"at_ite") ) { return hx::Val( at_ite ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return hx::Val( modified_dyn() ); }
		if (HX_FIELD_EQ(inName,"validate") ) { return hx::Val( validate_dyn() ); }
		if (HX_FIELD_EQ(inName,"at_index") ) { return hx::Val( at_index ); }
		if (HX_FIELD_EQ(inName,"push_ite") ) { return hx::Val( push_ite ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return hx::Val( immutable ); }
		if (HX_FIELD_EQ(inName,"_validate") ) { return hx::Val( _validate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { return hx::Val( post_adder ); }
		if (HX_FIELD_EQ(inName,"dontremove") ) { return hx::Val( dontremove ); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return hx::Val( invalidate_dyn() ); }
		if (HX_FIELD_EQ(inName,"zip_length") ) { return hx::Val( zip_length ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return hx::Val( _invalidate ); }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { return hx::Val( _modifiable ); }
		if (HX_FIELD_EQ(inName,"modify_test") ) { return hx::Val( modify_test_dyn() ); }
		if (HX_FIELD_EQ(inName,"user_length") ) { return hx::Val( user_length ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { return hx::Val( _invalidated ); }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return hx::Val( reverse_flag ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ArbiterList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = ( internal ); return true; }
	}
	return false;
}

hx::Val ZPP_ArbiterList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { post_adder=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { dontremove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { _modifiable=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"user_length") ) { user_length=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { _invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ArbiterList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_ArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("outer",7b,b8,28,37));
	outFields->push(HX_("inner",96,31,1c,be));
	outFields->push(HX_("immutable",42,28,c7,66));
	outFields->push(HX_("_invalidated",8a,e0,b5,23));
	outFields->push(HX_("dontremove",95,cf,b2,03));
	outFields->push(HX_("reverse_flag",29,93,06,7a));
	outFields->push(HX_("at_index",86,ef,d2,3d));
	outFields->push(HX_("at_ite",8e,a1,34,d2));
	outFields->push(HX_("push_ite",f5,5d,33,23));
	outFields->push(HX_("zip_length",c4,c5,11,3c));
	outFields->push(HX_("user_length",9a,c3,4e,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_ArbiterList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::dynamics::ArbiterList */ ,(int)offsetof(ZPP_ArbiterList_obj,outer),HX_("outer",7b,b8,28,37)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPList_ZPP_Arbiter */ ,(int)offsetof(ZPP_ArbiterList_obj,inner),HX_("inner",96,31,1c,be)},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,immutable),HX_("immutable",42,28,c7,66)},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,_invalidated),HX_("_invalidated",8a,e0,b5,23)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,_invalidate),HX_("_invalidate",9a,e6,b3,59)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,_validate),HX_("_validate",f5,c7,79,4c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,_modifiable),HX_("_modifiable",23,cc,cf,0c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,adder),HX_("adder",ce,d4,43,1c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,post_adder),HX_("post_adder",6f,28,cf,38)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ArbiterList_obj,subber),HX_("subber",cf,fb,fd,99)},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,dontremove),HX_("dontremove",95,cf,b2,03)},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,reverse_flag),HX_("reverse_flag",29,93,06,7a)},
	{hx::fsInt,(int)offsetof(ZPP_ArbiterList_obj,at_index),HX_("at_index",86,ef,d2,3d)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Arbiter */ ,(int)offsetof(ZPP_ArbiterList_obj,at_ite),HX_("at_ite",8e,a1,34,d2)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Arbiter */ ,(int)offsetof(ZPP_ArbiterList_obj,push_ite),HX_("push_ite",f5,5d,33,23)},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,zip_length),HX_("zip_length",c4,c5,11,3c)},
	{hx::fsInt,(int)offsetof(ZPP_ArbiterList_obj,user_length),HX_("user_length",9a,c3,4e,06)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_ArbiterList_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_ArbiterList_obj::internal,HX_("internal",3d,67,76,28)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_ArbiterList_obj_sMemberFields[] = {
	HX_("outer",7b,b8,28,37),
	HX_("inner",96,31,1c,be),
	HX_("immutable",42,28,c7,66),
	HX_("_invalidated",8a,e0,b5,23),
	HX_("_invalidate",9a,e6,b3,59),
	HX_("_validate",f5,c7,79,4c),
	HX_("_modifiable",23,cc,cf,0c),
	HX_("adder",ce,d4,43,1c),
	HX_("post_adder",6f,28,cf,38),
	HX_("subber",cf,fb,fd,99),
	HX_("dontremove",95,cf,b2,03),
	HX_("reverse_flag",29,93,06,7a),
	HX_("valmod",81,fa,b0,4f),
	HX_("modified",49,db,c7,16),
	HX_("modify_test",77,55,c2,0d),
	HX_("validate",96,d0,e3,04),
	HX_("invalidate",7b,19,2a,87),
	HX_("at_index",86,ef,d2,3d),
	HX_("at_ite",8e,a1,34,d2),
	HX_("push_ite",f5,5d,33,23),
	HX_("zip_length",c4,c5,11,3c),
	HX_("user_length",9a,c3,4e,06),
	::String(null()) };

static void ZPP_ArbiterList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ArbiterList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_ArbiterList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ArbiterList_obj::internal,"internal");
};

#endif

hx::Class ZPP_ArbiterList_obj::__mClass;

static ::String ZPP_ArbiterList_obj_sStaticFields[] = {
	HX_("internal",3d,67,76,28),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ZPP_ArbiterList_obj::__register()
{
	ZPP_ArbiterList_obj _hx_dummy;
	ZPP_ArbiterList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.ZPP_ArbiterList",b7,36,98,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ArbiterList_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ArbiterList_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_ArbiterList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_ArbiterList_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_ArbiterList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ArbiterList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_ArbiterList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_ArbiterList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_ArbiterList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_ArbiterList_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b60f7c4079efb172_17309_boot)
HXDLIN(17309)		internal = false;
            	}
}

} // end namespace zpp_nape
} // end namespace util