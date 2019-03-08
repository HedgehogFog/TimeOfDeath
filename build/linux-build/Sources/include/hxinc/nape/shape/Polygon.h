// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_shape_Polygon
#define INCLUDED_nape_shape_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_shape_Shape
#include <hxinc/nape/shape/Shape.h>
#endif
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,shape,EdgeList)
HX_DECLARE_CLASS2(nape,shape,Polygon)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,shape,ValidationResult)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Polygon)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)

namespace nape{
namespace shape{


class HXCPP_CLASS_ATTRIBUTES Polygon_obj : public  ::nape::shape::Shape_obj
{
	public:
		typedef  ::nape::shape::Shape_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();

	public:
		enum { _hx_ClassId = 0x13534801 };

		void __construct( ::Dynamic localVerts, ::nape::phys::Material material, ::nape::dynamics::InteractionFilter filter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.shape.Polygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.shape.Polygon"); }
		static hx::ObjectPtr< Polygon_obj > __new( ::Dynamic localVerts, ::nape::phys::Material material, ::nape::dynamics::InteractionFilter filter);
		static hx::ObjectPtr< Polygon_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic localVerts, ::nape::phys::Material material, ::nape::dynamics::InteractionFilter filter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Polygon",5a,2a,e2,df); }

		static ::Array< ::Dynamic> rect(Float x,Float y,Float width,Float height,hx::Null< bool >  weak);
		static ::Dynamic rect_dyn();

		static ::Array< ::Dynamic> box(Float width,Float height,hx::Null< bool >  weak);
		static ::Dynamic box_dyn();

		static ::Array< ::Dynamic> regular(Float xRadius,Float yRadius,int edgeCount,hx::Null< Float >  angleOffset,hx::Null< bool >  weak);
		static ::Dynamic regular_dyn();

		 ::zpp_nape::shape::ZPP_Polygon zpp_inner_zn;
		 ::nape::geom::Vec2List get_localVerts();
		::Dynamic get_localVerts_dyn();

		 ::nape::geom::Vec2List get_worldVerts();
		::Dynamic get_worldVerts_dyn();

		 ::nape::shape::EdgeList get_edges();
		::Dynamic get_edges_dyn();

		 ::nape::shape::ValidationResult validity();
		::Dynamic validity_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_Polygon */ 
