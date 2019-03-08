// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_constraint_Constraint
#define INCLUDED_nape_constraint_Constraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)

namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES Constraint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Constraint_obj OBJ_;
		Constraint_obj();

	public:
		enum { _hx_ClassId = 0x00e9fd26 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.constraint.Constraint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.constraint.Constraint"); }
		static hx::ObjectPtr< Constraint_obj > __new();
		static hx::ObjectPtr< Constraint_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Constraint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Constraint",7d,04,7d,51); }

		static void __boot();
		static bool zpp_internalAlloc;
		 ::zpp_nape::constraint::ZPP_Constraint zpp_inner;
		 ::Dynamic get_userData();
		::Dynamic get_userData_dyn();

		bool debugDraw;
		 ::nape::phys::Compound get_compound();
		::Dynamic get_compound_dyn();

		 ::nape::phys::Compound set_compound( ::nape::phys::Compound compound);
		::Dynamic set_compound_dyn();

		 ::nape::space::Space get_space();
		::Dynamic get_space_dyn();

		 ::nape::space::Space set_space( ::nape::space::Space space);
		::Dynamic set_space_dyn();

		bool get_isSleeping();
		::Dynamic get_isSleeping_dyn();

		bool get_active();
		::Dynamic get_active_dyn();

		bool set_active(bool active);
		::Dynamic set_active_dyn();

		bool get_ignore();
		::Dynamic get_ignore_dyn();

		bool set_ignore(bool ignore);
		::Dynamic set_ignore_dyn();

		bool get_stiff();
		::Dynamic get_stiff_dyn();

		bool set_stiff(bool stiff);
		::Dynamic set_stiff_dyn();

		Float get_frequency();
		::Dynamic get_frequency_dyn();

		Float set_frequency(Float frequency);
		::Dynamic set_frequency_dyn();

		Float get_damping();
		::Dynamic get_damping_dyn();

		Float set_damping(Float damping);
		::Dynamic set_damping_dyn();

		Float get_maxForce();
		::Dynamic get_maxForce_dyn();

		Float set_maxForce(Float maxForce);
		::Dynamic set_maxForce_dyn();

		Float get_maxError();
		::Dynamic get_maxError_dyn();

		Float set_maxError(Float maxError);
		::Dynamic set_maxError_dyn();

		bool get_breakUnderForce();
		::Dynamic get_breakUnderForce_dyn();

		bool set_breakUnderForce(bool breakUnderForce);
		::Dynamic set_breakUnderForce_dyn();

		bool get_breakUnderError();
		::Dynamic get_breakUnderError_dyn();

		bool set_breakUnderError(bool breakUnderError);
		::Dynamic set_breakUnderError_dyn();

		bool get_removeOnBreak();
		::Dynamic get_removeOnBreak_dyn();

		bool set_removeOnBreak(bool removeOnBreak);
		::Dynamic set_removeOnBreak_dyn();

		virtual  ::nape::geom::MatMN impulse();
		::Dynamic impulse_dyn();

		virtual  ::nape::geom::Vec3 bodyImpulse( ::nape::phys::Body body);
		::Dynamic bodyImpulse_dyn();

		virtual void visitBodies( ::Dynamic lambda);
		::Dynamic visitBodies_dyn();

		 ::nape::callbacks::CbTypeList get_cbTypes();
		::Dynamic get_cbTypes_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::nape::constraint::Constraint copy();
		::Dynamic copy_dyn();

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_Constraint */ 
