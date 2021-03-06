// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <hxinc/nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <hxinc/nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <hxinc/zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <hxinc/zpp_nape/util/ZPP_InteractorList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7b8b9ff903a3671_178_new,"nape.phys.InteractorIterator","new",0x705eac8f,"nape.phys.InteractorIterator.new","nape/phys/InteractorIterator.hx",178,0x5f4f6161)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b8b9ff903a3671_240_hasNext,"nape.phys.InteractorIterator","hasNext",0x8cc4c51c,"nape.phys.InteractorIterator.hasNext","nape/phys/InteractorIterator.hx",240,0x5f4f6161)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b8b9ff903a3671_264_next,"nape.phys.InteractorIterator","next",0xe27851e4,"nape.phys.InteractorIterator.next","nape/phys/InteractorIterator.hx",264,0x5f4f6161)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b8b9ff903a3671_217_get,"nape.phys.InteractorIterator","get",0x70595cc5,"nape.phys.InteractorIterator.get","nape/phys/InteractorIterator.hx",217,0x5f4f6161)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b8b9ff903a3671_194_boot,"nape.phys.InteractorIterator","boot",0xda915123,"nape.phys.InteractorIterator.boot","nape/phys/InteractorIterator.hx",194,0x5f4f6161)
namespace nape{
namespace phys{

void InteractorIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7b8b9ff903a3671_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_InteractorList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("Interactor",79,ca,20,7c)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic InteractorIterator_obj::__CreateEmpty() { return new InteractorIterator_obj; }

void *InteractorIterator_obj::_hx_vtable = 0;

Dynamic InteractorIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InteractorIterator_obj > _hx_result = new InteractorIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractorIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62678cc1;
}

bool InteractorIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_b7b8b9ff903a3671_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		 ::nape::phys::InteractorList _this = this->zpp_inner;
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
HXLINE( 251)				this->zpp_next = ::nape::phys::InteractorIterator_obj::zpp_pool;
HXLINE( 252)				::nape::phys::InteractorIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractorIterator_obj,hasNext,return )

 ::nape::phys::Interactor InteractorIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_b7b8b9ff903a3671_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractorIterator_obj,next,return )

 ::nape::phys::InteractorIterator InteractorIterator_obj::zpp_pool;

 ::nape::phys::InteractorIterator InteractorIterator_obj::get( ::nape::phys::InteractorList list){
            	HX_GC_STACKFRAME(&_hx_pos_b7b8b9ff903a3671_217_get)
HXLINE( 218)		 ::nape::phys::InteractorIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::phys::InteractorIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_InteractorList_obj::internal = true;
HXLINE( 220)			 ::nape::phys::InteractorIterator ret1 =  ::nape::phys::InteractorIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_InteractorList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::phys::InteractorIterator r = ::nape::phys::InteractorIterator_obj::zpp_pool;
HXLINE( 226)			::nape::phys::InteractorIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InteractorIterator_obj,get,return )


hx::ObjectPtr< InteractorIterator_obj > InteractorIterator_obj::__new() {
	hx::ObjectPtr< InteractorIterator_obj > __this = new InteractorIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< InteractorIterator_obj > InteractorIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	InteractorIterator_obj *__this = (InteractorIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InteractorIterator_obj), true, "nape.phys.InteractorIterator"));
	*(void **)__this = InteractorIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractorIterator_obj::InteractorIterator_obj()
{
}

void InteractorIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractorIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void InteractorIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val InteractorIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool InteractorIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val InteractorIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::phys::InteractorIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::phys::InteractorList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractorIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::phys::InteractorIterator >(); return true; }
	}
	return false;
}

void InteractorIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InteractorIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::phys::InteractorList */ ,(int)offsetof(InteractorIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(InteractorIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(InteractorIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::phys::InteractorIterator */ ,(int)offsetof(InteractorIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo InteractorIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::phys::InteractorIterator */ ,(void *) &InteractorIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String InteractorIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void InteractorIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractorIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InteractorIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractorIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class InteractorIterator_obj::__mClass;

static ::String InteractorIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void InteractorIterator_obj::__register()
{
	InteractorIterator_obj _hx_dummy;
	InteractorIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.phys.InteractorIterator",1d,b9,33,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InteractorIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &InteractorIterator_obj::__SetStatic;
	__mClass->mMarkFunc = InteractorIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(InteractorIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InteractorIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractorIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InteractorIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractorIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractorIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InteractorIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b7b8b9ff903a3671_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace phys
