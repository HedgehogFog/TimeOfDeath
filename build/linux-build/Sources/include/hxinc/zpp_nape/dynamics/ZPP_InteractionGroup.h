// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#define INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionGroup)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionGroup)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)

namespace zpp_nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES ZPP_InteractionGroup_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_InteractionGroup_obj OBJ_;
		ZPP_InteractionGroup_obj();

	public:
		enum { _hx_ClassId = 0x7a415093 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.dynamics.ZPP_InteractionGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.dynamics.ZPP_InteractionGroup"); }
		static hx::ObjectPtr< ZPP_InteractionGroup_obj > __new();
		static hx::ObjectPtr< ZPP_InteractionGroup_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_InteractionGroup_obj();

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
		::String __ToString() const { return HX_("ZPP_InteractionGroup",72,f6,1b,2b); }

		static void __boot();
		static int SHAPE;
		static int BODY;
		 ::nape::dynamics::InteractionGroup outer;
		bool ignore;
		 ::zpp_nape::dynamics::ZPP_InteractionGroup group;
		void setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group);
		::Dynamic setGroup_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_InteractionGroup groups;
		 ::nape::dynamics::InteractionGroupList wrap_groups;
		 ::zpp_nape::util::ZNPList_ZPP_Interactor interactors;
		 ::nape::phys::InteractorList wrap_interactors;
		int depth;
		void invalidate(hx::Null< bool >  force);
		::Dynamic invalidate_dyn();

		void addGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group);
		::Dynamic addGroup_dyn();

		void remGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group);
		::Dynamic remGroup_dyn();

		void addInteractor( ::zpp_nape::phys::ZPP_Interactor intx);
		::Dynamic addInteractor_dyn();

		void remInteractor( ::zpp_nape::phys::ZPP_Interactor intx,hx::Null< int >  flag);
		::Dynamic remInteractor_dyn();

};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup */ 