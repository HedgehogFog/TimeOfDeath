// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <hxinc/zpp_nape/util/Hashable2_Boolfalse.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3308b970c96a192f_176_new,"zpp_nape.util.Hashable2_Boolfalse","new",0x169bec0b,"zpp_nape.util.Hashable2_Boolfalse.new","zpp_nape/util/FastHash.hx",176,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_208_free,"zpp_nape.util.Hashable2_Boolfalse","free",0xac92b6a1,"zpp_nape.util.Hashable2_Boolfalse.free","zpp_nape/util/FastHash.hx",208,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_211_alloc,"zpp_nape.util.Hashable2_Boolfalse","alloc",0x6eda40e0,"zpp_nape.util.Hashable2_Boolfalse.alloc","zpp_nape/util/FastHash.hx",211,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_214_get,"zpp_nape.util.Hashable2_Boolfalse","get",0x16969c41,"zpp_nape.util.Hashable2_Boolfalse.get","zpp_nape/util/FastHash.hx",214,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_220_getpersist,"zpp_nape.util.Hashable2_Boolfalse","getpersist",0x4ef4fff3,"zpp_nape.util.Hashable2_Boolfalse.getpersist","zpp_nape/util/FastHash.hx",220,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_245_ordered_get,"zpp_nape.util.Hashable2_Boolfalse","ordered_get",0x2e30472f,"zpp_nape.util.Hashable2_Boolfalse.ordered_get","zpp_nape/util/FastHash.hx",245,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_249_ordered_get_persist,"zpp_nape.util.Hashable2_Boolfalse","ordered_get_persist",0x49cb09c4,"zpp_nape.util.Hashable2_Boolfalse.ordered_get_persist","zpp_nape/util/FastHash.hx",249,0x5d785189)
HX_LOCAL_STACK_FRAME(_hx_pos_3308b970c96a192f_179_boot,"zpp_nape.util.Hashable2_Boolfalse","boot",0xa9eb9e27,"zpp_nape.util.Hashable2_Boolfalse.boot","zpp_nape/util/FastHash.hx",179,0x5d785189)
namespace zpp_nape{
namespace util{

void Hashable2_Boolfalse_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3308b970c96a192f_176_new)
HXLINE( 205)		this->di = 0;
HXLINE( 204)		this->id = 0;
HXLINE( 203)		this->hnext = null();
HXLINE( 178)		this->next = null();
HXLINE( 177)		this->value = false;
            	}

Dynamic Hashable2_Boolfalse_obj::__CreateEmpty() { return new Hashable2_Boolfalse_obj; }

void *Hashable2_Boolfalse_obj::_hx_vtable = 0;

Dynamic Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Hashable2_Boolfalse_obj > _hx_result = new Hashable2_Boolfalse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Hashable2_Boolfalse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b0acef1;
}

void Hashable2_Boolfalse_obj::free(){
            	HX_STACKFRAME(&_hx_pos_3308b970c96a192f_208_free)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,free,(void))

void Hashable2_Boolfalse_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_3308b970c96a192f_211_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,alloc,(void))

 ::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::zpp_pool;

 ::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::get(int id,int di,bool val){
            	HX_GC_STACKFRAME(&_hx_pos_3308b970c96a192f_214_get)
HXLINE( 215)		 ::zpp_nape::util::Hashable2_Boolfalse ret;
HXDLIN( 215)		if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXLINE( 215)			ret =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 215)			ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXDLIN( 215)			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
HXDLIN( 215)			ret->next = null();
            		}
HXDLIN( 215)		ret->id = id;
HXDLIN( 215)		ret->di = di;
HXDLIN( 215)		 ::zpp_nape::util::Hashable2_Boolfalse ret1 = ret;
HXLINE( 216)		ret1->value = val;
HXLINE( 217)		return ret1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,get,return )

 ::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::getpersist(int id,int di){
            	HX_GC_STACKFRAME(&_hx_pos_3308b970c96a192f_220_getpersist)
HXLINE( 221)		 ::zpp_nape::util::Hashable2_Boolfalse ret;
HXLINE( 223)		if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXLINE( 224)			ret =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 230)			ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXLINE( 231)			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
HXLINE( 232)			ret->next = null();
            		}
HXLINE( 239)		ret->id = id;
HXLINE( 240)		ret->di = di;
HXLINE( 241)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,getpersist,return )

 ::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get(int id,int di,bool val){
            	HX_GC_STACKFRAME(&_hx_pos_3308b970c96a192f_245_ordered_get)
HXDLIN( 245)		if ((id <= di)) {
HXDLIN( 245)			 ::zpp_nape::util::Hashable2_Boolfalse ret;
HXDLIN( 245)			if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXDLIN( 245)				ret =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            			}
            			else {
HXDLIN( 245)				ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXDLIN( 245)				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
HXDLIN( 245)				ret->next = null();
            			}
HXDLIN( 245)			ret->id = id;
HXDLIN( 245)			ret->di = di;
HXDLIN( 245)			 ::zpp_nape::util::Hashable2_Boolfalse ret1 = ret;
HXDLIN( 245)			ret1->value = val;
HXDLIN( 245)			return ret1;
            		}
            		else {
HXDLIN( 245)			 ::zpp_nape::util::Hashable2_Boolfalse ret2;
HXDLIN( 245)			if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXDLIN( 245)				ret2 =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            			}
            			else {
HXDLIN( 245)				ret2 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXDLIN( 245)				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret2->next;
HXDLIN( 245)				ret2->next = null();
            			}
HXDLIN( 245)			ret2->id = di;
HXDLIN( 245)			ret2->di = id;
HXDLIN( 245)			 ::zpp_nape::util::Hashable2_Boolfalse ret3 = ret2;
HXDLIN( 245)			ret3->value = val;
HXDLIN( 245)			return ret3;
            		}
HXDLIN( 245)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,ordered_get,return )

 ::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get_persist(int id,int di){
            	HX_GC_STACKFRAME(&_hx_pos_3308b970c96a192f_249_ordered_get_persist)
HXDLIN( 249)		if ((id <= di)) {
HXDLIN( 249)			 ::zpp_nape::util::Hashable2_Boolfalse ret;
HXDLIN( 249)			if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXDLIN( 249)				ret =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            			}
            			else {
HXDLIN( 249)				ret = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXDLIN( 249)				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
HXDLIN( 249)				ret->next = null();
            			}
HXDLIN( 249)			ret->id = id;
HXDLIN( 249)			ret->di = di;
HXDLIN( 249)			return ret;
            		}
            		else {
HXLINE( 250)			 ::zpp_nape::util::Hashable2_Boolfalse ret1;
HXDLIN( 250)			if (hx::IsNull( ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool )) {
HXLINE( 250)				ret1 =  ::zpp_nape::util::Hashable2_Boolfalse_obj::__alloc( HX_CTX );
            			}
            			else {
HXLINE( 250)				ret1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;
HXDLIN( 250)				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret1->next;
HXDLIN( 250)				ret1->next = null();
            			}
HXDLIN( 250)			ret1->id = di;
HXDLIN( 250)			ret1->di = id;
HXDLIN( 250)			return ret1;
            		}
HXLINE( 249)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,ordered_get_persist,return )


Hashable2_Boolfalse_obj::Hashable2_Boolfalse_obj()
{
}

void Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(hnext,"hnext");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_END_CLASS();
}

void Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(hnext,"hnext");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
}

hx::Val Hashable2_Boolfalse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		if (HX_FIELD_EQ(inName,"di") ) { return hx::Val( di ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"hnext") ) { return hx::Val( hnext ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Hashable2_Boolfalse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getpersist") ) { outValue = getpersist_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { outValue = ordered_get_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ordered_get_persist") ) { outValue = ordered_get_persist_dyn(); return true; }
	}
	return false;
}

hx::Val Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hnext") ) { hnext=inValue.Cast<  ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Hashable2_Boolfalse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::Hashable2_Boolfalse >(); return true; }
	}
	return false;
}

void Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("hnext",5b,d9,ae,2a));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("di",85,57,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Hashable2_Boolfalse_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Hashable2_Boolfalse_obj,value),HX_("value",71,7f,b8,31)},
	{hx::fsObject /*  ::zpp_nape::util::Hashable2_Boolfalse */ ,(int)offsetof(Hashable2_Boolfalse_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsObject /*  ::zpp_nape::util::Hashable2_Boolfalse */ ,(int)offsetof(Hashable2_Boolfalse_obj,hnext),HX_("hnext",5b,d9,ae,2a)},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,di),HX_("di",85,57,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Hashable2_Boolfalse_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::util::Hashable2_Boolfalse */ ,(void *) &Hashable2_Boolfalse_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Hashable2_Boolfalse_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("next",f3,84,02,49),
	HX_("hnext",5b,d9,ae,2a),
	HX_("id",db,5b,00,00),
	HX_("di",85,57,00,00),
	HX_("free",ac,9c,c2,43),
	HX_("alloc",75,a4,93,21),
	::String(null()) };

static void Hashable2_Boolfalse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Hashable2_Boolfalse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class Hashable2_Boolfalse_obj::__mClass;

static ::String Hashable2_Boolfalse_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	HX_("getpersist",3e,80,81,05),
	HX_("ordered_get",84,08,94,32),
	HX_("ordered_get_persist",19,a8,7f,f3),
	::String(null())
};

void Hashable2_Boolfalse_obj::__register()
{
	Hashable2_Boolfalse_obj _hx_dummy;
	Hashable2_Boolfalse_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.util.Hashable2_Boolfalse",99,8a,84,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Hashable2_Boolfalse_obj::__GetStatic;
	__mClass->mSetStaticField = &Hashable2_Boolfalse_obj::__SetStatic;
	__mClass->mMarkFunc = Hashable2_Boolfalse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Hashable2_Boolfalse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Hashable2_Boolfalse_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hashable2_Boolfalse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Hashable2_Boolfalse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Hashable2_Boolfalse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Hashable2_Boolfalse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Hashable2_Boolfalse_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3308b970c96a192f_179_boot)
HXDLIN( 179)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util
