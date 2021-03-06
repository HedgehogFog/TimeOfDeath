// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <hxinc/nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <hxinc/nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <hxinc/nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <hxinc/nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <hxinc/nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <hxinc/nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <hxinc/nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <hxinc/nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <hxinc/zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <hxinc/zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <hxinc/zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <hxinc/zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <hxinc/zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <hxinc/zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60cc59ec252df1ea_180_new,"nape.dynamics.Arbiter","new",0xe76def27,"nape.dynamics.Arbiter.new","nape/dynamics/Arbiter.hx",180,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_192_get_isSleeping,"nape.dynamics.Arbiter","get_isSleeping",0x2704cb17,"nape.dynamics.Arbiter.get_isSleeping","nape/dynamics/Arbiter.hx",192,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_204_get_type,"nape.dynamics.Arbiter","get_type",0x2d419e1c,"nape.dynamics.Arbiter.get_type","nape/dynamics/Arbiter.hx",204,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_215_isCollisionArbiter,"nape.dynamics.Arbiter","isCollisionArbiter",0xe3eed6ba,"nape.dynamics.Arbiter.isCollisionArbiter","nape/dynamics/Arbiter.hx",215,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_226_isFluidArbiter,"nape.dynamics.Arbiter","isFluidArbiter",0x41f1faa2,"nape.dynamics.Arbiter.isFluidArbiter","nape/dynamics/Arbiter.hx",226,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_237_isSensorArbiter,"nape.dynamics.Arbiter","isSensorArbiter",0x9140c7cc,"nape.dynamics.Arbiter.isSensorArbiter","nape/dynamics/Arbiter.hx",237,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_247_get_collisionArbiter,"nape.dynamics.Arbiter","get_collisionArbiter",0x65c547f9,"nape.dynamics.Arbiter.get_collisionArbiter","nape/dynamics/Arbiter.hx",247,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_257_get_fluidArbiter,"nape.dynamics.Arbiter","get_fluidArbiter",0xff492061,"nape.dynamics.Arbiter.get_fluidArbiter","nape/dynamics/Arbiter.hx",257,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_266_get_shape1,"nape.dynamics.Arbiter","get_shape1",0xfd6da1d2,"nape.dynamics.Arbiter.get_shape1","nape/dynamics/Arbiter.hx",266,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_279_get_shape2,"nape.dynamics.Arbiter","get_shape2",0xfd6da1d3,"nape.dynamics.Arbiter.get_shape2","nape/dynamics/Arbiter.hx",279,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_292_get_body1,"nape.dynamics.Arbiter","get_body1",0x084d1dad,"nape.dynamics.Arbiter.get_body1","nape/dynamics/Arbiter.hx",292,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_305_get_body2,"nape.dynamics.Arbiter","get_body2",0x084d1dae,"nape.dynamics.Arbiter.get_body2","nape/dynamics/Arbiter.hx",305,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_323_get_state,"nape.dynamics.Arbiter","get_state",0xd568c06f,"nape.dynamics.Arbiter.get_state","nape/dynamics/Arbiter.hx",323,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_350_totalImpulse,"nape.dynamics.Arbiter","totalImpulse",0xb05135aa,"nape.dynamics.Arbiter.totalImpulse","nape/dynamics/Arbiter.hx",350,0x42fd8209)
HX_LOCAL_STACK_FRAME(_hx_pos_60cc59ec252df1ea_372_toString,"nape.dynamics.Arbiter","toString",0x98ecc085,"nape.dynamics.Arbiter.toString","nape/dynamics/Arbiter.hx",372,0x42fd8209)
static const ::String _hx_array_data_8797cfb5_15[] = {
	HX_("SD",91,48,00,00),HX_("DD",80,3b,00,00),
};
namespace nape{
namespace dynamics{

void Arbiter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_180_new)
HXLINE( 184)		this->zpp_inner = null();
HXLINE( 363)		if (!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal)) {
HXLINE( 365)			HX_STACK_DO_THROW(HX_("Error: Cannot instantiate Arbiter derp!",46,e5,f3,4a));
            		}
            	}

Dynamic Arbiter_obj::__CreateEmpty() { return new Arbiter_obj; }

void *Arbiter_obj::_hx_vtable = 0;

Dynamic Arbiter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Arbiter_obj > _hx_result = new Arbiter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Arbiter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d1477e9;
}

bool Arbiter_obj::get_isSleeping(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_192_get_isSleeping)
HXLINE( 194)		if (!(this->zpp_inner->active)) {
HXLINE( 194)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 196)		return this->zpp_inner->sleeping;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_isSleeping,return )

 ::nape::dynamics::ArbiterType Arbiter_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_204_get_type)
HXDLIN( 204)		return ::zpp_nape::dynamics::ZPP_Arbiter_obj::types->__get(this->zpp_inner->type).StaticCast<  ::nape::dynamics::ArbiterType >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_type,return )

bool Arbiter_obj::isCollisionArbiter(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_215_isCollisionArbiter)
HXDLIN( 215)		return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isCollisionArbiter,return )

bool Arbiter_obj::isFluidArbiter(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_226_isFluidArbiter)
HXDLIN( 226)		return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isFluidArbiter,return )

bool Arbiter_obj::isSensorArbiter(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_237_isSensorArbiter)
HXDLIN( 237)		return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isSensorArbiter,return )

 ::nape::dynamics::CollisionArbiter Arbiter_obj::get_collisionArbiter(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_247_get_collisionArbiter)
HXDLIN( 247)		if ((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL)) {
HXDLIN( 247)			return this->zpp_inner->colarb->outer_zn;
            		}
            		else {
HXDLIN( 247)			return null();
            		}
HXDLIN( 247)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_collisionArbiter,return )

 ::nape::dynamics::FluidArbiter Arbiter_obj::get_fluidArbiter(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_257_get_fluidArbiter)
HXDLIN( 257)		if ((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID)) {
HXDLIN( 257)			return this->zpp_inner->fluidarb->outer_zn;
            		}
            		else {
HXDLIN( 257)			return null();
            		}
HXDLIN( 257)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_fluidArbiter,return )

 ::nape::shape::Shape Arbiter_obj::get_shape1(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_266_get_shape1)
HXLINE( 268)		if (!(this->zpp_inner->active)) {
HXLINE( 268)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 270)		if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 270)			return this->zpp_inner->ws2->outer;
            		}
            		else {
HXLINE( 270)			return this->zpp_inner->ws1->outer;
            		}
HXDLIN( 270)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape1,return )

 ::nape::shape::Shape Arbiter_obj::get_shape2(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_279_get_shape2)
HXLINE( 281)		if (!(this->zpp_inner->active)) {
HXLINE( 281)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 283)		if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 283)			return this->zpp_inner->ws1->outer;
            		}
            		else {
HXLINE( 283)			return this->zpp_inner->ws2->outer;
            		}
HXDLIN( 283)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape2,return )

 ::nape::phys::Body Arbiter_obj::get_body1(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_292_get_body1)
HXLINE( 294)		if (!(this->zpp_inner->active)) {
HXLINE( 294)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 296)		if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 296)			return this->zpp_inner->b2->outer;
            		}
            		else {
HXLINE( 296)			return this->zpp_inner->b1->outer;
            		}
HXDLIN( 296)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body1,return )

 ::nape::phys::Body Arbiter_obj::get_body2(){
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_305_get_body2)
HXLINE( 307)		if (!(this->zpp_inner->active)) {
HXLINE( 307)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 309)		if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 309)			return this->zpp_inner->b1->outer;
            		}
            		else {
HXLINE( 309)			return this->zpp_inner->b2->outer;
            		}
HXDLIN( 309)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body2,return )

 ::nape::callbacks::PreFlag Arbiter_obj::get_state(){
            	HX_GC_STACKFRAME(&_hx_pos_60cc59ec252df1ea_323_get_state)
HXLINE( 325)		if (!(this->zpp_inner->active)) {
HXLINE( 325)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 327)		int _g = this->zpp_inner->immState;
HXLINE( 328)		int x = _g;
HXLINE( 327)		if ((x == 5)) {
HXLINE( 328)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT )) {
HXLINE( 328)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 328)				::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 328)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 328)			return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
            		}
            		else {
HXLINE( 327)			if ((_g == 1)) {
HXLINE( 329)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE )) {
HXLINE( 329)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 329)					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 329)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 329)				return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
            			}
            			else {
HXLINE( 330)				int x1 = _g;
HXDLIN( 330)				if ((x1 == 6)) {
HXLINE( 330)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE )) {
HXLINE( 330)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 330)						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 330)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 330)					return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
            				}
            				else {
HXLINE( 331)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE )) {
HXLINE( 331)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 331)						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 331)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 331)					return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
            				}
            			}
            		}
HXLINE( 327)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_state,return )

 ::nape::geom::Vec3 Arbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
            		bool freshOnly = __o_freshOnly.Default(false);
            	HX_STACKFRAME(&_hx_pos_60cc59ec252df1ea_350_totalImpulse)
HXLINE( 352)		if (!(this->zpp_inner->active)) {
HXLINE( 352)			HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            		}
HXLINE( 355)		bool _hx_tmp;
HXDLIN( 355)		bool _hx_tmp1;
HXDLIN( 355)		if (hx::IsNotNull( body )) {
HXLINE( 355)			if (!(this->zpp_inner->active)) {
HXLINE( 355)				HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            			}
HXDLIN( 355)			 ::nape::phys::Body _hx_tmp2;
HXDLIN( 355)			if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 355)				_hx_tmp2 = this->zpp_inner->b2->outer;
            			}
            			else {
HXLINE( 355)				_hx_tmp2 = this->zpp_inner->b1->outer;
            			}
HXDLIN( 355)			_hx_tmp1 = hx::IsNotEq( body,_hx_tmp2 );
            		}
            		else {
HXLINE( 355)			_hx_tmp1 = false;
            		}
HXDLIN( 355)		if (_hx_tmp1) {
HXLINE( 355)			if (!(this->zpp_inner->active)) {
HXLINE( 355)				HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            			}
HXDLIN( 355)			 ::nape::phys::Body _hx_tmp3;
HXDLIN( 355)			if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 355)				_hx_tmp3 = this->zpp_inner->b1->outer;
            			}
            			else {
HXLINE( 355)				_hx_tmp3 = this->zpp_inner->b2->outer;
            			}
HXDLIN( 355)			_hx_tmp = hx::IsNotEq( body,_hx_tmp3 );
            		}
            		else {
HXLINE( 355)			_hx_tmp = false;
            		}
HXDLIN( 355)		if (_hx_tmp) {
HXLINE( 355)			HX_STACK_DO_THROW(HX_("Error: Arbiter does not relate to body",2f,f6,45,99));
            		}
HXLINE( 357)		return ::nape::geom::Vec3_obj::get(0,0,0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Arbiter_obj,totalImpulse,return )

::String Arbiter_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_60cc59ec252df1ea_372_toString)
HXLINE( 373)		::String ret;
HXDLIN( 373)		if ((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL)) {
HXLINE( 373)			ret = HX_("CollisionArbiter",b7,ed,02,e4);
            		}
            		else {
HXLINE( 374)			if ((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID)) {
HXLINE( 373)				ret = HX_("FluidArbiter",1f,8f,95,ed);
            			}
            			else {
HXLINE( 373)				ret = HX_("SensorArbiter",af,20,bf,14);
            			}
            		}
HXLINE( 378)		if (this->zpp_inner->cleared) {
HXLINE( 378)			return (ret + HX_("(object-pooled)",e8,46,65,39));
            		}
            		else {
HXLINE( 379)			if (!(this->zpp_inner->active)) {
HXLINE( 379)				HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            			}
HXDLIN( 379)			 ::nape::shape::Shape _hx_tmp;
HXDLIN( 379)			if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 379)				_hx_tmp = this->zpp_inner->ws2->outer;
            			}
            			else {
HXLINE( 379)				_hx_tmp = this->zpp_inner->ws1->outer;
            			}
HXDLIN( 379)			::String _hx_tmp1 = (((ret + HX_("(",28,00,00,00)) + _hx_tmp->toString()) + HX_("|",7c,00,00,00));
HXDLIN( 379)			if (!(this->zpp_inner->active)) {
HXLINE( 379)				HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            			}
HXDLIN( 379)			 ::nape::shape::Shape _hx_tmp2;
HXDLIN( 379)			if ((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id)) {
HXLINE( 379)				_hx_tmp2 = this->zpp_inner->ws1->outer;
            			}
            			else {
HXLINE( 379)				_hx_tmp2 = this->zpp_inner->ws2->outer;
            			}
HXDLIN( 379)			::String _hx_tmp3 = ((_hx_tmp1 + _hx_tmp2->toString()) + HX_(")",29,00,00,00));
HXDLIN( 379)			::String _hx_tmp4;
HXDLIN( 379)			if ((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL)) {
HXLINE( 379)				int _hx_tmp5;
HXDLIN( 379)				if (this->zpp_inner->colarb->stat) {
HXLINE( 379)					_hx_tmp5 = 0;
            				}
            				else {
HXLINE( 379)					_hx_tmp5 = 1;
            				}
HXDLIN( 379)				_hx_tmp4 = ((HX_("[",5b,00,00,00) + ::Array_obj< ::String >::fromData( _hx_array_data_8797cfb5_15,2)->__get(_hx_tmp5)) + HX_("]",5d,00,00,00));
            			}
            			else {
HXLINE( 379)				_hx_tmp4 = HX_("",00,00,00,00);
            			}
HXDLIN( 379)			if (!(this->zpp_inner->active)) {
HXLINE( 379)				HX_STACK_DO_THROW(HX_("Error: Arbiter not currently in use",18,2d,13,a7));
            			}
HXDLIN( 379)			 ::nape::callbacks::PreFlag _hx_tmp6;
HXDLIN( 379)			int _g = this->zpp_inner->immState;
HXDLIN( 379)			int x = _g;
HXDLIN( 379)			if ((x == 5)) {
HXLINE( 379)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT )) {
HXLINE( 379)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 379)					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 379)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 379)				_hx_tmp6 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
            			}
            			else {
HXLINE( 379)				if ((_g == 1)) {
HXLINE( 379)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE )) {
HXLINE( 379)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 379)						::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 379)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 379)					_hx_tmp6 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
            				}
            				else {
HXLINE( 379)					int x1 = _g;
HXDLIN( 379)					if ((x1 == 6)) {
HXLINE( 379)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE )) {
HXLINE( 379)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 379)							::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 379)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 379)						_hx_tmp6 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
            					}
            					else {
HXLINE( 379)						if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE )) {
HXLINE( 379)							::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 379)							::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 379)							::zpp_nape::util::ZPP_Flags_obj::internal = false;
            						}
HXDLIN( 379)						_hx_tmp6 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
            					}
            				}
            			}
HXDLIN( 379)			return (((_hx_tmp3 + _hx_tmp4) + HX_("<-",71,34,00,00)) + _hx_tmp6->toString());
            		}
HXLINE( 378)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,toString,return )


hx::ObjectPtr< Arbiter_obj > Arbiter_obj::__new() {
	hx::ObjectPtr< Arbiter_obj > __this = new Arbiter_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Arbiter_obj > Arbiter_obj::__alloc(hx::Ctx *_hx_ctx) {
	Arbiter_obj *__this = (Arbiter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Arbiter_obj), true, "nape.dynamics.Arbiter"));
	*(void **)__this = Arbiter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Arbiter_obj::Arbiter_obj()
{
}

void Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Arbiter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val Arbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_body1() ); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_body2() ); }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_state() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_shape1() ); }
		if (HX_FIELD_EQ(inName,"shape2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_shape2() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return hx::Val( get_body1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return hx::Val( get_body2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return hx::Val( get_state_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isSleeping() ); }
		if (HX_FIELD_EQ(inName,"get_shape1") ) { return hx::Val( get_shape1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shape2") ) { return hx::Val( get_shape2_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidArbiter") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_fluidArbiter() ); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return hx::Val( totalImpulse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return hx::Val( get_isSleeping_dyn() ); }
		if (HX_FIELD_EQ(inName,"isFluidArbiter") ) { return hx::Val( isFluidArbiter_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isSensorArbiter") ) { return hx::Val( isSensorArbiter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collisionArbiter") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_collisionArbiter() ); }
		if (HX_FIELD_EQ(inName,"get_fluidArbiter") ) { return hx::Val( get_fluidArbiter_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isCollisionArbiter") ) { return hx::Val( isCollisionArbiter_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_collisionArbiter") ) { return hx::Val( get_collisionArbiter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Arbiter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("isSleeping",35,6a,42,8b));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("collisionArbiter",97,11,08,ca));
	outFields->push(HX_("fluidArbiter",ff,42,83,25));
	outFields->push(HX_("shape1",f0,d9,29,1d));
	outFields->push(HX_("shape2",f1,d9,29,1d));
	outFields->push(HX_("body1",4f,d3,ef,b6));
	outFields->push(HX_("body2",50,d3,ef,b6));
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Arbiter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::dynamics::ZPP_Arbiter */ ,(int)offsetof(Arbiter_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Arbiter_obj_sStaticStorageInfo = 0;
#endif

static ::String Arbiter_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_isSleeping",7e,f2,37,01),
	HX_("get_type",43,ae,c3,cc),
	HX_("isCollisionArbiter",a1,3d,87,42),
	HX_("isFluidArbiter",09,22,25,1c),
	HX_("isSensorArbiter",85,1a,d0,a3),
	HX_("get_collisionArbiter",a0,76,72,e8),
	HX_("get_fluidArbiter",88,2f,22,2a),
	HX_("get_shape1",b9,49,b1,0d),
	HX_("get_shape2",ba,49,b1,0d),
	HX_("get_body1",a6,2f,99,fa),
	HX_("get_body2",a7,2f,99,fa),
	HX_("get_state",68,d2,b4,c7),
	HX_("totalImpulse",51,e5,bb,16),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Arbiter_obj::__mClass;

void Arbiter_obj::__register()
{
	Arbiter_obj _hx_dummy;
	Arbiter_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.dynamics.Arbiter",b5,cf,97,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Arbiter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Arbiter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Arbiter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Arbiter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace dynamics
