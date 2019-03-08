// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#define INCLUDED_zpp_nape_geom_ZPP_Collide

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Collide)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Circle)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Polygon)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Vec2)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_Collide_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Collide_obj OBJ_;
		ZPP_Collide_obj();

	public:
		enum { _hx_ClassId = 0x670f66ac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_Collide")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"zpp_nape.geom.ZPP_Collide"); }

		hx::ObjectPtr< ZPP_Collide_obj > __new() {
			hx::ObjectPtr< ZPP_Collide_obj > __this = new ZPP_Collide_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ZPP_Collide_obj > __alloc(hx::Ctx *_hx_ctx) {
			ZPP_Collide_obj *__this = (ZPP_Collide_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_Collide_obj), false, "zpp_nape.geom.ZPP_Collide"));
			*(void **)__this = ZPP_Collide_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Collide_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Collide",b9,2b,55,45); }

		static void __boot();
		static bool circleContains( ::zpp_nape::shape::ZPP_Circle c, ::zpp_nape::geom::ZPP_Vec2 p);
		static ::Dynamic circleContains_dyn();

		static bool polyContains( ::zpp_nape::shape::ZPP_Polygon s, ::zpp_nape::geom::ZPP_Vec2 p);
		static ::Dynamic polyContains_dyn();

		static bool shapeContains( ::zpp_nape::shape::ZPP_Shape s, ::zpp_nape::geom::ZPP_Vec2 p);
		static ::Dynamic shapeContains_dyn();

		static bool bodyContains( ::zpp_nape::phys::ZPP_Body b, ::zpp_nape::geom::ZPP_Vec2 p);
		static ::Dynamic bodyContains_dyn();

		static bool containTest( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		static ::Dynamic containTest_dyn();

		static bool contactCollide( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2, ::zpp_nape::dynamics::ZPP_ColArbiter arb,bool rev);
		static ::Dynamic contactCollide_dyn();

		static bool testCollide_safe( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		static ::Dynamic testCollide_safe_dyn();

		static bool testCollide( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		static ::Dynamic testCollide_dyn();

		static bool flowCollide( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2, ::zpp_nape::dynamics::ZPP_FluidArbiter arb);
		static ::Dynamic flowCollide_dyn();

		static  ::zpp_nape::util::ZNPList_ZPP_Vec2 flowpoly;
		static  ::zpp_nape::util::ZNPList_ZPP_Vec2 flowsegs;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Collide */ 