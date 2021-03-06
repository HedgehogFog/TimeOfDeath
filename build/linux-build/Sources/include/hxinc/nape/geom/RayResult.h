// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_geom_RayResult
#define INCLUDED_nape_geom_RayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)

namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES RayResult_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RayResult_obj OBJ_;
		RayResult_obj();

	public:
		enum { _hx_ClassId = 0x491f01a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.geom.RayResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.geom.RayResult"); }
		static hx::ObjectPtr< RayResult_obj > __new();
		static hx::ObjectPtr< RayResult_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayResult_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RayResult",47,de,2e,22); }

		 ::zpp_nape::geom::ZPP_ConvexRayResult zpp_inner;
		 ::nape::geom::Vec2 get_normal();
		::Dynamic get_normal_dyn();

		Float get_distance();
		::Dynamic get_distance_dyn();

		bool get_inner();
		::Dynamic get_inner_dyn();

		 ::nape::shape::Shape get_shape();
		::Dynamic get_shape_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_RayResult */ 
