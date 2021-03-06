// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#define INCLUDED_zpp_nape_geom_ZPP_SimplifyP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyP)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyV)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_SimplifyP_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_SimplifyP_obj OBJ_;
		ZPP_SimplifyP_obj();

	public:
		enum { _hx_ClassId = 0x0ed3a6b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_SimplifyP")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.geom.ZPP_SimplifyP"); }
		static hx::ObjectPtr< ZPP_SimplifyP_obj > __new();
		static hx::ObjectPtr< ZPP_SimplifyP_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SimplifyP_obj();

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
		::String __ToString() const { return HX_("ZPP_SimplifyP",22,12,30,7e); }

		static void __boot();
		static  ::zpp_nape::geom::ZPP_SimplifyP zpp_pool;
		static  ::zpp_nape::geom::ZPP_SimplifyP get( ::zpp_nape::geom::ZPP_SimplifyV min, ::zpp_nape::geom::ZPP_SimplifyV max);
		static ::Dynamic get_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP next;
		 ::zpp_nape::geom::ZPP_SimplifyV min;
		 ::zpp_nape::geom::ZPP_SimplifyV max;
		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimplifyP */ 
