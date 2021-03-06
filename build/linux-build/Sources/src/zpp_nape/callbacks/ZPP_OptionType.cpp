// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <hxinc/nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <hxinc/nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <hxinc/nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <hxinc/nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <hxinc/zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <hxinc/zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <hxinc/zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <hxinc/zpp_nape/util/ZPP_CbTypeList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f2328050a6f70bc4_174_new,"zpp_nape.callbacks.ZPP_OptionType","new",0xd0c14147,"zpp_nape.callbacks.ZPP_OptionType.new","zpp_nape/callbacks/OptionType.hx",174,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_186_setup_includes,"zpp_nape.callbacks.ZPP_OptionType","setup_includes",0x67e8f106,"zpp_nape.callbacks.ZPP_OptionType.setup_includes","zpp_nape/callbacks/OptionType.hx",186,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_189_setup_excludes,"zpp_nape.callbacks.ZPP_OptionType","setup_excludes",0x22f5cc14,"zpp_nape.callbacks.ZPP_OptionType.setup_excludes","zpp_nape/callbacks/OptionType.hx",189,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_193_excluded,"zpp_nape.callbacks.ZPP_OptionType","excluded",0xfa812a03,"zpp_nape.callbacks.ZPP_OptionType.excluded","zpp_nape/callbacks/OptionType.hx",193,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_197_included,"zpp_nape.callbacks.ZPP_OptionType","included",0x3f744ef5,"zpp_nape.callbacks.ZPP_OptionType.included","zpp_nape/callbacks/OptionType.hx",197,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_201_compatible,"zpp_nape.callbacks.ZPP_OptionType","compatible",0xadc8654d,"zpp_nape.callbacks.ZPP_OptionType.compatible","zpp_nape/callbacks/OptionType.hx",201,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_203_nonemptyintersection,"zpp_nape.callbacks.ZPP_OptionType","nonemptyintersection",0xab2c3fe2,"zpp_nape.callbacks.ZPP_OptionType.nonemptyintersection","zpp_nape/callbacks/OptionType.hx",203,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_226_effect_change,"zpp_nape.callbacks.ZPP_OptionType","effect_change",0xa3a46445,"zpp_nape.callbacks.ZPP_OptionType.effect_change","zpp_nape/callbacks/OptionType.hx",226,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_264_append_type,"zpp_nape.callbacks.ZPP_OptionType","append_type",0x24966666,"zpp_nape.callbacks.ZPP_OptionType.append_type","zpp_nape/callbacks/OptionType.hx",264,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_289_set,"zpp_nape.callbacks.ZPP_OptionType","set",0xd0c50c89,"zpp_nape.callbacks.ZPP_OptionType.set","zpp_nape/callbacks/OptionType.hx",289,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_312_append,"zpp_nape.callbacks.ZPP_OptionType","append",0xa21cbb53,"zpp_nape.callbacks.ZPP_OptionType.append","zpp_nape/callbacks/OptionType.hx",312,0xf757a16c)
HX_LOCAL_STACK_FRAME(_hx_pos_f2328050a6f70bc4_351_argument,"zpp_nape.callbacks.ZPP_OptionType","argument",0xdef65836,"zpp_nape.callbacks.ZPP_OptionType.argument","zpp_nape/callbacks/OptionType.hx",351,0xf757a16c)
namespace zpp_nape{
namespace callbacks{

void ZPP_OptionType_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f2328050a6f70bc4_174_new)
HXLINE( 184)		this->wrap_excludes = null();
HXLINE( 183)		this->wrap_includes = null();
HXLINE( 178)		this->excludes = null();
HXLINE( 177)		this->includes = null();
HXLINE( 176)		this->handler = null();
HXLINE( 175)		this->outer = null();
HXLINE( 180)		this->includes =  ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__alloc( HX_CTX );
HXLINE( 181)		this->excludes =  ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__alloc( HX_CTX );
            	}

Dynamic ZPP_OptionType_obj::__CreateEmpty() { return new ZPP_OptionType_obj; }

void *ZPP_OptionType_obj::_hx_vtable = 0;

Dynamic ZPP_OptionType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_OptionType_obj > _hx_result = new ZPP_OptionType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_OptionType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ce81815;
}

void ZPP_OptionType_obj::setup_includes(){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_186_setup_includes)
HXDLIN( 186)		this->wrap_includes = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->includes,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_includes,(void))

void ZPP_OptionType_obj::setup_excludes(){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_189_setup_excludes)
HXDLIN( 189)		this->wrap_excludes = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->excludes,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_excludes,(void))

bool ZPP_OptionType_obj::excluded( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_193_excluded)
HXDLIN( 193)		return this->nonemptyintersection(xs,this->excludes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,excluded,return )

bool ZPP_OptionType_obj::included( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_197_included)
HXDLIN( 197)		return this->nonemptyintersection(xs,this->includes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,included,return )

bool ZPP_OptionType_obj::compatible( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_201_compatible)
HXDLIN( 201)		if (this->nonemptyintersection(xs,this->includes)) {
HXDLIN( 201)			return !(this->nonemptyintersection(xs,this->excludes));
            		}
            		else {
HXDLIN( 201)			return false;
            		}
HXDLIN( 201)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,compatible,return )

bool ZPP_OptionType_obj::nonemptyintersection( ::zpp_nape::util::ZNPList_ZPP_CbType xs, ::zpp_nape::util::ZNPList_ZPP_CbType ys){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_203_nonemptyintersection)
HXLINE( 204)		bool ret = false;
HXLINE( 205)		 ::zpp_nape::util::ZNPNode_ZPP_CbType xite = xs->head;
HXLINE( 206)		 ::zpp_nape::util::ZNPNode_ZPP_CbType eite = ys->head;
HXLINE( 207)		while(true){
HXLINE( 207)			bool _hx_tmp;
HXDLIN( 207)			if (hx::IsNotNull( eite )) {
HXLINE( 207)				_hx_tmp = hx::IsNotNull( xite );
            			}
            			else {
HXLINE( 207)				_hx_tmp = false;
            			}
HXDLIN( 207)			if (!(_hx_tmp)) {
HXLINE( 207)				goto _hx_goto_6;
            			}
HXLINE( 208)			 ::zpp_nape::callbacks::ZPP_CbType ex = eite->elt;
HXLINE( 209)			 ::zpp_nape::callbacks::ZPP_CbType xi = xite->elt;
HXLINE( 210)			if (hx::IsEq( ex,xi )) {
HXLINE( 211)				ret = true;
HXLINE( 212)				goto _hx_goto_6;
            			}
            			else {
HXLINE( 214)				if ((ex->id < xi->id)) {
HXLINE( 215)					eite = eite->next;
            				}
            				else {
HXLINE( 218)					xite = xite->next;
            				}
            			}
            		}
            		_hx_goto_6:;
HXLINE( 221)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,nonemptyintersection,return )

void ZPP_OptionType_obj::effect_change( ::zpp_nape::callbacks::ZPP_CbType val,bool included,bool added){
            	HX_GC_STACKFRAME(&_hx_pos_f2328050a6f70bc4_226_effect_change)
HXDLIN( 226)		if (included) {
HXLINE( 227)			if (added) {
HXLINE( 228)				 ::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();
HXLINE( 229)				{
HXLINE( 230)					 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->includes->head;
HXLINE( 231)					while(hx::IsNotNull( cx_ite )){
HXLINE( 232)						 ::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;
HXLINE( 233)						{
HXLINE( 234)							if ((val->id < j->id)) {
HXLINE( 234)								goto _hx_goto_8;
            							}
HXLINE( 235)							pre = cx_ite;
            						}
HXLINE( 237)						cx_ite = cx_ite->next;
            					}
            					_hx_goto_8:;
            				}
HXLINE( 240)				{
HXLINE( 240)					 ::zpp_nape::util::ZNPList_ZPP_CbType _this = this->includes;
HXDLIN( 240)					 ::zpp_nape::util::ZNPNode_ZPP_CbType ret;
HXDLIN( 240)					if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 240)						ret =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 240)						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 240)						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
HXDLIN( 240)						ret->next = null();
            					}
HXDLIN( 240)					ret->elt = val;
HXDLIN( 240)					 ::zpp_nape::util::ZNPNode_ZPP_CbType temp = ret;
HXDLIN( 240)					if (hx::IsNull( pre )) {
HXLINE( 240)						temp->next = _this->head;
HXDLIN( 240)						_this->head = temp;
            					}
            					else {
HXLINE( 240)						temp->next = pre->next;
HXDLIN( 240)						pre->next = temp;
            					}
HXDLIN( 240)					_this->pushmod = (_this->modified = true);
HXDLIN( 240)					_this->length++;
            				}
            			}
            			else {
HXLINE( 242)				this->includes->remove(val);
            			}
            		}
            		else {
HXLINE( 245)			if (added) {
HXLINE( 246)				 ::zpp_nape::util::ZNPNode_ZPP_CbType pre1 = null();
HXLINE( 247)				{
HXLINE( 248)					 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite1 = this->excludes->head;
HXLINE( 249)					while(hx::IsNotNull( cx_ite1 )){
HXLINE( 250)						 ::zpp_nape::callbacks::ZPP_CbType j1 = cx_ite1->elt;
HXLINE( 251)						{
HXLINE( 252)							if ((val->id < j1->id)) {
HXLINE( 252)								goto _hx_goto_9;
            							}
HXLINE( 253)							pre1 = cx_ite1;
            						}
HXLINE( 255)						cx_ite1 = cx_ite1->next;
            					}
            					_hx_goto_9:;
            				}
HXLINE( 258)				{
HXLINE( 258)					 ::zpp_nape::util::ZNPList_ZPP_CbType _this1 = this->excludes;
HXDLIN( 258)					 ::zpp_nape::util::ZNPNode_ZPP_CbType ret1;
HXDLIN( 258)					if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 258)						ret1 =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 258)						ret1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 258)						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret1->next;
HXDLIN( 258)						ret1->next = null();
            					}
HXDLIN( 258)					ret1->elt = val;
HXDLIN( 258)					 ::zpp_nape::util::ZNPNode_ZPP_CbType temp1 = ret1;
HXDLIN( 258)					if (hx::IsNull( pre1 )) {
HXLINE( 258)						temp1->next = _this1->head;
HXDLIN( 258)						_this1->head = temp1;
            					}
            					else {
HXLINE( 258)						temp1->next = pre1->next;
HXDLIN( 258)						pre1->next = temp1;
            					}
HXDLIN( 258)					_this1->pushmod = (_this1->modified = true);
HXDLIN( 258)					_this1->length++;
            				}
            			}
            			else {
HXLINE( 260)				this->excludes->remove(val);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_OptionType_obj,effect_change,(void))

void ZPP_OptionType_obj::append_type( ::zpp_nape::util::ZNPList_ZPP_CbType list, ::zpp_nape::callbacks::ZPP_CbType val){
            	HX_GC_STACKFRAME(&_hx_pos_f2328050a6f70bc4_264_append_type)
HXDLIN( 264)		if (hx::IsEq( list,this->includes )) {
HXLINE( 265)			if (!(this->includes->has(val))) {
HXLINE( 266)				if (!(this->excludes->has(val))) {
HXLINE( 267)					if (hx::IsNotNull( this->handler )) {
HXLINE( 267)						this->handler(val,true,true);
            					}
            					else {
HXLINE( 268)						 ::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();
HXDLIN( 268)						{
HXLINE( 268)							 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->includes->head;
HXDLIN( 268)							while(hx::IsNotNull( cx_ite )){
HXLINE( 268)								 ::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;
HXDLIN( 268)								{
HXLINE( 268)									if ((val->id < j->id)) {
HXLINE( 268)										goto _hx_goto_11;
            									}
HXDLIN( 268)									pre = cx_ite;
            								}
HXDLIN( 268)								cx_ite = cx_ite->next;
            							}
            							_hx_goto_11:;
            						}
HXDLIN( 268)						{
HXLINE( 268)							 ::zpp_nape::util::ZNPList_ZPP_CbType _this = this->includes;
HXDLIN( 268)							 ::zpp_nape::util::ZNPNode_ZPP_CbType ret;
HXDLIN( 268)							if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 268)								ret =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 268)								ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 268)								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
HXDLIN( 268)								ret->next = null();
            							}
HXDLIN( 268)							ret->elt = val;
HXDLIN( 268)							 ::zpp_nape::util::ZNPNode_ZPP_CbType temp = ret;
HXDLIN( 268)							if (hx::IsNull( pre )) {
HXLINE( 268)								temp->next = _this->head;
HXDLIN( 268)								_this->head = temp;
            							}
            							else {
HXLINE( 268)								temp->next = pre->next;
HXDLIN( 268)								pre->next = temp;
            							}
HXDLIN( 268)							_this->pushmod = (_this->modified = true);
HXDLIN( 268)							_this->length++;
            						}
            					}
            				}
            				else {
HXLINE( 271)					if (hx::IsNotNull( this->handler )) {
HXLINE( 271)						this->handler(val,false,false);
            					}
            					else {
HXLINE( 272)						this->excludes->remove(val);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 277)			if (!(this->excludes->has(val))) {
HXLINE( 278)				if (!(this->includes->has(val))) {
HXLINE( 279)					if (hx::IsNotNull( this->handler )) {
HXLINE( 279)						this->handler(val,false,true);
            					}
            					else {
HXLINE( 280)						 ::zpp_nape::util::ZNPNode_ZPP_CbType pre1 = null();
HXDLIN( 280)						{
HXLINE( 280)							 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite1 = this->excludes->head;
HXDLIN( 280)							while(hx::IsNotNull( cx_ite1 )){
HXLINE( 280)								 ::zpp_nape::callbacks::ZPP_CbType j1 = cx_ite1->elt;
HXDLIN( 280)								{
HXLINE( 280)									if ((val->id < j1->id)) {
HXLINE( 280)										goto _hx_goto_12;
            									}
HXDLIN( 280)									pre1 = cx_ite1;
            								}
HXDLIN( 280)								cx_ite1 = cx_ite1->next;
            							}
            							_hx_goto_12:;
            						}
HXDLIN( 280)						{
HXLINE( 280)							 ::zpp_nape::util::ZNPList_ZPP_CbType _this1 = this->excludes;
HXDLIN( 280)							 ::zpp_nape::util::ZNPNode_ZPP_CbType ret1;
HXDLIN( 280)							if (hx::IsNull( ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool )) {
HXLINE( 280)								ret1 =  ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 280)								ret1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
HXDLIN( 280)								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret1->next;
HXDLIN( 280)								ret1->next = null();
            							}
HXDLIN( 280)							ret1->elt = val;
HXDLIN( 280)							 ::zpp_nape::util::ZNPNode_ZPP_CbType temp1 = ret1;
HXDLIN( 280)							if (hx::IsNull( pre1 )) {
HXLINE( 280)								temp1->next = _this1->head;
HXDLIN( 280)								_this1->head = temp1;
            							}
            							else {
HXLINE( 280)								temp1->next = pre1->next;
HXDLIN( 280)								pre1->next = temp1;
            							}
HXDLIN( 280)							_this1->pushmod = (_this1->modified = true);
HXDLIN( 280)							_this1->length++;
            						}
            					}
            				}
            				else {
HXLINE( 283)					if (hx::IsNotNull( this->handler )) {
HXLINE( 283)						this->handler(val,true,false);
            					}
            					else {
HXLINE( 284)						this->includes->remove(val);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append_type,(void))

 ::zpp_nape::callbacks::ZPP_OptionType ZPP_OptionType_obj::set( ::zpp_nape::callbacks::ZPP_OptionType options){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_289_set)
HXLINE( 290)		if (hx::IsNotEq( options,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 291)			while(hx::IsNotNull( this->includes->head )){
HXLINE( 291)				this->append_type(this->excludes,this->includes->head->elt);
            			}
HXLINE( 292)			while(hx::IsNotNull( this->excludes->head )){
HXLINE( 292)				this->append_type(this->includes,this->excludes->head->elt);
            			}
HXLINE( 293)			{
HXLINE( 294)				 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->excludes->head;
HXLINE( 295)				while(hx::IsNotNull( cx_ite )){
HXLINE( 296)					 ::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;
HXLINE( 297)					this->append_type(this->excludes,i);
HXLINE( 298)					cx_ite = cx_ite->next;
            				}
            			}
HXLINE( 301)			{
HXLINE( 302)				 ::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite1 = options->includes->head;
HXLINE( 303)				while(hx::IsNotNull( cx_ite1 )){
HXLINE( 304)					 ::zpp_nape::callbacks::ZPP_CbType i1 = cx_ite1->elt;
HXLINE( 305)					this->append_type(this->includes,i1);
HXLINE( 306)					cx_ite1 = cx_ite1->next;
            				}
            			}
            		}
HXLINE( 310)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,set,return )

void ZPP_OptionType_obj::append( ::zpp_nape::util::ZNPList_ZPP_CbType list, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_f2328050a6f70bc4_312_append)
HXLINE( 314)		if (hx::IsNull( val )) {
HXLINE( 315)			HX_STACK_DO_THROW(HX_("Error: Cannot append null, only CbType and CbType list values",4b,7a,6f,99));
            		}
HXLINE( 318)		if (::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::CbType >())) {
HXLINE( 319)			 ::nape::callbacks::CbType cb = ( ( ::nape::callbacks::CbType)(val) );
HXLINE( 320)			this->append_type(list,cb->zpp_inner);
            		}
            		else {
HXLINE( 322)			if (::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::CbTypeList >())) {
HXLINE( 323)				 ::nape::callbacks::CbTypeList cbs = ( ( ::nape::callbacks::CbTypeList)(val) );
HXLINE( 324)				{
HXLINE( 324)					cbs->zpp_inner->valmod();
HXDLIN( 324)					 ::nape::callbacks::CbTypeIterator _g = ::nape::callbacks::CbTypeIterator_obj::get(cbs);
HXDLIN( 324)					while(true){
HXLINE( 324)						_g->zpp_inner->zpp_inner->valmod();
HXDLIN( 324)						 ::nape::callbacks::CbTypeList _this = _g->zpp_inner;
HXDLIN( 324)						_this->zpp_inner->valmod();
HXDLIN( 324)						if (_this->zpp_inner->zip_length) {
HXLINE( 324)							_this->zpp_inner->zip_length = false;
HXDLIN( 324)							_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
            						}
HXDLIN( 324)						int length = _this->zpp_inner->user_length;
HXDLIN( 324)						_g->zpp_critical = true;
HXDLIN( 324)						bool _hx_tmp;
HXDLIN( 324)						if ((_g->zpp_i < length)) {
HXLINE( 324)							_hx_tmp = true;
            						}
            						else {
HXLINE( 324)							{
HXLINE( 324)								_g->zpp_next = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;
HXDLIN( 324)								::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
HXDLIN( 324)								_g->zpp_inner = null();
            							}
HXDLIN( 324)							_hx_tmp = false;
            						}
HXDLIN( 324)						if (!(_hx_tmp)) {
HXLINE( 324)							goto _hx_goto_19;
            						}
HXDLIN( 324)						_g->zpp_critical = false;
HXDLIN( 324)						 ::nape::callbacks::CbType cb1 = _g->zpp_inner->at(_g->zpp_i++);
HXDLIN( 324)						this->append_type(list,cb1->zpp_inner);
            					}
            					_hx_goto_19:;
            				}
            			}
            			else {
HXLINE( 332)				if (::Std_obj::is(val,hx::ArrayBase::__mClass)) {
HXLINE( 333)					::cpp::VirtualArray cbs1 = ( (::cpp::VirtualArray)(val) );
HXLINE( 334)					{
HXLINE( 334)						int _g1 = 0;
HXDLIN( 334)						while((_g1 < cbs1->get_length())){
HXLINE( 334)							 ::Dynamic cb2 = cbs1->__get(_g1);
HXDLIN( 334)							_g1 = (_g1 + 1);
HXLINE( 336)							if (!(::Std_obj::is(cb2,hx::ClassOf< ::nape::callbacks::CbType >()))) {
HXLINE( 337)								HX_STACK_DO_THROW(HX_("Error: Cannot append non-CbType or CbType list value",89,bf,a8,c4));
            							}
HXLINE( 340)							 ::nape::callbacks::CbType cbx = ( ( ::nape::callbacks::CbType)(cb2) );
HXLINE( 341)							this->append_type(list,cbx->zpp_inner);
            						}
            					}
            				}
            				else {
HXLINE( 346)					HX_STACK_DO_THROW(HX_("Error: Cannot append non-CbType or CbType list value",89,bf,a8,c4));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append,(void))

 ::nape::callbacks::OptionType ZPP_OptionType_obj::argument( ::Dynamic val){
            	HX_GC_STACKFRAME(&_hx_pos_f2328050a6f70bc4_351_argument)
HXDLIN( 351)		if (hx::IsNull( val )) {
HXDLIN( 351)			return  ::nape::callbacks::OptionType_obj::__alloc( HX_CTX ,null(),null());
            		}
            		else {
HXLINE( 352)			if (::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::OptionType >())) {
HXLINE( 352)				return ( ( ::nape::callbacks::OptionType)(val) );
            			}
            			else {
HXLINE( 353)				return  ::nape::callbacks::OptionType_obj::__alloc( HX_CTX ,null(),null())->including(val);
            			}
            		}
HXLINE( 351)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,argument,return )


hx::ObjectPtr< ZPP_OptionType_obj > ZPP_OptionType_obj::__new() {
	hx::ObjectPtr< ZPP_OptionType_obj > __this = new ZPP_OptionType_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_OptionType_obj > ZPP_OptionType_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_OptionType_obj *__this = (ZPP_OptionType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_OptionType_obj), true, "zpp_nape.callbacks.ZPP_OptionType"));
	*(void **)__this = ZPP_OptionType_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_OptionType_obj::ZPP_OptionType_obj()
{
}

void ZPP_OptionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_OptionType);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(includes,"includes");
	HX_MARK_MEMBER_NAME(excludes,"excludes");
	HX_MARK_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_MARK_MEMBER_NAME(wrap_excludes,"wrap_excludes");
	HX_MARK_END_CLASS();
}

void ZPP_OptionType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(includes,"includes");
	HX_VISIT_MEMBER_NAME(excludes,"excludes");
	HX_VISIT_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_VISIT_MEMBER_NAME(wrap_excludes,"wrap_excludes");
}

hx::Val ZPP_OptionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return hx::Val( outer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return hx::Val( append_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return hx::Val( handler ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { return hx::Val( includes ); }
		if (HX_FIELD_EQ(inName,"excludes") ) { return hx::Val( excludes ); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return hx::Val( excluded_dyn() ); }
		if (HX_FIELD_EQ(inName,"included") ) { return hx::Val( included_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { return hx::Val( compatible_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"append_type") ) { return hx::Val( append_type_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { return hx::Val( wrap_includes ); }
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { return hx::Val( wrap_excludes ); }
		if (HX_FIELD_EQ(inName,"effect_change") ) { return hx::Val( effect_change_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setup_includes") ) { return hx::Val( setup_includes_dyn() ); }
		if (HX_FIELD_EQ(inName,"setup_excludes") ) { return hx::Val( setup_excludes_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nonemptyintersection") ) { return hx::Val( nonemptyintersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_OptionType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { outValue = argument_dyn(); return true; }
	}
	return false;
}

hx::Val ZPP_OptionType_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::callbacks::OptionType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { includes=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"excludes") ) { excludes=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { wrap_includes=inValue.Cast<  ::nape::callbacks::CbTypeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { wrap_excludes=inValue.Cast<  ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_OptionType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("outer",7b,b8,28,37));
	outFields->push(HX_("includes",4b,65,27,66));
	outFields->push(HX_("excludes",59,40,34,21));
	outFields->push(HX_("wrap_includes",a0,99,51,56));
	outFields->push(HX_("wrap_excludes",ae,74,5e,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_OptionType_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::callbacks::OptionType */ ,(int)offsetof(ZPP_OptionType_obj,outer),HX_("outer",7b,b8,28,37)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_OptionType_obj,handler),HX_("handler",ca,af,d5,45)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPList_ZPP_CbType */ ,(int)offsetof(ZPP_OptionType_obj,includes),HX_("includes",4b,65,27,66)},
	{hx::fsObject /*  ::zpp_nape::util::ZNPList_ZPP_CbType */ ,(int)offsetof(ZPP_OptionType_obj,excludes),HX_("excludes",59,40,34,21)},
	{hx::fsObject /*  ::nape::callbacks::CbTypeList */ ,(int)offsetof(ZPP_OptionType_obj,wrap_includes),HX_("wrap_includes",a0,99,51,56)},
	{hx::fsObject /*  ::nape::callbacks::CbTypeList */ ,(int)offsetof(ZPP_OptionType_obj,wrap_excludes),HX_("wrap_excludes",ae,74,5e,11)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ZPP_OptionType_obj_sStaticStorageInfo = 0;
#endif

static ::String ZPP_OptionType_obj_sMemberFields[] = {
	HX_("outer",7b,b8,28,37),
	HX_("handler",ca,af,d5,45),
	HX_("includes",4b,65,27,66),
	HX_("excludes",59,40,34,21),
	HX_("wrap_includes",a0,99,51,56),
	HX_("wrap_excludes",ae,74,5e,11),
	HX_("setup_includes",8d,76,84,77),
	HX_("setup_excludes",9b,51,91,32),
	HX_("excluded",4a,40,34,21),
	HX_("included",3c,65,27,66),
	HX_("compatible",54,db,22,38),
	HX_("nonemptyintersection",a9,24,8b,75),
	HX_("effect_change",9e,2c,58,91),
	HX_("append_type",7f,36,63,a9),
	HX_("set",a2,9b,57,00),
	HX_("append",da,e1,d3,8f),
	::String(null()) };

hx::Class ZPP_OptionType_obj::__mClass;

static ::String ZPP_OptionType_obj_sStaticFields[] = {
	HX_("argument",7d,6e,a9,05),
	::String(null())
};

void ZPP_OptionType_obj::__register()
{
	ZPP_OptionType_obj _hx_dummy;
	ZPP_OptionType_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.callbacks.ZPP_OptionType",d5,91,0f,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_OptionType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_OptionType_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_OptionType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_OptionType_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_OptionType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_OptionType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace callbacks
