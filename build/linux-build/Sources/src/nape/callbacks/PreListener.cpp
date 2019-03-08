// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <hxinc/nape/callbacks/Callback.h>
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
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <hxinc/nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <hxinc/nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <hxinc/nape/callbacks/PreListener.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_916bc87c79825ea7_180_new,"nape.callbacks.PreListener","new",0xc516dfa3,"nape.callbacks.PreListener.new","nape/callbacks/PreListener.hx",180,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_191_get_options1,"nape.callbacks.PreListener","get_options1",0x8ee8e379,"nape.callbacks.PreListener.get_options1","nape/callbacks/PreListener.hx",191,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_193_set_options1,"nape.callbacks.PreListener","set_options1",0xa3e206ed,"nape.callbacks.PreListener.set_options1","nape/callbacks/PreListener.hx",193,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_205_get_options2,"nape.callbacks.PreListener","get_options2",0x8ee8e37a,"nape.callbacks.PreListener.get_options2","nape/callbacks/PreListener.hx",205,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_207_set_options2,"nape.callbacks.PreListener","set_options2",0xa3e206ee,"nape.callbacks.PreListener.set_options2","nape/callbacks/PreListener.hx",207,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_240_get_handler,"nape.callbacks.PreListener","get_handler",0xe5e89a24,"nape.callbacks.PreListener.get_handler","nape/callbacks/PreListener.hx",240,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_242_set_handler,"nape.callbacks.PreListener","set_handler",0xf055a130,"nape.callbacks.PreListener.set_handler","nape/callbacks/PreListener.hx",242,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_267_get_pure,"nape.callbacks.PreListener","get_pure",0x06cb8a5e,"nape.callbacks.PreListener.get_pure","nape/callbacks/PreListener.hx",267,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_269_set_pure,"nape.callbacks.PreListener","set_pure",0xb528e3d2,"nape.callbacks.PreListener.set_pure","nape/callbacks/PreListener.hx",269,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_287_get_interactionType,"nape.callbacks.PreListener","get_interactionType",0xddb47c06,"nape.callbacks.PreListener.get_interactionType","nape/callbacks/PreListener.hx",287,0x3d50ffef)
HX_LOCAL_STACK_FRAME(_hx_pos_916bc87c79825ea7_295_set_interactionType,"nape.callbacks.PreListener","set_interactionType",0x1a516f12,"nape.callbacks.PreListener.set_interactionType","nape/callbacks/PreListener.hx",295,0x3d50ffef)
namespace nape{
namespace callbacks{

void PreListener_obj::__construct( ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure){
            		int precedence = __o_precedence.Default(0);
            		bool pure = __o_pure.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_916bc87c79825ea7_180_new)
HXLINE( 184)		this->zpp_inner_zn = null();
HXLINE( 338)		::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
HXLINE( 340)		super::__construct();
HXLINE( 342)		::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
HXLINE( 345)		if (hx::IsNull( handler )) {
HXLINE( 346)			HX_STACK_DO_THROW(HX_("Error: PreListener must take a handler!",4f,97,8b,1b));
            		}
HXLINE( 349)		 ::nape::callbacks::OptionType _hx_tmp = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options1);
HXDLIN( 349)		this->zpp_inner_zn =  ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__alloc( HX_CTX ,_hx_tmp,::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options2),5,3);
HXLINE( 350)		this->zpp_inner = this->zpp_inner_zn;
HXLINE( 351)		this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
HXLINE( 352)		this->zpp_inner_zn->outer_znp = hx::ObjectPtr<OBJ_>(this);
HXLINE( 353)		this->zpp_inner->precedence = precedence;
HXLINE( 354)		this->zpp_inner_zn->pure = pure;
HXLINE( 355)		this->zpp_inner_zn->handlerp = handler;
HXLINE( 356)		{
HXLINE( 356)			{
HXLINE( 356)				if (hx::IsNull( interactionType )) {
HXLINE( 356)					HX_STACK_DO_THROW(HX_("Error: Cannot set listener interaction type to null",b3,d2,85,0d));
            				}
HXDLIN( 356)				int ret = this->zpp_inner_zn->itype;
HXDLIN( 356)				 ::nape::callbacks::InteractionType _hx_tmp1;
HXDLIN( 356)				if ((ret == 1)) {
HXLINE( 356)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 356)					_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            				}
            				else {
HXLINE( 356)					if ((ret == 2)) {
HXLINE( 356)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 356)						_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            					}
            					else {
HXLINE( 356)						if ((ret == 4)) {
HXLINE( 356)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 356)							_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            						}
            						else {
HXLINE( 356)							if ((ret == 7)) {
HXLINE( 356)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 356)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
HXDLIN( 356)								_hx_tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            							}
            							else {
HXLINE( 356)								_hx_tmp1 = null();
            							}
            						}
            					}
            				}
HXDLIN( 356)				if (hx::IsNotEq( _hx_tmp1,interactionType )) {
HXLINE( 356)					int xtype;
HXDLIN( 356)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 356)					if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 356)						xtype = 1;
            					}
            					else {
HXLINE( 356)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 356)						if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 356)							xtype = 2;
            						}
            						else {
HXLINE( 356)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 356)							if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 356)								xtype = 4;
            							}
            							else {
HXLINE( 356)								xtype = 7;
            							}
            						}
            					}
HXDLIN( 356)					this->zpp_inner_zn->itype = xtype;
            				}
            			}
HXDLIN( 356)			{
HXLINE( 356)				int ret1 = this->zpp_inner_zn->itype;
HXDLIN( 356)				if ((ret1 == 1)) {
HXLINE( 356)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
            				}
            				else {
HXLINE( 356)					if ((ret1 == 2)) {
HXLINE( 356)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
            					}
            					else {
HXLINE( 356)						if ((ret1 == 4)) {
HXLINE( 356)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
            						}
            						else {
HXLINE( 356)							if ((ret1 == 7)) {
HXLINE( 356)								if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 356)									::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 356)									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 356)									::zpp_nape::util::ZPP_Flags_obj::internal = false;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}

Dynamic PreListener_obj::__CreateEmpty() { return new PreListener_obj; }

void *PreListener_obj::_hx_vtable = 0;

Dynamic PreListener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PreListener_obj > _hx_result = new PreListener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool PreListener_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x65d6373a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x65d6373a;
	} else {
		return inClassId==(int)0x72dc40b1;
	}
}

 ::nape::callbacks::OptionType PreListener_obj::get_options1(){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_191_get_options1)
HXDLIN( 191)		return this->zpp_inner_zn->options1->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options1,return )

 ::nape::callbacks::OptionType PreListener_obj::set_options1( ::nape::callbacks::OptionType options1){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_193_set_options1)
HXLINE( 195)		this->zpp_inner_zn->options1->set(options1->zpp_inner);
HXLINE( 197)		return this->zpp_inner_zn->options1->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options1,return )

 ::nape::callbacks::OptionType PreListener_obj::get_options2(){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_205_get_options2)
HXDLIN( 205)		return this->zpp_inner_zn->options2->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options2,return )

 ::nape::callbacks::OptionType PreListener_obj::set_options2( ::nape::callbacks::OptionType options2){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_207_set_options2)
HXLINE( 209)		this->zpp_inner_zn->options2->set(options2->zpp_inner);
HXLINE( 211)		return this->zpp_inner_zn->options2->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options2,return )

 ::Dynamic PreListener_obj::get_handler(){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_240_get_handler)
HXDLIN( 240)		return this->zpp_inner_zn->handlerp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_handler,return )

 ::Dynamic PreListener_obj::set_handler( ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_242_set_handler)
HXLINE( 243)		{
HXLINE( 245)			if (hx::IsNull( handler )) {
HXLINE( 246)				HX_STACK_DO_THROW(HX_("Error: PreListener must take a non-null handler!",18,7a,44,2d));
            			}
HXLINE( 249)			this->zpp_inner_zn->handlerp = handler;
HXLINE( 250)			this->zpp_inner_zn->wake();
            		}
HXLINE( 252)		return this->zpp_inner_zn->handlerp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_handler,return )

bool PreListener_obj::get_pure(){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_267_get_pure)
HXDLIN( 267)		return this->zpp_inner_zn->pure;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_pure,return )

bool PreListener_obj::set_pure(bool pure){
            	HX_STACKFRAME(&_hx_pos_916bc87c79825ea7_269_set_pure)
HXLINE( 270)		{
HXLINE( 271)			if (!(pure)) {
HXLINE( 272)				this->zpp_inner_zn->wake();
            			}
HXLINE( 274)			this->zpp_inner_zn->pure = pure;
            		}
HXLINE( 276)		return this->zpp_inner_zn->pure;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_pure,return )

 ::nape::callbacks::InteractionType PreListener_obj::get_interactionType(){
            	HX_GC_STACKFRAME(&_hx_pos_916bc87c79825ea7_287_get_interactionType)
HXLINE( 288)		int ret = this->zpp_inner_zn->itype;
HXLINE( 289)		if ((ret == 1)) {
HXLINE( 289)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 289)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 289)				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 289)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 289)			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            		}
            		else {
HXLINE( 290)			if ((ret == 2)) {
HXLINE( 290)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 290)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 290)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 290)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 290)				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            			}
            			else {
HXLINE( 291)				if ((ret == 4)) {
HXLINE( 291)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 291)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 291)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 291)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 291)					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            				}
            				else {
HXLINE( 292)					if ((ret == 7)) {
HXLINE( 292)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 292)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 292)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 292)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 292)						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            					}
            					else {
HXLINE( 293)						return null();
            					}
            				}
            			}
            		}
HXLINE( 289)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_interactionType,return )

 ::nape::callbacks::InteractionType PreListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
            	HX_GC_STACKFRAME(&_hx_pos_916bc87c79825ea7_295_set_interactionType)
HXLINE( 296)		{
HXLINE( 298)			if (hx::IsNull( interactionType )) {
HXLINE( 299)				HX_STACK_DO_THROW(HX_("Error: Cannot set listener interaction type to null",b3,d2,85,0d));
            			}
HXLINE( 302)			int ret = this->zpp_inner_zn->itype;
HXDLIN( 302)			 ::nape::callbacks::InteractionType _hx_tmp;
HXDLIN( 302)			if ((ret == 1)) {
HXLINE( 302)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 302)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 302)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 302)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 302)				_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            			}
            			else {
HXLINE( 302)				if ((ret == 2)) {
HXLINE( 302)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 302)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 302)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 302)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 302)					_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            				}
            				else {
HXLINE( 302)					if ((ret == 4)) {
HXLINE( 302)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 302)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 302)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 302)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 302)						_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            					}
            					else {
HXLINE( 302)						if ((ret == 7)) {
HXLINE( 302)							if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 302)								::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 302)								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 302)								::zpp_nape::util::ZPP_Flags_obj::internal = false;
            							}
HXDLIN( 302)							_hx_tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            						}
            						else {
HXLINE( 302)							_hx_tmp = null();
            						}
            					}
            				}
            			}
HXDLIN( 302)			if (hx::IsNotEq( _hx_tmp,interactionType )) {
HXLINE( 303)				int xtype;
HXDLIN( 303)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 303)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 303)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 303)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 303)				if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 303)					xtype = 1;
            				}
            				else {
HXLINE( 303)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 303)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 303)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 303)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 303)					if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 303)						xtype = 2;
            					}
            					else {
HXLINE( 303)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 303)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 303)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 303)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 303)						if (hx::IsEq( interactionType,::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 303)							xtype = 4;
            						}
            						else {
HXLINE( 303)							xtype = 7;
            						}
            					}
            				}
HXLINE( 304)				this->zpp_inner_zn->itype = xtype;
            			}
            		}
HXLINE( 307)		int ret1 = this->zpp_inner_zn->itype;
HXDLIN( 307)		if ((ret1 == 1)) {
HXLINE( 307)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION )) {
HXLINE( 307)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 307)				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 307)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 307)			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
            		}
            		else {
HXLINE( 307)			if ((ret1 == 2)) {
HXLINE( 307)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR )) {
HXLINE( 307)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 307)					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 307)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 307)				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
            			}
            			else {
HXLINE( 307)				if ((ret1 == 4)) {
HXLINE( 307)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID )) {
HXLINE( 307)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 307)						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 307)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 307)					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
            				}
            				else {
HXLINE( 307)					if ((ret1 == 7)) {
HXLINE( 307)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY )) {
HXLINE( 307)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 307)							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY =  ::nape::callbacks::InteractionType_obj::__alloc( HX_CTX );
HXDLIN( 307)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 307)						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
            					}
            					else {
HXLINE( 307)						return null();
            					}
            				}
            			}
            		}
HXDLIN( 307)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_interactionType,return )


hx::ObjectPtr< PreListener_obj > PreListener_obj::__new( ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure) {
	hx::ObjectPtr< PreListener_obj > __this = new PreListener_obj();
	__this->__construct(interactionType,options1,options2,handler,__o_precedence,__o_pure);
	return __this;
}

hx::ObjectPtr< PreListener_obj > PreListener_obj::__alloc(hx::Ctx *_hx_ctx, ::nape::callbacks::InteractionType interactionType, ::Dynamic options1, ::Dynamic options2, ::Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure) {
	PreListener_obj *__this = (PreListener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PreListener_obj), true, "nape.callbacks.PreListener"));
	*(void **)__this = PreListener_obj::_hx_vtable;
	__this->__construct(interactionType,options1,options2,handler,__o_precedence,__o_pure);
	return __this;
}

PreListener_obj::PreListener_obj()
{
}

void PreListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PreListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pure() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_handler() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_options1() ); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_options2() ); }
		if (HX_FIELD_EQ(inName,"get_pure") ) { return hx::Val( get_pure_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pure") ) { return hx::Val( set_pure_dyn() ); }
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
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PreListener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pure(inValue.Cast< bool >()) ); }
		break;
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
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PreListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner_zn",22,84,fa,e0));
	outFields->push(HX_("options1",13,bf,6e,1e));
	outFields->push(HX_("options2",14,bf,6e,1e));
	outFields->push(HX_("pure",f8,10,61,4a));
	outFields->push(HX_("interactionType",ac,a7,c8,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo PreListener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::callbacks::ZPP_InteractionListener */ ,(int)offsetof(PreListener_obj,zpp_inner_zn),HX_("zpp_inner_zn",22,84,fa,e0)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PreListener_obj_sStaticStorageInfo = 0;
#endif

static ::String PreListener_obj_sMemberFields[] = {
	HX_("zpp_inner_zn",22,84,fa,e0),
	HX_("get_options1",1c,73,88,d3),
	HX_("set_options1",90,96,81,e8),
	HX_("get_options2",1d,73,88,d3),
	HX_("set_options2",91,96,81,e8),
	HX_("get_handler",e1,0f,d0,cb),
	HX_("set_handler",ed,16,3d,d6),
	HX_("get_pure",81,cc,1b,ca),
	HX_("set_pure",f5,25,79,78),
	HX_("get_interactionType",c3,76,d3,93),
	HX_("set_interactionType",cf,69,70,d0),
	::String(null()) };

hx::Class PreListener_obj::__mClass;

void PreListener_obj::__register()
{
	PreListener_obj _hx_dummy;
	PreListener_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.callbacks.PreListener",31,d2,67,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PreListener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PreListener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PreListener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PreListener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks
