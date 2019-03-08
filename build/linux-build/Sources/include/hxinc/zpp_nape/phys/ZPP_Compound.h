// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#define INCLUDED_zpp_nape_phys_ZPP_Compound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)

namespace zpp_nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES ZPP_Compound_obj : public  ::zpp_nape::phys::ZPP_Interactor_obj
{
	public:
		typedef  ::zpp_nape::phys::ZPP_Interactor_obj super;
		typedef ZPP_Compound_obj OBJ_;
		ZPP_Compound_obj();

	public:
		enum { _hx_ClassId = 0x41e59877 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.phys.ZPP_Compound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.phys.ZPP_Compound"); }
		static hx::ObjectPtr< ZPP_Compound_obj > __new();
		static hx::ObjectPtr< ZPP_Compound_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Compound_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Compound",d0,fa,2a,1d); }

		 ::nape::phys::Compound outer;
		 ::zpp_nape::util::ZNPList_ZPP_Body bodies;
		 ::zpp_nape::util::ZNPList_ZPP_Constraint constraints;
		 ::zpp_nape::util::ZNPList_ZPP_Compound compounds;
		 ::nape::phys::BodyList wrap_bodies;
		 ::nape::constraint::ConstraintList wrap_constraints;
		 ::nape::phys::CompoundList wrap_compounds;
		int depth;
		 ::zpp_nape::phys::ZPP_Compound compound;
		 ::zpp_nape::space::ZPP_Space space;
		void _hx___imutable_midstep(::String name);
		::Dynamic _hx___imutable_midstep_dyn();

		void addedToSpace();
		::Dynamic addedToSpace_dyn();

		void removedFromSpace();
		::Dynamic removedFromSpace_dyn();

		void breakApart();
		::Dynamic breakApart_dyn();

		bool bodies_adder( ::nape::phys::Body x);
		::Dynamic bodies_adder_dyn();

		void bodies_subber( ::nape::phys::Body x);
		::Dynamic bodies_subber_dyn();

		void bodies_modifiable();
		::Dynamic bodies_modifiable_dyn();

		bool constraints_adder( ::nape::constraint::Constraint x);
		::Dynamic constraints_adder_dyn();

		void constraints_subber( ::nape::constraint::Constraint x);
		::Dynamic constraints_subber_dyn();

		void constraints_modifiable();
		::Dynamic constraints_modifiable_dyn();

		bool compounds_adder( ::nape::phys::Compound x);
		::Dynamic compounds_adder_dyn();

		void compounds_subber( ::nape::phys::Compound x);
		::Dynamic compounds_subber_dyn();

		void compounds_modifiable();
		::Dynamic compounds_modifiable_dyn();

		 ::nape::phys::Compound copy(::Array< ::Dynamic> dict,::Array< ::Dynamic> todo);
		::Dynamic copy_dyn();

};

} // end namespace zpp_nape
} // end namespace phys

#endif /* INCLUDED_zpp_nape_phys_ZPP_Compound */ 
