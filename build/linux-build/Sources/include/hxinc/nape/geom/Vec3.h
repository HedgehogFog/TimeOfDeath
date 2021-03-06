// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_geom_Vec3
#define INCLUDED_nape_geom_Vec3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec3)

namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Vec3_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Vec3_obj OBJ_;
		Vec3_obj();

	public:
		enum { _hx_ClassId = 0x08dbfe6b };

		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.geom.Vec3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.geom.Vec3"); }
		static hx::ObjectPtr< Vec3_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static hx::ObjectPtr< Vec3_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vec3_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vec3",7f,53,25,39); }

		static  ::nape::geom::Vec3 get(hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z);
		static ::Dynamic get_dyn();

		 ::zpp_nape::geom::ZPP_Vec3 zpp_inner;
		 ::nape::geom::Vec3 zpp_pool;
		bool zpp_disp;
		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float x);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float y);
		::Dynamic set_y_dyn();

		Float get_z();
		::Dynamic get_z_dyn();

		Float set_z(Float z);
		::Dynamic set_z_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

		Float set_length(Float length);
		::Dynamic set_length_dyn();

		Float lsq();
		::Dynamic lsq_dyn();

		 ::nape::geom::Vec3 set( ::nape::geom::Vec3 vector);
		::Dynamic set_dyn();

		 ::nape::geom::Vec3 setxyz(Float x,Float y,Float z);
		::Dynamic setxyz_dyn();

		 ::nape::geom::Vec2 xy(hx::Null< bool >  weak);
		::Dynamic xy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_Vec3 */ 
