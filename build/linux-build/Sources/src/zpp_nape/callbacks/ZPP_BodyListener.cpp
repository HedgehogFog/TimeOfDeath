// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <hxinc/nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <hxinc/nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <hxinc/nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <hxinc/nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <hxinc/zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <hxinc/zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <hxinc/zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <hxinc/zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <hxinc/zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <hxinc/zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_202_new,"zpp_nape.callbacks.ZPP_BodyListener","new",0xc407e6ae,"zpp_nape.callbacks.ZPP_BodyListener.new","zpp_nape/callbacks/Listener.hx",202,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_208_immutable_options,"zpp_nape.callbacks.ZPP_BodyListener","immutable_options",0x953c09ef,"zpp_nape.callbacks.ZPP_BodyListener.immutable_options","zpp_nape/callbacks/Listener.hx",208,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_221_addedToSpace,"zpp_nape.callbacks.ZPP_BodyListener","addedToSpace",0x2c79f45d,"zpp_nape.callbacks.ZPP_BodyListener.addedToSpace","zpp_nape/callbacks/Listener.hx",221,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_234_removedFromSpace,"zpp_nape.callbacks.ZPP_BodyListener","removedFromSpace",0xe996d42e,"zpp_nape.callbacks.ZPP_BodyListener.removedFromSpace","zpp_nape/callbacks/Listener.hx",234,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_247_cbtype_change,"zpp_nape.callbacks.ZPP_BodyListener","cbtype_change",0xbad29f24,"zpp_nape.callbacks.ZPP_BodyListener.cbtype_change","zpp_nape/callbacks/Listener.hx",247,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_253_invalidate_precedence,"zpp_nape.callbacks.ZPP_BodyListener","invalidate_precedence",0x49b8b75c,"zpp_nape.callbacks.ZPP_BodyListener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",253,0x87b155a7)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8e6c9c1d4d8cc_258_swapEvent,"zpp_nape.callbacks.ZPP_BodyListener","swapEvent",0xf1e49d55,"zpp_nape.callbacks.ZPP_BodyListener.swapEvent","zpp_nape/callbacks/Listener.hx",258,0x87b155a7)
namespace zpp_nape{
namespace callbacks{

void ZPP_BodyListener_obj::__construct( ::nape::callbacks::OptionType options,int event, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_202_new)
HXLINE( 205)		this->handler = null();
HXLINE( 204)		this->options = null();
HXLINE( 203)		this->outer_zn = null();
HXLINE( 214)		super::__construct();
HXLINE( 215)		this->event = event;
HXLINE( 216)		this->handler = handler;
HXLINE( 217)		this->body = hx::ObjectPtr<OBJ_>(this);
HXLINE( 218)		this->type = 0;
HXLINE( 219)		this->options = options->zpp_inner;
            	}

Dynamic ZPP_BodyListener_obj::__CreateEmpty() { return new ZPP_BodyListener_obj; }

void *ZPP_BodyListener_obj::_hx_vtable = 0;

Dynamic ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_BodyListener_obj > _hx_result = new ZPP_BodyListener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ZPP_BodyListener_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x43f05318) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x43f05318;
	} else {
		return inClassId==(int)0x763b4a3a;
	}
}

void ZPP_BodyListener_obj::immutable_options(){
            	HX_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_208_immutable_options)
HXDLIN( 208)		bool _hx_tmp;
HXDLIN( 208)		if (hx::IsNotNull( this->space )) {
HXDLIN( 208)			_hx_tmp = this->space->midstep;
            		}
            		else {
HXDLIN( 208)			_hx_tmp = false;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			HX_STACK_DO_THROW(HX_("Error: Cannot change listener type options during space.step()",17,01,c2,dc));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyListener_obj,immutable_options,(void))

void ZPP_BodyListener_obj::addedToSpace(){
            	HX_GC_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_221_addedToSpace)
HXLINE( 222)		this->options->handler = this->cbtype_change_dyn();
HXLINE( 223)		{
HXLINE( 224)			 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;
HXLINE( 225)			while(hx::IsNotNull( cx_ite )){
HXLINE( 226)				 ::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;
HXLINE( 228)				{
HXLINE( 228)					{
HXLINE( 228)						 ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();
HXDLIN( 228)						{
HXLINE( 228)							 ::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite1 = cb->bodylisteners->head;
HXDLIN( 228)							while(hx::IsNotNull( cx_ite1 )){
HXLINE( 228)								 ::zpp_nape::callbacks::ZPP_BodyListener j = cx_ite1->elt;
HXDLIN( 228)								{
HXLINE( 228)									bool _hx_tmp;
HXDLIN( 228)									if ((this->precedence <= j->precedence)) {
HXLINE( 228)										if ((this->precedence == j->precedence)) {
HXLINE( 228)											_hx_tmp = (this->id > j->id);
            										}
            										else {
HXLINE( 228)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 228)										_hx_tmp = true;
            									}
HXDLIN( 228)									if (_hx_tmp) {
HXLINE( 228)										goto _hx_goto_3;
            									}
HXDLIN( 228)									pre = cx_ite1;
            								}
HXDLIN( 228)								cx_ite1 = cx_ite1->next;
            							}
            							_hx_goto_3:;
            						}
HXDLIN( 228)						{
HXLINE( 228)							 ::zpp_nape::util::ZNPList_ZPP_BodyListener _this = cb->bodylisteners;
HXDLIN( 228)							 ::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;
HXDLIN( 228)							if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool )) {
HXLINE( 228)								ret =  ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 228)								ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
HXDLIN( 228)								::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
HXDLIN( 228)								ret->next = null();
            							}
HXDLIN( 228)							ret->elt = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 228)							 ::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = ret;
HXDLIN( 228)							if (hx::IsNull( pre )) {
HXLINE( 228)								temp->next = _this->head;
HXDLIN( 228)								_this->head = temp;
            							}
            							else {
HXLINE( 228)								temp->next = pre->next;
HXDLIN( 228)								pre->next = temp;
            							}
HXDLIN( 228)							_this->pushmod = (_this->modified = true);
HXDLIN( 228)							_this->length++;
            						}
            					}
HXDLIN( 228)					{
HXLINE( 228)						 ::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite2 = cb->cbsets->head;
HXDLIN( 228)						while(hx::IsNotNull( cx_ite2 )){
HXLINE( 228)							 ::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite2->elt;
HXDLIN( 228)							cb1->zip_bodylisteners = true;
HXDLIN( 228)							cx_ite2 = cx_ite2->next;
            						}
            					}
            				}
HXLINE( 230)				cx_ite = cx_ite->next;
            			}
            		}
            	}


void ZPP_BodyListener_obj::removedFromSpace(){
            	HX_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_234_removedFromSpace)
HXLINE( 235)		{
HXLINE( 236)			 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;
HXLINE( 237)			while(hx::IsNotNull( cx_ite )){
HXLINE( 238)				 ::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;
HXLINE( 240)				{
HXLINE( 240)					cb->bodylisteners->remove(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 240)					{
HXLINE( 240)						 ::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = cb->cbsets->head;
HXDLIN( 240)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 240)							 ::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;
HXDLIN( 240)							cb1->zip_bodylisteners = true;
HXDLIN( 240)							cx_ite1 = cx_ite1->next;
            						}
            					}
            				}
HXLINE( 242)				cx_ite = cx_ite->next;
            			}
            		}
HXLINE( 245)		this->options->handler = null();
            	}


void ZPP_BodyListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
            	HX_GC_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_247_cbtype_change)
HXLINE( 248)		this->removedFromSpace();
HXLINE( 249)		{
HXLINE( 249)			 ::zpp_nape::callbacks::ZPP_OptionType _this = this->options;
HXDLIN( 249)			if (included) {
HXLINE( 249)				if (added) {
HXLINE( 249)					 ::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();
HXDLIN( 249)					{
HXLINE( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = _this->includes->head;
HXDLIN( 249)						while(hx::IsNotNull( cx_ite )){
HXLINE( 249)							 ::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;
HXDLIN( 249)							{
HXLINE( 249)								if ((cb->id < j->id)) {
HXLINE( 249)									goto _hx_goto_9;
            								}
HXDLIN( 249)								pre = cx_ite;
            							}
HXDLIN( 249)							cx_ite = cx_ite->next;
            						}
            						_hx_goto_9:;
            					}
HXDLIN( 249)					{
HXLINE( 249)						 ::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->includes;
HXDLIN( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType ret;
HXDLIN( 249)						if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 249)							ret =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 249)							ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 249)							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
HXDLIN( 249)							ret->next = null();
            						}
HXDLIN( 249)						ret->elt = cb;
HXDLIN( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType temp = ret;
HXDLIN( 249)						if (hx::IsNull( pre )) {
HXLINE( 249)							temp->next = _this1->head;
HXDLIN( 249)							_this1->head = temp;
            						}
            						else {
HXLINE( 249)							temp->next = pre->next;
HXDLIN( 249)							pre->next = temp;
            						}
HXDLIN( 249)						_this1->pushmod = (_this1->modified = true);
HXDLIN( 249)						_this1->length++;
            					}
            				}
            				else {
HXLINE( 249)					_this->includes->remove(cb);
            				}
            			}
            			else {
HXLINE( 249)				if (added) {
HXLINE( 249)					 ::zpp_nape::util::ZNPNode_ZPP_CbType pre1 = null();
HXDLIN( 249)					{
HXLINE( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite1 = _this->excludes->head;
HXDLIN( 249)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 249)							 ::zpp_nape::callbacks::ZPP_CbType j1 = cx_ite1->elt;
HXDLIN( 249)							{
HXLINE( 249)								if ((cb->id < j1->id)) {
HXLINE( 249)									goto _hx_goto_10;
            								}
HXDLIN( 249)								pre1 = cx_ite1;
            							}
HXDLIN( 249)							cx_ite1 = cx_ite1->next;
            						}
            						_hx_goto_10:;
            					}
HXDLIN( 249)					{
HXLINE( 249)						 ::zpp_nape::util::ZNPList_ZPP_CbType _this2 = _this->excludes;
HXDLIN( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType ret1;
HXDLIN( 249)						if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 249)							ret1 =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 249)							ret1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 249)							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret1->next;
HXDLIN( 249)							ret1->next = null();
            						}
HXDLIN( 249)						ret1->elt = cb;
HXDLIN( 249)						 ::zpp_nape::util::ZNPNode_ZPP_CbType temp1 = ret1;
HXDLIN( 249)						if (hx::IsNull( pre1 )) {
HXLINE( 249)							temp1->next = _this2->head;
HXDLIN( 249)							_this2->head = temp1;
            						}
            						else {
HXLINE( 249)							temp1->next = pre1->next;
HXDLIN( 249)							pre1->next = temp1;
            						}
HXDLIN( 249)						_this2->pushmod = (_this2->modified = true);
HXDLIN( 249)						_this2->length++;
            					}
            				}
            				else {
HXLINE( 249)					_this->excludes->remove(cb);
            				}
            			}
            		}
HXLINE( 250)		this->addedToSpace();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_BodyListener_obj,cbtype_change,(void))

void ZPP_BodyListener_obj::invalidate_precedence(){
            	HX_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_253_invalidate_precedence)
HXDLIN( 253)		if (hx::IsNotNull( this->space )) {
HXLINE( 254)			this->removedFromSpace();
HXLINE( 255)			this->addedToSpace();
            		}
            	}


void ZPP_BodyListener_obj::swapEvent(int newev){
            	HX_STACKFRAME(&_hx_pos_01c8e6c9c1d4d8cc_258_swapEvent)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		if ((newev != 2)) {
HXLINE( 260)			_hx_tmp = (newev != 3);
            		}
            		else {
HXLINE( 260)			_hx_tmp = false;
            		}
HXDLIN( 260)		if (_hx_tmp) {
HXLINE( 261)			HX_STACK_DO_THROW(HX_("Error: BodyListener event must be either WAKE or SLEEP only",e9,56,bc,02));
            		}
HXLINE( 264)		this->removedFromSpace();
HXLINE( 265)		this->event = newev;
HXLINE( 266)		this->addedToSpace();
            	}



hx::ObjectPtr< ZPP_BodyListener_obj > ZPP_BodyListener_obj::__new( ::nape::callbacks::OptionType options,int event, ::Dynamic handler) {
	hx::ObjectPtr< ZPP_BodyListener_obj > __this = new ZPP_BodyListener_obj();
	__this->__construct(options,event,handler);
	return __this;
}

hx::ObjectPtr< ZPP_BodyListener_obj > ZPP_BodyListener_obj::__alloc(hx::Ctx *_hx_ctx, ::nape::callbacks::OptionType options,int event, ::Dynamic handler) {
	ZPP_BodyListener_obj *__this = (ZPP_BodyListener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_BodyListener_obj), true, "zpp_nape.callbacks.ZPP_BodyListener"));
	*(void **)__this = ZPP_BodyListener_obj::_hx_vtable;
	__this->__construct(options,event,handler);
	return __this;
}

ZPP_BodyListener_obj::ZPP_BodyListener_obj()
{
}

void ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(handler,"handler");
	 ::zpp_nape::callbacks::ZPP_Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	 ::zpp_nape::callbacks::ZPP_Listener_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ZPP_BodyListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"handler") ) { return hx::Val( handler ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return hx::Val( outer_zn ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return hx::Val( swapEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return hx::Val( addedToSpace_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return hx::Val( cbtype_change_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return hx::Val( removedFromSpace_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_options") ) { return hx::Val( immutable_options_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return hx::Val( invalidate_precedence_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ZPP_BodyListener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast<  ::nape::callbacks::BodyListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("outer_zn",38,07,b0,a2));
	outFields->push(HX_("options",5e,33,fe,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_BodyListener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::callbacks::BodyListener */ ,(int)offsetof(ZPP_BodyListener_obj,outer_zn),HX_("outer_zn",38,07,b0,a2)},
	{hx::fsObject /*  ::zpp_nape::callbacks::ZPP_OptionType */ ,(int)offsetof(ZPP_BodyListener_obj,options),HX_("options",5e,33,fe,df)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_BodyListener_obj,handler),HX_("handler",ca,af,d5,45)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ZPP_BodyListener_obj_sStaticStorageInfo = 0;
#endif

static ::String ZPP_BodyListener_obj_sMemberFields[] = {
	HX_("outer_zn",38,07,b0,a2),
	HX_("options",5e,33,fe,df),
	HX_("handler",ca,af,d5,45),
	HX_("immutable_options",21,c7,22,3a),
	HX_("addedToSpace",6b,44,b0,09),
	HX_("removedFromSpace",3c,43,d1,b7),
	HX_("cbtype_change",56,5b,22,6d),
	HX_("invalidate_precedence",8e,f5,4a,df),
	HX_("swapEvent",87,d8,71,eb),
	::String(null()) };

hx::Class ZPP_BodyListener_obj::__mClass;

void ZPP_BodyListener_obj::__register()
{
	ZPP_BodyListener_obj _hx_dummy;
	ZPP_BodyListener_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.callbacks.ZPP_BodyListener",bc,b7,4f,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_BodyListener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_BodyListener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_BodyListener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_BodyListener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace callbacks