// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <hxinc/zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <hxinc/zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <hxinc/zpp_nape/space/ZPP_AABBPair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f23172c9b6055f0_273_new,"zpp_nape.space.ZPP_AABBPair","new",0x01861dfa,"zpp_nape.space.ZPP_AABBPair.new","zpp_nape/space/DynAABBPhase.hx",273,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f23172c9b6055f0_310_alloc,"zpp_nape.space.ZPP_AABBPair","alloc",0x8e280c8f,"zpp_nape.space.ZPP_AABBPair.alloc","zpp_nape/space/DynAABBPhase.hx",310,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f23172c9b6055f0_321_free,"zpp_nape.space.ZPP_AABBPair","free",0x4e9435d2,"zpp_nape.space.ZPP_AABBPair.free","zpp_nape/space/DynAABBPhase.hx",321,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f23172c9b6055f0_282_boot,"zpp_nape.space.ZPP_AABBPair","boot",0x4bed1d58,"zpp_nape.space.ZPP_AABBPair.boot","zpp_nape/space/DynAABBPhase.hx",282,0x55500cf1)
namespace zpp_nape{
namespace space{

void ZPP_AABBPair_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6f23172c9b6055f0_273_new)
HXLINE( 281)		this->next = null();
HXLINE( 280)		this->arb = null();
HXLINE( 279)		this->di = 0;
HXLINE( 278)		this->id = 0;
HXLINE( 277)		this->sleeping = false;
HXLINE( 276)		this->first = false;
HXLINE( 275)		this->n2 = null();
HXLINE( 274)		this->n1 = null();
            	}

Dynamic ZPP_AABBPair_obj::__CreateEmpty() { return new ZPP_AABBPair_obj; }

void *ZPP_AABBPair_obj::_hx_vtable = 0;

Dynamic ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_AABBPair_obj > _hx_result = new ZPP_AABBPair_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_AABBPair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a1d3fd4;
}

void ZPP_AABBPair_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_6f23172c9b6055f0_310_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,alloc,(void))

void ZPP_AABBPair_obj::free(){
            	HX_STACKFRAME(&_hx_pos_6f23172c9b6055f0_321_free)
HXLINE( 330)		this->n1 = (this->n2 = null());
HXLINE( 331)		this->sleeping = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,free,(void))

 ::zpp_nape::space::ZPP_AABBPair ZPP_AABBPair_obj::zpp_pool;


hx::ObjectPtr< ZPP_AABBPair_obj > ZPP_AABBPair_obj::__new() {
	hx::ObjectPtr< ZPP_AABBPair_obj > __this = new ZPP_AABBPair_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_AABBPair_obj > ZPP_AABBPair_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_AABBPair_obj *__this = (ZPP_AABBPair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_AABBPair_obj), true, "zpp_nape.space.ZPP_AABBPair"));
	*(void **)__this = ZPP_AABBPair_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_AABBPair_obj::ZPP_AABBPair_obj()
{
}

void ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(n1,"n1");
	HX_MARK_MEMBER_NAME(n2,"n2");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(arb,"arb");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(n1,"n1");
	HX_VISIT_MEMBER_NAME(n2,"n2");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(arb,"arb");
	HX_VISIT_MEMBER_NAME(next,"next");
}

hx::Val ZPP_AABBPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { return hx::Val( n1 ); }
		if (HX_FIELD_EQ(inName,"n2") ) { return hx::Val( n2 ); }
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		if (HX_FIELD_EQ(inName,"di") ) { return hx::Val( di ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { return hx::Val( arb ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return hx::Val( first ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sleeping") ) { return hx::Val( sleeping ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABBPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZPP_AABBPair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { n1=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n2") ) { n2=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { arb=inValue.Cast<  ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABBPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::space::ZPP_AABBPair >(); return true; }
	}
	return false;
}

void ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("n1",03,60,00,00));
	outFields->push(HX_("n2",04,60,00,00));
	outFields->push(HX_("first",30,78,9d,00));
	outFields->push(HX_("sleeping",2b,58,93,10));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("di",85,57,00,00));
	outFields->push(HX_("arb",51,fe,49,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_AABBPair_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBPair_obj,n1),HX_("n1",03,60,00,00)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBPair_obj,n2),HX_("n2",04,60,00,00)},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,first),HX_("first",30,78,9d,00)},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,sleeping),HX_("sleeping",2b,58,93,10)},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,di),HX_("di",85,57,00,00)},
	{hx::fsObject /*  ::zpp_nape::dynamics::ZPP_Arbiter */ ,(int)offsetof(ZPP_AABBPair_obj,arb),HX_("arb",51,fe,49,00)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBPair */ ,(int)offsetof(ZPP_AABBPair_obj,next),HX_("next",f3,84,02,49)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_AABBPair_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBPair */ ,(void *) &ZPP_AABBPair_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_AABBPair_obj_sMemberFields[] = {
	HX_("n1",03,60,00,00),
	HX_("n2",04,60,00,00),
	HX_("first",30,78,9d,00),
	HX_("sleeping",2b,58,93,10),
	HX_("id",db,5b,00,00),
	HX_("di",85,57,00,00),
	HX_("arb",51,fe,49,00),
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	::String(null()) };

static void ZPP_AABBPair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_AABBPair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_AABBPair_obj::__mClass;

static ::String ZPP_AABBPair_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZPP_AABBPair_obj::__register()
{
	ZPP_AABBPair_obj _hx_dummy;
	ZPP_AABBPair_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.space.ZPP_AABBPair",08,59,75,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABBPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABBPair_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_AABBPair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_AABBPair_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_AABBPair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABBPair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_AABBPair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_AABBPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_AABBPair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_AABBPair_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6f23172c9b6055f0_282_boot)
HXDLIN( 282)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace space