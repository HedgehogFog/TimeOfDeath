// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_space_Broadphase
#include <hxinc/nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <hxinc/zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4747d37c043b381_183_new,"nape.space.Broadphase","new",0x8323b739,"nape.space.Broadphase.new","nape/space/Broadphase.hx",183,0xebaaca55)
HX_LOCAL_STACK_FRAME(_hx_pos_a4747d37c043b381_192_toString,"nape.space.Broadphase","toString",0xffae7733,"nape.space.Broadphase.toString","nape/space/Broadphase.hx",192,0xebaaca55)
HX_LOCAL_STACK_FRAME(_hx_pos_a4747d37c043b381_210_get_DYNAMIC_AABB_TREE,"nape.space.Broadphase","get_DYNAMIC_AABB_TREE",0xb10f9e6d,"nape.space.Broadphase.get_DYNAMIC_AABB_TREE","nape/space/Broadphase.hx",210,0xebaaca55)
HX_LOCAL_STACK_FRAME(_hx_pos_a4747d37c043b381_238_get_SWEEP_AND_PRUNE,"nape.space.Broadphase","get_SWEEP_AND_PRUNE",0xd31624bf,"nape.space.Broadphase.get_SWEEP_AND_PRUNE","nape/space/Broadphase.hx",238,0xebaaca55)
namespace nape{
namespace space{

void Broadphase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a4747d37c043b381_183_new)
HXDLIN( 183)		if (!(::zpp_nape::util::ZPP_Flags_obj::internal)) {
HXDLIN( 183)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("Broadphase",d9,61,ce,ce)) + HX_(" derp!",a2,fd,96,a2)));
            		}
            	}

Dynamic Broadphase_obj::__CreateEmpty() { return new Broadphase_obj; }

void *Broadphase_obj::_hx_vtable = 0;

Dynamic Broadphase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Broadphase_obj > _hx_result = new Broadphase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Broadphase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17d32bef;
}

::String Broadphase_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_a4747d37c043b381_192_toString)
HXDLIN( 192)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE )) {
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE =  ::nape::space::Broadphase_obj::__alloc( HX_CTX );
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXDLIN( 192)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE )) {
HXDLIN( 192)			return HX_("DYNAMIC_AABB_TREE",7d,0a,8a,c7);
            		}
            		else {
HXLINE( 193)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE )) {
HXLINE( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE =  ::nape::space::Broadphase_obj::__alloc( HX_CTX );
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 193)			if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE )) {
HXLINE( 193)				return HX_("SWEEP_AND_PRUNE",cf,6c,e2,e7);
            			}
            			else {
HXLINE( 194)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 192)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,toString,return )

 ::nape::space::Broadphase Broadphase_obj::get_DYNAMIC_AABB_TREE(){
            	HX_GC_STACKFRAME(&_hx_pos_a4747d37c043b381_210_get_DYNAMIC_AABB_TREE)
HXLINE( 211)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE )) {
HXLINE( 212)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 213)			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE =  ::nape::space::Broadphase_obj::__alloc( HX_CTX );
HXLINE( 214)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 216)		return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_DYNAMIC_AABB_TREE,return )

 ::nape::space::Broadphase Broadphase_obj::get_SWEEP_AND_PRUNE(){
            	HX_GC_STACKFRAME(&_hx_pos_a4747d37c043b381_238_get_SWEEP_AND_PRUNE)
HXLINE( 239)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE )) {
HXLINE( 240)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 241)			::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE =  ::nape::space::Broadphase_obj::__alloc( HX_CTX );
HXLINE( 242)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 244)		return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_SWEEP_AND_PRUNE,return )


hx::ObjectPtr< Broadphase_obj > Broadphase_obj::__new() {
	hx::ObjectPtr< Broadphase_obj > __this = new Broadphase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Broadphase_obj > Broadphase_obj::__alloc(hx::Ctx *_hx_ctx) {
	Broadphase_obj *__this = (Broadphase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Broadphase_obj), false, "nape.space.Broadphase"));
	*(void **)__this = Broadphase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Broadphase_obj::Broadphase_obj()
{
}

hx::Val Broadphase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Broadphase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"SWEEP_AND_PRUNE") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_SWEEP_AND_PRUNE() ); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DYNAMIC_AABB_TREE") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_DYNAMIC_AABB_TREE() ); return true; } }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_SWEEP_AND_PRUNE") ) { outValue = get_SWEEP_AND_PRUNE_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_AABB_TREE") ) { outValue = get_DYNAMIC_AABB_TREE_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Broadphase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Broadphase_obj_sStaticStorageInfo = 0;
#endif

static ::String Broadphase_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Broadphase_obj::__mClass;

static ::String Broadphase_obj_sStaticFields[] = {
	HX_("get_DYNAMIC_AABB_TREE",54,0d,38,46),
	HX_("get_SWEEP_AND_PRUNE",e6,3b,ed,72),
	::String(null())
};

void Broadphase_obj::__register()
{
	Broadphase_obj _hx_dummy;
	Broadphase_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.space.Broadphase",c7,a6,df,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Broadphase_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Broadphase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Broadphase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Broadphase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Broadphase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Broadphase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace space
