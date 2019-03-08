// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <hxinc/nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <hxinc/zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31406d6126b272aa_183_new,"nape.callbacks.CbEvent","new",0x341515e7,"nape.callbacks.CbEvent.new","nape/callbacks/CbEvent.hx",183,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_192_toString,"nape.callbacks.CbEvent","toString",0x632121c5,"nape.callbacks.CbEvent.toString","nape/callbacks/CbEvent.hx",192,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_206_get_BEGIN,"nape.callbacks.CbEvent","get_BEGIN",0xa3422327,"nape.callbacks.CbEvent.get_BEGIN","nape/callbacks/CbEvent.hx",206,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_220_get_ONGOING,"nape.callbacks.CbEvent","get_ONGOING",0x4c2f82b9,"nape.callbacks.CbEvent.get_ONGOING","nape/callbacks/CbEvent.hx",220,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_233_get_END,"nape.callbacks.CbEvent","get_END",0x30097d59,"nape.callbacks.CbEvent.get_END","nape/callbacks/CbEvent.hx",233,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_246_get_WAKE,"nape.callbacks.CbEvent","get_WAKE",0xe42030c6,"nape.callbacks.CbEvent.get_WAKE","nape/callbacks/CbEvent.hx",246,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_259_get_SLEEP,"nape.callbacks.CbEvent","get_SLEEP",0x71b0f615,"nape.callbacks.CbEvent.get_SLEEP","nape/callbacks/CbEvent.hx",259,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_272_get_BREAK,"nape.callbacks.CbEvent","get_BREAK",0xabd85dbd,"nape.callbacks.CbEvent.get_BREAK","nape/callbacks/CbEvent.hx",272,0xd410352b)
HX_LOCAL_STACK_FRAME(_hx_pos_31406d6126b272aa_286_get_PRE,"nape.callbacks.CbEvent","get_PRE",0x3011d9a1,"nape.callbacks.CbEvent.get_PRE","nape/callbacks/CbEvent.hx",286,0xd410352b)
namespace nape{
namespace callbacks{

void CbEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_31406d6126b272aa_183_new)
HXDLIN( 183)		if (!(::zpp_nape::util::ZPP_Flags_obj::internal)) {
HXDLIN( 183)			HX_STACK_DO_THROW(((HX_("Error: Cannot instantiate ",c5,85,dd,08) + HX_("CbEvent",db,a8,09,1a)) + HX_(" derp!",a2,fd,96,a2)));
            		}
            	}

Dynamic CbEvent_obj::__CreateEmpty() { return new CbEvent_obj; }

void *CbEvent_obj::_hx_vtable = 0;

Dynamic CbEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CbEvent_obj > _hx_result = new CbEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CbEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f6fc4f5;
}

::String CbEvent_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_192_toString)
HXDLIN( 192)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE )) {
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXDLIN( 192)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE )) {
HXDLIN( 192)			return HX_("PRE",03,fc,3c,00);
            		}
            		else {
HXLINE( 193)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 193)			if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 193)				return HX_("BEGIN",09,22,44,2e);
            			}
            			else {
HXLINE( 194)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 194)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 194)					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 194)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 194)				if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 194)					return HX_("ONGOING",1b,7e,d8,1a);
            				}
            				else {
HXLINE( 195)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 195)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 195)						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 195)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 195)					if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 195)						return HX_("END",bb,9f,34,00);
            					}
            					else {
HXLINE( 196)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE )) {
HXLINE( 196)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 196)							::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 196)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 196)						if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE )) {
HXLINE( 196)							return HX_("WAKE",24,24,b3,39);
            						}
            						else {
HXLINE( 197)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP )) {
HXLINE( 197)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 197)								::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 197)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 197)							if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP )) {
HXLINE( 197)								return HX_("SLEEP",f7,f4,b2,fc);
            							}
            							else {
HXLINE( 198)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK )) {
HXLINE( 198)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 198)									::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 198)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
HXDLIN( 198)								if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK )) {
HXLINE( 198)									return HX_("BREAK",9f,5c,da,36);
            								}
            								else {
HXLINE( 199)									return HX_("",00,00,00,00);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 192)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,toString,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_BEGIN(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_206_get_BEGIN)
HXLINE( 207)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 208)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 209)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 210)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 212)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BEGIN,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_ONGOING(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_220_get_ONGOING)
HXLINE( 221)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 222)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 223)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 224)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 226)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_ONGOING,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_END(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_233_get_END)
HXLINE( 234)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 235)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 236)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_END =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 237)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 239)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_END,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_WAKE(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_246_get_WAKE)
HXLINE( 247)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE )) {
HXLINE( 248)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 249)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 250)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 252)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_WAKE,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_SLEEP(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_259_get_SLEEP)
HXLINE( 260)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP )) {
HXLINE( 261)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 262)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 263)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 265)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_SLEEP,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_BREAK(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_272_get_BREAK)
HXLINE( 273)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK )) {
HXLINE( 274)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 275)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 276)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 278)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BREAK,return )

 ::nape::callbacks::CbEvent CbEvent_obj::get_PRE(){
            	HX_GC_STACKFRAME(&_hx_pos_31406d6126b272aa_286_get_PRE)
HXLINE( 287)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE )) {
HXLINE( 288)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 289)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXLINE( 290)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 292)		return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_PRE,return )


hx::ObjectPtr< CbEvent_obj > CbEvent_obj::__new() {
	hx::ObjectPtr< CbEvent_obj > __this = new CbEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CbEvent_obj > CbEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	CbEvent_obj *__this = (CbEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CbEvent_obj), false, "nape.callbacks.CbEvent"));
	*(void **)__this = CbEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CbEvent_obj::CbEvent_obj()
{
}

hx::Val CbEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CbEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_END() ); return true; } }
		if (HX_FIELD_EQ(inName,"PRE") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_PRE() ); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_WAKE() ); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BEGIN") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_BEGIN() ); return true; } }
		if (HX_FIELD_EQ(inName,"SLEEP") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_SLEEP() ); return true; } }
		if (HX_FIELD_EQ(inName,"BREAK") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_BREAK() ); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ONGOING") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_ONGOING() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_END") ) { outValue = get_END_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_PRE") ) { outValue = get_PRE_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_WAKE") ) { outValue = get_WAKE_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_BEGIN") ) { outValue = get_BEGIN_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_SLEEP") ) { outValue = get_SLEEP_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_BREAK") ) { outValue = get_BREAK_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ONGOING") ) { outValue = get_ONGOING_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CbEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CbEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String CbEvent_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class CbEvent_obj::__mClass;

static ::String CbEvent_obj_sStaticFields[] = {
	HX_("get_BEGIN",60,7e,ed,71),
	HX_("get_ONGOING",32,de,d2,a0),
	HX_("get_END",52,68,a9,26),
	HX_("get_WAKE",ad,df,6d,b9),
	HX_("get_SLEEP",4e,51,5c,40),
	HX_("get_BREAK",f6,b8,83,7a),
	HX_("get_PRE",9a,c4,b1,26),
	::String(null())
};

void CbEvent_obj::__register()
{
	CbEvent_obj _hx_dummy;
	CbEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.CbEvent",75,96,74,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CbEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CbEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CbEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CbEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CbEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CbEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks
