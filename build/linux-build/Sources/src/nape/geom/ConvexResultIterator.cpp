// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <hxinc/nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <hxinc/nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <hxinc/nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <hxinc/zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConvexResultList
#include <hxinc/zpp_nape/util/ZPP_ConvexResultList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20ed74055c775b27_178_new,"nape.geom.ConvexResultIterator","new",0x511bf9b0,"nape.geom.ConvexResultIterator.new","nape/geom/ConvexResultIterator.hx",178,0xbabefb60)
HX_LOCAL_STACK_FRAME(_hx_pos_20ed74055c775b27_240_hasNext,"nape.geom.ConvexResultIterator","hasNext",0xeae5b6bd,"nape.geom.ConvexResultIterator.hasNext","nape/geom/ConvexResultIterator.hx",240,0xbabefb60)
HX_LOCAL_STACK_FRAME(_hx_pos_20ed74055c775b27_264_next,"nape.geom.ConvexResultIterator","next",0xa75e81a3,"nape.geom.ConvexResultIterator.next","nape/geom/ConvexResultIterator.hx",264,0xbabefb60)
HX_LOCAL_STACK_FRAME(_hx_pos_20ed74055c775b27_217_get,"nape.geom.ConvexResultIterator","get",0x5116a9e6,"nape.geom.ConvexResultIterator.get","nape/geom/ConvexResultIterator.hx",217,0xbabefb60)
HX_LOCAL_STACK_FRAME(_hx_pos_20ed74055c775b27_194_boot,"nape.geom.ConvexResultIterator","boot",0x9f7780e2,"nape.geom.ConvexResultIterator.boot","nape/geom/ConvexResultIterator.hx",194,0xbabefb60)
namespace nape{
namespace geom{

void ConvexResultIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_20ed74055c775b27_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_ConvexResultList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("ConvexResult",c4,a7,df,3c)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic ConvexResultIterator_obj::__CreateEmpty() { return new ConvexResultIterator_obj; }

void *ConvexResultIterator_obj::_hx_vtable = 0;

Dynamic ConvexResultIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConvexResultIterator_obj > _hx_result = new ConvexResultIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvexResultIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x495733f6;
}

bool ConvexResultIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_20ed74055c775b27_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		 ::nape::geom::ConvexResultList _this = this->zpp_inner;
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
HXLINE( 251)				this->zpp_next = ::nape::geom::ConvexResultIterator_obj::zpp_pool;
HXLINE( 252)				::nape::geom::ConvexResultIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResultIterator_obj,hasNext,return )

 ::nape::geom::ConvexResult ConvexResultIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_20ed74055c775b27_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResultIterator_obj,next,return )

 ::nape::geom::ConvexResultIterator ConvexResultIterator_obj::zpp_pool;

 ::nape::geom::ConvexResultIterator ConvexResultIterator_obj::get( ::nape::geom::ConvexResultList list){
            	HX_GC_STACKFRAME(&_hx_pos_20ed74055c775b27_217_get)
HXLINE( 218)		 ::nape::geom::ConvexResultIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::geom::ConvexResultIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_ConvexResultList_obj::internal = true;
HXLINE( 220)			 ::nape::geom::ConvexResultIterator ret1 =  ::nape::geom::ConvexResultIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_ConvexResultList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::geom::ConvexResultIterator r = ::nape::geom::ConvexResultIterator_obj::zpp_pool;
HXLINE( 226)			::nape::geom::ConvexResultIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvexResultIterator_obj,get,return )


hx::ObjectPtr< ConvexResultIterator_obj > ConvexResultIterator_obj::__new() {
	hx::ObjectPtr< ConvexResultIterator_obj > __this = new ConvexResultIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ConvexResultIterator_obj > ConvexResultIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ConvexResultIterator_obj *__this = (ConvexResultIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConvexResultIterator_obj), true, "nape.geom.ConvexResultIterator"));
	*(void **)__this = ConvexResultIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvexResultIterator_obj::ConvexResultIterator_obj()
{
}

void ConvexResultIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexResultIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ConvexResultIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val ConvexResultIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ConvexResultIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ConvexResultIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::geom::ConvexResultIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::geom::ConvexResultList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConvexResultIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::geom::ConvexResultIterator >(); return true; }
	}
	return false;
}

void ConvexResultIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ConvexResultIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::ConvexResultList */ ,(int)offsetof(ConvexResultIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(ConvexResultIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(ConvexResultIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::geom::ConvexResultIterator */ ,(int)offsetof(ConvexResultIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ConvexResultIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::ConvexResultIterator */ ,(void *) &ConvexResultIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvexResultIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void ConvexResultIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvexResultIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvexResultIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvexResultIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ConvexResultIterator_obj::__mClass;

static ::String ConvexResultIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ConvexResultIterator_obj::__register()
{
	ConvexResultIterator_obj _hx_dummy;
	ConvexResultIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.geom.ConvexResultIterator",be,a1,59,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvexResultIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvexResultIterator_obj::__SetStatic;
	__mClass->mMarkFunc = ConvexResultIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConvexResultIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConvexResultIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConvexResultIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvexResultIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvexResultIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvexResultIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvexResultIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_20ed74055c775b27_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace geom
