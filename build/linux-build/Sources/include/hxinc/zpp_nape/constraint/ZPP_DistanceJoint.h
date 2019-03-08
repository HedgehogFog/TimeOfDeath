// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#define INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <hxinc/zpp_nape/constraint/ZPP_Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,DistanceJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_DistanceJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)

namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES ZPP_DistanceJoint_obj : public  ::zpp_nape::constraint::ZPP_Constraint_obj
{
	public:
		typedef  ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_DistanceJoint_obj OBJ_;
		ZPP_DistanceJoint_obj();

	public:
		enum { _hx_ClassId = 0x49b353a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.constraint.ZPP_DistanceJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.constraint.ZPP_DistanceJoint"); }
		static hx::ObjectPtr< ZPP_DistanceJoint_obj > __new();
		static hx::ObjectPtr< ZPP_DistanceJoint_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_DistanceJoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_DistanceJoint",50,30,5a,77); }

		 ::nape::constraint::DistanceJoint outer_zn;
		Float jointMin;
		Float jointMax;
		bool slack;
		bool equal;
		bool is_slack();
		::Dynamic is_slack_dyn();

		Float nx;
		Float ny;
		Float cx1;
		Float cx2;
		 ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		::Dynamic bodyImpulse_dyn();

		void activeBodies();

		void inactiveBodies();

		 ::zpp_nape::phys::ZPP_Body b1;
		Float a1localx;
		Float a1localy;
		Float a1relx;
		Float a1rely;
		void validate_a1();
		::Dynamic validate_a1_dyn();

		void invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x);
		::Dynamic invalidate_a1_dyn();

		void setup_a1();
		::Dynamic setup_a1_dyn();

		 ::nape::geom::Vec2 wrap_a1;
		 ::zpp_nape::phys::ZPP_Body b2;
		Float a2localx;
		Float a2localy;
		Float a2relx;
		Float a2rely;
		void validate_a2();
		::Dynamic validate_a2_dyn();

		void invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x);
		::Dynamic invalidate_a2_dyn();

		void setup_a2();
		::Dynamic setup_a2_dyn();

		 ::nape::geom::Vec2 wrap_a2;
		Float kMass;
		Float jAcc;
		Float jMax;
		Float gamma;
		Float bias;
		bool stepped;
		 ::nape::constraint::Constraint copy(::Array< ::Dynamic> dict,::Array< ::Dynamic> todo);

		void validate();

		void wake_connected();

		void forest();

		bool pair_exists(int id,int di);

		void clearcache();

		bool preStep(Float dt);

		void warmStart();

		bool applyImpulseVel();

		bool applyImpulsePos();

		void draw( ::nape::util::Debug g);

};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint */ 