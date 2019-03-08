// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <hxinc/zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <hxinc/zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <hxinc/zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <hxinc/zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <hxinc/zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_464_new,"zpp_nape.geom.ZPP_SimpleSweep","new",0x92a3afd6,"zpp_nape.geom.ZPP_SimpleSweep.new","zpp_nape/geom/Simple.hx",464,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_488_swap_nodes,"zpp_nape.geom.ZPP_SimpleSweep","swap_nodes",0x1d0d758f,"zpp_nape.geom.ZPP_SimpleSweep.swap_nodes","zpp_nape/geom/Simple.hx",488,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_493_edge_lt,"zpp_nape.geom.ZPP_SimpleSweep","edge_lt",0xa76c8300,"zpp_nape.geom.ZPP_SimpleSweep.edge_lt","zpp_nape/geom/Simple.hx",493,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_694_clear,"zpp_nape.geom.ZPP_SimpleSweep","clear",0xf5fa9a83,"zpp_nape.geom.ZPP_SimpleSweep.clear","zpp_nape/geom/Simple.hx",694,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_696_add,"zpp_nape.geom.ZPP_SimpleSweep","add",0x9299d197,"zpp_nape.geom.ZPP_SimpleSweep.add","zpp_nape/geom/Simple.hx",696,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_710_remove,"zpp_nape.geom.ZPP_SimpleSweep","remove",0x422d4a8e,"zpp_nape.geom.ZPP_SimpleSweep.remove","zpp_nape/geom/Simple.hx",710,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_719_intersect,"zpp_nape.geom.ZPP_SimpleSweep","intersect",0x575adcd5,"zpp_nape.geom.ZPP_SimpleSweep.intersect","zpp_nape/geom/Simple.hx",719,0x62f156db)
HX_LOCAL_STACK_FRAME(_hx_pos_22ef5f38cafd1ece_737_intersection,"zpp_nape.geom.ZPP_SimpleSweep","intersection",0x34f12413,"zpp_nape.geom.ZPP_SimpleSweep.intersection","zpp_nape/geom/Simple.hx",737,0x62f156db)
namespace zpp_nape{
namespace geom{

void ZPP_SimpleSweep_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_464_new)
HXLINE( 466)		this->tree = null();
HXLINE( 465)		this->sweepx = ((Float)0.0);
HXLINE( 469)		if (hx::IsNull( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool )) {
HXLINE( 470)			this->tree =  ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 476)			this->tree = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
HXLINE( 477)			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = this->tree->next;
HXLINE( 478)			this->tree->next = null();
            		}
HXLINE( 485)		this->tree->lt = this->edge_lt_dyn();
HXLINE( 486)		this->tree->swapped = this->swap_nodes_dyn();
            	}

Dynamic ZPP_SimpleSweep_obj::__CreateEmpty() { return new ZPP_SimpleSweep_obj; }

void *ZPP_SimpleSweep_obj::_hx_vtable = 0;

Dynamic ZPP_SimpleSweep_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_SimpleSweep_obj > _hx_result = new ZPP_SimpleSweep_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_SimpleSweep_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f8094b8;
}

void ZPP_SimpleSweep_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_488_swap_nodes)
HXLINE( 489)		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t = p->node;
HXLINE( 490)		p->node = q->node;
HXLINE( 491)		q->node = t;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,swap_nodes,(void))

bool ZPP_SimpleSweep_obj::edge_lt( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_493_edge_lt)
HXLINE( 494)		Float ux = ((Float)0.0);
HXLINE( 495)		Float uy = ((Float)0.0);
HXLINE( 496)		Float vx = ((Float)0.0);
HXLINE( 497)		Float vy = ((Float)0.0);
HXLINE( 498)		bool flip;
HXLINE( 499)		bool _hx_tmp;
HXDLIN( 499)		if (hx::IsEq( p->left,q->left )) {
HXLINE( 499)			_hx_tmp = hx::IsEq( p->right,q->right );
            		}
            		else {
HXLINE( 499)			_hx_tmp = false;
            		}
HXDLIN( 499)		if (_hx_tmp) {
HXLINE( 499)			return false;
            		}
            		else {
HXLINE( 500)			if (hx::IsEq( p->left,q->right )) {
HXLINE( 500)				if ((p->left->x == p->right->x)) {
HXLINE( 502)					if ((p->left->y < p->right->y)) {
HXLINE( 502)						return (p->left->y > q->left->y);
            					}
            					else {
HXLINE( 503)						return (p->right->y > q->left->y);
            					}
            				}
            				else {
HXLINE( 506)					flip = (p->right->x < p->left->x);
HXLINE( 507)					{
HXLINE( 508)						ux = (p->right->x - p->left->x);
HXLINE( 509)						uy = (p->right->y - p->left->y);
            					}
HXLINE( 511)					{
HXLINE( 512)						vx = (q->left->x - p->left->x);
HXLINE( 513)						vy = (q->left->y - p->left->y);
            					}
HXLINE( 505)					Float _hx_tmp1;
HXLINE( 515)					if (flip) {
HXLINE( 505)						_hx_tmp1 = ((uy * vx) - (ux * vy));
            					}
            					else {
HXLINE( 505)						_hx_tmp1 = ((vy * ux) - (vx * uy));
            					}
HXDLIN( 505)					return (_hx_tmp1 < 0);
            				}
            			}
            			else {
HXLINE( 518)				if (hx::IsEq( p->right,q->left )) {
HXLINE( 518)					bool _hx_tmp2;
HXDLIN( 518)					if ((q->left->x == q->right->x)) {
HXLINE( 520)						if ((q->left->y < q->right->y)) {
HXLINE( 518)							_hx_tmp2 = (q->left->y > p->left->y);
            						}
            						else {
HXLINE( 518)							_hx_tmp2 = (q->right->y > p->left->y);
            						}
            					}
            					else {
HXLINE( 524)						flip = (q->right->x < q->left->x);
HXLINE( 525)						{
HXLINE( 526)							ux = (q->right->x - q->left->x);
HXLINE( 527)							uy = (q->right->y - q->left->y);
            						}
HXLINE( 529)						{
HXLINE( 530)							vx = (p->left->x - q->left->x);
HXLINE( 531)							vy = (p->left->y - q->left->y);
            						}
HXLINE( 523)						Float _hx_tmp3;
HXLINE( 533)						if (flip) {
HXLINE( 523)							_hx_tmp3 = ((uy * vx) - (ux * vy));
            						}
            						else {
HXLINE( 523)							_hx_tmp3 = ((vy * ux) - (vx * uy));
            						}
HXLINE( 518)						_hx_tmp2 = (_hx_tmp3 < 0);
            					}
HXDLIN( 518)					return !(_hx_tmp2);
            				}
            				else {
HXLINE( 536)					if (hx::IsEq( p->left,q->left )) {
HXLINE( 536)						if ((p->left->x == p->right->x)) {
HXLINE( 538)							if ((p->left->y < p->right->y)) {
HXLINE( 538)								return (p->left->y > q->right->y);
            							}
            							else {
HXLINE( 539)								return (p->right->y > q->right->y);
            							}
            						}
            						else {
HXLINE( 542)							flip = (p->right->x < p->left->x);
HXLINE( 543)							{
HXLINE( 544)								ux = (p->right->x - p->left->x);
HXLINE( 545)								uy = (p->right->y - p->left->y);
            							}
HXLINE( 547)							{
HXLINE( 548)								vx = (q->right->x - p->left->x);
HXLINE( 549)								vy = (q->right->y - p->left->y);
            							}
HXLINE( 541)							Float _hx_tmp4;
HXLINE( 551)							if (flip) {
HXLINE( 541)								_hx_tmp4 = ((uy * vx) - (ux * vy));
            							}
            							else {
HXLINE( 541)								_hx_tmp4 = ((vy * ux) - (vx * uy));
            							}
HXDLIN( 541)							return (_hx_tmp4 < 0);
            						}
            					}
            					else {
HXLINE( 554)						if (hx::IsEq( p->right,q->right )) {
HXLINE( 554)							if ((p->left->x == p->right->x)) {
HXLINE( 556)								if ((p->left->y < p->right->y)) {
HXLINE( 556)									return (p->left->y > q->left->y);
            								}
            								else {
HXLINE( 557)									return (p->right->y > q->left->y);
            								}
            							}
            							else {
HXLINE( 560)								flip = (p->right->x < p->left->x);
HXLINE( 561)								{
HXLINE( 562)									ux = (p->right->x - p->left->x);
HXLINE( 563)									uy = (p->right->y - p->left->y);
            								}
HXLINE( 565)								{
HXLINE( 566)									vx = (q->left->x - p->left->x);
HXLINE( 567)									vy = (q->left->y - p->left->y);
            								}
HXLINE( 559)								Float _hx_tmp5;
HXLINE( 569)								if (flip) {
HXLINE( 559)									_hx_tmp5 = ((uy * vx) - (ux * vy));
            								}
            								else {
HXLINE( 559)									_hx_tmp5 = ((vy * ux) - (vx * uy));
            								}
HXDLIN( 559)								return (_hx_tmp5 < 0);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 572)		if ((p->left->x == p->right->x)) {
HXLINE( 573)			if ((q->left->x == q->right->x)) {
HXLINE( 574)				 ::zpp_nape::geom::ZPP_SimpleVert pmax;
HXDLIN( 574)				if ((p->left->y < p->right->y)) {
HXLINE( 574)					pmax = p->right;
            				}
            				else {
HXLINE( 574)					pmax = p->left;
            				}
HXLINE( 575)				 ::zpp_nape::geom::ZPP_SimpleVert qmax;
HXDLIN( 575)				if ((q->left->y < q->right->y)) {
HXLINE( 575)					qmax = q->right;
            				}
            				else {
HXLINE( 575)					qmax = q->left;
            				}
HXLINE( 576)				return (pmax->y > qmax->y);
            			}
            			else {
HXLINE( 580)				flip = (q->right->x < q->left->x);
HXLINE( 581)				{
HXLINE( 582)					ux = (q->right->x - q->left->x);
HXLINE( 583)					uy = (q->right->y - q->left->y);
            				}
HXLINE( 585)				{
HXLINE( 586)					vx = (p->left->x - q->left->x);
HXLINE( 587)					vy = (p->left->y - q->left->y);
            				}
HXLINE( 579)				Float plrg;
HXLINE( 589)				if (flip) {
HXLINE( 579)					plrg = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 579)					plrg = ((vy * ux) - (vx * uy));
            				}
HXLINE( 592)				flip = (q->right->x < q->left->x);
HXLINE( 593)				{
HXLINE( 594)					ux = (q->right->x - q->left->x);
HXLINE( 595)					uy = (q->right->y - q->left->y);
            				}
HXLINE( 597)				{
HXLINE( 598)					vx = (p->right->x - q->left->x);
HXLINE( 599)					vy = (p->right->y - q->left->y);
            				}
HXLINE( 591)				Float aplrg;
HXLINE( 601)				if (flip) {
HXLINE( 591)					aplrg = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 591)					aplrg = ((vy * ux) - (vx * uy));
            				}
HXLINE( 603)				if (((plrg * aplrg) >= 0)) {
HXLINE( 603)					return (plrg >= ((Float)0.0));
            				}
            				else {
HXLINE( 604)					return (this->sweepx >= p->left->x);
            				}
            			}
            		}
            		else {
HXLINE( 607)			if ((q->left->x == q->right->x)) {
HXLINE( 609)				flip = (p->right->x < p->left->x);
HXLINE( 610)				{
HXLINE( 611)					ux = (p->right->x - p->left->x);
HXLINE( 612)					uy = (p->right->y - p->left->y);
            				}
HXLINE( 614)				{
HXLINE( 615)					vx = (q->left->x - p->left->x);
HXLINE( 616)					vy = (q->left->y - p->left->y);
            				}
HXLINE( 608)				Float qlrg;
HXLINE( 618)				if (flip) {
HXLINE( 608)					qlrg = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 608)					qlrg = ((vy * ux) - (vx * uy));
            				}
HXLINE( 621)				flip = (p->right->x < p->left->x);
HXLINE( 622)				{
HXLINE( 623)					ux = (p->right->x - p->left->x);
HXLINE( 624)					uy = (p->right->y - p->left->y);
            				}
HXLINE( 626)				{
HXLINE( 627)					vx = (q->right->x - p->left->x);
HXLINE( 628)					vy = (q->right->y - p->left->y);
            				}
HXLINE( 620)				Float aqlrg;
HXLINE( 630)				if (flip) {
HXLINE( 620)					aqlrg = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 620)					aqlrg = ((vy * ux) - (vx * uy));
            				}
HXLINE( 632)				if (((qlrg * aqlrg) >= 0)) {
HXLINE( 632)					return (qlrg < ((Float)0.0));
            				}
            				else {
HXLINE( 633)					return (this->sweepx < q->left->x);
            				}
            			}
            			else {
HXLINE( 637)				flip = (p->right->x < p->left->x);
HXLINE( 638)				{
HXLINE( 639)					ux = (p->right->x - p->left->x);
HXLINE( 640)					uy = (p->right->y - p->left->y);
            				}
HXLINE( 642)				{
HXLINE( 643)					vx = (q->left->x - p->left->x);
HXLINE( 644)					vy = (q->left->y - p->left->y);
            				}
HXLINE( 636)				Float qlrg1;
HXLINE( 646)				if (flip) {
HXLINE( 636)					qlrg1 = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 636)					qlrg1 = ((vy * ux) - (vx * uy));
            				}
HXDLIN( 636)				bool qlrg2 = (qlrg1 < ((Float)0.0));
HXLINE( 649)				flip = (p->right->x < p->left->x);
HXLINE( 650)				{
HXLINE( 651)					ux = (p->right->x - p->left->x);
HXLINE( 652)					uy = (p->right->y - p->left->y);
            				}
HXLINE( 654)				{
HXLINE( 655)					vx = (q->right->x - p->left->x);
HXLINE( 656)					vy = (q->right->y - p->left->y);
            				}
HXLINE( 648)				Float aqlrg1;
HXLINE( 658)				if (flip) {
HXLINE( 648)					aqlrg1 = ((uy * vx) - (ux * vy));
            				}
            				else {
HXLINE( 648)					aqlrg1 = ((vy * ux) - (vx * uy));
            				}
HXDLIN( 648)				bool aqlrg2 = (aqlrg1 < ((Float)0.0));
HXLINE( 660)				if ((qlrg2 == aqlrg2)) {
HXLINE( 660)					return qlrg2;
            				}
            				else {
HXLINE( 663)					flip = (q->right->x < q->left->x);
HXLINE( 664)					{
HXLINE( 665)						ux = (q->right->x - q->left->x);
HXLINE( 666)						uy = (q->right->y - q->left->y);
            					}
HXLINE( 668)					{
HXLINE( 669)						vx = (p->left->x - q->left->x);
HXLINE( 670)						vy = (p->left->y - q->left->y);
            					}
HXLINE( 662)					Float plrg1;
HXLINE( 672)					if (flip) {
HXLINE( 662)						plrg1 = ((uy * vx) - (ux * vy));
            					}
            					else {
HXLINE( 662)						plrg1 = ((vy * ux) - (vx * uy));
            					}
HXDLIN( 662)					bool plrg2 = (plrg1 >= ((Float)0.0));
HXLINE( 675)					flip = (q->right->x < q->left->x);
HXLINE( 676)					{
HXLINE( 677)						ux = (q->right->x - q->left->x);
HXLINE( 678)						uy = (q->right->y - q->left->y);
            					}
HXLINE( 680)					{
HXLINE( 681)						vx = (p->right->x - q->left->x);
HXLINE( 682)						vy = (p->right->y - q->left->y);
            					}
HXLINE( 674)					Float aplrg1;
HXLINE( 684)					if (flip) {
HXLINE( 674)						aplrg1 = ((uy * vx) - (ux * vy));
            					}
            					else {
HXLINE( 674)						aplrg1 = ((vy * ux) - (vx * uy));
            					}
HXDLIN( 674)					bool aplrg2 = (aplrg1 >= ((Float)0.0));
HXLINE( 686)					if ((plrg2 == aplrg2)) {
HXLINE( 686)						return plrg2;
            					}
HXLINE( 687)					Float py = ((((this->sweepx - p->left->x) / (p->right->x - p->left->x)) * (p->right->y - p->left->y)) + p->left->y);
HXLINE( 688)					Float qy = ((((this->sweepx - q->left->x) / (q->right->x - q->left->x)) * (q->right->y - q->left->y)) + q->left->y);
HXLINE( 689)					return (py > qy);
            				}
            			}
            		}
HXLINE( 572)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,edge_lt,return )

void ZPP_SimpleSweep_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_694_clear)
HXDLIN( 694)		this->tree->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSweep_obj,clear,(void))

 ::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSweep_obj::add( ::zpp_nape::geom::ZPP_SimpleSeg e){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_696_add)
HXLINE( 697)		e->node = this->tree->insert(e);
HXLINE( 698)		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);
HXLINE( 699)		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);
HXLINE( 700)		if (hx::IsNotNull( nxt )) {
HXLINE( 701)			e->next = nxt->data;
HXLINE( 702)			nxt->data->prev = e;
            		}
HXLINE( 704)		if (hx::IsNotNull( pre )) {
HXLINE( 705)			e->prev = pre->data;
HXLINE( 706)			pre->data->next = e;
            		}
HXLINE( 708)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,add,return )

void ZPP_SimpleSweep_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg e){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_710_remove)
HXLINE( 711)		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);
HXLINE( 712)		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);
HXLINE( 713)		if (hx::IsNotNull( nxt )) {
HXLINE( 713)			nxt->data->prev = e->prev;
            		}
HXLINE( 714)		if (hx::IsNotNull( pre )) {
HXLINE( 714)			pre->data->next = e->next;
            		}
HXLINE( 715)		this->tree->remove_node(e->node);
HXLINE( 716)		e->node = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,remove,(void))

bool ZPP_SimpleSweep_obj::intersect( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q){
            	HX_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_719_intersect)
HXDLIN( 719)		bool _hx_tmp;
HXDLIN( 719)		if (hx::IsNotNull( p )) {
HXDLIN( 719)			_hx_tmp = hx::IsNull( q );
            		}
            		else {
HXDLIN( 719)			_hx_tmp = true;
            		}
HXDLIN( 719)		if (_hx_tmp) {
HXDLIN( 719)			return false;
            		}
            		else {
HXLINE( 720)			bool _hx_tmp1;
HXDLIN( 720)			bool _hx_tmp2;
HXDLIN( 720)			bool _hx_tmp3;
HXDLIN( 720)			if (hx::IsNotEq( p->left,q->left )) {
HXLINE( 720)				_hx_tmp3 = hx::IsEq( p->left,q->right );
            			}
            			else {
HXLINE( 720)				_hx_tmp3 = true;
            			}
HXDLIN( 720)			if (!(_hx_tmp3)) {
HXLINE( 720)				_hx_tmp2 = hx::IsEq( p->right,q->left );
            			}
            			else {
HXLINE( 720)				_hx_tmp2 = true;
            			}
HXDLIN( 720)			if (!(_hx_tmp2)) {
HXLINE( 720)				_hx_tmp1 = hx::IsEq( p->right,q->right );
            			}
            			else {
HXLINE( 720)				_hx_tmp1 = true;
            			}
HXDLIN( 720)			if (_hx_tmp1) {
HXLINE( 720)				return false;
            			}
            			else {
HXLINE( 722)				Float lsign = (((q->left->x - p->left->x) * (p->right->y - p->left->y)) - ((p->right->x - p->left->x) * (q->left->y - p->left->y)));
HXLINE( 723)				Float rsign = (((q->right->x - p->left->x) * (p->right->y - p->left->y)) - ((p->right->x - p->left->x) * (q->right->y - p->left->y)));
HXLINE( 724)				if (((lsign * rsign) > 0)) {
HXLINE( 724)					return false;
            				}
            				else {
HXLINE( 726)					Float lsign2 = (((p->left->x - q->left->x) * (q->right->y - q->left->y)) - ((q->right->x - q->left->x) * (p->left->y - q->left->y)));
HXLINE( 727)					Float rsign2 = (((p->right->x - q->left->x) * (q->right->y - q->left->y)) - ((q->right->x - q->left->x) * (p->right->y - q->left->y)));
HXLINE( 728)					if (((lsign2 * rsign2) > 0)) {
HXLINE( 728)						return false;
            					}
            					else {
HXLINE( 729)						bool _hx_tmp4;
HXDLIN( 729)						if (((lsign * rsign) >= 0)) {
HXLINE( 729)							_hx_tmp4 = ((lsign2 * rsign2) >= 0);
            						}
            						else {
HXLINE( 729)							_hx_tmp4 = false;
            						}
HXDLIN( 729)						if (_hx_tmp4) {
HXLINE( 730)							return true;
            						}
            						else {
HXLINE( 732)							return true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 719)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersect,return )

 ::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleSweep_obj::intersection( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q){
            	HX_GC_STACKFRAME(&_hx_pos_22ef5f38cafd1ece_737_intersection)
HXDLIN( 737)		bool _hx_tmp;
HXDLIN( 737)		if (hx::IsNotNull( p )) {
HXDLIN( 737)			_hx_tmp = hx::IsNull( q );
            		}
            		else {
HXDLIN( 737)			_hx_tmp = true;
            		}
HXDLIN( 737)		if (_hx_tmp) {
HXDLIN( 737)			return null();
            		}
            		else {
HXLINE( 738)			bool _hx_tmp1;
HXDLIN( 738)			bool _hx_tmp2;
HXDLIN( 738)			bool _hx_tmp3;
HXDLIN( 738)			if (hx::IsNotEq( p->left,q->left )) {
HXLINE( 738)				_hx_tmp3 = hx::IsEq( p->left,q->right );
            			}
            			else {
HXLINE( 738)				_hx_tmp3 = true;
            			}
HXDLIN( 738)			if (!(_hx_tmp3)) {
HXLINE( 738)				_hx_tmp2 = hx::IsEq( p->right,q->left );
            			}
            			else {
HXLINE( 738)				_hx_tmp2 = true;
            			}
HXDLIN( 738)			if (!(_hx_tmp2)) {
HXLINE( 738)				_hx_tmp1 = hx::IsEq( p->right,q->right );
            			}
            			else {
HXLINE( 738)				_hx_tmp1 = true;
            			}
HXDLIN( 738)			if (_hx_tmp1) {
HXLINE( 738)				return null();
            			}
            			else {
HXLINE( 740)				Float ux = ((Float)0.0);
HXLINE( 741)				Float uy = ((Float)0.0);
HXLINE( 742)				{
HXLINE( 743)					ux = (p->right->x - p->left->x);
HXLINE( 744)					uy = (p->right->y - p->left->y);
            				}
HXLINE( 746)				Float vx = ((Float)0.0);
HXLINE( 747)				Float vy = ((Float)0.0);
HXLINE( 748)				{
HXLINE( 749)					vx = (q->right->x - q->left->x);
HXLINE( 750)					vy = (q->right->y - q->left->y);
            				}
HXLINE( 752)				Float denom = ((vy * ux) - (vx * uy));
HXLINE( 753)				if ((denom == ((Float)0.0))) {
HXLINE( 753)					return null();
            				}
HXLINE( 754)				denom = (( (Float)(1) ) / denom);
HXLINE( 755)				Float cx = ((Float)0.0);
HXLINE( 756)				Float cy = ((Float)0.0);
HXLINE( 757)				{
HXLINE( 758)					cx = (q->left->x - p->left->x);
HXLINE( 759)					cy = (q->left->y - p->left->y);
            				}
HXLINE( 761)				Float t = (((vy * cx) - (vx * cy)) * denom);
HXLINE( 762)				bool _hx_tmp4;
HXDLIN( 762)				if (!((t < 0))) {
HXLINE( 762)					_hx_tmp4 = (t > 1);
            				}
            				else {
HXLINE( 762)					_hx_tmp4 = true;
            				}
HXDLIN( 762)				if (_hx_tmp4) {
HXLINE( 762)					return null();
            				}
HXLINE( 763)				Float s = (((uy * cx) - (ux * cy)) * denom);
HXLINE( 764)				bool _hx_tmp5;
HXDLIN( 764)				if (!((s < 0))) {
HXLINE( 764)					_hx_tmp5 = (s > 1);
            				}
            				else {
HXLINE( 764)					_hx_tmp5 = true;
            				}
HXDLIN( 764)				if (_hx_tmp5) {
HXLINE( 764)					return null();
            				}
HXLINE( 765)				 ::zpp_nape::geom::ZPP_SimpleVert vet;
HXLINE( 766)				bool _hx_tmp6;
HXDLIN( 766)				bool _hx_tmp7;
HXDLIN( 766)				bool _hx_tmp8;
HXDLIN( 766)				if ((s != 0)) {
HXLINE( 766)					_hx_tmp8 = (s == 1);
            				}
            				else {
HXLINE( 766)					_hx_tmp8 = true;
            				}
HXDLIN( 766)				if (!(_hx_tmp8)) {
HXLINE( 766)					_hx_tmp7 = (t == 0);
            				}
            				else {
HXLINE( 766)					_hx_tmp7 = true;
            				}
HXDLIN( 766)				if (!(_hx_tmp7)) {
HXLINE( 766)					_hx_tmp6 = (t == 1);
            				}
            				else {
HXLINE( 766)					_hx_tmp6 = true;
            				}
HXDLIN( 766)				if (_hx_tmp6) {
HXLINE( 768)					bool cases = (s == 0);
HXLINE( 769)					bool _hx_tmp9;
HXDLIN( 769)					if ((s == 1)) {
HXLINE( 769)						_hx_tmp9 = cases;
            					}
            					else {
HXLINE( 769)						_hx_tmp9 = false;
            					}
HXDLIN( 769)					if (_hx_tmp9) {
HXLINE( 769)						HX_STACK_DO_THROW(HX_("corner case 1a",35,83,d9,78));
            					}
            					else {
HXLINE( 770)						if ((s == 1)) {
HXLINE( 770)							cases = true;
            						}
            					}
HXLINE( 771)					bool _hx_tmp10;
HXDLIN( 771)					if ((t == 0)) {
HXLINE( 771)						_hx_tmp10 = cases;
            					}
            					else {
HXLINE( 771)						_hx_tmp10 = false;
            					}
HXDLIN( 771)					if (_hx_tmp10) {
HXLINE( 771)						HX_STACK_DO_THROW(HX_("corner case 1b",36,83,d9,78));
            					}
            					else {
HXLINE( 772)						if ((t == 0)) {
HXLINE( 772)							cases = true;
            						}
            					}
HXLINE( 773)					bool _hx_tmp11;
HXDLIN( 773)					if ((t == 1)) {
HXLINE( 773)						_hx_tmp11 = cases;
            					}
            					else {
HXLINE( 773)						_hx_tmp11 = false;
            					}
HXDLIN( 773)					if (_hx_tmp11) {
HXLINE( 773)						HX_STACK_DO_THROW(HX_("corner case 1c",37,83,d9,78));
            					}
HXLINE( 775)					if ((s == 0)) {
HXLINE( 775)						vet = q->left;
            					}
            					else {
HXLINE( 775)						if ((s == 1)) {
HXLINE( 775)							vet = q->right;
            						}
            						else {
HXLINE( 775)							if ((t == 0)) {
HXLINE( 775)								vet = p->left;
            							}
            							else {
HXLINE( 775)								vet = p->right;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 777)					Float x = (((Float)0.5) * (((p->left->x + (ux * t)) + q->left->x) + (vx * s)));
HXDLIN( 777)					Float y = (((Float)0.5) * (((p->left->y + (uy * t)) + q->left->y) + (vy * s)));
HXDLIN( 777)					 ::zpp_nape::geom::ZPP_SimpleVert ret;
HXDLIN( 777)					if (hx::IsNull( ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool )) {
HXLINE( 777)						ret =  ::zpp_nape::geom::ZPP_SimpleVert_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 777)						ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
HXDLIN( 777)						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
HXDLIN( 777)						ret->next = null();
            					}
HXDLIN( 777)					{
HXLINE( 777)						ret->x = x;
HXDLIN( 777)						ret->y = y;
            					}
HXDLIN( 777)					vet = ret;
            				}
HXLINE( 778)				 ::zpp_nape::geom::ZPP_SimpleEvent ret1;
HXDLIN( 778)				if (hx::IsNull( ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool )) {
HXLINE( 778)					ret1 =  ::zpp_nape::geom::ZPP_SimpleEvent_obj::__alloc( HX_CTX );
            				}
            				else {
HXLINE( 778)					ret1 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
HXDLIN( 778)					::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret1->next;
HXDLIN( 778)					ret1->next = null();
            				}
HXDLIN( 778)				ret1->vertex = vet;
HXDLIN( 778)				 ::zpp_nape::geom::ZPP_SimpleEvent ret2 = ret1;
HXLINE( 779)				ret2->type = 0;
HXLINE( 780)				ret2->segment = p;
HXLINE( 781)				ret2->segment2 = q;
HXLINE( 782)				return ret2;
            			}
            		}
HXLINE( 737)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersection,return )


hx::ObjectPtr< ZPP_SimpleSweep_obj > ZPP_SimpleSweep_obj::__new() {
	hx::ObjectPtr< ZPP_SimpleSweep_obj > __this = new ZPP_SimpleSweep_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_SimpleSweep_obj > ZPP_SimpleSweep_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_SimpleSweep_obj *__this = (ZPP_SimpleSweep_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_SimpleSweep_obj), true, "zpp_nape.geom.ZPP_SimpleSweep"));
	*(void **)__this = ZPP_SimpleSweep_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_SimpleSweep_obj::ZPP_SimpleSweep_obj()
{
}

void ZPP_SimpleSweep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSweep);
	HX_MARK_MEMBER_NAME(sweepx,"sweepx");
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSweep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sweepx,"sweepx");
	HX_VISIT_MEMBER_NAME(tree,"tree");
}

hx::Val ZPP_SimpleSweep_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return hx::Val( tree ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { return hx::Val( sweepx ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return hx::Val( edge_lt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { return hx::Val( intersect_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return hx::Val( swap_nodes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return hx::Val( intersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ZPP_SimpleSweep_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast<  ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { sweepx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleSweep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sweepx",0c,19,c9,c2));
	outFields->push(HX_("tree",5e,99,03,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_SimpleSweep_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_SimpleSweep_obj,sweepx),HX_("sweepx",0c,19,c9,c2)},
	{hx::fsObject /*  ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg */ ,(int)offsetof(ZPP_SimpleSweep_obj,tree),HX_("tree",5e,99,03,4d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ZPP_SimpleSweep_obj_sStaticStorageInfo = 0;
#endif

static ::String ZPP_SimpleSweep_obj_sMemberFields[] = {
	HX_("sweepx",0c,19,c9,c2),
	HX_("tree",5e,99,03,4d),
	HX_("swap_nodes",45,da,d2,e8),
	HX_("edge_lt",8a,b0,f8,f4),
	HX_("clear",8d,71,5b,48),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("intersect",df,00,75,42),
	HX_("intersection",49,a2,61,88),
	::String(null()) };

hx::Class ZPP_SimpleSweep_obj::__mClass;

void ZPP_SimpleSweep_obj::__register()
{
	ZPP_SimpleSweep_obj _hx_dummy;
	ZPP_SimpleSweep_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_SimpleSweep",e4,cc,b5,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_SimpleSweep_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimpleSweep_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_SimpleSweep_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_SimpleSweep_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace geom