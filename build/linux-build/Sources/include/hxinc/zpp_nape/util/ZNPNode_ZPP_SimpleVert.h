// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SimpleVert)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPNode_ZPP_SimpleVert_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_SimpleVert_obj OBJ_;
		ZNPNode_ZPP_SimpleVert_obj();

	public:
		enum { _hx_ClassId = 0x07c53798 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPNode_ZPP_SimpleVert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPNode_ZPP_SimpleVert"); }
		static hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > __new();
		static hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_SimpleVert_obj();

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
		::String __ToString() const { return HX_("ZNPNode_ZPP_SimpleVert",c9,1b,c5,42); }

		static void __boot();
		static  ::zpp_nape::util::ZNPNode_ZPP_SimpleVert zpp_pool;
		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert next;
		void alloc();
		::Dynamic alloc_dyn();

		void free();
		::Dynamic free_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert elt;
		 ::zpp_nape::geom::ZPP_SimpleVert elem();
		::Dynamic elem_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert */ 
