// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <hxinc/nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <hxinc/nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <hxinc/nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <hxinc/nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <hxinc/nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <hxinc/nape/callbacks/OptionType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <hxinc/zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9026484b89ee4e2a_207_new,"nape.callbacks.InteractionListener","new",0x015a0bd2,"nape.callbacks.InteractionListener.new","nape/callbacks/InteractionListener.hx",207,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_218_get_options1,"nape.callbacks.InteractionListener","get_options1",0x4c8c396a,"nape.callbacks.InteractionListener.get_options1","nape/callbacks/InteractionListener.hx",218,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_220_set_options1,"nape.callbacks.InteractionListener","set_options1",0x61855cde,"nape.callbacks.InteractionListener.set_options1","nape/callbacks/InteractionListener.hx",220,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_232_get_options2,"nape.callbacks.InteractionListener","get_options2",0x4c8c396b,"nape.callbacks.InteractionListener.get_options2","nape/callbacks/InteractionListener.hx",232,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_234_set_options2,"nape.callbacks.InteractionListener","set_options2",0x61855cdf,"nape.callbacks.InteractionListener.set_options2","nape/callbacks/InteractionListener.hx",234,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_249_get_interactionType,"nape.callbacks.InteractionListener","get_interactionType",0x02d33635,"nape.callbacks.InteractionListener.get_interactionType","nape/callbacks/InteractionListener.hx",249,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_257_set_interactionType,"nape.callbacks.InteractionListener","set_interactionType",0x3f702941,"nape.callbacks.InteractionListener.set_interactionType","nape/callbacks/InteractionListener.hx",257,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_277_get_handler,"nape.callbacks.InteractionListener","get_handler",0xd58a0d53,"nape.callbacks.InteractionListener.get_handler","nape/callbacks/InteractionListener.hx",277,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_279_set_handler,"nape.callbacks.InteractionListener","set_handler",0xdff7145f,"nape.callbacks.InteractionListener.set_handler","nape/callbacks/InteractionListener.hx",279,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_301_get_allowSleepingCallbacks,"nape.callbacks.InteractionListener","get_allowSleepingCallbacks",0xaced5331,"nape.callbacks.InteractionListener.get_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",301,0xa06240a0)
HX_LOCAL_STACK_FRAME(_hx_pos_9026484b89ee4e2a_303_set_allowSleepingCallbacks,"nape.callbacks.InteractionListener","set_allowSleepingCallbacks",0x0c8219a5,"nape.callbacks.InteractionListener.set_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",303,0xa06240a0)
namespace nape{
namespace callbacks{

void InteractionListener_obj::__construct( ::nape::callbacks::CbEvent event, ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence){
            		int precedence = __o_precedence.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_9026484b89ee4e2a_207_new)
HXLINE( 211)		this->zpp_inner_zn = null();
HXLINE( 340)		::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
HXLINE( 342)		super::__construct();
HXLINE( 344)		::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
HXLINE( 347)		if (hx::IsNull( handler )) {
HXLINE( 348)			HX_STACK_DO_THROW(HX_("Error: InteractionListener::handler cannot be null",f5,38,67,67));
            		}
HXLINE( 350)		if (hx::IsNull( event )) {
HXLINE( 351)			HX_STACK_DO_THROW(HX_("Error: CbEvent cannot be null for InteractionListener",e9,f9,e1,b0));
            		}
HXLINE( 354)		int xevent = -1;
HXLINE( 355)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 355)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 355)			::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 355)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXDLIN( 355)		if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN )) {
HXLINE( 355)			xevent = 0;
            		}
            		else {
HXLINE( 356)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 356)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)				::zpp_nape::util::ZPP_Flags_obj::CbEvent_END =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 356)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 356)			if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_END )) {
HXLINE( 356)				xevent = 1;
            			}
            			else {
HXLINE( 357)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 357)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 357)					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING =  ::nape::callbacks::CbEvent_obj::__alloc( HX_CTX );
HXDLIN( 357)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 357)				if (hx::IsEq( event,::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING )) {
HXLINE( 357)					xevent = 6;
            				}
            				else {
HXLINE( 360)					HX_STACK_DO_THROW(((HX_("Error: CbEvent '",94,cf,09,69) + event->toString()) + HX_("' is not a valid event type for InteractionListener",7c,f3,84,ee)));
            				}
            			}
            		}
HXLINE( 363)		 ::nape::callbacks::OptionType _hx_tmp = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options1);
HXDLIN( 363)		this->zpp_inner_zn =  ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__alloc( HX_CTX ,_hx_tmp,::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options2),xevent,2);
HXLINE( 364)		this->zpp_inner = this->zpp_inner_zn;
HXLINE( 365)		this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
HXLINE( 366)		this->zpp_inner_zn->outer_zni = hx::ObjectPtr<OBJ_>(this);
HXLINE( 367)		this->zpp_inner->precedence = precedence;
HXLINE( 368)		this->zpp_inner_zn->handleri = handler;
HXLINE( 369)		{
HXLINE( 369)			{
HXLINE( 369)				if (hx::IsNull( interactionType )) {
HXLINE( 369)					HX_STACK_DO_THROW(HX_("Error: Cannot set listener interaction type to null",b3,d2,85,0d));
            				}
HXDLIN( 369)				int ret = this->zpp_inner_zn->itype;
HXDLIN( 369)				 ::nape::callbacks::InteractionType _hx_tmp1;
HXDLIN( 369)				if ((ret == 1)) {
HXLINE( 369)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 369)					_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            				}
            				else {
HXLINE( 369)					if ((ret == 2)) {
HXLINE( 369)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 369)						_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            					}
            					else {
HXLINE( 369)						if ((ret == 4)) {
HXLINE( 369)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 369)							_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            						}
            						else {
HXLINE( 369)							if ((ret == 7)) {
HXLINE( 369)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 369)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
HXDLIN( 369)								_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            							}
            							else {
HXLINE( 369)								_hx_tmp1 = null();
            							}
            						}
            					}
            				}
HXDLIN( 369)				if (hx::IsNotEq( _hx_tmp1,interactionType )) {
HXLINE( 369)					int xtype;
HXDLIN( 369)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 369)					if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 369)						xtype = 1;
            					}
            					else {
HXLINE( 369)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 369)						if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 369)							xtype = 2;
            						}
            						else {
HXLINE( 369)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 369)							if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 369)								xtype = 4;
            							}
            							else {
HXLINE( 369)								xtype = 7;
            							}
            						}
            					}
HXDLIN( 369)					this->zpp_inner_zn->itype = xtype;
            				}
            			}
HXDLIN( 369)			{
HXLINE( 369)				int ret1 = this->zpp_inner_zn->itype;
HXDLIN( 369)				if ((ret1 == 1)) {
HXLINE( 369)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
            				}
            				else {
HXLINE( 369)					if ((ret1 == 2)) {
HXLINE( 369)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
            					}
            					else {
HXLINE( 369)						if ((ret1 == 4)) {
HXLINE( 369)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
            						}
            						else {
HXLINE( 369)							if ((ret1 == 7)) {
HXLINE( 369)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 369)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 369)									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 369)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}

Dynamic InteractionListener_obj::__CreateEmpty() { return new InteractionListener_obj; }

void *InteractionListener_obj::_hx_vtable = 0;

Dynamic InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InteractionListener_obj > _hx_result = new InteractionListener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool InteractionListener_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ede6960) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ede6960;
	} else {
		return inClassId==(int)0x65d6373a;
	}
}

 ::nape::callbacks::OptionType InteractionListener_obj::get_options1(){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_218_get_options1)
HXDLIN( 218)		return this->zpp_inner_zn->options1->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options1,return )

 ::nape::callbacks::OptionType InteractionListener_obj::set_options1( ::nape::callbacks::OptionType options1){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_220_set_options1)
HXLINE( 222)		this->zpp_inner_zn->options1->set(options1->zpp_inner);
HXLINE( 224)		return this->zpp_inner_zn->options1->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options1,return )

 ::nape::callbacks::OptionType InteractionListener_obj::get_options2(){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_232_get_options2)
HXDLIN( 232)		return this->zpp_inner_zn->options2->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options2,return )

 ::nape::callbacks::OptionType InteractionListener_obj::set_options2( ::nape::callbacks::OptionType options2){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_234_set_options2)
HXLINE( 236)		this->zpp_inner_zn->options2->set(options2->zpp_inner);
HXLINE( 238)		return this->zpp_inner_zn->options2->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options2,return )

 ::nape::callbacks::InteractionType InteractionListener_obj::get_interactionType(){
            	HX_GC_STACKFRAME(&_hx_pos_9026484b89ee4e2a_249_get_interactionType)
HXLINE( 250)		int ret = this->zpp_inner_zn->itype;
HXLINE( 251)		if ((ret == 1)) {
HXLINE( 251)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 251)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 251)				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 251)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 251)			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            		}
            		else {
HXLINE( 252)			if ((ret == 2)) {
HXLINE( 252)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 252)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 252)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 252)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 252)				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            			}
            			else {
HXLINE( 253)				if ((ret == 4)) {
HXLINE( 253)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 253)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 253)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 253)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 253)					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            				}
            				else {
HXLINE( 254)					if ((ret == 7)) {
HXLINE( 254)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 254)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 254)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 254)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 254)						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            					}
            					else {
HXLINE( 255)						return null();
            					}
            				}
            			}
            		}
HXLINE( 251)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_interactionType,return )

 ::nape::callbacks::InteractionType InteractionListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
            	HX_GC_STACKFRAME(&_hx_pos_9026484b89ee4e2a_257_set_interactionType)
HXLINE( 258)		{
HXLINE( 260)			if (hx::IsNull( interactionType )) {
HXLINE( 261)				HX_STACK_DO_THROW(HX_("Error: Cannot set listener interaction type to null",b3,d2,85,0d));
            			}
HXLINE( 264)			int ret = this->zpp_inner_zn->itype;
HXDLIN( 264)			 ::nape::callbacks::InteractionType _hx_tmp;
HXDLIN( 264)			if ((ret == 1)) {
HXLINE( 264)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 264)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 264)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 264)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 264)				_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            			}
            			else {
HXLINE( 264)				if ((ret == 2)) {
HXLINE( 264)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 264)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 264)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 264)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 264)					_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            				}
            				else {
HXLINE( 264)					if ((ret == 4)) {
HXLINE( 264)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 264)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 264)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 264)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 264)						_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            					}
            					else {
HXLINE( 264)						if ((ret == 7)) {
HXLINE( 264)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 264)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 264)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 264)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 264)							_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            						}
            						else {
HXLINE( 264)							_hx_tmp = null();
            						}
            					}
            				}
            			}
HXDLIN( 264)			if (hx::IsNotEq( _hx_tmp,interactionType )) {
HXLINE( 265)				int xtype;
HXDLIN( 265)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 265)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 265)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 265)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 265)				if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 265)					xtype = 1;
            				}
            				else {
HXLINE( 265)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 265)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 265)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 265)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 265)					if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 265)						xtype = 2;
            					}
            					else {
HXLINE( 265)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 265)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 265)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 265)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 265)						if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 265)							xtype = 4;
            						}
            						else {
HXLINE( 265)							xtype = 7;
            						}
            					}
            				}
HXLINE( 266)				this->zpp_inner_zn->itype = xtype;
            			}
            		}
HXLINE( 269)		int ret1 = this->zpp_inner_zn->itype;
HXDLIN( 269)		if ((ret1 == 1)) {
HXLINE( 269)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 269)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 269)				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 269)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 269)			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            		}
            		else {
HXLINE( 269)			if ((ret1 == 2)) {
HXLINE( 269)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 269)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 269)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 269)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 269)				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            			}
            			else {
HXLINE( 269)				if ((ret1 == 4)) {
HXLINE( 269)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 269)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 269)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 269)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 269)					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            				}
            				else {
HXLINE( 269)					if ((ret1 == 7)) {
HXLINE( 269)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 269)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 269)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 269)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 269)						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            					}
            					else {
HXLINE( 269)						return null();
            					}
            				}
            			}
            		}
HXDLIN( 269)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_interactionType,return )

 ::Dynamic InteractionListener_obj::get_handler(){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_277_get_handler)
HXDLIN( 277)		return this->zpp_inner_zn->handleri;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_handler,return )

 ::Dynamic InteractionListener_obj::set_handler( ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_279_set_handler)
HXLINE( 280)		{
HXLINE( 282)			if (hx::IsNull( handler )) {
HXLINE( 283)				HX_STACK_DO_THROW(HX_("Error: InteractionListener::handler cannot be null",f5,38,67,67));
            			}
HXLINE( 286)			this->zpp_inner_zn->handleri = handler;
            		}
HXLINE( 288)		return this->zpp_inner_zn->handleri;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_handler,return )

bool InteractionListener_obj::get_allowSleepingCallbacks(){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_301_get_allowSleepingCallbacks)
HXDLIN( 301)		return this->zpp_inner_zn->allowSleepingCallbacks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_allowSleepingCallbacks,return )

bool InteractionListener_obj::set_allowSleepingCallbacks(bool allowSleepingCallbacks){
            	HX_STACKFRAME(&_hx_pos_9026484b89ee4e2a_303_set_allowSleepingCallbacks)
HXLINE( 305)		this->zpp_inner_zn->allowSleepingCallbacks = allowSleepingCallbacks;
HXLINE( 307)		return this->zpp_inner_zn->allowSleepingCallbacks;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_allowSleepingCallbacks,return )


hx::ObjectPtr< InteractionListener_obj > InteractionListener_obj::__new( ::nape::callbacks::CbEvent event, ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence) {
	hx::ObjectPtr< InteractionListener_obj > __this = new InteractionListener_obj();
	__this->__construct(event,interactionType,options1,options2,handler,__o_precedence);
	return __this;
}

hx::ObjectPtr< InteractionListener_obj > InteractionListener_obj::__alloc(hx::Ctx *_hx_ctx, ::nape::callbacks::CbEvent event, ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence) {
	InteractionListener_obj *__this = (InteractionListener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InteractionListener_obj), true, "nape.callbacks.InteractionListener"));
	*(void **)__this = InteractionListener_obj::_hx_vtable;
	__this->__construct(event,interactionType,options1,options2,handler,__o_precedence);
	return __this;
}

InteractionListener_obj::InteractionListener_obj()
{
}

void InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

hx::Val InteractionListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_handler() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_options1() ); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_options2() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return hx::Val( get_handler_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return hx::Val( set_handler_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return hx::Val( zpp_inner_zn ); }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return hx::Val( get_options1_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return hx::Val( set_options1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return hx::Val( get_options2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options2") ) { return hx::Val( set_options2_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_interactionType() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return hx::Val( get_interactionType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return hx::Val( set_interactionType_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_allowSleepingCallbacks() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_allowSleepingCallbacks") ) { return hx::Val( get_allowSleepingCallbacks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowSleepingCallbacks") ) { return hx::Val( set_allowSleepingCallbacks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InteractionListener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_handler(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_options1(inValue.Cast<  ::nape::callbacks::OptionType >()) ); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_options2(inValue.Cast<  ::nape::callbacks::OptionType >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast<  ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_interactionType(inValue.Cast<  ::nape::callbacks::InteractionType >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_allowSleepingCallbacks(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner_zn",22,84,fa,e0));
	outFields->push(HX_("options1",13,bf,6e,1e));
	outFields->push(HX_("options2",14,bf,6e,1e));
	outFields->push(HX_("interactionType",ac,a7,c8,08));
	outFields->push(HX_("allowSleepingCallbacks",9a,0e,6b,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InteractionListener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::callbacks::ZPP_InteractionListener */ ,(int)offsetof(InteractionListener_obj,zpp_inner_zn),HX_("zpp_inner_zn",22,84,fa,e0)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InteractionListener_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractionListener_obj_sMemberFields[] = {
	HX_("zpp_inner_zn",22,84,fa,e0),
	HX_("get_options1",1c,73,88,d3),
	HX_("set_options1",90,96,81,e8),
	HX_("get_options2",1d,73,88,d3),
	HX_("set_options2",91,96,81,e8),
	HX_("get_interactionType",c3,76,d3,93),
	HX_("set_interactionType",cf,69,70,d0),
	HX_("get_handler",e1,0f,d0,cb),
	HX_("set_handler",ed,16,3d,d6),
	HX_("get_allowSleepingCallbacks",63,60,70,92),
	HX_("set_allowSleepingCallbacks",d7,26,05,f2),
	::String(null()) };

hx::Class InteractionListener_obj::__mClass;

void InteractionListener_obj::__register()
{
	InteractionListener_obj _hx_dummy;
	InteractionListener_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.InteractionListener",e0,7a,97,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InteractionListener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionListener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractionListener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractionListener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks
