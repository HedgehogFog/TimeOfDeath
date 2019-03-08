// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <hxinc/nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <hxinc/nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <hxinc/nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <hxinc/nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <hxinc/nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <hxinc/nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <hxinc/nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <hxinc/nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <hxinc/nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <hxinc/zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <hxinc/zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <hxinc/zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <hxinc/zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <hxinc/zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <hxinc/zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <hxinc/zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <hxinc/zpp_nape/util/ZPP_ListenerList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a987b32df585753_177_new,"nape.callbacks.Listener","new",0x194abbac,"nape.callbacks.Listener.new","nape/callbacks/Listener.hx",177,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_188_get_type,"nape.callbacks.Listener","get_type",0xb8f84f77,"nape.callbacks.Listener.get_type","nape/callbacks/Listener.hx",188,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_196_get_event,"nape.callbacks.Listener","get_event",0x7b4690bd,"nape.callbacks.Listener.get_event","nape/callbacks/Listener.hx",196,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_198_set_event,"nape.callbacks.Listener","set_event",0x5e977cc9,"nape.callbacks.Listener.set_event","nape/callbacks/Listener.hx",198,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_223_get_precedence,"nape.callbacks.Listener","get_precedence",0xe231fe87,"nape.callbacks.Listener.get_precedence","nape/callbacks/Listener.hx",223,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_225_set_precedence,"nape.callbacks.Listener","set_precedence",0x0251e6fb,"nape.callbacks.Listener.set_precedence","nape/callbacks/Listener.hx",225,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_255_get_space,"nape.callbacks.Listener","get_space",0x86e85569,"nape.callbacks.Listener.get_space","nape/callbacks/Listener.hx",255,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_257_set_space,"nape.callbacks.Listener","set_space",0x6a394175,"nape.callbacks.Listener.set_space","nape/callbacks/Listener.hx",257,0x82b91542)
HX_LOCAL_STACK_FRAME(_hx_pos_9a987b32df585753_276_toString,"nape.callbacks.Listener","toString",0x24a371e0,"nape.callbacks.Listener.toString","nape/callbacks/Listener.hx",276,0x82b91542)
static const ::String _hx_array_data_3708b5ba_9[] = {
	HX_("BEGIN",09,22,44,2e),HX_("END",bb,9f,34,00),HX_("WAKE",24,24,b3,39),HX_("SLEEP",f7,f4,b2,fc),HX_("BREAK",9f,5c,da,36),HX_("PRE",03,fc,3c,00),HX_("ONGOING",1b,7e,d8,1a),
};
namespace nape{
namespace callbacks{

void Listener_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_177_new)
HXLINE( 181)		this->zpp_inner = null();
HXLINE( 239)		if (!(::zpp_nape::callbacks::ZPP_Listener_obj::internal)) {
HXLINE( 240)			HX_STACK_DO_THROW(HX_("Error: Cannot instantiate Listener derp!",bb,95,96,df));
            		}
            	}

Dynamic Listener_obj::__CreateEmpty() { return new Listener_obj; }

void *Listener_obj::_hx_vtable = 0;

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Listener_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65d6373a;
}

 ::nape::callbacks::ListenerType Listener_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_188_get_type)
HXDLIN( 188)		return ::zpp_nape::callbacks::ZPP_Listener_obj::types->__get(this->zpp_inner->type).StaticCast<  ::nape::callbacks::ListenerType >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_type,return )

 ::nape::callbacks::CbEvent Listener_obj::get_event(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_196_get_event)
HXDLIN( 196)		return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast<  ::nape::callbacks::CbEvent >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_event,return )

 ::nape::callbacks::CbEvent Listener_obj::set_event( ::nape::callbacks::CbEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_9a987b32df585753_198_set_event)
HXLINE( 199)		{
HXLINE( 201)			if (hx::IsNull( event )) {
HXLINE( 202)				HX_STACK_DO_THROW(HX_("Error: Cannot set listener event type to null",2b,cc,11,11));
            			}
HXLINE( 205)			if (hx::IsNotEq( ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast<  ::nape::callbacks::CbEvent >(),event )) {
HXLINE( 206)				int xevent;
HXDLIN( 206)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 206)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 206)				if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 206)					xevent = 0;
            				}
            				else {
HXLINE( 206)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 206)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)						::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 206)					if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 206)						xevent = 6;
            					}
            					else {
HXLINE( 206)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 206)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)							::zpp_nape::util::ZPP_Flags_obj::CbEvent_END =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 206)						if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 206)							xevent = 1;
            						}
            						else {
HXLINE( 206)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP )) {
HXLINE( 206)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)								::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 206)							if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP )) {
HXLINE( 206)								xevent = 3;
            							}
            							else {
HXLINE( 206)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE )) {
HXLINE( 206)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)									::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
HXDLIN( 206)								if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE )) {
HXLINE( 206)									xevent = 2;
            								}
            								else {
HXLINE( 206)									if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE )) {
HXLINE( 206)										::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 206)										::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 206)										::zpp_nape::util::ZPP_Flags_obj::internal = false;
            									}
HXDLIN( 206)									if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE )) {
HXLINE( 206)										xevent = 5;
            									}
            									else {
HXLINE( 206)										xevent = 4;
            									}
            								}
            							}
            						}
            					}
            				}
HXLINE( 207)				this->zpp_inner->swapEvent(xevent);
            			}
            		}
HXLINE( 210)		return ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(this->zpp_inner->event).StaticCast<  ::nape::callbacks::CbEvent >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_event,return )

int Listener_obj::get_precedence(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_223_get_precedence)
HXDLIN( 223)		return this->zpp_inner->precedence;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_precedence,return )

int Listener_obj::set_precedence(int precedence){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_225_set_precedence)
HXLINE( 227)		if ((this->zpp_inner->precedence != precedence)) {
HXLINE( 228)			this->zpp_inner->precedence = precedence;
HXLINE( 229)			this->zpp_inner->invalidate_precedence();
            		}
HXLINE( 232)		return this->zpp_inner->precedence;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_precedence,return )

 ::nape::space::Space Listener_obj::get_space(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_255_get_space)
HXDLIN( 255)		if (hx::IsNull( this->zpp_inner->space )) {
HXDLIN( 255)			return null();
            		}
            		else {
HXDLIN( 255)			return this->zpp_inner->space->outer;
            		}
HXDLIN( 255)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_space,return )

 ::nape::space::Space Listener_obj::set_space( ::nape::space::Space space){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_257_set_space)
HXLINE( 259)		 ::nape::space::Space _hx_tmp;
HXDLIN( 259)		if (hx::IsNull( this->zpp_inner->space )) {
HXLINE( 259)			_hx_tmp = null();
            		}
            		else {
HXLINE( 259)			_hx_tmp = this->zpp_inner->space->outer;
            		}
HXDLIN( 259)		if (hx::IsNotEq( _hx_tmp,space )) {
HXLINE( 260)			if (hx::IsNotNull( this->zpp_inner->space )) {
HXLINE( 261)				this->zpp_inner->space->outer->zpp_inner->wrap_listeners->remove(hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 263)			if (hx::IsNotNull( space )) {
HXLINE( 264)				 ::nape::callbacks::ListenerList _this = space->zpp_inner->wrap_listeners;
HXDLIN( 264)				if (_this->zpp_inner->reverse_flag) {
HXLINE( 264)					_this->push(hx::ObjectPtr<OBJ_>(this));
            				}
            				else {
HXLINE( 264)					_this->unshift(hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            			else {
HXLINE( 267)				this->zpp_inner->space = null();
            			}
            		}
HXLINE( 271)		if (hx::IsNull( this->zpp_inner->space )) {
HXLINE( 271)			return null();
            		}
            		else {
HXLINE( 271)			return this->zpp_inner->space->outer;
            		}
HXDLIN( 271)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_space,return )

::String Listener_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_9a987b32df585753_276_toString)
HXLINE( 277)		::String event = ::Array_obj< ::String >::fromData( _hx_array_data_3708b5ba_9,7)->__get(this->zpp_inner->event);
HXLINE( 278)		if ((this->zpp_inner->type == 0)) {
HXLINE( 279)			 ::zpp_nape::callbacks::ZPP_BodyListener body = this->zpp_inner->body;
HXLINE( 280)			return ((((HX_("BodyListener{",65,b6,16,4d) + event) + HX_("::",c0,32,00,00)) + ::Std_obj::string(body->outer_zn->zpp_inner_zn->options->outer)) + HX_("}",7d,00,00,00));
            		}
            		else {
HXLINE( 282)			if ((this->zpp_inner->type == 1)) {
HXLINE( 283)				 ::zpp_nape::callbacks::ZPP_ConstraintListener con = this->zpp_inner->constraint;
HXLINE( 284)				return ((((HX_("ConstraintListener{",4a,49,80,ba) + event) + HX_("::",c0,32,00,00)) + ::Std_obj::string(con->outer_zn->zpp_inner_zn->options->outer)) + HX_("}",7d,00,00,00));
            			}
            			else {
HXLINE( 287)				 ::zpp_nape::callbacks::ZPP_InteractionListener con1 = this->zpp_inner->interaction;
HXLINE( 288)				::String itype;
HXDLIN( 288)				switch((int)(con1->itype)){
            					case (int)1: {
HXLINE( 288)						itype = HX_("COLLISION",52,18,93,d6);
            					}
            					break;
            					case (int)2: {
HXLINE( 288)						itype = HX_("SENSOR",3a,de,12,1e);
            					}
            					break;
            					case (int)4: {
HXLINE( 288)						itype = HX_("FLUID",ea,91,89,80);
            					}
            					break;
            					default:{
HXLINE( 288)						itype = HX_("ALL",01,95,31,00);
            					}
            				}
HXLINE( 294)				::String _hx_tmp;
HXDLIN( 294)				if ((this->zpp_inner->type == 2)) {
HXLINE( 294)					::String _hx_tmp1 = ((((((HX_("InteractionListener{",75,ef,2a,76) + event) + HX_("#",23,00,00,00)) + itype) + HX_("::",c0,32,00,00)) + ::Std_obj::string(con1->outer_zni->zpp_inner_zn->options1->outer)) + HX_(":",3a,00,00,00));
HXDLIN( 294)					_hx_tmp = ((_hx_tmp1 + ::Std_obj::string(con1->outer_zni->zpp_inner_zn->options2->outer)) + HX_("}",7d,00,00,00));
            				}
            				else {
HXLINE( 294)					::String _hx_tmp2 = ((((HX_("PreListener{",04,95,a0,61) + itype) + HX_("::",c0,32,00,00)) + ::Std_obj::string(con1->outer_znp->zpp_inner_zn->options1->outer)) + HX_(":",3a,00,00,00));
HXDLIN( 294)					_hx_tmp = ((_hx_tmp2 + ::Std_obj::string(con1->outer_znp->zpp_inner_zn->options2->outer)) + HX_("}",7d,00,00,00));
            				}
HXDLIN( 294)				return ((_hx_tmp + HX_(" precedence=",d3,06,48,66)) + this->zpp_inner->precedence);
            			}
            		}
HXLINE( 278)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,toString,return )


hx::ObjectPtr< Listener_obj > Listener_obj::__new() {
	hx::ObjectPtr< Listener_obj > __this = new Listener_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Listener_obj > Listener_obj::__alloc(hx::Ctx *_hx_ctx) {
	Listener_obj *__this = (Listener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Listener_obj), true, "nape.callbacks.Listener"));
	*(void **)__this = Listener_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_event() ); }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_space() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		if (HX_FIELD_EQ(inName,"get_event") ) { return hx::Val( get_event_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_event") ) { return hx::Val( set_event_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return hx::Val( get_space_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return hx::Val( set_space_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_precedence() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_precedence") ) { return hx::Val( get_precedence_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_precedence") ) { return hx::Val( set_precedence_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Listener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_event(inValue.Cast<  ::nape::callbacks::CbEvent >()) ); }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_space(inValue.Cast<  ::nape::space::Space >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_precedence(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("event",1a,c8,c4,75));
	outFields->push(HX_("precedence",0a,f6,fc,ee));
	outFields->push(HX_("space",c6,8c,66,81));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Listener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::callbacks::ZPP_Listener */ ,(int)offsetof(Listener_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Listener_obj_sStaticStorageInfo = 0;
#endif

static ::String Listener_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_type",43,ae,c3,cc),
	HX_("get_event",71,24,6e,b9),
	HX_("set_event",7d,10,bf,9c),
	HX_("get_precedence",53,7e,f2,64),
	HX_("set_precedence",c7,66,12,85),
	HX_("get_space",1d,e9,0f,c5),
	HX_("set_space",29,d5,60,a8),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	Listener_obj _hx_dummy;
	Listener_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.Listener",ba,b5,08,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Listener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks