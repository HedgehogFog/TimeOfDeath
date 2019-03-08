// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_constraint_AngleJoint
#define INCLUDED_nape_constraint_AngleJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_constraint_Constraint
#include <hxinc/nape/constraint/Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,AngleJoint)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_AngleJoint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)

namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES AngleJoint_obj : public  ::nape::constraint::Constraint_obj
{
	public:
		typedef  ::nape::constraint::Constraint_obj super;
		typedef AngleJoint_obj OBJ_;
		AngleJoint_obj();

	public:
		enum { _hx_ClassId = 0x4b26b3a4 };

		void __construct( ::nape::phys::Body body1, ::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.constraint.AngleJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.constraint.AngleJoint"); }
		static hx::ObjectPtr< AngleJoint_obj > __new( ::nape::phys::Body body1, ::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		static hx::ObjectPtr< AngleJoint_obj > __alloc(hx::Ctx *_hx_ctx, ::nape::phys::Body body1, ::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AngleJoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AngleJoint",97,ac,5e,4c); }

		 ::zpp_nape::constraint::ZPP_AngleJoint zpp_inner_zn;
		 ::nape::phys::Body get_body1();
		::Dynamic get_body1_dyn();

		 ::nape::phys::Body set_body1( ::nape::phys::Body body1);
		::Dynamic set_body1_dyn();

		 ::nape::phys::Body get_body2();
		::Dynamic get_body2_dyn();

		 ::nape::phys::Body set_body2( ::nape::phys::Body body2);
		::Dynamic set_body2_dyn();

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

#endif /* INCLUDED_nape_constraint_AngleJoint */ 