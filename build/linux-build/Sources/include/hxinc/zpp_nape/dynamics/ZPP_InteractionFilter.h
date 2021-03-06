// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#define INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionFilter)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Shape)

namespace zpp_nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES ZPP_InteractionFilter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_InteractionFilter_obj OBJ_;
		ZPP_InteractionFilter_obj();

	public:
		enum { _hx_ClassId = 0x61faef00 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.dynamics.ZPP_InteractionFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.dynamics.ZPP_InteractionFilter"); }
		static hx::ObjectPtr< ZPP_InteractionFilter_obj > __new();
		static hx::ObjectPtr< ZPP_InteractionFilter_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_InteractionFilter_obj();

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
		::String __ToString() const { return HX_("ZPP_InteractionFilter",25,a9,68,f6); }

		static void __boot();
		static  ::zpp_nape::dynamics::ZPP_InteractionFilter zpp_pool;
		 ::zpp_nape::dynamics::ZPP_InteractionFilter next;
		 ::Dynamic userData;
		 ::nape::dynamics::InteractionFilter outer;
		 ::nape::dynamics::InteractionFilter wrapper();
		::Dynamic wrapper_dyn();

		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_Shape shapes;
		 ::nape::shape::ShapeList wrap_shapes;
		void feature_cons();
		::Dynamic feature_cons_dyn();

		void addShape( ::zpp_nape::shape::ZPP_Shape shape);
		::Dynamic addShape_dyn();

		void remShape( ::zpp_nape::shape::ZPP_Shape shape);
		::Dynamic remShape_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionFilter copy();
		::Dynamic copy_dyn();

		int collisionGroup;
		int collisionMask;
		bool shouldCollide( ::zpp_nape::dynamics::ZPP_InteractionFilter x);
		::Dynamic shouldCollide_dyn();

		int sensorGroup;
		int sensorMask;
		bool shouldSense( ::zpp_nape::dynamics::ZPP_InteractionFilter x);
		::Dynamic shouldSense_dyn();

		int fluidGroup;
		int fluidMask;
		bool shouldFlow( ::zpp_nape::dynamics::ZPP_InteractionFilter x);
		::Dynamic shouldFlow_dyn();

		void invalidate();
		::Dynamic invalidate_dyn();

};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter */ 
