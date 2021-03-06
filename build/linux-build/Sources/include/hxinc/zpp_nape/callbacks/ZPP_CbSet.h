// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#define INCLUDED_zpp_nape_callbacks_ZPP_CbSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CbSetManager)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbSetPair)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)

namespace zpp_nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES ZPP_CbSet_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_CbSet_obj OBJ_;
		ZPP_CbSet_obj();

	public:
		enum { _hx_ClassId = 0x24559821 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.callbacks.ZPP_CbSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.callbacks.ZPP_CbSet"); }
		static hx::ObjectPtr< ZPP_CbSet_obj > __new();
		static hx::ObjectPtr< ZPP_CbSet_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_CbSet_obj();

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
		::String __ToString() const { return HX_("ZPP_CbSet",be,11,1e,d8); }

		static void __boot();
		static  ::zpp_nape::callbacks::ZPP_CbSet zpp_pool;
		static bool setlt( ::zpp_nape::callbacks::ZPP_CbSet a, ::zpp_nape::callbacks::ZPP_CbSet b);
		static ::Dynamic setlt_dyn();

		static  ::zpp_nape::callbacks::ZPP_CbSet get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes);
		static ::Dynamic get_dyn();

		static bool compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i, ::zpp_nape::callbacks::ZPP_CbSet a, ::zpp_nape::callbacks::ZPP_CbSet b);
		static ::Dynamic compatible_dyn();

		static bool empty_intersection( ::zpp_nape::callbacks::ZPP_CbSet a, ::zpp_nape::callbacks::ZPP_CbSet b);
		static ::Dynamic empty_intersection_dyn();

		static bool single_intersection( ::zpp_nape::callbacks::ZPP_CbSet a, ::zpp_nape::callbacks::ZPP_CbSet b, ::zpp_nape::callbacks::ZPP_InteractionListener i);
		static ::Dynamic single_intersection_dyn();

		static void find_all( ::zpp_nape::callbacks::ZPP_CbSet a, ::zpp_nape::callbacks::ZPP_CbSet b,int event, ::Dynamic cb);
		static ::Dynamic find_all_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes;
		int count;
		 ::zpp_nape::callbacks::ZPP_CbSet next;
		int id;
		 ::zpp_nape::space::ZPP_CbSetManager manager;
		 ::zpp_nape::util::ZNPList_ZPP_CbSetPair cbpairs;
		void increment();
		::Dynamic increment_dyn();

		bool decrement();
		::Dynamic decrement_dyn();

		void invalidate_pairs();
		::Dynamic invalidate_pairs_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_InteractionListener listeners;
		bool zip_listeners;
		void invalidate_listeners();
		::Dynamic invalidate_listeners_dyn();

		void validate_listeners();
		::Dynamic validate_listeners_dyn();

		void realvalidate_listeners();
		::Dynamic realvalidate_listeners_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_BodyListener bodylisteners;
		bool zip_bodylisteners;
		void invalidate_bodylisteners();
		::Dynamic invalidate_bodylisteners_dyn();

		void validate_bodylisteners();
		::Dynamic validate_bodylisteners_dyn();

		void realvalidate_bodylisteners();
		::Dynamic realvalidate_bodylisteners_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_ConstraintListener conlisteners;
		bool zip_conlisteners;
		void invalidate_conlisteners();
		::Dynamic invalidate_conlisteners_dyn();

		void validate_conlisteners();
		::Dynamic validate_conlisteners_dyn();

		void realvalidate_conlisteners();
		::Dynamic realvalidate_conlisteners_dyn();

		void validate();
		::Dynamic validate_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_Interactor interactors;
		 ::nape::phys::InteractorList wrap_interactors;
		 ::zpp_nape::util::ZNPList_ZPP_Constraint constraints;
		 ::nape::constraint::ConstraintList wrap_constraints;
		void addConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic addConstraint_dyn();

		void addInteractor( ::zpp_nape::phys::ZPP_Interactor intx);
		::Dynamic addInteractor_dyn();

		void remConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic remConstraint_dyn();

		void remInteractor( ::zpp_nape::phys::ZPP_Interactor intx);
		::Dynamic remInteractor_dyn();

		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_CbSet */ 
