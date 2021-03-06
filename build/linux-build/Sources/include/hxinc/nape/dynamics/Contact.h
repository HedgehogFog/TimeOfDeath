// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_dynamics_Contact
#define INCLUDED_nape_dynamics_Contact

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,CollisionArbiter)
HX_DECLARE_CLASS2(nape,dynamics,Contact)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Contact)

namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES Contact_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Contact_obj OBJ_;
		Contact_obj();

	public:
		enum { _hx_ClassId = 0x056ba684 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.Contact")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.dynamics.Contact"); }
		static hx::ObjectPtr< Contact_obj > __new();
		static hx::ObjectPtr< Contact_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Contact_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Contact",80,a2,c5,e6); }

		 ::zpp_nape::dynamics::ZPP_Contact zpp_inner;
		 ::nape::dynamics::CollisionArbiter get_arbiter();
		::Dynamic get_arbiter_dyn();

		Float get_penetration();
		::Dynamic get_penetration_dyn();

		 ::nape::geom::Vec2 get_position();
		::Dynamic get_position_dyn();

		bool get_fresh();
		::Dynamic get_fresh_dyn();

		 ::nape::geom::Vec3 normalImpulse( ::nape::phys::Body body);
		::Dynamic normalImpulse_dyn();

		 ::nape::geom::Vec3 tangentImpulse( ::nape::phys::Body body);
		::Dynamic tangentImpulse_dyn();

		Float rollingImpulse( ::nape::phys::Body body);
		::Dynamic rollingImpulse_dyn();

		 ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body);
		::Dynamic totalImpulse_dyn();

		Float get_friction();
		::Dynamic get_friction_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_Contact */ 
