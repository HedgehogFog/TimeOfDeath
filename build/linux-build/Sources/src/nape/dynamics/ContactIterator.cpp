// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <hxinc/nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <hxinc/nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <hxinc/nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <hxinc/zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <hxinc/zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <hxinc/zpp_nape/util/ZPP_ContactList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_799efeed3dc91c34_178_new,"nape.dynamics.ContactIterator","new",0x1ab1426c,"nape.dynamics.ContactIterator.new","nape/dynamics/ContactIterator.hx",178,0xab69de64)
HX_LOCAL_STACK_FRAME(_hx_pos_799efeed3dc91c34_240_hasNext,"nape.dynamics.ContactIterator","hasNext",0xbc140d79,"nape.dynamics.ContactIterator.hasNext","nape/dynamics/ContactIterator.hx",240,0xab69de64)
HX_LOCAL_STACK_FRAME(_hx_pos_799efeed3dc91c34_264_next,"nape.dynamics.ContactIterator","next",0x4068dd67,"nape.dynamics.ContactIterator.next","nape/dynamics/ContactIterator.hx",264,0xab69de64)
HX_LOCAL_STACK_FRAME(_hx_pos_799efeed3dc91c34_217_get,"nape.dynamics.ContactIterator","get",0x1aabf2a2,"nape.dynamics.ContactIterator.get","nape/dynamics/ContactIterator.hx",217,0xab69de64)
HX_LOCAL_STACK_FRAME(_hx_pos_799efeed3dc91c34_194_boot,"nape.dynamics.ContactIterator","boot",0x3881dca6,"nape.dynamics.ContactIterator.boot","nape/dynamics/ContactIterator.hx",194,0xab69de64)
namespace nape{
namespace dynamics{

void ContactIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_799efeed3dc91c34_178_new)
HXLINE( 198)		this->zpp_next = null();
HXLINE( 190)		this->zpp_critical = false;
HXLINE( 186)		this->zpp_i = 0;
HXLINE( 182)		this->zpp_inner = null();
HXLINE( 204)		if (!(::zpp_nape::util::ZPP_ContactList_obj::internal)) {
HXLINE( 204)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("Contact",80,a2,c5,e6)) + HX_("Iterator derp!",30,02,d8,d7)));
            		}
            	}

Dynamic ContactIterator_obj::__CreateEmpty() { return new ContactIterator_obj; }

void *ContactIterator_obj::_hx_vtable = 0;

Dynamic ContactIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ContactIterator_obj > _hx_result = new ContactIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ContactIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ea1ab86;
}

bool ContactIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_799efeed3dc91c34_240_hasNext)
HXLINE( 241)		this->zpp_inner->zpp_inner->valmod();
HXLINE( 244)		 ::nape::dynamics::ContactList _this = this->zpp_inner;
HXDLIN( 244)		_this->zpp_inner->valmod();
HXDLIN( 244)		if (_this->zpp_inner->zip_length) {
HXLINE( 244)			_this->zpp_inner->zip_length = false;
HXDLIN( 244)			{
HXLINE( 244)				_this->zpp_inner->user_length = 0;
HXDLIN( 244)				{
HXLINE( 244)					 ::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;
HXDLIN( 244)					while(hx::IsNotNull( cx_ite )){
HXLINE( 244)						 ::zpp_nape::dynamics::ZPP_Contact i = cx_ite;
HXDLIN( 244)						bool _hx_tmp;
HXDLIN( 244)						if (i->active) {
HXLINE( 244)							_hx_tmp = i->arbiter->active;
            						}
            						else {
HXLINE( 244)							_hx_tmp = false;
            						}
HXDLIN( 244)						if (_hx_tmp) {
HXLINE( 244)							_this->zpp_inner->user_length++;
            						}
HXDLIN( 244)						cx_ite = cx_ite->next;
            					}
            				}
            			}
            		}
HXDLIN( 244)		int length = _this->zpp_inner->user_length;
HXLINE( 245)		this->zpp_critical = true;
HXLINE( 246)		if ((this->zpp_i < length)) {
HXLINE( 247)			return true;
            		}
            		else {
HXLINE( 250)			{
HXLINE( 251)				this->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
HXLINE( 252)				::nape::dynamics::ContactIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)				this->zpp_inner = null();
            			}
HXLINE( 255)			return false;
            		}
HXLINE( 246)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ContactIterator_obj,hasNext,return )

 ::nape::dynamics::Contact ContactIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_799efeed3dc91c34_264_next)
HXLINE( 265)		this->zpp_critical = false;
HXLINE( 266)		return this->zpp_inner->at(this->zpp_i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ContactIterator_obj,next,return )

 ::nape::dynamics::ContactIterator ContactIterator_obj::zpp_pool;

 ::nape::dynamics::ContactIterator ContactIterator_obj::get( ::nape::dynamics::ContactList list){
            	HX_GC_STACKFRAME(&_hx_pos_799efeed3dc91c34_217_get)
HXLINE( 218)		 ::nape::dynamics::ContactIterator ret;
HXDLIN( 218)		if (hx::IsNull( ::nape::dynamics::ContactIterator_obj::zpp_pool )) {
HXLINE( 219)			::zpp_nape::util::ZPP_ContactList_obj::internal = true;
HXLINE( 220)			 ::nape::dynamics::ContactIterator ret1 =  ::nape::dynamics::ContactIterator_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_ContactList_obj::internal = false;
HXLINE( 218)			ret = ret1;
            		}
            		else {
HXLINE( 225)			 ::nape::dynamics::ContactIterator r = ::nape::dynamics::ContactIterator_obj::zpp_pool;
HXLINE( 226)			::nape::dynamics::ContactIterator_obj::zpp_pool = r->zpp_next;
HXLINE( 218)			ret = r;
            		}
HXLINE( 229)		ret->zpp_i = 0;
HXLINE( 230)		ret->zpp_inner = list;
HXLINE( 231)		ret->zpp_critical = false;
HXLINE( 232)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactIterator_obj,get,return )


hx::ObjectPtr< ContactIterator_obj > ContactIterator_obj::__new() {
	hx::ObjectPtr< ContactIterator_obj > __this = new ContactIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ContactIterator_obj > ContactIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ContactIterator_obj *__this = (ContactIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ContactIterator_obj), true, "nape.dynamics.ContactIterator"));
	*(void **)__this = ContactIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ContactIterator_obj::ContactIterator_obj()
{
}

void ContactIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ContactIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

hx::Val ContactIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ContactIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ContactIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast<  ::nape::dynamics::ContactIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ContactIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::nape::dynamics::ContactIterator >(); return true; }
	}
	return false;
}

void ContactIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("zpp_i",a4,fa,3f,89));
	outFields->push(HX_("zpp_critical",c4,9f,6b,cd));
	outFields->push(HX_("zpp_next",98,61,7a,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ContactIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::dynamics::ContactList */ ,(int)offsetof(ContactIterator_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{hx::fsInt,(int)offsetof(ContactIterator_obj,zpp_i),HX_("zpp_i",a4,fa,3f,89)},
	{hx::fsBool,(int)offsetof(ContactIterator_obj,zpp_critical),HX_("zpp_critical",c4,9f,6b,cd)},
	{hx::fsObject /*  ::nape::dynamics::ContactIterator */ ,(int)offsetof(ContactIterator_obj,zpp_next),HX_("zpp_next",98,61,7a,37)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ContactIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::nape::dynamics::ContactIterator */ ,(void *) &ContactIterator_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ContactIterator_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("zpp_i",a4,fa,3f,89),
	HX_("zpp_critical",c4,9f,6b,cd),
	HX_("zpp_next",98,61,7a,37),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

static void ContactIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContactIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ContactIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ContactIterator_obj::__mClass;

static ::String ContactIterator_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ContactIterator_obj::__register()
{
	ContactIterator_obj _hx_dummy;
	ContactIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.dynamics.ContactIterator",7a,dc,74,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ContactIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ContactIterator_obj::__SetStatic;
	__mClass->mMarkFunc = ContactIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ContactIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ContactIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContactIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ContactIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContactIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContactIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ContactIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_799efeed3dc91c34_194_boot)
HXDLIN( 194)		zpp_pool = null();
            	}
}

} // end namespace nape
} // end namespace dynamics