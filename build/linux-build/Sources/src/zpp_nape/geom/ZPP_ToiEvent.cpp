// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <hxinc/zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <hxinc/zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <hxinc/zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <hxinc/zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <hxinc/zpp_nape/shape/ZPP_Shape.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d6f392901056997_174_new,"zpp_nape.geom.ZPP_ToiEvent","new",0xcfb06dd4,"zpp_nape.geom.ZPP_ToiEvent.new","zpp_nape/geom/SweepDistance.hx",174,0x2645f2ee)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6f392901056997_202_alloc,"zpp_nape.geom.ZPP_ToiEvent","alloc",0xf76986e9,"zpp_nape.geom.ZPP_ToiEvent.alloc","zpp_nape/geom/SweepDistance.hx",202,0x2645f2ee)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6f392901056997_209_free,"zpp_nape.geom.ZPP_ToiEvent","free",0xe56fc4b8,"zpp_nape.geom.ZPP_ToiEvent.free","zpp_nape/geom/SweepDistance.hx",209,0x2645f2ee)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6f392901056997_176_boot,"zpp_nape.geom.ZPP_ToiEvent","boot",0xe2c8ac3e,"zpp_nape.geom.ZPP_ToiEvent.boot","zpp_nape/geom/SweepDistance.hx",176,0x2645f2ee)
namespace zpp_nape{
namespace geom{

void ZPP_ToiEvent_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1d6f392901056997_174_new)
HXLINE( 221)		this->kinematic = false;
HXLINE( 220)		this->failed = false;
HXLINE( 219)		this->slipped = false;
HXLINE( 218)		this->axis = null();
HXLINE( 217)		this->c2 = null();
HXLINE( 216)		this->c1 = null();
HXLINE( 215)		this->frozen2 = false;
HXLINE( 214)		this->frozen1 = false;
HXLINE( 213)		this->arbiter = null();
HXLINE( 212)		this->s2 = null();
HXLINE( 211)		this->s1 = null();
HXLINE( 210)		this->toi = ((Float)0.0);
HXLINE( 175)		this->next = null();
HXLINE( 223)		this->c1 =  ::zpp_nape::geom::ZPP_Vec2_obj::__alloc( HX_CTX );
HXLINE( 224)		this->c2 =  ::zpp_nape::geom::ZPP_Vec2_obj::__alloc( HX_CTX );
HXLINE( 225)		this->axis =  ::zpp_nape::geom::ZPP_Vec2_obj::__alloc( HX_CTX );
            	}

Dynamic ZPP_ToiEvent_obj::__CreateEmpty() { return new ZPP_ToiEvent_obj; }

void *ZPP_ToiEvent_obj::_hx_vtable = 0;

Dynamic ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_ToiEvent_obj > _hx_result = new ZPP_ToiEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_ToiEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4304ee22;
}

void ZPP_ToiEvent_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_1d6f392901056997_202_alloc)
HXLINE( 203)		this->failed = false;
HXLINE( 204)		this->s1 = (this->s2 = null());
HXLINE( 205)		this->arbiter = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,alloc,(void))

void ZPP_ToiEvent_obj::free(){
            	HX_STACKFRAME(&_hx_pos_1d6f392901056997_209_free)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,free,(void))

 ::zpp_nape::geom::ZPP_ToiEvent ZPP_ToiEvent_obj::zpp_pool;


hx::ObjectPtr< ZPP_ToiEvent_obj > ZPP_ToiEvent_obj::__new() {
	hx::ObjectPtr< ZPP_ToiEvent_obj > __this = new ZPP_ToiEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_ToiEvent_obj > ZPP_ToiEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_ToiEvent_obj *__this = (ZPP_ToiEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_ToiEvent_obj), true, "zpp_nape.geom.ZPP_ToiEvent"));
	*(void **)__this = ZPP_ToiEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_ToiEvent_obj::ZPP_ToiEvent_obj()
{
}

void ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(toi,"toi");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(frozen1,"frozen1");
	HX_MARK_MEMBER_NAME(frozen2,"frozen2");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(slipped,"slipped");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(kinematic,"kinematic");
	HX_MARK_END_CLASS();
}

void ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(toi,"toi");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(frozen1,"frozen1");
	HX_VISIT_MEMBER_NAME(frozen2,"frozen2");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(slipped,"slipped");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(kinematic,"kinematic");
}

hx::Val ZPP_ToiEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { return hx::Val( s1 ); }
		if (HX_FIELD_EQ(inName,"s2") ) { return hx::Val( s2 ); }
		if (HX_FIELD_EQ(inName,"c1") ) { return hx::Val( c1 ); }
		if (HX_FIELD_EQ(inName,"c2") ) { return hx::Val( c2 ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { return hx::Val( toi ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		if (HX_FIELD_EQ(inName,"axis") ) { return hx::Val( axis ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return hx::Val( failed ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { return hx::Val( arbiter ); }
		if (HX_FIELD_EQ(inName,"frozen1") ) { return hx::Val( frozen1 ); }
		if (HX_FIELD_EQ(inName,"frozen2") ) { return hx::Val( frozen2 ); }
		if (HX_FIELD_EQ(inName,"slipped") ) { return hx::Val( slipped ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return hx::Val( kinematic ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ToiEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZPP_ToiEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast<  ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast<  ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast<  ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast<  ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { toi=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::geom::ZPP_ToiEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast<  ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast<  ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen1") ) { frozen1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen2") ) { frozen2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slipped") ) { slipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { kinematic=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ToiEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::geom::ZPP_ToiEvent >(); return true; }
	}
	return false;
}

void ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("toi",8e,66,58,00));
	outFields->push(HX_("s1",5e,64,00,00));
	outFields->push(HX_("s2",5f,64,00,00));
	outFields->push(HX_("arbiter",e9,bf,55,09));
	outFields->push(HX_("frozen1",91,e2,a7,60));
	outFields->push(HX_("frozen2",92,e2,a7,60));
	outFields->push(HX_("c1",6e,56,00,00));
	outFields->push(HX_("c2",6f,56,00,00));
	outFields->push(HX_("axis",a1,1c,79,40));
	outFields->push(HX_("slipped",0f,74,1f,9c));
	outFields->push(HX_("failed",bd,c5,fe,e7));
	outFields->push(HX_("kinematic",05,79,ff,e3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_ToiEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_ToiEvent */ ,(int)offsetof(ZPP_ToiEvent_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsFloat,(int)offsetof(ZPP_ToiEvent_obj,toi),HX_("toi",8e,66,58,00)},
	{hx::fsObject /*  ::zpp_nape::shape::ZPP_Shape */ ,(int)offsetof(ZPP_ToiEvent_obj,s1),HX_("s1",5e,64,00,00)},
	{hx::fsObject /*  ::zpp_nape::shape::ZPP_Shape */ ,(int)offsetof(ZPP_ToiEvent_obj,s2),HX_("s2",5f,64,00,00)},
	{hx::fsObject /*  ::zpp_nape::dynamics::ZPP_ColArbiter */ ,(int)offsetof(ZPP_ToiEvent_obj,arbiter),HX_("arbiter",e9,bf,55,09)},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,frozen1),HX_("frozen1",91,e2,a7,60)},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,frozen2),HX_("frozen2",92,e2,a7,60)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Vec2 */ ,(int)offsetof(ZPP_ToiEvent_obj,c1),HX_("c1",6e,56,00,00)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Vec2 */ ,(int)offsetof(ZPP_ToiEvent_obj,c2),HX_("c2",6f,56,00,00)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Vec2 */ ,(int)offsetof(ZPP_ToiEvent_obj,axis),HX_("axis",a1,1c,79,40)},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,slipped),HX_("slipped",0f,74,1f,9c)},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,failed),HX_("failed",bd,c5,fe,e7)},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,kinematic),HX_("kinematic",05,79,ff,e3)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_ToiEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_ToiEvent */ ,(void *) &ZPP_ToiEvent_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_ToiEvent_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	HX_("toi",8e,66,58,00),
	HX_("s1",5e,64,00,00),
	HX_("s2",5f,64,00,00),
	HX_("arbiter",e9,bf,55,09),
	HX_("frozen1",91,e2,a7,60),
	HX_("frozen2",92,e2,a7,60),
	HX_("c1",6e,56,00,00),
	HX_("c2",6f,56,00,00),
	HX_("axis",a1,1c,79,40),
	HX_("slipped",0f,74,1f,9c),
	HX_("failed",bd,c5,fe,e7),
	HX_("kinematic",05,79,ff,e3),
	::String(null()) };

static void ZPP_ToiEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_ToiEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_ToiEvent_obj::__mClass;

static ::String ZPP_ToiEvent_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZPP_ToiEvent_obj::__register()
{
	ZPP_ToiEvent_obj _hx_dummy;
	ZPP_ToiEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_ToiEvent",e2,33,d0,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ToiEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ToiEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_ToiEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_ToiEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_ToiEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ToiEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_ToiEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_ToiEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_ToiEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_ToiEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1d6f392901056997_176_boot)
HXDLIN( 176)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace geom
