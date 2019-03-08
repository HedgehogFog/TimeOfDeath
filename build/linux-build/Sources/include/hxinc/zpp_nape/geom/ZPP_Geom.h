// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#define INCLUDED_zpp_nape_geom_ZPP_Geom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Geom)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_Geom_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Geom_obj OBJ_;
		ZPP_Geom_obj();

	public:
		enum { _hx_ClassId = 0x12301ece };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_Geom")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"zpp_nape.geom.ZPP_Geom"); }

		hx::ObjectPtr< ZPP_Geom_obj > __new() {
			hx::ObjectPtr< ZPP_Geom_obj > __this = new ZPP_Geom_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ZPP_Geom_obj > __alloc(hx::Ctx *_hx_ctx) {
			ZPP_Geom_obj *__this = (ZPP_Geom_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_Geom_obj), false, "zpp_nape.geom.ZPP_Geom"));
			*(void **)__this = ZPP_Geom_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Geom_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Geom",a1,5f,4a,f9); }

		static void validateShape( ::zpp_nape::shape::ZPP_Shape s);
		static ::Dynamic validateShape_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Geom */ 
