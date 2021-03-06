// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <hxinc/nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <hxinc/nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <hxinc/zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <hxinc/zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConvexResultList
#include <hxinc/zpp_nape/util/ZPP_ConvexResultList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17053_new,"zpp_nape.util.ZPP_ConvexResultList","new",0xa96be044,"zpp_nape.util.ZPP_ConvexResultList.new","zpp_nape/util/Lists.hx",17053,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17074_valmod,"zpp_nape.util.ZPP_ConvexResultList","valmod",0xe680f11d,"zpp_nape.util.ZPP_ConvexResultList.valmod","zpp_nape/util/Lists.hx",17074,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17084_modified,"zpp_nape.util.ZPP_ConvexResultList","modified",0xfa77b0e5,"zpp_nape.util.ZPP_ConvexResultList.modified","zpp_nape/util/Lists.hx",17084,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17091_modify_test,"zpp_nape.util.ZPP_ConvexResultList","modify_test",0x9302e95b,"zpp_nape.util.ZPP_ConvexResultList.modify_test","zpp_nape/util/Lists.hx",17091,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17095_validate,"zpp_nape.util.ZPP_ConvexResultList","validate",0xe893a632,"zpp_nape.util.ZPP_ConvexResultList.validate","zpp_nape/util/Lists.hx",17095,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17100_invalidate,"zpp_nape.util.ZPP_ConvexResultList","invalidate",0x96af8e17,"zpp_nape.util.ZPP_ConvexResultList.invalidate","zpp_nape/util/Lists.hx",17100,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17067_get,"zpp_nape.util.ZPP_ConvexResultList","get",0xa966907a,"zpp_nape.util.ZPP_ConvexResultList.get","zpp_nape/util/Lists.hx",17067,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_d50d9a6d065c1838_17061_boot,"zpp_nape.util.ZPP_ConvexResultList","boot",0x8d115bce,"zpp_nape.util.ZPP_ConvexResultList.boot","zpp_nape/util/Lists.hx",17061,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZPP_ConvexResultList_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17053_new)
HXLINE(17108)		this->user_length = 0;
HXLINE(17107)		this->zip_length = false;
HXLINE(17106)		this->push_ite = null();
HXLINE(17105)		this->at_ite = null();
HXLINE(17104)		this->at_index = 0;
HXLINE(17066)		this->reverse_flag = false;
HXLINE(17065)		this->dontremove = false;
HXLINE(17064)		this->subber = null();
HXLINE(17063)		this->post_adder = null();
HXLINE(17062)		this->adder = null();
HXLINE(17060)		this->_modifiable = null();
HXLINE(17059)		this->_validate = null();
HXLINE(17058)		this->_invalidate = null();
HXLINE(17057)		this->_invalidated = false;
HXLINE(17056)		this->immutable = false;
HXLINE(17055)		this->inner = null();
HXLINE(17054)		this->outer = null();
HXLINE(17110)		this->inner =  ::zpp_nape::util::ZNPList_ConvexResult_obj::__alloc( HX_CTX );
HXLINE(17111)		this->_invalidated = true;
            	}

Dynamic ZPP_ConvexResultList_obj::__CreateEmpty() { return new ZPP_ConvexResultList_obj; }

void *ZPP_ConvexResultList_obj::_hx_vtable = 0;

Dynamic ZPP_ConvexResultList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_ConvexResultList_obj > _hx_result = new ZPP_ConvexResultList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_ConvexResultList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cc1495e;
}

void ZPP_ConvexResultList_obj::valmod(){
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17074_valmod)
HXLINE(17075)		this->validate();
HXLINE(17076)		if (this->inner->modified) {
HXLINE(17077)			if (this->inner->pushmod) {
HXLINE(17077)				this->push_ite = null();
            			}
HXLINE(17078)			this->at_ite = null();
HXLINE(17079)			this->inner->modified = false;
HXLINE(17080)			this->inner->pushmod = false;
HXLINE(17081)			this->zip_length = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexResultList_obj,valmod,(void))

void ZPP_ConvexResultList_obj::modified(){
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17084_modified)
HXLINE(17085)		this->zip_length = true;
HXLINE(17086)		this->at_ite = null();
HXLINE(17087)		this->push_ite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexResultList_obj,modified,(void))

void ZPP_ConvexResultList_obj::modify_test(){
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17091_modify_test)
HXDLIN(17091)		if (hx::IsNotNull( this->_modifiable )) {
HXDLIN(17091)			this->_modifiable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexResultList_obj,modify_test,(void))

void ZPP_ConvexResultList_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17095_validate)
HXDLIN(17095)		if (this->_invalidated) {
HXLINE(17096)			this->_invalidated = false;
HXLINE(17097)			if (hx::IsNotNull( this->_validate )) {
HXLINE(17097)				this->_validate();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexResultList_obj,validate,(void))

void ZPP_ConvexResultList_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17100_invalidate)
HXLINE(17101)		this->_invalidated = true;
HXLINE(17102)		if (hx::IsNotNull( this->_invalidate )) {
HXLINE(17102)			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexResultList_obj,invalidate,(void))

bool ZPP_ConvexResultList_obj::internal;

 ::nape::geom::ConvexResultList ZPP_ConvexResultList_obj::get( ::zpp_nape::util::ZNPList_ConvexResult list,hx::Null< bool >  __o_imm){
            		bool imm = __o_imm.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17067_get)
HXLINE(17068)		 ::nape::geom::ConvexResultList ret =  ::nape::geom::ConvexResultList_obj::__alloc( HX_CTX );
HXLINE(17069)		ret->zpp_inner->inner = list;
HXLINE(17070)		if (imm) {
HXLINE(17070)			ret->zpp_inner->immutable = true;
            		}
HXLINE(17071)		ret->zpp_inner->zip_length = true;
HXLINE(17072)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ConvexResultList_obj,get,return )


hx::ObjectPtr< ZPP_ConvexResultList_obj > ZPP_ConvexResultList_obj::__new() {
	hx::ObjectPtr< ZPP_ConvexResultList_obj > __this = new ZPP_ConvexResultList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_ConvexResultList_obj > ZPP_ConvexResultList_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_ConvexResultList_obj *__this = (ZPP_ConvexResultList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_ConvexResultList_obj), true, "zpp_nape.util.ZPP_ConvexResultList"));
	*(void **)__this = ZPP_ConvexResultList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_ConvexResultList_obj::ZPP_ConvexResultList_obj()
{
}

void ZPP_ConvexResultList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ConvexResultList);
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

void ZPP_ConvexResultList_obj::__Visit(HX_VISIT_PARAMS)
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

hx::Val ZPP_ConvexResultList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_ConvexResultList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ZPP_ConvexResultList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::geom::ConvexResultList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast<  ::zpp_nape::util::ZNPList_ConvexResult >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ConvexResult >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ConvexResult >(); return inValue; }
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

bool ZPP_ConvexResultList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_ConvexResultList_obj::__GetFields(Array< ::String> &outFields)
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
static hx::StorageInfo ZPP_ConvexResultList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::ConvexResultList */ ,(int)offsetof(ZPP_ConvexResultList_obj,outer),HX_("outer",7b,b8,28,37)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPList_ConvexResult */ ,(int)offsetof(ZPP_ConvexResultList_obj,inner),HX_("inner",96,31,1c,be)},
	{hx::fsBool,(int)offsetof(ZPP_ConvexResultList_obj,immutable),HX_("immutable",42,28,c7,66)},
	{hx::fsBool,(int)offsetof(ZPP_ConvexResultList_obj,_invalidated),HX_("_invalidated",8a,e0,b5,23)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,_invalidate),HX_("_invalidate",9a,e6,b3,59)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,_validate),HX_("_validate",f5,c7,79,4c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,_modifiable),HX_("_modifiable",23,cc,cf,0c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,adder),HX_("adder",ce,d4,43,1c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,post_adder),HX_("post_adder",6f,28,cf,38)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ConvexResultList_obj,subber),HX_("subber",cf,fb,fd,99)},
	{hx::fsBool,(int)offsetof(ZPP_ConvexResultList_obj,dontremove),HX_("dontremove",95,cf,b2,03)},
	{hx::fsBool,(int)offsetof(ZPP_ConvexResultList_obj,reverse_flag),HX_("reverse_flag",29,93,06,7a)},
	{hx::fsInt,(int)offsetof(ZPP_ConvexResultList_obj,at_index),HX_("at_index",86,ef,d2,3d)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ConvexResult */ ,(int)offsetof(ZPP_ConvexResultList_obj,at_ite),HX_("at_ite",8e,a1,34,d2)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ConvexResult */ ,(int)offsetof(ZPP_ConvexResultList_obj,push_ite),HX_("push_ite",f5,5d,33,23)},
	{hx::fsBool,(int)offsetof(ZPP_ConvexResultList_obj,zip_length),HX_("zip_length",c4,c5,11,3c)},
	{hx::fsInt,(int)offsetof(ZPP_ConvexResultList_obj,user_length),HX_("user_length",9a,c3,4e,06)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_ConvexResultList_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_ConvexResultList_obj::internal,HX_("internal",3d,67,76,28)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_ConvexResultList_obj_sMemberFields[] = {
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

static void ZPP_ConvexResultList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ConvexResultList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_ConvexResultList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ConvexResultList_obj::internal,"internal");
};

#endif

hx::Class ZPP_ConvexResultList_obj::__mClass;

static ::String ZPP_ConvexResultList_obj_sStaticFields[] = {
	HX_("internal",3d,67,76,28),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ZPP_ConvexResultList_obj::__register()
{
	ZPP_ConvexResultList_obj _hx_dummy;
	ZPP_ConvexResultList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.ZPP_ConvexResultList",52,ae,65,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ConvexResultList_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ConvexResultList_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_ConvexResultList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_ConvexResultList_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_ConvexResultList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ConvexResultList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_ConvexResultList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_ConvexResultList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_ConvexResultList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_ConvexResultList_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d50d9a6d065c1838_17061_boot)
HXDLIN(17061)		internal = false;
            	}
}

} // end namespace zpp_nape
} // end namespace util
