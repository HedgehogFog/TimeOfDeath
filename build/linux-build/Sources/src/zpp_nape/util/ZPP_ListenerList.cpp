// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <hxinc/nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <hxinc/zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <hxinc/zpp_nape/util/ZPP_ListenerList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16743_new,"zpp_nape.util.ZPP_ListenerList","new",0xcb29fd14,"zpp_nape.util.ZPP_ListenerList.new","zpp_nape/util/Lists.hx",16743,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16764_valmod,"zpp_nape.util.ZPP_ListenerList","valmod",0xfaf8b64d,"zpp_nape.util.ZPP_ListenerList.valmod","zpp_nape/util/Lists.hx",16764,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16774_modified,"zpp_nape.util.ZPP_ListenerList","modified",0xf04f2215,"zpp_nape.util.ZPP_ListenerList.modified","zpp_nape/util/Lists.hx",16774,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16781_modify_test,"zpp_nape.util.ZPP_ListenerList","modify_test",0x6e62562b,"zpp_nape.util.ZPP_ListenerList.modify_test","zpp_nape/util/Lists.hx",16781,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16785_validate,"zpp_nape.util.ZPP_ListenerList","validate",0xde6b1762,"zpp_nape.util.ZPP_ListenerList.validate","zpp_nape/util/Lists.hx",16785,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16790_invalidate,"zpp_nape.util.ZPP_ListenerList","invalidate",0x4629ab47,"zpp_nape.util.ZPP_ListenerList.invalidate","zpp_nape/util/Lists.hx",16790,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16757_get,"zpp_nape.util.ZPP_ListenerList","get",0xcb24ad4a,"zpp_nape.util.ZPP_ListenerList.get","zpp_nape/util/Lists.hx",16757,0x9f4e6754)
HX_LOCAL_STACK_FRAME(_hx_pos_81565bab55e2ba6d_16751_boot,"zpp_nape.util.ZPP_ListenerList","boot",0xf1ac74fe,"zpp_nape.util.ZPP_ListenerList.boot","zpp_nape/util/Lists.hx",16751,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZPP_ListenerList_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16743_new)
HXLINE(16798)		this->user_length = 0;
HXLINE(16797)		this->zip_length = false;
HXLINE(16796)		this->push_ite = null();
HXLINE(16795)		this->at_ite = null();
HXLINE(16794)		this->at_index = 0;
HXLINE(16756)		this->reverse_flag = false;
HXLINE(16755)		this->dontremove = false;
HXLINE(16754)		this->subber = null();
HXLINE(16753)		this->post_adder = null();
HXLINE(16752)		this->adder = null();
HXLINE(16750)		this->_modifiable = null();
HXLINE(16749)		this->_validate = null();
HXLINE(16748)		this->_invalidate = null();
HXLINE(16747)		this->_invalidated = false;
HXLINE(16746)		this->immutable = false;
HXLINE(16745)		this->inner = null();
HXLINE(16744)		this->outer = null();
HXLINE(16800)		this->inner =  ::zpp_nape::util::ZNPList_ZPP_Listener_obj::__alloc( HX_CTX );
HXLINE(16801)		this->_invalidated = true;
            	}

Dynamic ZPP_ListenerList_obj::__CreateEmpty() { return new ZPP_ListenerList_obj; }

void *ZPP_ListenerList_obj::_hx_vtable = 0;

Dynamic ZPP_ListenerList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_ListenerList_obj > _hx_result = new ZPP_ListenerList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_ListenerList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50235892;
}

void ZPP_ListenerList_obj::valmod(){
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16764_valmod)
HXLINE(16765)		this->validate();
HXLINE(16766)		if (this->inner->modified) {
HXLINE(16767)			if (this->inner->pushmod) {
HXLINE(16767)				this->push_ite = null();
            			}
HXLINE(16768)			this->at_ite = null();
HXLINE(16769)			this->inner->modified = false;
HXLINE(16770)			this->inner->pushmod = false;
HXLINE(16771)			this->zip_length = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,valmod,(void))

void ZPP_ListenerList_obj::modified(){
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16774_modified)
HXLINE(16775)		this->zip_length = true;
HXLINE(16776)		this->at_ite = null();
HXLINE(16777)		this->push_ite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,modified,(void))

void ZPP_ListenerList_obj::modify_test(){
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16781_modify_test)
HXDLIN(16781)		if (hx::IsNotNull( this->_modifiable )) {
HXDLIN(16781)			this->_modifiable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,modify_test,(void))

void ZPP_ListenerList_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16785_validate)
HXDLIN(16785)		if (this->_invalidated) {
HXLINE(16786)			this->_invalidated = false;
HXLINE(16787)			if (hx::IsNotNull( this->_validate )) {
HXLINE(16787)				this->_validate();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,validate,(void))

void ZPP_ListenerList_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16790_invalidate)
HXLINE(16791)		this->_invalidated = true;
HXLINE(16792)		if (hx::IsNotNull( this->_invalidate )) {
HXLINE(16792)			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ListenerList_obj,invalidate,(void))

bool ZPP_ListenerList_obj::internal;

 ::nape::callbacks::ListenerList ZPP_ListenerList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Listener list,hx::Null< bool >  __o_imm){
            		bool imm = __o_imm.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16757_get)
HXLINE(16758)		 ::nape::callbacks::ListenerList ret =  ::nape::callbacks::ListenerList_obj::__alloc( HX_CTX );
HXLINE(16759)		ret->zpp_inner->inner = list;
HXLINE(16760)		if (imm) {
HXLINE(16760)			ret->zpp_inner->immutable = true;
            		}
HXLINE(16761)		ret->zpp_inner->zip_length = true;
HXLINE(16762)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ListenerList_obj,get,return )


hx::ObjectPtr< ZPP_ListenerList_obj > ZPP_ListenerList_obj::__new() {
	hx::ObjectPtr< ZPP_ListenerList_obj > __this = new ZPP_ListenerList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_ListenerList_obj > ZPP_ListenerList_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_ListenerList_obj *__this = (ZPP_ListenerList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_ListenerList_obj), true, "zpp_nape.util.ZPP_ListenerList"));
	*(void **)__this = ZPP_ListenerList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_ListenerList_obj::ZPP_ListenerList_obj()
{
}

void ZPP_ListenerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ListenerList);
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

void ZPP_ListenerList_obj::__Visit(HX_VISIT_PARAMS)
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

hx::Val ZPP_ListenerList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_ListenerList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ZPP_ListenerList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::callbacks::ListenerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_Listener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
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

bool ZPP_ListenerList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_ListenerList_obj::__GetFields(Array< ::String> &outFields)
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
static hx::StorageInfo ZPP_ListenerList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::callbacks::ListenerList */ ,(int)offsetof(ZPP_ListenerList_obj,outer),HX_("outer",7b,b8,28,37)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPList_ZPP_Listener */ ,(int)offsetof(ZPP_ListenerList_obj,inner),HX_("inner",96,31,1c,be)},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,immutable),HX_("immutable",42,28,c7,66)},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,_invalidated),HX_("_invalidated",8a,e0,b5,23)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,_invalidate),HX_("_invalidate",9a,e6,b3,59)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,_validate),HX_("_validate",f5,c7,79,4c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,_modifiable),HX_("_modifiable",23,cc,cf,0c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,adder),HX_("adder",ce,d4,43,1c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,post_adder),HX_("post_adder",6f,28,cf,38)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_ListenerList_obj,subber),HX_("subber",cf,fb,fd,99)},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,dontremove),HX_("dontremove",95,cf,b2,03)},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,reverse_flag),HX_("reverse_flag",29,93,06,7a)},
	{hx::fsInt,(int)offsetof(ZPP_ListenerList_obj,at_index),HX_("at_index",86,ef,d2,3d)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Listener */ ,(int)offsetof(ZPP_ListenerList_obj,at_ite),HX_("at_ite",8e,a1,34,d2)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPNode_ZPP_Listener */ ,(int)offsetof(ZPP_ListenerList_obj,push_ite),HX_("push_ite",f5,5d,33,23)},
	{hx::fsBool,(int)offsetof(ZPP_ListenerList_obj,zip_length),HX_("zip_length",c4,c5,11,3c)},
	{hx::fsInt,(int)offsetof(ZPP_ListenerList_obj,user_length),HX_("user_length",9a,c3,4e,06)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_ListenerList_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_ListenerList_obj::internal,HX_("internal",3d,67,76,28)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_ListenerList_obj_sMemberFields[] = {
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

static void ZPP_ListenerList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ListenerList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_ListenerList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ListenerList_obj::internal,"internal");
};

#endif

hx::Class ZPP_ListenerList_obj::__mClass;

static ::String ZPP_ListenerList_obj_sStaticFields[] = {
	HX_("internal",3d,67,76,28),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ZPP_ListenerList_obj::__register()
{
	ZPP_ListenerList_obj _hx_dummy;
	ZPP_ListenerList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.ZPP_ListenerList",22,23,01,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ListenerList_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ListenerList_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_ListenerList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_ListenerList_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_ListenerList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ListenerList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_ListenerList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_ListenerList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_ListenerList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_ListenerList_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81565bab55e2ba6d_16751_boot)
HXDLIN(16751)		internal = false;
            	}
}

} // end namespace zpp_nape
} // end namespace util
