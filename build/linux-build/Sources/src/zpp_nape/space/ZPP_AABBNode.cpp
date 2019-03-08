// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <hxinc/nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <hxinc/nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <hxinc/zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <hxinc/zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <hxinc/zpp_nape/space/ZPP_AABBNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86e56e5f37fa5b56_174_new,"zpp_nape.space.ZPP_AABBNode","new",0x594f5fe2,"zpp_nape.space.ZPP_AABBNode.new","zpp_nape/space/DynAABBPhase.hx",174,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_86e56e5f37fa5b56_213_alloc,"zpp_nape.space.ZPP_AABBNode","alloc",0x5c339877,"zpp_nape.space.ZPP_AABBNode.alloc","zpp_nape/space/DynAABBPhase.hx",213,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_86e56e5f37fa5b56_237_free,"zpp_nape.space.ZPP_AABBNode","free",0xc6e49eea,"zpp_nape.space.ZPP_AABBNode.free","zpp_nape/space/DynAABBPhase.hx",237,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_86e56e5f37fa5b56_269_isLeaf,"zpp_nape.space.ZPP_AABBNode","isLeaf",0x766c5666,"zpp_nape.space.ZPP_AABBNode.isLeaf","zpp_nape/space/DynAABBPhase.hx",269,0x55500cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_86e56e5f37fa5b56_187_boot,"zpp_nape.space.ZPP_AABBNode","boot",0xc43d8670,"zpp_nape.space.ZPP_AABBNode.boot","zpp_nape/space/DynAABBPhase.hx",187,0x55500cf1)
namespace zpp_nape{
namespace space{

void ZPP_AABBNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_86e56e5f37fa5b56_174_new)
HXLINE( 265)		this->first_sync = false;
HXLINE( 264)		this->synced = false;
HXLINE( 263)		this->snext = null();
HXLINE( 262)		this->moved = false;
HXLINE( 261)		this->mnext = null();
HXLINE( 186)		this->next = null();
HXLINE( 182)		this->rayt = ((Float)0.0);
HXLINE( 181)		this->height = 0;
HXLINE( 180)		this->child2 = null();
HXLINE( 179)		this->child1 = null();
HXLINE( 178)		this->parent = null();
HXLINE( 177)		this->dyn = false;
HXLINE( 176)		this->shape = null();
HXLINE( 175)		this->aabb = null();
HXLINE( 184)		this->height = -1;
            	}

Dynamic ZPP_AABBNode_obj::__CreateEmpty() { return new ZPP_AABBNode_obj; }

void *ZPP_AABBNode_obj::_hx_vtable = 0;

Dynamic ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_AABBNode_obj > _hx_result = new ZPP_AABBNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_AABBNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08d56dbc;
}

void ZPP_AABBNode_obj::alloc(){
            	HX_GC_STACKFRAME(&_hx_pos_86e56e5f37fa5b56_213_alloc)
HXLINE( 215)		if (hx::IsNull( ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool )) {
HXLINE( 216)			this->aabb =  ::zpp_nape::geom::ZPP_AABB_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 222)			this->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
HXLINE( 223)			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = this->aabb->next;
HXLINE( 224)			this->aabb->next = null();
            		}
HXLINE( 231)		this->moved = false;
HXLINE( 232)		this->synced = false;
HXLINE( 233)		this->first_sync = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,alloc,(void))

void ZPP_AABBNode_obj::free(){
            	HX_STACKFRAME(&_hx_pos_86e56e5f37fa5b56_237_free)
HXLINE( 238)		this->height = -1;
HXLINE( 239)		{
HXLINE( 240)			 ::zpp_nape::geom::ZPP_AABB o = this->aabb;
HXLINE( 249)			{
HXLINE( 249)				if (hx::IsNotNull( o->outer )) {
HXLINE( 249)					o->outer->zpp_inner = null();
HXDLIN( 249)					o->outer = null();
            				}
HXDLIN( 249)				o->wrap_min = (o->wrap_max = null());
HXDLIN( 249)				o->_invalidate = null();
HXDLIN( 249)				o->_validate = null();
            			}
HXLINE( 250)			o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
HXLINE( 251)			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
            		}
HXLINE( 256)		this->child1 = (this->child2 = (this->parent = null()));
HXLINE( 257)		this->next = null();
HXLINE( 258)		this->snext = null();
HXLINE( 259)		this->mnext = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,free,(void))

bool ZPP_AABBNode_obj::isLeaf(){
            	HX_STACKFRAME(&_hx_pos_86e56e5f37fa5b56_269_isLeaf)
HXDLIN( 269)		return hx::IsNull( this->child1 );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,isLeaf,return )

 ::zpp_nape::space::ZPP_AABBNode ZPP_AABBNode_obj::zpp_pool;


hx::ObjectPtr< ZPP_AABBNode_obj > ZPP_AABBNode_obj::__new() {
	hx::ObjectPtr< ZPP_AABBNode_obj > __this = new ZPP_AABBNode_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_AABBNode_obj > ZPP_AABBNode_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_AABBNode_obj *__this = (ZPP_AABBNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_AABBNode_obj), true, "zpp_nape.space.ZPP_AABBNode"));
	*(void **)__this = ZPP_AABBNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_AABBNode_obj::ZPP_AABBNode_obj()
{
}

void ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(dyn,"dyn");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(child1,"child1");
	HX_MARK_MEMBER_NAME(child2,"child2");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rayt,"rayt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(mnext,"mnext");
	HX_MARK_MEMBER_NAME(moved,"moved");
	HX_MARK_MEMBER_NAME(snext,"snext");
	HX_MARK_MEMBER_NAME(synced,"synced");
	HX_MARK_MEMBER_NAME(first_sync,"first_sync");
	HX_MARK_END_CLASS();
}

void ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(dyn,"dyn");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(child1,"child1");
	HX_VISIT_MEMBER_NAME(child2,"child2");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rayt,"rayt");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(mnext,"mnext");
	HX_VISIT_MEMBER_NAME(moved,"moved");
	HX_VISIT_MEMBER_NAME(snext,"snext");
	HX_VISIT_MEMBER_NAME(synced,"synced");
	HX_VISIT_MEMBER_NAME(first_sync,"first_sync");
}

hx::Val ZPP_AABBNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return hx::Val( dyn ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { return hx::Val( aabb ); }
		if (HX_FIELD_EQ(inName,"rayt") ) { return hx::Val( rayt ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return hx::Val( shape ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"mnext") ) { return hx::Val( mnext ); }
		if (HX_FIELD_EQ(inName,"moved") ) { return hx::Val( moved ); }
		if (HX_FIELD_EQ(inName,"snext") ) { return hx::Val( snext ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"child1") ) { return hx::Val( child1 ); }
		if (HX_FIELD_EQ(inName,"child2") ) { return hx::Val( child2 ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"synced") ) { return hx::Val( synced ); }
		if (HX_FIELD_EQ(inName,"isLeaf") ) { return hx::Val( isLeaf_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { return hx::Val( first_sync ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABBNode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZPP_AABBNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { dyn=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast<  ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayt") ) { rayt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast<  ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mnext") ) { mnext=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moved") ) { moved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snext") ) { snext=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child1") ) { child1=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child2") ) { child2=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"synced") ) { synced=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { first_sync=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABBNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return true; }
	}
	return false;
}

void ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("aabb",a0,a2,67,40));
	outFields->push(HX_("shape",21,e3,1c,7c));
	outFields->push(HX_("dyn",39,4b,4c,00));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("child1",15,bf,ba,bc));
	outFields->push(HX_("child2",16,bf,ba,bc));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("rayt",4a,57,a4,4b));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("mnext",e0,bf,af,0b));
	outFields->push(HX_("moved",33,cc,65,0c));
	outFields->push(HX_("snext",e6,3a,17,80));
	outFields->push(HX_("synced",7a,9f,87,ef));
	outFields->push(HX_("first_sync",0a,b0,21,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_AABBNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_AABB */ ,(int)offsetof(ZPP_AABBNode_obj,aabb),HX_("aabb",a0,a2,67,40)},
	{hx::fsObject /*  ::zpp_nape::shape::ZPP_Shape */ ,(int)offsetof(ZPP_AABBNode_obj,shape),HX_("shape",21,e3,1c,7c)},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,dyn),HX_("dyn",39,4b,4c,00)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,parent),HX_("parent",2a,05,7e,ed)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,child1),HX_("child1",15,bf,ba,bc)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,child2),HX_("child2",16,bf,ba,bc)},
	{hx::fsInt,(int)offsetof(ZPP_AABBNode_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsFloat,(int)offsetof(ZPP_AABBNode_obj,rayt),HX_("rayt",4a,57,a4,4b)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,mnext),HX_("mnext",e0,bf,af,0b)},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,moved),HX_("moved",33,cc,65,0c)},
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(int)offsetof(ZPP_AABBNode_obj,snext),HX_("snext",e6,3a,17,80)},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,synced),HX_("synced",7a,9f,87,ef)},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,first_sync),HX_("first_sync",0a,b0,21,aa)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_AABBNode_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::space::ZPP_AABBNode */ ,(void *) &ZPP_AABBNode_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_AABBNode_obj_sMemberFields[] = {
	HX_("aabb",a0,a2,67,40),
	HX_("shape",21,e3,1c,7c),
	HX_("dyn",39,4b,4c,00),
	HX_("parent",2a,05,7e,ed),
	HX_("child1",15,bf,ba,bc),
	HX_("child2",16,bf,ba,bc),
	HX_("height",e7,07,4c,02),
	HX_("rayt",4a,57,a4,4b),
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	HX_("mnext",e0,bf,af,0b),
	HX_("moved",33,cc,65,0c),
	HX_("snext",e6,3a,17,80),
	HX_("synced",7a,9f,87,ef),
	HX_("first_sync",0a,b0,21,aa),
	HX_("isLeaf",a8,c8,16,65),
	::String(null()) };

static void ZPP_AABBNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_AABBNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_AABBNode_obj::__mClass;

static ::String ZPP_AABBNode_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	::String(null())
};

void ZPP_AABBNode_obj::__register()
{
	ZPP_AABBNode_obj _hx_dummy;
	ZPP_AABBNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.space.ZPP_AABBNode",f0,86,2d,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABBNode_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABBNode_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_AABBNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_AABBNode_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_AABBNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABBNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_AABBNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_AABBNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_AABBNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_AABBNode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_86e56e5f37fa5b56_187_boot)
HXDLIN( 187)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace space
