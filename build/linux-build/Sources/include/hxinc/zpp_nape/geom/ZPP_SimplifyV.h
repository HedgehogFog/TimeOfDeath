// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#define INCLUDED_zpp_nape_geom_ZPP_SimplifyV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6832b4f085caf273_174_new)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyV)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_SimplifyV_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_SimplifyV_obj OBJ_;
		ZPP_SimplifyV_obj();

	public:
		enum { _hx_ClassId = 0x0ed3a6bf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_SimplifyV")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.geom.ZPP_SimplifyV"); }

		hx::ObjectPtr< ZPP_SimplifyV_obj > __new() {
			hx::ObjectPtr< ZPP_SimplifyV_obj > __this = new ZPP_SimplifyV_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ZPP_SimplifyV_obj > __alloc(hx::Ctx *_hx_ctx) {
			ZPP_SimplifyV_obj *__this = (ZPP_SimplifyV_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_SimplifyV_obj), true, "zpp_nape.geom.ZPP_SimplifyV"));
			*(void **)__this = ZPP_SimplifyV_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6832b4f085caf273_174_new)
HXLINE( 204)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->forced = false;
HXLINE( 203)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->flag = false;
HXLINE( 202)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->prev = null();
HXLINE( 177)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->next = null();
HXLINE( 176)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->y = ((Float)0.0);
HXLINE( 175)		( ( ::zpp_nape::geom::ZPP_SimplifyV)(__this) )->x = ((Float)0.0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SimplifyV_obj();

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
		::String __ToString() const { return HX_("ZPP_SimplifyV",28,12,30,7e); }

		static void __boot();
		static  ::zpp_nape::geom::ZPP_SimplifyV zpp_pool;
		static  ::zpp_nape::geom::ZPP_SimplifyV get( ::zpp_nape::geom::ZPP_GeomVert v);
		static ::Dynamic get_dyn();

		Float x;
		Float y;
		 ::zpp_nape::geom::ZPP_SimplifyV next;
		 ::zpp_nape::geom::ZPP_SimplifyV prev;
		bool flag;
		bool forced;
		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimplifyV */ 
