// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_phys_Material
#define INCLUDED_nape_phys_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Material)

namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES Material_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Material_obj OBJ_;
		Material_obj();

	public:
		enum { _hx_ClassId = 0x205dc781 };

		void __construct(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.phys.Material")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.phys.Material"); }
		static hx::ObjectPtr< Material_obj > __new(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction);
		static hx::ObjectPtr< Material_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Material",c7,18,57,ca); }

		static  ::nape::phys::Material wood();
		static ::Dynamic wood_dyn();

		static  ::nape::phys::Material steel();
		static ::Dynamic steel_dyn();

		static  ::nape::phys::Material ice();
		static ::Dynamic ice_dyn();

		static  ::nape::phys::Material rubber();
		static ::Dynamic rubber_dyn();

		static  ::nape::phys::Material glass();
		static ::Dynamic glass_dyn();

		static  ::nape::phys::Material sand();
		static ::Dynamic sand_dyn();

		 ::zpp_nape::phys::ZPP_Material zpp_inner;
		 ::Dynamic get_userData();
		::Dynamic get_userData_dyn();

		 ::nape::shape::ShapeList get_shapes();
		::Dynamic get_shapes_dyn();

		 ::nape::phys::Material copy();
		::Dynamic copy_dyn();

		Float get_elasticity();
		::Dynamic get_elasticity_dyn();

		Float set_elasticity(Float elasticity);
		::Dynamic set_elasticity_dyn();

		Float get_dynamicFriction();
		::Dynamic get_dynamicFriction_dyn();

		Float set_dynamicFriction(Float dynamicFriction);
		::Dynamic set_dynamicFriction_dyn();

		Float get_staticFriction();
		::Dynamic get_staticFriction_dyn();

		Float set_staticFriction(Float staticFriction);
		::Dynamic set_staticFriction_dyn();

		Float get_density();
		::Dynamic get_density_dyn();

		Float set_density(Float density);
		::Dynamic set_density_dyn();

		Float get_rollingFriction();
		::Dynamic get_rollingFriction_dyn();

		Float set_rollingFriction(Float rollingFriction);
		::Dynamic set_rollingFriction_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_Material */ 
