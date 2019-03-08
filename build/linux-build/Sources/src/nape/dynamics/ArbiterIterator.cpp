// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <hxinc/nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <hxinc/nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <hxinc/nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <hxinc/zpp_nape/util/ZPP_ArbiterList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2bd36642aa0aaaaa_178_new,"nape.dynamics.ArbiterIterator","new",0x9dc9d135,"nape.dynamics.ArbiterIterator.new","nape/dynamics/ArbiterIterator.hx",178,0xcd4afbbb)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd36642aa0aaaaa_240_hasNext,"nape.dynamics.ArbiterIterator","hasNext",0x4d1634c2,"nape.dynamics.ArbiterIterator.hasNext","nape/dynamics/ArbiterIterator.hx",240,0xcd4afbbb)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd36642aa0aaaaa_264_next,"nape.dynamics.ArbiterIterator","next",0x72cd3e7e,"nape.dynamics.ArbiterIterator.next","nape/dynamics/ArbiterIterator.hx",264,0xcd4afbbb)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd36642aa0aaaaa_217_get,"nape.dynamics.ArbiterIterator","get",0x9dc4816b,"nape.dynamics.ArbiterIterator.get","nape/dynamics/ArbiterIterator.hx",217,0xcd4afbbb)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd36642aa0aaaaa_194_boot,"nape.dynamics.ArbiterIterator","boot",0x6ae63dbd,"nape.dynamics.ArbiterIterator.boot","nape/dynamics/ArbiterIterator.hx",194,0xcd4afbbb)
namespace nape{
namespace dynamics{

void ArbiterIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2bd36642aa0aaaaa_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_ArbiterList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("Arbiter",c9,e7,a6,d6)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic ArbiterIterator_obj::__CreateEmpty() { return new ArbiterIterator_obj; }

void *ArbiterIterator_obj::_hx_vtable = 0;

Dynamic ArbiterIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArbiterIterator_obj > _hx_result = new ArbiterIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArbiterIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x154d06db;
}

bool ArbiterIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_2bd36642aa0aaaaa_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		int length = this->zpp_inner->zpp_gl();
HXLINE( 245)		this->zpp_critical = true;
HXLINE( 246)		if ((this->zpp_i < length)) {
HXLINE( 247)			return true;
            		}
            		else {
HXLINE( 250)			{
HXLINE( 251)				this->zpp_next = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
HXLINE( 252)				::nape::dynamics::ArbiterIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterIterator_obj,hasNext,return )

 ::nape::dynamics::Arbiter ArbiterIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_2bd36642aa0aaaaa_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterIterator_obj,next,return )

 ::nape::dynamics::ArbiterIterator ArbiterIterator_obj::zpp_pool;

 ::nape::dynamics::ArbiterIterator ArbiterIterator_obj::get( ::nape::dynamics::ArbiterList list){
            	HX_GC_STACKFRAME(&_hx_pos_2bd36642aa0aaaaa_217_get)
HXLINE( 218)		 ::nape::dynamics::ArbiterIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::dynamics::ArbiterIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_ArbiterList_obj::internal = true;
HXLINE( 220)			 ::nape::dynamics::ArbiterIterator ret1 =  ::nape::dynamics::ArbiterIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_ArbiterList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::dynamics::ArbiterIterator r = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;
HXLINE( 226)			::nape::dynamics::ArbiterIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArbiterIterator_obj,get,return )


hx::ObjectPtr< ArbiterIterator_obj > ArbiterIterator_obj::__new() {
	hx::ObjectPtr< ArbiterIterator_obj > __this = new ArbiterIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ArbiterIterator_obj > ArbiterIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ArbiterIterator_obj *__this = (ArbiterIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArbiterIterator_obj), true, "nape.dynamics.ArbiterIterator"));
	*(void **)__this = ArbiterIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArbiterIterator_obj::ArbiterIterator_obj()
{
}

void ArbiterIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArbiterIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ArbiterIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val ArbiterIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { return hx::Val( zpp_i ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { return hx::Val( zpp_next ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { return hx::Val( zpp_critical ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArbiterIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ArbiterIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::dynamics::ArbiterIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::dynamics::ArbiterList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArbiterIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::dynamics::ArbiterIterator >(); return true; }
	}
	return false;
}

void ArbiterIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ArbiterIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::dynamics::ArbiterList */ ,(int)offsetof(ArbiterIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(ArbiterIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(ArbiterIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::dynamics::ArbiterIterator */ ,(int)offsetof(ArbiterIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ArbiterIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::dynamics::ArbiterIterator */ ,(void *) &ArbiterIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ArbiterIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void ArbiterIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArbiterIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ArbiterIterator_obj::__mClass;

static ::String ArbiterIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ArbiterIterator_obj::__register()
{
	ArbiterIterator_obj _hx_dummy;
	ArbiterIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.dynamics.ArbiterIterator",c3,12,7a,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArbiterIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ArbiterIterator_obj::__SetStatic;
	__mClass->mMarkFunc = ArbiterIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArbiterIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArbiterIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArbiterIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArbiterIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArbiterIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArbiterIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ArbiterIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2bd36642aa0aaaaa_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace dynamics