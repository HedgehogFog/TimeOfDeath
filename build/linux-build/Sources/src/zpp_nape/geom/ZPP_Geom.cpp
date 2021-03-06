// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <hxinc/nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <hxinc/zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <hxinc/zpp_nape/geom/ZPP_Geom.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <hxinc/zpp_nape/shape/ZPP_Circle.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_16da28f7cc2b1aa0_175_validateShape,"zpp_nape.geom.ZPP_Geom","validateShape",0x53c3322f,"zpp_nape.geom.ZPP_Geom.validateShape","zpp_nape/geom/Geom.hx",175,0x229d5cd1)
namespace zpp_nape{
namespace geom{

void ZPP_Geom_obj::__construct() { }

Dynamic ZPP_Geom_obj::__CreateEmpty() { return new ZPP_Geom_obj; }

void *ZPP_Geom_obj::_hx_vtable = 0;

Dynamic ZPP_Geom_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_Geom_obj > _hx_result = new ZPP_Geom_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_Geom_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12301ece;
}

void ZPP_Geom_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
            	HX_STACKFRAME(&_hx_pos_16da28f7cc2b1aa0_175_validateShape)
HXLINE( 176)		if ((s->type == 1)) {
HXLINE( 176)			 ::zpp_nape::shape::ZPP_Polygon _this = s->polygon;
HXDLIN( 176)			if (_this->zip_gaxi) {
HXLINE( 176)				if (hx::IsNotNull( _this->body )) {
HXLINE( 176)					_this->zip_gaxi = false;
HXDLIN( 176)					_this->validate_laxi();
HXDLIN( 176)					{
HXLINE( 176)						 ::zpp_nape::phys::ZPP_Body _this1 = _this->body;
HXDLIN( 176)						if (_this1->zip_axis) {
HXLINE( 176)							_this1->zip_axis = false;
HXDLIN( 176)							{
HXLINE( 176)								_this1->axisx = ::Math_obj::sin(_this1->rot);
HXDLIN( 176)								_this1->axisy = ::Math_obj::cos(_this1->rot);
            							}
            						}
            					}
HXDLIN( 176)					if (_this->zip_gverts) {
HXLINE( 176)						if (hx::IsNotNull( _this->body )) {
HXLINE( 176)							_this->zip_gverts = false;
HXDLIN( 176)							_this->validate_lverts();
HXDLIN( 176)							{
HXLINE( 176)								 ::zpp_nape::phys::ZPP_Body _this2 = _this->body;
HXDLIN( 176)								if (_this2->zip_axis) {
HXLINE( 176)									_this2->zip_axis = false;
HXDLIN( 176)									{
HXLINE( 176)										_this2->axisx = ::Math_obj::sin(_this2->rot);
HXDLIN( 176)										_this2->axisy = ::Math_obj::cos(_this2->rot);
            									}
            								}
            							}
HXDLIN( 176)							 ::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;
HXDLIN( 176)							{
HXLINE( 176)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;
HXDLIN( 176)								while(hx::IsNotNull( cx_ite )){
HXLINE( 176)									 ::zpp_nape::geom::ZPP_Vec2 g = cx_ite;
HXDLIN( 176)									{
HXLINE( 176)										 ::zpp_nape::geom::ZPP_Vec2 l = li;
HXDLIN( 176)										li = li->next;
HXDLIN( 176)										{
HXLINE( 176)											g->x = (_this->body->posx + ((_this->body->axisy * l->x) - (_this->body->axisx * l->y)));
HXDLIN( 176)											g->y = (_this->body->posy + ((l->x * _this->body->axisx) + (l->y * _this->body->axisy)));
            										}
            									}
HXDLIN( 176)									cx_ite = cx_ite->next;
            								}
            							}
            						}
            					}
HXDLIN( 176)					 ::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;
HXDLIN( 176)					{
HXLINE( 176)						 ::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;
HXDLIN( 176)						 ::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;
HXDLIN( 176)						cx_ite1 = cx_ite1->next;
HXDLIN( 176)						while(hx::IsNotNull( cx_ite1 )){
HXLINE( 176)							 ::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;
HXDLIN( 176)							{
HXLINE( 176)								 ::zpp_nape::shape::ZPP_Edge e = ite->elt;
HXDLIN( 176)								ite = ite->next;
HXDLIN( 176)								e->gp0 = u;
HXDLIN( 176)								e->gp1 = v;
HXDLIN( 176)								{
HXLINE( 176)									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
HXDLIN( 176)									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
            								}
HXDLIN( 176)								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
HXDLIN( 176)								if (hx::IsNotNull( e->wrap_gnorm )) {
HXLINE( 176)									e->wrap_gnorm->zpp_inner->x = e->gnormx;
HXDLIN( 176)									e->wrap_gnorm->zpp_inner->y = e->gnormy;
            								}
HXDLIN( 176)								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
HXDLIN( 176)								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
            							}
HXDLIN( 176)							u = v;
HXDLIN( 176)							cx_ite1 = cx_ite1->next;
            						}
HXDLIN( 176)						 ::zpp_nape::geom::ZPP_Vec2 v1 = _this->gverts->next;
HXDLIN( 176)						{
HXLINE( 176)							 ::zpp_nape::shape::ZPP_Edge e1 = ite->elt;
HXDLIN( 176)							ite = ite->next;
HXDLIN( 176)							e1->gp0 = u;
HXDLIN( 176)							e1->gp1 = v1;
HXDLIN( 176)							{
HXLINE( 176)								e1->gnormx = ((_this->body->axisy * e1->lnormx) - (_this->body->axisx * e1->lnormy));
HXDLIN( 176)								e1->gnormy = ((e1->lnormx * _this->body->axisx) + (e1->lnormy * _this->body->axisy));
            							}
HXDLIN( 176)							e1->gprojection = (((_this->body->posx * e1->gnormx) + (_this->body->posy * e1->gnormy)) + e1->lprojection);
HXDLIN( 176)							if (hx::IsNotNull( e1->wrap_gnorm )) {
HXLINE( 176)								e1->wrap_gnorm->zpp_inner->x = e1->gnormx;
HXDLIN( 176)								e1->wrap_gnorm->zpp_inner->y = e1->gnormy;
            							}
HXDLIN( 176)							e1->tp0 = ((e1->gp0->y * e1->gnormx) - (e1->gp0->x * e1->gnormy));
HXDLIN( 176)							e1->tp1 = ((e1->gp1->y * e1->gnormx) - (e1->gp1->x * e1->gnormy));
            						}
            					}
            				}
            			}
            		}
HXLINE( 177)		if (s->zip_aabb) {
HXLINE( 177)			if (hx::IsNotNull( s->body )) {
HXLINE( 177)				s->zip_aabb = false;
HXDLIN( 177)				if ((s->type == 0)) {
HXLINE( 177)					 ::zpp_nape::shape::ZPP_Circle _this3 = s->circle;
HXDLIN( 177)					if (_this3->zip_worldCOM) {
HXLINE( 177)						if (hx::IsNotNull( _this3->body )) {
HXLINE( 177)							_this3->zip_worldCOM = false;
HXDLIN( 177)							if (_this3->zip_localCOM) {
HXLINE( 177)								_this3->zip_localCOM = false;
HXDLIN( 177)								if ((_this3->type == 1)) {
HXLINE( 177)									 ::zpp_nape::shape::ZPP_Polygon _this4 = _this3->polygon;
HXDLIN( 177)									if (hx::IsNull( _this4->lverts->next )) {
HXLINE( 177)										HX_STACK_DO_THROW(HX_("Error: An empty polygon has no meaningful localCOM",3b,8d,96,f3));
            									}
HXDLIN( 177)									if (hx::IsNull( _this4->lverts->next->next )) {
HXLINE( 177)										_this4->localCOMx = _this4->lverts->next->x;
HXDLIN( 177)										_this4->localCOMy = _this4->lverts->next->y;
            									}
            									else {
HXLINE( 177)										if (hx::IsNull( _this4->lverts->next->next->next )) {
HXLINE( 177)											{
HXLINE( 177)												_this4->localCOMx = _this4->lverts->next->x;
HXDLIN( 177)												_this4->localCOMy = _this4->lverts->next->y;
            											}
HXDLIN( 177)											{
HXLINE( 177)												Float t = ((Float)1.0);
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this5 = _this4;
HXDLIN( 177)												_this5->localCOMx = (_this5->localCOMx + (_this4->lverts->next->next->x * t));
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this6 = _this4;
HXDLIN( 177)												_this6->localCOMy = (_this6->localCOMy + (_this4->lverts->next->next->y * t));
            											}
HXDLIN( 177)											{
HXLINE( 177)												Float t1 = ((Float)0.5);
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this7 = _this4;
HXDLIN( 177)												_this7->localCOMx = (_this7->localCOMx * t1);
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this8 = _this4;
HXDLIN( 177)												_this8->localCOMy = (_this8->localCOMy * t1);
            											}
            										}
            										else {
HXLINE( 177)											{
HXLINE( 177)												_this4->localCOMx = ( (Float)(0) );
HXDLIN( 177)												_this4->localCOMy = ( (Float)(0) );
            											}
HXDLIN( 177)											Float area = ((Float)0.0);
HXDLIN( 177)											{
HXLINE( 177)												 ::zpp_nape::geom::ZPP_Vec2 cx_ite2 = _this4->lverts->next;
HXDLIN( 177)												 ::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite2;
HXDLIN( 177)												cx_ite2 = cx_ite2->next;
HXDLIN( 177)												 ::zpp_nape::geom::ZPP_Vec2 v2 = cx_ite2;
HXDLIN( 177)												cx_ite2 = cx_ite2->next;
HXDLIN( 177)												while(hx::IsNotNull( cx_ite2 )){
HXLINE( 177)													 ::zpp_nape::geom::ZPP_Vec2 w = cx_ite2;
HXDLIN( 177)													{
HXLINE( 177)														area = (area + (v2->x * (w->y - u1->y)));
HXDLIN( 177)														Float cf = ((w->y * v2->x) - (w->x * v2->y));
HXDLIN( 177)														 ::zpp_nape::shape::ZPP_Polygon _this9 = _this4;
HXDLIN( 177)														_this9->localCOMx = (_this9->localCOMx + ((v2->x + w->x) * cf));
HXDLIN( 177)														 ::zpp_nape::shape::ZPP_Polygon _this10 = _this4;
HXDLIN( 177)														_this10->localCOMy = (_this10->localCOMy + ((v2->y + w->y) * cf));
            													}
HXDLIN( 177)													u1 = v2;
HXDLIN( 177)													v2 = w;
HXDLIN( 177)													cx_ite2 = cx_ite2->next;
            												}
HXDLIN( 177)												cx_ite2 = _this4->lverts->next;
HXDLIN( 177)												 ::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite2;
HXDLIN( 177)												{
HXLINE( 177)													area = (area + (v2->x * (w1->y - u1->y)));
HXDLIN( 177)													Float cf1 = ((w1->y * v2->x) - (w1->x * v2->y));
HXDLIN( 177)													 ::zpp_nape::shape::ZPP_Polygon _this11 = _this4;
HXDLIN( 177)													_this11->localCOMx = (_this11->localCOMx + ((v2->x + w1->x) * cf1));
HXDLIN( 177)													 ::zpp_nape::shape::ZPP_Polygon _this12 = _this4;
HXDLIN( 177)													_this12->localCOMy = (_this12->localCOMy + ((v2->y + w1->y) * cf1));
            												}
HXDLIN( 177)												u1 = v2;
HXDLIN( 177)												v2 = w1;
HXDLIN( 177)												cx_ite2 = cx_ite2->next;
HXDLIN( 177)												 ::zpp_nape::geom::ZPP_Vec2 w2 = cx_ite2;
HXDLIN( 177)												{
HXLINE( 177)													area = (area + (v2->x * (w2->y - u1->y)));
HXDLIN( 177)													Float cf2 = ((w2->y * v2->x) - (w2->x * v2->y));
HXDLIN( 177)													 ::zpp_nape::shape::ZPP_Polygon _this13 = _this4;
HXDLIN( 177)													_this13->localCOMx = (_this13->localCOMx + ((v2->x + w2->x) * cf2));
HXDLIN( 177)													 ::zpp_nape::shape::ZPP_Polygon _this14 = _this4;
HXDLIN( 177)													_this14->localCOMy = (_this14->localCOMy + ((v2->y + w2->y) * cf2));
            												}
            											}
HXDLIN( 177)											area = (( (Float)(1) ) / (( (Float)(3) ) * area));
HXDLIN( 177)											{
HXLINE( 177)												Float t2 = area;
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this15 = _this4;
HXDLIN( 177)												_this15->localCOMx = (_this15->localCOMx * t2);
HXDLIN( 177)												 ::zpp_nape::shape::ZPP_Polygon _this16 = _this4;
HXDLIN( 177)												_this16->localCOMy = (_this16->localCOMy * t2);
            											}
            										}
            									}
            								}
HXDLIN( 177)								if (hx::IsNotNull( _this3->wrap_localCOM )) {
HXLINE( 177)									_this3->wrap_localCOM->zpp_inner->x = _this3->localCOMx;
HXDLIN( 177)									_this3->wrap_localCOM->zpp_inner->y = _this3->localCOMy;
            								}
            							}
HXDLIN( 177)							{
HXLINE( 177)								 ::zpp_nape::phys::ZPP_Body _this17 = _this3->body;
HXDLIN( 177)								if (_this17->zip_axis) {
HXLINE( 177)									_this17->zip_axis = false;
HXDLIN( 177)									{
HXLINE( 177)										_this17->axisx = ::Math_obj::sin(_this17->rot);
HXDLIN( 177)										_this17->axisy = ::Math_obj::cos(_this17->rot);
            									}
            								}
            							}
HXDLIN( 177)							{
HXLINE( 177)								_this3->worldCOMx = (_this3->body->posx + ((_this3->body->axisy * _this3->localCOMx) - (_this3->body->axisx * _this3->localCOMy)));
HXDLIN( 177)								_this3->worldCOMy = (_this3->body->posy + ((_this3->localCOMx * _this3->body->axisx) + (_this3->localCOMy * _this3->body->axisy)));
            							}
            						}
            					}
HXDLIN( 177)					Float rx = _this3->radius;
HXDLIN( 177)					Float ry = _this3->radius;
HXDLIN( 177)					{
HXLINE( 177)						_this3->aabb->minx = (_this3->worldCOMx - rx);
HXDLIN( 177)						_this3->aabb->miny = (_this3->worldCOMy - ry);
            					}
HXDLIN( 177)					{
HXLINE( 177)						_this3->aabb->maxx = (_this3->worldCOMx + rx);
HXDLIN( 177)						_this3->aabb->maxy = (_this3->worldCOMy + ry);
            					}
            				}
            				else {
HXLINE( 177)					 ::zpp_nape::shape::ZPP_Polygon _this18 = s->polygon;
HXDLIN( 177)					if (_this18->zip_gverts) {
HXLINE( 177)						if (hx::IsNotNull( _this18->body )) {
HXLINE( 177)							_this18->zip_gverts = false;
HXDLIN( 177)							_this18->validate_lverts();
HXDLIN( 177)							{
HXLINE( 177)								 ::zpp_nape::phys::ZPP_Body _this19 = _this18->body;
HXDLIN( 177)								if (_this19->zip_axis) {
HXLINE( 177)									_this19->zip_axis = false;
HXDLIN( 177)									{
HXLINE( 177)										_this19->axisx = ::Math_obj::sin(_this19->rot);
HXDLIN( 177)										_this19->axisy = ::Math_obj::cos(_this19->rot);
            									}
            								}
            							}
HXDLIN( 177)							 ::zpp_nape::geom::ZPP_Vec2 li1 = _this18->lverts->next;
HXDLIN( 177)							{
HXLINE( 177)								 ::zpp_nape::geom::ZPP_Vec2 cx_ite3 = _this18->gverts->next;
HXDLIN( 177)								while(hx::IsNotNull( cx_ite3 )){
HXLINE( 177)									 ::zpp_nape::geom::ZPP_Vec2 g1 = cx_ite3;
HXDLIN( 177)									{
HXLINE( 177)										 ::zpp_nape::geom::ZPP_Vec2 l1 = li1;
HXDLIN( 177)										li1 = li1->next;
HXDLIN( 177)										{
HXLINE( 177)											g1->x = (_this18->body->posx + ((_this18->body->axisy * l1->x) - (_this18->body->axisx * l1->y)));
HXDLIN( 177)											g1->y = (_this18->body->posy + ((l1->x * _this18->body->axisx) + (l1->y * _this18->body->axisy)));
            										}
            									}
HXDLIN( 177)									cx_ite3 = cx_ite3->next;
            								}
            							}
            						}
            					}
HXDLIN( 177)					if (hx::IsNull( _this18->lverts->next )) {
HXLINE( 177)						HX_STACK_DO_THROW(HX_("Error: An empty polygon has no meaningful bounds",da,28,5b,f5));
            					}
HXDLIN( 177)					 ::zpp_nape::geom::ZPP_Vec2 p0 = _this18->gverts->next;
HXDLIN( 177)					{
HXLINE( 177)						_this18->aabb->minx = p0->x;
HXDLIN( 177)						_this18->aabb->miny = p0->y;
            					}
HXDLIN( 177)					{
HXLINE( 177)						_this18->aabb->maxx = p0->x;
HXDLIN( 177)						_this18->aabb->maxy = p0->y;
            					}
HXDLIN( 177)					{
HXLINE( 177)						 ::zpp_nape::geom::ZPP_Vec2 cx_ite4 = _this18->gverts->next->next;
HXDLIN( 177)						while(hx::IsNotNull( cx_ite4 )){
HXLINE( 177)							 ::zpp_nape::geom::ZPP_Vec2 p = cx_ite4;
HXDLIN( 177)							{
HXLINE( 177)								if ((p->x < _this18->aabb->minx)) {
HXLINE( 177)									_this18->aabb->minx = p->x;
            								}
HXDLIN( 177)								if ((p->x > _this18->aabb->maxx)) {
HXLINE( 177)									_this18->aabb->maxx = p->x;
            								}
HXDLIN( 177)								if ((p->y < _this18->aabb->miny)) {
HXLINE( 177)									_this18->aabb->miny = p->y;
            								}
HXDLIN( 177)								if ((p->y > _this18->aabb->maxy)) {
HXLINE( 177)									_this18->aabb->maxy = p->y;
            								}
            							}
HXDLIN( 177)							cx_ite4 = cx_ite4->next;
            						}
            					}
            				}
            			}
            		}
HXLINE( 178)		if (s->zip_worldCOM) {
HXLINE( 178)			if (hx::IsNotNull( s->body )) {
HXLINE( 178)				s->zip_worldCOM = false;
HXDLIN( 178)				if (s->zip_localCOM) {
HXLINE( 178)					s->zip_localCOM = false;
HXDLIN( 178)					if ((s->type == 1)) {
HXLINE( 178)						 ::zpp_nape::shape::ZPP_Polygon _this20 = s->polygon;
HXDLIN( 178)						if (hx::IsNull( _this20->lverts->next )) {
HXLINE( 178)							HX_STACK_DO_THROW(HX_("Error: An empty polygon has no meaningful localCOM",3b,8d,96,f3));
            						}
HXDLIN( 178)						if (hx::IsNull( _this20->lverts->next->next )) {
HXLINE( 178)							_this20->localCOMx = _this20->lverts->next->x;
HXDLIN( 178)							_this20->localCOMy = _this20->lverts->next->y;
            						}
            						else {
HXLINE( 178)							if (hx::IsNull( _this20->lverts->next->next->next )) {
HXLINE( 178)								{
HXLINE( 178)									_this20->localCOMx = _this20->lverts->next->x;
HXDLIN( 178)									_this20->localCOMy = _this20->lverts->next->y;
            								}
HXDLIN( 178)								{
HXLINE( 178)									Float t3 = ((Float)1.0);
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this21 = _this20;
HXDLIN( 178)									_this21->localCOMx = (_this21->localCOMx + (_this20->lverts->next->next->x * t3));
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this22 = _this20;
HXDLIN( 178)									_this22->localCOMy = (_this22->localCOMy + (_this20->lverts->next->next->y * t3));
            								}
HXDLIN( 178)								{
HXLINE( 178)									Float t4 = ((Float)0.5);
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this23 = _this20;
HXDLIN( 178)									_this23->localCOMx = (_this23->localCOMx * t4);
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this24 = _this20;
HXDLIN( 178)									_this24->localCOMy = (_this24->localCOMy * t4);
            								}
            							}
            							else {
HXLINE( 178)								{
HXLINE( 178)									_this20->localCOMx = ( (Float)(0) );
HXDLIN( 178)									_this20->localCOMy = ( (Float)(0) );
            								}
HXDLIN( 178)								Float area1 = ((Float)0.0);
HXDLIN( 178)								{
HXLINE( 178)									 ::zpp_nape::geom::ZPP_Vec2 cx_ite5 = _this20->lverts->next;
HXDLIN( 178)									 ::zpp_nape::geom::ZPP_Vec2 u2 = cx_ite5;
HXDLIN( 178)									cx_ite5 = cx_ite5->next;
HXDLIN( 178)									 ::zpp_nape::geom::ZPP_Vec2 v3 = cx_ite5;
HXDLIN( 178)									cx_ite5 = cx_ite5->next;
HXDLIN( 178)									while(hx::IsNotNull( cx_ite5 )){
HXLINE( 178)										 ::zpp_nape::geom::ZPP_Vec2 w3 = cx_ite5;
HXDLIN( 178)										{
HXLINE( 178)											area1 = (area1 + (v3->x * (w3->y - u2->y)));
HXDLIN( 178)											Float cf3 = ((w3->y * v3->x) - (w3->x * v3->y));
HXDLIN( 178)											 ::zpp_nape::shape::ZPP_Polygon _this25 = _this20;
HXDLIN( 178)											_this25->localCOMx = (_this25->localCOMx + ((v3->x + w3->x) * cf3));
HXDLIN( 178)											 ::zpp_nape::shape::ZPP_Polygon _this26 = _this20;
HXDLIN( 178)											_this26->localCOMy = (_this26->localCOMy + ((v3->y + w3->y) * cf3));
            										}
HXDLIN( 178)										u2 = v3;
HXDLIN( 178)										v3 = w3;
HXDLIN( 178)										cx_ite5 = cx_ite5->next;
            									}
HXDLIN( 178)									cx_ite5 = _this20->lverts->next;
HXDLIN( 178)									 ::zpp_nape::geom::ZPP_Vec2 w4 = cx_ite5;
HXDLIN( 178)									{
HXLINE( 178)										area1 = (area1 + (v3->x * (w4->y - u2->y)));
HXDLIN( 178)										Float cf4 = ((w4->y * v3->x) - (w4->x * v3->y));
HXDLIN( 178)										 ::zpp_nape::shape::ZPP_Polygon _this27 = _this20;
HXDLIN( 178)										_this27->localCOMx = (_this27->localCOMx + ((v3->x + w4->x) * cf4));
HXDLIN( 178)										 ::zpp_nape::shape::ZPP_Polygon _this28 = _this20;
HXDLIN( 178)										_this28->localCOMy = (_this28->localCOMy + ((v3->y + w4->y) * cf4));
            									}
HXDLIN( 178)									u2 = v3;
HXDLIN( 178)									v3 = w4;
HXDLIN( 178)									cx_ite5 = cx_ite5->next;
HXDLIN( 178)									 ::zpp_nape::geom::ZPP_Vec2 w5 = cx_ite5;
HXDLIN( 178)									{
HXLINE( 178)										area1 = (area1 + (v3->x * (w5->y - u2->y)));
HXDLIN( 178)										Float cf5 = ((w5->y * v3->x) - (w5->x * v3->y));
HXDLIN( 178)										 ::zpp_nape::shape::ZPP_Polygon _this29 = _this20;
HXDLIN( 178)										_this29->localCOMx = (_this29->localCOMx + ((v3->x + w5->x) * cf5));
HXDLIN( 178)										 ::zpp_nape::shape::ZPP_Polygon _this30 = _this20;
HXDLIN( 178)										_this30->localCOMy = (_this30->localCOMy + ((v3->y + w5->y) * cf5));
            									}
            								}
HXDLIN( 178)								area1 = (( (Float)(1) ) / (( (Float)(3) ) * area1));
HXDLIN( 178)								{
HXLINE( 178)									Float t5 = area1;
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this31 = _this20;
HXDLIN( 178)									_this31->localCOMx = (_this31->localCOMx * t5);
HXDLIN( 178)									 ::zpp_nape::shape::ZPP_Polygon _this32 = _this20;
HXDLIN( 178)									_this32->localCOMy = (_this32->localCOMy * t5);
            								}
            							}
            						}
            					}
HXDLIN( 178)					if (hx::IsNotNull( s->wrap_localCOM )) {
HXLINE( 178)						s->wrap_localCOM->zpp_inner->x = s->localCOMx;
HXDLIN( 178)						s->wrap_localCOM->zpp_inner->y = s->localCOMy;
            					}
            				}
HXDLIN( 178)				{
HXLINE( 178)					 ::zpp_nape::phys::ZPP_Body _this33 = s->body;
HXDLIN( 178)					if (_this33->zip_axis) {
HXLINE( 178)						_this33->zip_axis = false;
HXDLIN( 178)						{
HXLINE( 178)							_this33->axisx = ::Math_obj::sin(_this33->rot);
HXDLIN( 178)							_this33->axisy = ::Math_obj::cos(_this33->rot);
            						}
            					}
            				}
HXDLIN( 178)				{
HXLINE( 178)					s->worldCOMx = (s->body->posx + ((s->body->axisy * s->localCOMx) - (s->body->axisx * s->localCOMy)));
HXDLIN( 178)					s->worldCOMy = (s->body->posy + ((s->localCOMx * s->body->axisx) + (s->localCOMy * s->body->axisy)));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Geom_obj,validateShape,(void))


ZPP_Geom_obj::ZPP_Geom_obj()
{
}

bool ZPP_Geom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { outValue = validateShape_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ZPP_Geom_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ZPP_Geom_obj_sStaticStorageInfo = 0;
#endif

hx::Class ZPP_Geom_obj::__mClass;

static ::String ZPP_Geom_obj_sStaticFields[] = {
	HX_("validateShape",ab,a2,1c,a8),
	::String(null())
};

void ZPP_Geom_obj::__register()
{
	ZPP_Geom_obj _hx_dummy;
	ZPP_Geom_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_Geom",f2,90,c8,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Geom_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_Geom_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Geom_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_Geom_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_Geom_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace geom
