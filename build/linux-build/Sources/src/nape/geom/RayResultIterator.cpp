// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_RayResult
#include <hxinc/nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <hxinc/nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <hxinc/nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <hxinc/zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_RayResultList
#include <hxinc/zpp_nape/util/ZPP_RayResultList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2fd9080401f5927_178_new,"nape.geom.RayResultIterator","new",0x81e8d15b,"nape.geom.RayResultIterator.new","nape/geom/RayResultIterator.hx",178,0x926b9ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_a2fd9080401f5927_240_hasNext,"nape.geom.RayResultIterator","hasNext",0x0def3fe8,"nape.geom.RayResultIterator.hasNext","nape/geom/RayResultIterator.hx",240,0x926b9ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_a2fd9080401f5927_264_next,"nape.geom.RayResultIterator","next",0x29ce5f98,"nape.geom.RayResultIterator.next","nape/geom/RayResultIterator.hx",264,0x926b9ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_a2fd9080401f5927_217_get,"nape.geom.RayResultIterator","get",0x81e38191,"nape.geom.RayResultIterator.get","nape/geom/RayResultIterator.hx",217,0x926b9ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_a2fd9080401f5927_194_boot,"nape.geom.RayResultIterator","boot",0x21e75ed7,"nape.geom.RayResultIterator.boot","nape/geom/RayResultIterator.hx",194,0x926b9ed5)
namespace nape{
namespace geom{

void RayResultIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a2fd9080401f5927_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_RayResultList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("RayResult",47,de,2e,22)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic RayResultIterator_obj::__CreateEmpty() { return new RayResultIterator_obj; }

void *RayResultIterator_obj::_hx_vtable = 0;

Dynamic RayResultIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RayResultIterator_obj > _hx_result = new RayResultIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayResultIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f7e7e05;
}

bool RayResultIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_a2fd9080401f5927_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		 ::nape::geom::RayResultList _this = this->zpp_inner;
HXDLIN( 244)		_this->zpp_inner->valmod();
HXDLIN( 244)		if (_this->zpp_inner->zip_length) {
HXLINE( 244)			_this->zpp_inner->zip_length = false;
HXDLIN( 244)			_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
            		}
HXDLIN( 244)		int length = _this->zpp_inner->user_length;
HXLINE( 245)		this->zpp_critical = true;
HXLINE( 246)		if ((this->zpp_i < length)) {
HXLINE( 247)			return true;
            		}
            		else {
HXLINE( 250)			{
HXLINE( 251)				this->zpp_next = ::nape::geom::RayResultIterator_obj::zpp_pool;
HXLINE( 252)				::nape::geom::RayResultIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayResultIterator_obj,hasNext,return )

 ::nape::geom::RayResult RayResultIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_a2fd9080401f5927_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayResultIterator_obj,next,return )

 ::nape::geom::RayResultIterator RayResultIterator_obj::zpp_pool;

 ::nape::geom::RayResultIterator RayResultIterator_obj::get( ::nape::geom::RayResultList list){
            	HX_GC_STACKFRAME(&_hx_pos_a2fd9080401f5927_217_get)
HXLINE( 218)		 ::nape::geom::RayResultIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::geom::RayResultIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_RayResultList_obj::internal = true;
HXLINE( 220)			 ::nape::geom::RayResultIterator ret1 =  ::nape::geom::RayResultIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_RayResultList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::geom::RayResultIterator r = ::nape::geom::RayResultIterator_obj::zpp_pool;
HXLINE( 226)			::nape::geom::RayResultIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayResultIterator_obj,get,return )


hx::ObjectPtr< RayResultIterator_obj > RayResultIterator_obj::__new() {
	hx::ObjectPtr< RayResultIterator_obj > __this = new RayResultIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RayResultIterator_obj > RayResultIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	RayResultIterator_obj *__this = (RayResultIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RayResultIterator_obj), true, "nape.geom.RayResultIterator"));
	*(void **)__this = RayResultIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RayResultIterator_obj::RayResultIterator_obj()
{
}

void RayResultIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayResultIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void RayResultIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val RayResultIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool RayResultIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val RayResultIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::geom::RayResultIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::geom::RayResultList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RayResultIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::geom::RayResultIterator >(); return true; }
	}
	return false;
}

void RayResultIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo RayResultIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::RayResultList */ ,(int)offsetof(RayResultIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(RayResultIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(RayResultIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::geom::RayResultIterator */ ,(int)offsetof(RayResultIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo RayResultIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::RayResultIterator */ ,(void *) &RayResultIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String RayResultIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void RayResultIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayResultIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RayResultIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayResultIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class RayResultIterator_obj::__mClass;

static ::String RayResultIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void RayResultIterator_obj::__register()
{
	RayResultIterator_obj _hx_dummy;
	RayResultIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.geom.RayResultIterator",e9,87,80,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RayResultIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &RayResultIterator_obj::__SetStatic;
	__mClass->mMarkFunc = RayResultIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RayResultIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RayResultIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayResultIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RayResultIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayResultIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayResultIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RayResultIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a2fd9080401f5927_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace geom
