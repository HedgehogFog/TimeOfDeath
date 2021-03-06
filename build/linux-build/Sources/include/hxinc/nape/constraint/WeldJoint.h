// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_constraint_WeldJoint
#define INCLUDED_nape_constraint_WeldJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_constraint_Constraint
#include <hxinc/nape/constraint/Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,WeldJoint)
HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_WeldJoint)

namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES WeldJoint_obj : public  ::nape::constraint::Constraint_obj
{
	public:
		typedef  ::nape::constraint::Constraint_obj super;
		typedef WeldJoint_obj OBJ_;
		WeldJoint_obj();

	public:
		enum { _hx_ClassId = 0x2c161cbb };

		void __construct( ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.constraint.WeldJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.constraint.WeldJoint"); }
		static hx::ObjectPtr< WeldJoint_obj > __new( ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase);
		static hx::ObjectPtr< WeldJoint_obj > __alloc(hx::Ctx *_hx_ctx, ::nape::phys::Body body1, ::nape::phys::Body body2, ::nape::geom::Vec2 anchor1, ::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeldJoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WeldJoint",44,8d,05,ad); }

		 ::zpp_nape::constraint::ZPP_WeldJoint zpp_inner_zn;
		 ::nape::phys::Body get_body1();
		::Dynamic get_body1_dyn();

		 ::nape::phys::Body set_body1( ::nape::phys::Body body1);
		::Dynamic set_body1_dyn();

		 ::nape::phys::Body get_body2();
		::Dynamic get_body2_dyn();

		 ::nape::phys::Body set_body2( ::nape::phys::Body body2);
		::Dynamic set_body2_dyn();

		 ::nape::geom::Vec2 get_anchor1();
		::Dynamic get_anchor1_dyn();

		 ::nape::geom::Vec2 set_anchor1( ::nape::geom::Vec2 anchor1);
		::Dynamic set_anchor1_dyn();

		 ::nape::geom::Vec2 get_anchor2();
		::Dynamic get_anchor2_dyn();

		 ::nape::geom::Vec2 set_anchor2( ::nape::geom::Vec2 anchor2);
		::Dynamic set_anchor2_dyn();

		Float get_phase();
		::Dynamic get_phase_dyn();

		Float set_phase(Float phase);
		::Dynamic set_phase_dyn();

		 ::nape::geom::MatMN impulse();

		 ::nape::geom::Vec3 bodyImpulse( ::nape::phys::Body body);

		void visitBodies( ::Dynamic lambda);

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_WeldJoint */ 
