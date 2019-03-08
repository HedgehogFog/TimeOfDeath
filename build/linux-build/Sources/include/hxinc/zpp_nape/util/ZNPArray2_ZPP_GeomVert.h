// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#define INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPArray2_ZPP_GeomVert)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPArray2_ZPP_GeomVert_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPArray2_ZPP_GeomVert_obj OBJ_;
		ZNPArray2_ZPP_GeomVert_obj();

	public:
		enum { _hx_ClassId = 0x43d37493 };

		void __construct(int width,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPArray2_ZPP_GeomVert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPArray2_ZPP_GeomVert"); }
		static hx::ObjectPtr< ZNPArray2_ZPP_GeomVert_obj > __new(int width,int height);
		static hx::ObjectPtr< ZNPArray2_ZPP_GeomVert_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPArray2_ZPP_GeomVert_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPArray2_ZPP_GeomVert",fc,71,1e,1f); }

		::Array< ::Dynamic> list;
		int width;
		void resize(int width,int height, ::zpp_nape::geom::ZPP_GeomVert def);
		::Dynamic resize_dyn();

		 ::zpp_nape::geom::ZPP_GeomVert get(int x,int y);
		::Dynamic get_dyn();

		 ::zpp_nape::geom::ZPP_GeomVert set(int x,int y, ::zpp_nape::geom::ZPP_GeomVert obj);
		::Dynamic set_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert */ 
