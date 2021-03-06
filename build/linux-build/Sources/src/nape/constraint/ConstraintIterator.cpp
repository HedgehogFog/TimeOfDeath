// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <hxinc/nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <hxinc/nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <hxinc/nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <hxinc/zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <hxinc/zpp_nape/util/ZPP_ConstraintList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4aaad320581fbd10_178_new,"nape.constraint.ConstraintIterator","new",0x8f6b5ee8,"nape.constraint.ConstraintIterator.new","nape/constraint/ConstraintIterator.hx",178,0xd109e3e8)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaad320581fbd10_240_hasNext,"nape.constraint.ConstraintIterator","hasNext",0xb3bc17f5,"nape.constraint.ConstraintIterator.hasNext","nape/constraint/ConstraintIterator.hx",240,0xd109e3e8)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaad320581fbd10_264_next,"nape.constraint.ConstraintIterator","next",0xee87ad6b,"nape.constraint.ConstraintIterator.next","nape/constraint/ConstraintIterator.hx",264,0xd109e3e8)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaad320581fbd10_217_get,"nape.constraint.ConstraintIterator","get",0x8f660f1e,"nape.constraint.ConstraintIterator.get","nape/constraint/ConstraintIterator.hx",217,0xd109e3e8)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaad320581fbd10_194_boot,"nape.constraint.ConstraintIterator","boot",0xe6a0acaa,"nape.constraint.ConstraintIterator.boot","nape/constraint/ConstraintIterator.hx",194,0xd109e3e8)
namespace nape{
namespace constraint{

void ConstraintIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4aaad320581fbd10_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_ConstraintList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("Constraint",7d,04,7d,51)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic ConstraintIterator_obj::__CreateEmpty() { return new ConstraintIterator_obj; }

void *ConstraintIterator_obj::_hx_vtable = 0;

Dynamic ConstraintIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConstraintIterator_obj > _hx_result = new ConstraintIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConstraintIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2036ab98;
}

bool ConstraintIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_4aaad320581fbd10_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		 ::nape::constraint::ConstraintList _this = this->zpp_inner;
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
HXLINE( 251)				this->zpp_next = ::nape::constraint::ConstraintIterator_obj::zpp_pool;
HXLINE( 252)				::nape::constraint::ConstraintIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConstraintIterator_obj,hasNext,return )

 ::nape::constraint::Constraint ConstraintIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_4aaad320581fbd10_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConstraintIterator_obj,next,return )

 ::nape::constraint::ConstraintIterator ConstraintIterator_obj::zpp_pool;

 ::nape::constraint::ConstraintIterator ConstraintIterator_obj::get( ::nape::constraint::ConstraintList list){
            	HX_GC_STACKFRAME(&_hx_pos_4aaad320581fbd10_217_get)
HXLINE( 218)		 ::nape::constraint::ConstraintIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::constraint::ConstraintIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_ConstraintList_obj::internal = true;
HXLINE( 220)			 ::nape::constraint::ConstraintIterator ret1 =  ::nape::constraint::ConstraintIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_ConstraintList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::constraint::ConstraintIterator r = ::nape::constraint::ConstraintIterator_obj::zpp_pool;
HXLINE( 226)			::nape::constraint::ConstraintIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConstraintIterator_obj,get,return )


hx::ObjectPtr< ConstraintIterator_obj > ConstraintIterator_obj::__new() {
	hx::ObjectPtr< ConstraintIterator_obj > __this = new ConstraintIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ConstraintIterator_obj > ConstraintIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ConstraintIterator_obj *__this = (ConstraintIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConstraintIterator_obj), true, "nape.constraint.ConstraintIterator"));
	*(void **)__this = ConstraintIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConstraintIterator_obj::ConstraintIterator_obj()
{
}

void ConstraintIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConstraintIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ConstraintIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val ConstraintIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ConstraintIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ConstraintIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::constraint::ConstraintIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConstraintIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::constraint::ConstraintIterator >(); return true; }
	}
	return false;
}

void ConstraintIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ConstraintIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::constraint::ConstraintList */ ,(int)offsetof(ConstraintIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(ConstraintIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(ConstraintIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::constraint::ConstraintIterator */ ,(int)offsetof(ConstraintIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ConstraintIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::constraint::ConstraintIterator */ ,(void *) &ConstraintIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ConstraintIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void ConstraintIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConstraintIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConstraintIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstraintIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ConstraintIterator_obj::__mClass;

static ::String ConstraintIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ConstraintIterator_obj::__register()
{
	ConstraintIterator_obj _hx_dummy;
	ConstraintIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.constraint.ConstraintIterator",f6,0a,50,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConstraintIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ConstraintIterator_obj::__SetStatic;
	__mClass->mMarkFunc = ConstraintIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConstraintIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConstraintIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConstraintIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConstraintIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConstraintIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConstraintIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConstraintIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4aaad320581fbd10_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace constraint
