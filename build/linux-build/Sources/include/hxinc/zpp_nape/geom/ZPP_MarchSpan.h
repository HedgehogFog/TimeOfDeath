// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#define INCLUDED_zpp_nape_geom_ZPP_MarchSpan

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c41d7b8741b8610e_174_new)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MarchSpan)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_MarchSpan_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_MarchSpan_obj OBJ_;
		ZPP_MarchSpan_obj();

	public:
		enum { _hx_ClassId = 0x1607e32f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_MarchSpan")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.geom.ZPP_MarchSpan"); }

		hx::ObjectPtr< ZPP_MarchSpan_obj > __new() {
			hx::ObjectPtr< ZPP_MarchSpan_obj > __this = new ZPP_MarchSpan_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ZPP_MarchSpan_obj > __alloc(hx::Ctx *_hx_ctx) {
			ZPP_MarchSpan_obj *__this = (ZPP_MarchSpan_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_MarchSpan_obj), true, "zpp_nape.geom.ZPP_MarchSpan"));
			*(void **)__this = ZPP_MarchSpan_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c41d7b8741b8610e_174_new)
HXLINE( 178)		( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) )->next = null();
HXLINE( 177)		( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) )->out = false;
HXLINE( 176)		( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) )->rank = 0;
HXLINE( 175)		( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) )->parent = null();
HXLINE( 215)		( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) )->parent = ( ( ::zpp_nape::geom::ZPP_MarchSpan)(__this) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_MarchSpan_obj();

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
		::String __ToString() const { return HX_("ZPP_MarchSpan",28,2a,1e,04); }

		static void __boot();
		static  ::zpp_nape::geom::ZPP_MarchSpan zpp_pool;
		 ::zpp_nape::geom::ZPP_MarchSpan parent;
		int rank;
		bool out;
		 ::zpp_nape::geom::ZPP_MarchSpan next;
		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_MarchSpan */ 
