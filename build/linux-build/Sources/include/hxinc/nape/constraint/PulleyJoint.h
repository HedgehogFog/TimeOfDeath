// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_constraint_PulleyJoint
#define INCLUDED_nape_constraint_PulleyJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_constraint_Constraint
#include <hxinc/nape/constraint/Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,PulleyJoint)
HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_PulleyJoint)

namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES PulleyJoint_obj : public  ::nape::constraint::Constraint_obj
{
	public:
		typedef  ::nape::constraint::Constraint_obj super;
		typedef PulleyJoint_obj OBJ_;
		PulleyJoint_obj();

	public:
		enum { _hx_ClassId = 0x05b69860 };

		void __construct( ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::phys::Body body3, ::nape::phys::Body body4, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2, ::nape::geom::Vec2 anchor3, ::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.constraint.PulleyJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.constraint.PulleyJoint"); }
		static hx::ObjectPtr< PulleyJoint_obj > __new( ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::phys::Body body3, ::nape::phys::Body body4, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2, ::nape::geom::Vec2 anchor3, ::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		static hx::ObjectPtr< PulleyJoint_obj > __alloc(hx::Ctx *_hx_ctx, ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::phys::Body body3, ::nape::phys::Body body4, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2, ::nape::geom::Vec2 anchor3, ::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PulleyJoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PulleyJoint",f1,ea,26,f5); }

		 ::zpp_nape::constraint::ZPP_PulleyJoint zpp_inner_zn;
		 ::nape::phys::Body get_body1();
		::Dynamic get_body1_dyn();

		 ::nape::phys::Body set_body1( ::nape::phys::Body body1);
		::Dynamic set_body1_dyn();

		 ::nape::phys::Body get_body2();
		::Dynamic get_body2_dyn();

		 ::nape::phys::Body set_body2( ::nape::phys::Body body2);
		::Dynamic set_body2_dyn();

		 ::nape::phys::Body get_body3();
		::Dynamic get_body3_dyn();

		 ::nape::phys::Body set_body3( ::nape::phys::Body body3);
		::Dynamic set_body3_dyn();

		 ::nape::phys::Body get_body4();
		::Dynamic get_body4_dyn();

		 ::nape::phys::Body set_body4( ::nape::phys::Body body4);
		::Dynamic set_body4_dyn();

		 ::nape::geom::Vec2 get_anchor1();
		::Dynamic get_anchor1_dyn();

		 ::nape::geom::Vec2 set_anchor1( ::nape::geom::Vec2 anchor1);
		::Dynamic set_anchor1_dyn();

		 ::nape::geom::Vec2 get_anchor2();
		::Dynamic get_anchor2_dyn();

		 ::nape::geom::Vec2 set_anchor2( ::nape::geom::Vec2 anchor2);
		::Dynamic set_anchor2_dyn();

		 ::nape::geom::Vec2 get_anchor3();
		::Dynamic get_anchor3_dyn();

		 ::nape::geom::Vec2 set_anchor3( ::nape::geom::Vec2 anchor3);
		::Dynamic set_anchor3_dyn();

		 ::nape::geom::Vec2 get_anchor4();
		::Dynamic get_anchor4_dyn();

		 ::nape::geom::Vec2 set_anchor4( ::nape::geom::Vec2 anchor4);
		::Dynamic set_anchor4_dyn();

		Float get_jointMin();
		::Dynamic get_jointMin_dyn();

		Float set_jointMin(Float jointMin);
		::Dynamic set_jointMin_dyn();

		Float get_jointMax();
		::Dynamic get_jointMax_dyn();

		Float set_jointMax(Float jointMax);
		::Dynamic set_jointMax_dyn();

		Float get_ratio();
		::Dynamic get_ratio_dyn();

		Float set_ratio(Float ratio);
		::Dynamic set_ratio_dyn();

		bool isSlack();
		::Dynamic isSlack_dyn();

		 ::nape::geom::MatMN impulse();

		 ::nape::geom::Vec3 bodyImpulse( ::nape::phys::Body body);

		void visitBodies( ::Dynamic lambda);

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_PulleyJoint */ 