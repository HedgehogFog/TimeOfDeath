// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zui_Themes
#define INCLUDED_zui_Themes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(zui,Themes)

namespace zui{


class HXCPP_CLASS_ATTRIBUTES Themes_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Themes_obj OBJ_;
		Themes_obj();

	public:
		enum { _hx_ClassId = 0x4aa09cb0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="zui.Themes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"zui.Themes"); }

		hx::ObjectPtr< Themes_obj > __new() {
			hx::ObjectPtr< Themes_obj > __this = new Themes_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Themes_obj > __alloc(hx::Ctx *_hx_ctx) {
			Themes_obj *__this = (Themes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Themes_obj), false, "zui.Themes"));
			*(void **)__this = Themes_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Themes_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Themes",6a,3e,bc,ba); }

		static void __boot();
		static  ::Dynamic dark;
		static  ::Dynamic light;
};

} // end namespace zui

#endif /* INCLUDED_zui_Themes */ 
