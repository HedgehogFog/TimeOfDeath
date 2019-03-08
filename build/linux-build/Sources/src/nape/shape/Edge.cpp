// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <hxinc/nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <hxinc/nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <hxinc/nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <hxinc/nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <hxinc/zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <hxinc/zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <hxinc/zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <hxinc/zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <hxinc/zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <hxinc/zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <hxinc/zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_389050df50245088_177_new,"nape.shape.Edge","new",0xc0f99b82,"nape.shape.Edge.new","nape/shape/Edge.hx",177,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_195_get_polygon,"nape.shape.Edge","get_polygon",0x78841fb3,"nape.shape.Edge.get_polygon","nape/shape/Edge.hx",195,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_208_get_localNormal,"nape.shape.Edge","get_localNormal",0x39c0bfab,"nape.shape.Edge.get_localNormal","nape/shape/Edge.hx",208,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_224_get_worldNormal,"nape.shape.Edge","get_worldNormal",0x47f3b3d2,"nape.shape.Edge.get_worldNormal","nape/shape/Edge.hx",224,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_236_get_length,"nape.shape.Edge","get_length",0xf6bbc1cd,"nape.shape.Edge.get_length","nape/shape/Edge.hx",236,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_248_get_localProjection,"nape.shape.Edge","get_localProjection",0xa0f1e813,"nape.shape.Edge.get_localProjection","nape/shape/Edge.hx",248,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_262_get_worldProjection,"nape.shape.Edge","get_worldProjection",0xea4f7bba,"nape.shape.Edge.get_worldProjection","nape/shape/Edge.hx",262,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_275_get_localVertex1,"nape.shape.Edge","get_localVertex1",0xa0a4a249,"nape.shape.Edge.get_localVertex1","nape/shape/Edge.hx",275,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_287_get_localVertex2,"nape.shape.Edge","get_localVertex2",0xa0a4a24a,"nape.shape.Edge.get_localVertex2","nape/shape/Edge.hx",287,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_299_get_worldVertex1,"nape.shape.Edge","get_worldVertex1",0xff075042,"nape.shape.Edge.get_worldVertex1","nape/shape/Edge.hx",299,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_311_get_worldVertex2,"nape.shape.Edge","get_worldVertex2",0xff075043,"nape.shape.Edge.get_worldVertex2","nape/shape/Edge.hx",311,0xab3b8fac)
HX_LOCAL_STACK_FRAME(_hx_pos_389050df50245088_322_toString,"nape.shape.Edge","toString",0x0c0b6a4a,"nape.shape.Edge.toString","nape/shape/Edge.hx",322,0xab3b8fac)
namespace nape{
namespace shape{

void Edge_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_177_new)
HXLINE( 181)		this->zpp_inner = null();
HXLINE( 187)		if (!(::zpp_nape::shape::ZPP_Edge_obj::internal)) {
HXLINE( 187)			HX_STACK_DO_THROW(HX_("Error: Cannot instantiate an Edge derp!",2d,a9,ec,de));
            		}
            	}

Dynamic Edge_obj::__CreateEmpty() { return new Edge_obj; }

void *Edge_obj::_hx_vtable = 0;

Dynamic Edge_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Edge_obj > _hx_result = new Edge_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Edge_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c18c5aa;
}

 ::nape::shape::Polygon Edge_obj::get_polygon(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_195_get_polygon)
HXLINE( 197)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 197)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 199)		return this->zpp_inner->polygon->outer_zn;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_polygon,return )

 ::nape::geom::Vec2 Edge_obj::get_localNormal(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_208_get_localNormal)
HXLINE( 210)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 210)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 212)		if (hx::IsNull( this->zpp_inner->wrap_lnorm )) {
HXLINE( 212)			this->zpp_inner->getlnorm();
            		}
HXLINE( 213)		return this->zpp_inner->wrap_lnorm;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localNormal,return )

 ::nape::geom::Vec2 Edge_obj::get_worldNormal(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_224_get_worldNormal)
HXLINE( 226)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 226)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 228)		if (hx::IsNull( this->zpp_inner->wrap_gnorm )) {
HXLINE( 228)			this->zpp_inner->getgnorm();
            		}
HXLINE( 229)		return this->zpp_inner->wrap_gnorm;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldNormal,return )

Float Edge_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_236_get_length)
HXLINE( 238)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 238)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 240)		this->zpp_inner->polygon->validate_laxi();
HXLINE( 241)		return this->zpp_inner->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_length,return )

Float Edge_obj::get_localProjection(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_248_get_localProjection)
HXLINE( 250)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 250)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 252)		this->zpp_inner->polygon->validate_laxi();
HXLINE( 253)		return this->zpp_inner->lprojection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localProjection,return )

Float Edge_obj::get_worldProjection(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_262_get_worldProjection)
HXLINE( 264)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 264)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 265)		if (hx::IsNull( this->zpp_inner->polygon->body )) {
HXLINE( 265)			HX_STACK_DO_THROW(HX_("Error: Edge world projection only makes sense for Polygons contained within a rigid body",e1,38,f1,da));
            		}
HXLINE( 267)		{
HXLINE( 267)			 ::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;
HXDLIN( 267)			if (_this->zip_gaxi) {
HXLINE( 267)				if (hx::IsNotNull( _this->body )) {
HXLINE( 267)					_this->zip_gaxi = false;
HXDLIN( 267)					_this->validate_laxi();
HXDLIN( 267)					{
HXLINE( 267)						 ::zpp_nape::phys::ZPP_Body _this1 = _this->body;
HXDLIN( 267)						if (_this1->zip_axis) {
HXLINE( 267)							_this1->zip_axis = false;
HXDLIN( 267)							{
HXLINE( 267)								_this1->axisx = ::Math_obj::sin(_this1->rot);
HXDLIN( 267)								_this1->axisy = ::Math_obj::cos(_this1->rot);
            							}
            						}
            					}
HXDLIN( 267)					if (_this->zip_gverts) {
HXLINE( 267)						if (hx::IsNotNull( _this->body )) {
HXLINE( 267)							_this->zip_gverts = false;
HXDLIN( 267)							_this->validate_lverts();
HXDLIN( 267)							{
HXLINE( 267)								 ::zpp_nape::phys::ZPP_Body _this2 = _this->body;
HXDLIN( 267)								if (_this2->zip_axis) {
HXLINE( 267)									_this2->zip_axis = false;
HXDLIN( 267)									{
HXLINE( 267)										_this2->axisx = ::Math_obj::sin(_this2->rot);
HXDLIN( 267)										_this2->axisy = ::Math_obj::cos(_this2->rot);
            									}
            								}
            							}
HXDLIN( 267)							 ::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;
HXDLIN( 267)							{
HXLINE( 267)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;
HXDLIN( 267)								while(hx::IsNotNull( cx_ite )){
HXLINE( 267)									 ::zpp_nape::geom::ZPP_Vec2 g = cx_ite;
HXDLIN( 267)									{
HXLINE( 267)										 ::zpp_nape::geom::ZPP_Vec2 l = li;
HXDLIN( 267)										li = li->next;
HXDLIN( 267)										{
HXLINE( 267)											g->x = (_this->body->posx + ((_this->body->axisy * l->x) - (_this->body->axisx * l->y)));
HXDLIN( 267)											g->y = (_this->body->posy + ((l->x * _this->body->axisx) + (l->y * _this->body->axisy)));
            										}
            									}
HXDLIN( 267)									cx_ite = cx_ite->next;
            								}
            							}
            						}
            					}
HXDLIN( 267)					 ::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;
HXDLIN( 267)					{
HXLINE( 267)						 ::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;
HXDLIN( 267)						 ::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;
HXDLIN( 267)						cx_ite1 = cx_ite1->next;
HXDLIN( 267)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 267)							 ::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;
HXDLIN( 267)							{
HXLINE( 267)								 ::zpp_nape::shape::ZPP_Edge e = ite->elt;
HXDLIN( 267)								ite = ite->next;
HXDLIN( 267)								e->gp0 = u;
HXDLIN( 267)								e->gp1 = v;
HXDLIN( 267)								{
HXLINE( 267)									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
HXDLIN( 267)									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
            								}
HXDLIN( 267)								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
HXDLIN( 267)								if (hx::IsNotNull( e->wrap_gnorm )) {
HXLINE( 267)									e->wrap_gnorm->zpp_inner->x = e->gnormx;
HXDLIN( 267)									e->wrap_gnorm->zpp_inner->y = e->gnormy;
            								}
HXDLIN( 267)								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
HXDLIN( 267)								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
            							}
HXDLIN( 267)							u = v;
HXDLIN( 267)							cx_ite1 = cx_ite1->next;
            						}
HXDLIN( 267)						 ::zpp_nape::geom::ZPP_Vec2 v1 = _this->gverts->next;
HXDLIN( 267)						{
HXLINE( 267)							 ::zpp_nape::shape::ZPP_Edge e1 = ite->elt;
HXDLIN( 267)							ite = ite->next;
HXDLIN( 267)							e1->gp0 = u;
HXDLIN( 267)							e1->gp1 = v1;
HXDLIN( 267)							{
HXLINE( 267)								e1->gnormx = ((_this->body->axisy * e1->lnormx) - (_this->body->axisx * e1->lnormy));
HXDLIN( 267)								e1->gnormy = ((e1->lnormx * _this->body->axisx) + (e1->lnormy * _this->body->axisy));
            							}
HXDLIN( 267)							e1->gprojection = (((_this->body->posx * e1->gnormx) + (_this->body->posy * e1->gnormy)) + e1->lprojection);
HXDLIN( 267)							if (hx::IsNotNull( e1->wrap_gnorm )) {
HXLINE( 267)								e1->wrap_gnorm->zpp_inner->x = e1->gnormx;
HXDLIN( 267)								e1->wrap_gnorm->zpp_inner->y = e1->gnormy;
            							}
HXDLIN( 267)							e1->tp0 = ((e1->gp0->y * e1->gnormx) - (e1->gp0->x * e1->gnormy));
HXDLIN( 267)							e1->tp1 = ((e1->gp1->y * e1->gnormx) - (e1->gp1->x * e1->gnormy));
            						}
            					}
            				}
            			}
            		}
HXLINE( 268)		return this->zpp_inner->gprojection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldProjection,return )

 ::nape::geom::Vec2 Edge_obj::get_localVertex1(){
            	HX_GC_STACKFRAME(&_hx_pos_389050df50245088_275_get_localVertex1)
HXLINE( 277)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 277)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 279)		this->zpp_inner->polygon->validate_laxi();
HXLINE( 280)		 ::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->lp0;
HXDLIN( 280)		if (hx::IsNull( _this->outer )) {
HXLINE( 280)			_this->outer =  ::nape::geom::Vec2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 280)			{
HXLINE( 280)				 ::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;
HXDLIN( 280)				{
HXLINE( 280)					if (hx::IsNotNull( o->outer )) {
HXLINE( 280)						o->outer->zpp_inner = null();
HXDLIN( 280)						o->outer = null();
            					}
HXDLIN( 280)					o->_isimmutable = null();
HXDLIN( 280)					o->_validate = null();
HXDLIN( 280)					o->_invalidate = null();
            				}
HXDLIN( 280)				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
HXDLIN( 280)				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
            			}
HXDLIN( 280)			_this->outer->zpp_inner = _this;
            		}
HXDLIN( 280)		return _this->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex1,return )

 ::nape::geom::Vec2 Edge_obj::get_localVertex2(){
            	HX_GC_STACKFRAME(&_hx_pos_389050df50245088_287_get_localVertex2)
HXLINE( 289)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 289)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 291)		this->zpp_inner->polygon->validate_laxi();
HXLINE( 292)		 ::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner->lp1;
HXDLIN( 292)		if (hx::IsNull( _this->outer )) {
HXLINE( 292)			_this->outer =  ::nape::geom::Vec2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 292)			{
HXLINE( 292)				 ::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;
HXDLIN( 292)				{
HXLINE( 292)					if (hx::IsNotNull( o->outer )) {
HXLINE( 292)						o->outer->zpp_inner = null();
HXDLIN( 292)						o->outer = null();
            					}
HXDLIN( 292)					o->_isimmutable = null();
HXDLIN( 292)					o->_validate = null();
HXDLIN( 292)					o->_invalidate = null();
            				}
HXDLIN( 292)				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
HXDLIN( 292)				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
            			}
HXDLIN( 292)			_this->outer->zpp_inner = _this;
            		}
HXDLIN( 292)		return _this->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex2,return )

 ::nape::geom::Vec2 Edge_obj::get_worldVertex1(){
            	HX_GC_STACKFRAME(&_hx_pos_389050df50245088_299_get_worldVertex1)
HXLINE( 301)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 301)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 303)		{
HXLINE( 303)			 ::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;
HXDLIN( 303)			if (_this->zip_gaxi) {
HXLINE( 303)				if (hx::IsNotNull( _this->body )) {
HXLINE( 303)					_this->zip_gaxi = false;
HXDLIN( 303)					_this->validate_laxi();
HXDLIN( 303)					{
HXLINE( 303)						 ::zpp_nape::phys::ZPP_Body _this1 = _this->body;
HXDLIN( 303)						if (_this1->zip_axis) {
HXLINE( 303)							_this1->zip_axis = false;
HXDLIN( 303)							{
HXLINE( 303)								_this1->axisx = ::Math_obj::sin(_this1->rot);
HXDLIN( 303)								_this1->axisy = ::Math_obj::cos(_this1->rot);
            							}
            						}
            					}
HXDLIN( 303)					if (_this->zip_gverts) {
HXLINE( 303)						if (hx::IsNotNull( _this->body )) {
HXLINE( 303)							_this->zip_gverts = false;
HXDLIN( 303)							_this->validate_lverts();
HXDLIN( 303)							{
HXLINE( 303)								 ::zpp_nape::phys::ZPP_Body _this2 = _this->body;
HXDLIN( 303)								if (_this2->zip_axis) {
HXLINE( 303)									_this2->zip_axis = false;
HXDLIN( 303)									{
HXLINE( 303)										_this2->axisx = ::Math_obj::sin(_this2->rot);
HXDLIN( 303)										_this2->axisy = ::Math_obj::cos(_this2->rot);
            									}
            								}
            							}
HXDLIN( 303)							 ::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;
HXDLIN( 303)							{
HXLINE( 303)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;
HXDLIN( 303)								while(hx::IsNotNull( cx_ite )){
HXLINE( 303)									 ::zpp_nape::geom::ZPP_Vec2 g = cx_ite;
HXDLIN( 303)									{
HXLINE( 303)										 ::zpp_nape::geom::ZPP_Vec2 l = li;
HXDLIN( 303)										li = li->next;
HXDLIN( 303)										{
HXLINE( 303)											g->x = (_this->body->posx + ((_this->body->axisy * l->x) - (_this->body->axisx * l->y)));
HXDLIN( 303)											g->y = (_this->body->posy + ((l->x * _this->body->axisx) + (l->y * _this->body->axisy)));
            										}
            									}
HXDLIN( 303)									cx_ite = cx_ite->next;
            								}
            							}
            						}
            					}
HXDLIN( 303)					 ::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;
HXDLIN( 303)					{
HXLINE( 303)						 ::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;
HXDLIN( 303)						 ::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;
HXDLIN( 303)						cx_ite1 = cx_ite1->next;
HXDLIN( 303)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 303)							 ::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;
HXDLIN( 303)							{
HXLINE( 303)								 ::zpp_nape::shape::ZPP_Edge e = ite->elt;
HXDLIN( 303)								ite = ite->next;
HXDLIN( 303)								e->gp0 = u;
HXDLIN( 303)								e->gp1 = v;
HXDLIN( 303)								{
HXLINE( 303)									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
HXDLIN( 303)									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
            								}
HXDLIN( 303)								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
HXDLIN( 303)								if (hx::IsNotNull( e->wrap_gnorm )) {
HXLINE( 303)									e->wrap_gnorm->zpp_inner->x = e->gnormx;
HXDLIN( 303)									e->wrap_gnorm->zpp_inner->y = e->gnormy;
            								}
HXDLIN( 303)								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
HXDLIN( 303)								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
            							}
HXDLIN( 303)							u = v;
HXDLIN( 303)							cx_ite1 = cx_ite1->next;
            						}
HXDLIN( 303)						 ::zpp_nape::geom::ZPP_Vec2 v1 = _this->gverts->next;
HXDLIN( 303)						{
HXLINE( 303)							 ::zpp_nape::shape::ZPP_Edge e1 = ite->elt;
HXDLIN( 303)							ite = ite->next;
HXDLIN( 303)							e1->gp0 = u;
HXDLIN( 303)							e1->gp1 = v1;
HXDLIN( 303)							{
HXLINE( 303)								e1->gnormx = ((_this->body->axisy * e1->lnormx) - (_this->body->axisx * e1->lnormy));
HXDLIN( 303)								e1->gnormy = ((e1->lnormx * _this->body->axisx) + (e1->lnormy * _this->body->axisy));
            							}
HXDLIN( 303)							e1->gprojection = (((_this->body->posx * e1->gnormx) + (_this->body->posy * e1->gnormy)) + e1->lprojection);
HXDLIN( 303)							if (hx::IsNotNull( e1->wrap_gnorm )) {
HXLINE( 303)								e1->wrap_gnorm->zpp_inner->x = e1->gnormx;
HXDLIN( 303)								e1->wrap_gnorm->zpp_inner->y = e1->gnormy;
            							}
HXDLIN( 303)							e1->tp0 = ((e1->gp0->y * e1->gnormx) - (e1->gp0->x * e1->gnormy));
HXDLIN( 303)							e1->tp1 = ((e1->gp1->y * e1->gnormx) - (e1->gp1->x * e1->gnormy));
            						}
            					}
            				}
            			}
            		}
HXLINE( 304)		 ::zpp_nape::geom::ZPP_Vec2 _this3 = this->zpp_inner->gp0;
HXDLIN( 304)		if (hx::IsNull( _this3->outer )) {
HXLINE( 304)			_this3->outer =  ::nape::geom::Vec2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 304)			{
HXLINE( 304)				 ::zpp_nape::geom::ZPP_Vec2 o = _this3->outer->zpp_inner;
HXDLIN( 304)				{
HXLINE( 304)					if (hx::IsNotNull( o->outer )) {
HXLINE( 304)						o->outer->zpp_inner = null();
HXDLIN( 304)						o->outer = null();
            					}
HXDLIN( 304)					o->_isimmutable = null();
HXDLIN( 304)					o->_validate = null();
HXDLIN( 304)					o->_invalidate = null();
            				}
HXDLIN( 304)				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
HXDLIN( 304)				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
            			}
HXDLIN( 304)			_this3->outer->zpp_inner = _this3;
            		}
HXDLIN( 304)		return _this3->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex1,return )

 ::nape::geom::Vec2 Edge_obj::get_worldVertex2(){
            	HX_GC_STACKFRAME(&_hx_pos_389050df50245088_311_get_worldVertex2)
HXLINE( 313)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXLINE( 313)			HX_STACK_DO_THROW(HX_("Error: Edge not current in use",55,a7,26,eb));
            		}
HXLINE( 315)		{
HXLINE( 315)			 ::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;
HXDLIN( 315)			if (_this->zip_gaxi) {
HXLINE( 315)				if (hx::IsNotNull( _this->body )) {
HXLINE( 315)					_this->zip_gaxi = false;
HXDLIN( 315)					_this->validate_laxi();
HXDLIN( 315)					{
HXLINE( 315)						 ::zpp_nape::phys::ZPP_Body _this1 = _this->body;
HXDLIN( 315)						if (_this1->zip_axis) {
HXLINE( 315)							_this1->zip_axis = false;
HXDLIN( 315)							{
HXLINE( 315)								_this1->axisx = ::Math_obj::sin(_this1->rot);
HXDLIN( 315)								_this1->axisy = ::Math_obj::cos(_this1->rot);
            							}
            						}
            					}
HXDLIN( 315)					if (_this->zip_gverts) {
HXLINE( 315)						if (hx::IsNotNull( _this->body )) {
HXLINE( 315)							_this->zip_gverts = false;
HXDLIN( 315)							_this->validate_lverts();
HXDLIN( 315)							{
HXLINE( 315)								 ::zpp_nape::phys::ZPP_Body _this2 = _this->body;
HXDLIN( 315)								if (_this2->zip_axis) {
HXLINE( 315)									_this2->zip_axis = false;
HXDLIN( 315)									{
HXLINE( 315)										_this2->axisx = ::Math_obj::sin(_this2->rot);
HXDLIN( 315)										_this2->axisy = ::Math_obj::cos(_this2->rot);
            									}
            								}
            							}
HXDLIN( 315)							 ::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;
HXDLIN( 315)							{
HXLINE( 315)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;
HXDLIN( 315)								while(hx::IsNotNull( cx_ite )){
HXLINE( 315)									 ::zpp_nape::geom::ZPP_Vec2 g = cx_ite;
HXDLIN( 315)									{
HXLINE( 315)										 ::zpp_nape::geom::ZPP_Vec2 l = li;
HXDLIN( 315)										li = li->next;
HXDLIN( 315)										{
HXLINE( 315)											g->x = (_this->body->posx + ((_this->body->axisy * l->x) - (_this->body->axisx * l->y)));
HXDLIN( 315)											g->y = (_this->body->posy + ((l->x * _this->body->axisx) + (l->y * _this->body->axisy)));
            										}
            									}
HXDLIN( 315)									cx_ite = cx_ite->next;
            								}
            							}
            						}
            					}
HXDLIN( 315)					 ::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;
HXDLIN( 315)					{
HXLINE( 315)						 ::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;
HXDLIN( 315)						 ::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;
HXDLIN( 315)						cx_ite1 = cx_ite1->next;
HXDLIN( 315)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 315)							 ::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;
HXDLIN( 315)							{
HXLINE( 315)								 ::zpp_nape::shape::ZPP_Edge e = ite->elt;
HXDLIN( 315)								ite = ite->next;
HXDLIN( 315)								e->gp0 = u;
HXDLIN( 315)								e->gp1 = v;
HXDLIN( 315)								{
HXLINE( 315)									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
HXDLIN( 315)									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
            								}
HXDLIN( 315)								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
HXDLIN( 315)								if (hx::IsNotNull( e->wrap_gnorm )) {
HXLINE( 315)									e->wrap_gnorm->zpp_inner->x = e->gnormx;
HXDLIN( 315)									e->wrap_gnorm->zpp_inner->y = e->gnormy;
            								}
HXDLIN( 315)								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
HXDLIN( 315)								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
            							}
HXDLIN( 315)							u = v;
HXDLIN( 315)							cx_ite1 = cx_ite1->next;
            						}
HXDLIN( 315)						 ::zpp_nape::geom::ZPP_Vec2 v1 = _this->gverts->next;
HXDLIN( 315)						{
HXLINE( 315)							 ::zpp_nape::shape::ZPP_Edge e1 = ite->elt;
HXDLIN( 315)							ite = ite->next;
HXDLIN( 315)							e1->gp0 = u;
HXDLIN( 315)							e1->gp1 = v1;
HXDLIN( 315)							{
HXLINE( 315)								e1->gnormx = ((_this->body->axisy * e1->lnormx) - (_this->body->axisx * e1->lnormy));
HXDLIN( 315)								e1->gnormy = ((e1->lnormx * _this->body->axisx) + (e1->lnormy * _this->body->axisy));
            							}
HXDLIN( 315)							e1->gprojection = (((_this->body->posx * e1->gnormx) + (_this->body->posy * e1->gnormy)) + e1->lprojection);
HXDLIN( 315)							if (hx::IsNotNull( e1->wrap_gnorm )) {
HXLINE( 315)								e1->wrap_gnorm->zpp_inner->x = e1->gnormx;
HXDLIN( 315)								e1->wrap_gnorm->zpp_inner->y = e1->gnormy;
            							}
HXDLIN( 315)							e1->tp0 = ((e1->gp0->y * e1->gnormx) - (e1->gp0->x * e1->gnormy));
HXDLIN( 315)							e1->tp1 = ((e1->gp1->y * e1->gnormx) - (e1->gp1->x * e1->gnormy));
            						}
            					}
            				}
            			}
            		}
HXLINE( 316)		 ::zpp_nape::geom::ZPP_Vec2 _this3 = this->zpp_inner->gp1;
HXDLIN( 316)		if (hx::IsNull( _this3->outer )) {
HXLINE( 316)			_this3->outer =  ::nape::geom::Vec2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 316)			{
HXLINE( 316)				 ::zpp_nape::geom::ZPP_Vec2 o = _this3->outer->zpp_inner;
HXDLIN( 316)				{
HXLINE( 316)					if (hx::IsNotNull( o->outer )) {
HXLINE( 316)						o->outer->zpp_inner = null();
HXDLIN( 316)						o->outer = null();
            					}
HXDLIN( 316)					o->_isimmutable = null();
HXDLIN( 316)					o->_validate = null();
HXDLIN( 316)					o->_invalidate = null();
            				}
HXDLIN( 316)				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
HXDLIN( 316)				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
            			}
HXDLIN( 316)			_this3->outer->zpp_inner = _this3;
            		}
HXDLIN( 316)		return _this3->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex2,return )

::String Edge_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_389050df50245088_322_toString)
HXDLIN( 322)		if (hx::IsNull( this->zpp_inner->polygon )) {
HXDLIN( 322)			return HX_("Edge(object-pooled)",2b,c3,0e,0b);
            		}
            		else {
HXLINE( 323)			if (hx::IsNull( this->zpp_inner->polygon->body )) {
HXLINE( 324)				this->zpp_inner->polygon->validate_laxi();
HXLINE( 325)				return ((HX_("{ localNormal : ",19,66,22,61) + ((((HX_("{ x: ",f9,6e,cb,e7) + this->zpp_inner->lnormx) + HX_(" y: ",3f,d7,82,15)) + this->zpp_inner->lnormy) + HX_(" }",5d,1c,00,00))) + HX_(" }",5d,1c,00,00));
            			}
            			else {
HXLINE( 328)				{
HXLINE( 328)					 ::zpp_nape::shape::ZPP_Polygon _this = this->zpp_inner->polygon;
HXDLIN( 328)					if (_this->zip_gaxi) {
HXLINE( 328)						if (hx::IsNotNull( _this->body )) {
HXLINE( 328)							_this->zip_gaxi = false;
HXDLIN( 328)							_this->validate_laxi();
HXDLIN( 328)							{
HXLINE( 328)								 ::zpp_nape::phys::ZPP_Body _this1 = _this->body;
HXDLIN( 328)								if (_this1->zip_axis) {
HXLINE( 328)									_this1->zip_axis = false;
HXDLIN( 328)									{
HXLINE( 328)										_this1->axisx = ::Math_obj::sin(_this1->rot);
HXDLIN( 328)										_this1->axisy = ::Math_obj::cos(_this1->rot);
            									}
            								}
            							}
HXDLIN( 328)							if (_this->zip_gverts) {
HXLINE( 328)								if (hx::IsNotNull( _this->body )) {
HXLINE( 328)									_this->zip_gverts = false;
HXDLIN( 328)									_this->validate_lverts();
HXDLIN( 328)									{
HXLINE( 328)										 ::zpp_nape::phys::ZPP_Body _this2 = _this->body;
HXDLIN( 328)										if (_this2->zip_axis) {
HXLINE( 328)											_this2->zip_axis = false;
HXDLIN( 328)											{
HXLINE( 328)												_this2->axisx = ::Math_obj::sin(_this2->rot);
HXDLIN( 328)												_this2->axisy = ::Math_obj::cos(_this2->rot);
            											}
            										}
            									}
HXDLIN( 328)									 ::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;
HXDLIN( 328)									{
HXLINE( 328)										 ::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;
HXDLIN( 328)										while(hx::IsNotNull( cx_ite )){
HXLINE( 328)											 ::zpp_nape::geom::ZPP_Vec2 g = cx_ite;
HXDLIN( 328)											{
HXLINE( 328)												 ::zpp_nape::geom::ZPP_Vec2 l = li;
HXDLIN( 328)												li = li->next;
HXDLIN( 328)												{
HXLINE( 328)													g->x = (_this->body->posx + ((_this->body->axisy * l->x) - (_this->body->axisx * l->y)));
HXDLIN( 328)													g->y = (_this->body->posy + ((l->x * _this->body->axisx) + (l->y * _this->body->axisy)));
            												}
            											}
HXDLIN( 328)											cx_ite = cx_ite->next;
            										}
            									}
            								}
            							}
HXDLIN( 328)							 ::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;
HXDLIN( 328)							{
HXLINE( 328)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;
HXDLIN( 328)								 ::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;
HXDLIN( 328)								cx_ite1 = cx_ite1->next;
HXDLIN( 328)								while(hx::IsNotNull( cx_ite1 )){
HXLINE( 328)									 ::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;
HXDLIN( 328)									{
HXLINE( 328)										 ::zpp_nape::shape::ZPP_Edge e = ite->elt;
HXDLIN( 328)										ite = ite->next;
HXDLIN( 328)										e->gp0 = u;
HXDLIN( 328)										e->gp1 = v;
HXDLIN( 328)										{
HXLINE( 328)											e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
HXDLIN( 328)											e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
            										}
HXDLIN( 328)										e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
HXDLIN( 328)										if (hx::IsNotNull( e->wrap_gnorm )) {
HXLINE( 328)											e->wrap_gnorm->zpp_inner->x = e->gnormx;
HXDLIN( 328)											e->wrap_gnorm->zpp_inner->y = e->gnormy;
            										}
HXDLIN( 328)										e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
HXDLIN( 328)										e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
            									}
HXDLIN( 328)									u = v;
HXDLIN( 328)									cx_ite1 = cx_ite1->next;
            								}
HXDLIN( 328)								 ::zpp_nape::geom::ZPP_Vec2 v1 = _this->gverts->next;
HXDLIN( 328)								{
HXLINE( 328)									 ::zpp_nape::shape::ZPP_Edge e1 = ite->elt;
HXDLIN( 328)									ite = ite->next;
HXDLIN( 328)									e1->gp0 = u;
HXDLIN( 328)									e1->gp1 = v1;
HXDLIN( 328)									{
HXLINE( 328)										e1->gnormx = ((_this->body->axisy * e1->lnormx) - (_this->body->axisx * e1->lnormy));
HXDLIN( 328)										e1->gnormy = ((e1->lnormx * _this->body->axisx) + (e1->lnormy * _this->body->axisy));
            									}
HXDLIN( 328)									e1->gprojection = (((_this->body->posx * e1->gnormx) + (_this->body->posy * e1->gnormy)) + e1->lprojection);
HXDLIN( 328)									if (hx::IsNotNull( e1->wrap_gnorm )) {
HXLINE( 328)										e1->wrap_gnorm->zpp_inner->x = e1->gnormx;
HXDLIN( 328)										e1->wrap_gnorm->zpp_inner->y = e1->gnormy;
            									}
HXDLIN( 328)									e1->tp0 = ((e1->gp0->y * e1->gnormx) - (e1->gp0->x * e1->gnormy));
HXDLIN( 328)									e1->tp1 = ((e1->gp1->y * e1->gnormx) - (e1->gp1->x * e1->gnormy));
            								}
            							}
            						}
            					}
            				}
HXLINE( 329)				return ((((HX_("{ localNormal : ",19,66,22,61) + ((((HX_("{ x: ",f9,6e,cb,e7) + this->zpp_inner->lnormx) + HX_(" y: ",3f,d7,82,15)) + this->zpp_inner->lnormy) + HX_(" }",5d,1c,00,00))) + HX_(" worldNormal : ",6d,82,e3,6b)) + ((((HX_("{ x: ",f9,6e,cb,e7) + this->zpp_inner->gnormx) + HX_(" y: ",3f,d7,82,15)) + this->zpp_inner->gnormy) + HX_(" }",5d,1c,00,00))) + HX_(" }",5d,1c,00,00));
            			}
            		}
HXLINE( 322)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,toString,return )


hx::ObjectPtr< Edge_obj > Edge_obj::__new() {
	hx::ObjectPtr< Edge_obj > __this = new Edge_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Edge_obj > Edge_obj::__alloc(hx::Ctx *_hx_ctx) {
	Edge_obj *__this = (Edge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Edge_obj), true, "nape.shape.Edge"));
	*(void **)__this = Edge_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Edge_obj::Edge_obj()
{
}

void Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Edge);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val Edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_polygon() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_polygon") ) { return hx::Val( get_polygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"localNormal") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_localNormal() ); }
		if (HX_FIELD_EQ(inName,"worldNormal") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_worldNormal() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localVertex1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_localVertex1() ); }
		if (HX_FIELD_EQ(inName,"localVertex2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_localVertex2() ); }
		if (HX_FIELD_EQ(inName,"worldVertex1") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_worldVertex1() ); }
		if (HX_FIELD_EQ(inName,"worldVertex2") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_worldVertex2() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_localNormal") ) { return hx::Val( get_localNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_worldNormal") ) { return hx::Val( get_worldNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"localProjection") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_localProjection() ); }
		if (HX_FIELD_EQ(inName,"worldProjection") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_worldProjection() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_localVertex1") ) { return hx::Val( get_localVertex1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_localVertex2") ) { return hx::Val( get_localVertex2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_worldVertex1") ) { return hx::Val( get_worldVertex1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_worldVertex2") ) { return hx::Val( get_worldVertex2_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_localProjection") ) { return hx::Val( get_localProjection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_worldProjection") ) { return hx::Val( get_worldProjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Edge_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("polygon",7a,02,91,12));
	outFields->push(HX_("localNormal",f2,11,a4,ed));
	outFields->push(HX_("worldNormal",19,06,d7,fb));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("localProjection",da,69,59,3f));
	outFields->push(HX_("worldProjection",81,fd,b6,88));
	outFields->push(HX_("localVertex1",22,4e,a9,53));
	outFields->push(HX_("localVertex2",23,4e,a9,53));
	outFields->push(HX_("worldVertex1",1b,fc,0b,b2));
	outFields->push(HX_("worldVertex2",1c,fc,0b,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Edge_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::shape::ZPP_Edge */ ,(int)offsetof(Edge_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Edge_obj_sStaticStorageInfo = 0;
#endif

static ::String Edge_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_polygon",91,62,8b,98),
	HX_("get_localNormal",89,c9,85,ae),
	HX_("get_worldNormal",b0,bd,b8,bc),
	HX_("get_length",af,04,8f,8f),
	HX_("get_localProjection",f1,38,64,ca),
	HX_("get_worldProjection",98,cc,c1,13),
	HX_("get_localVertex1",ab,3a,48,58),
	HX_("get_localVertex2",ac,3a,48,58),
	HX_("get_worldVertex1",a4,e8,aa,b6),
	HX_("get_worldVertex2",a5,e8,aa,b6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Edge_obj::__mClass;

void Edge_obj::__register()
{
	Edge_obj _hx_dummy;
	Edge_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.shape.Edge",90,72,e9,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Edge_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Edge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Edge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Edge_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace shape