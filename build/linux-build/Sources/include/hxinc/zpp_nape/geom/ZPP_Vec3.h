// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#define INCLUDED_zpp_nape_geom_ZPP_Vec3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec3)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_Vec3_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Vec3_obj OBJ_;
		ZPP_Vec3_obj();

	public:
		enum { _hx_ClassId = 0x1c1a4771 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_Vec3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.geom.ZPP_Vec3"); }
		static hx::ObjectPtr< ZPP_Vec3_obj > __new();
		static hx::ObjectPtr< ZPP_Vec3_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Vec3_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Vec3",44,88,34,03); }

		 ::nape::geom::Vec3 outer;
		Float x;
		Float y;
		Float z;
		bool immutable;
		 ::Dynamic _validate;
		Dynamic _validate_dyn() { return _validate;}
		void validate();
		::Dynamic validate_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Vec3 */ 
