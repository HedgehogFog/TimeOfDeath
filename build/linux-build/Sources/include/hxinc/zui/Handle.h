// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zui_Handle
#define INCLUDED_zui_Handle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(zui,Handle)

namespace zui{


class HXCPP_CLASS_ATTRIBUTES Handle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Handle_obj OBJ_;
		Handle_obj();

	public:
		enum { _hx_ClassId = 0x1ee8b1d6 };

		void __construct( ::Dynamic ops);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zui.Handle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zui.Handle"); }
		static hx::ObjectPtr< Handle_obj > __new( ::Dynamic ops);
		static hx::ObjectPtr< Handle_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic ops);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Handle_obj();

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
		::String __ToString() const { return HX_("Handle",c8,f7,91,ec); }

		static void __boot();
		static  ::zui::Handle global;
		bool selected;
		int position;
		int color;
		Float value;
		::String text;
		 ::kha::Image texture;
		int redraws;
		bool scrolling;
		Float scrollOffset;
		bool scrollEnabled;
		int layout;
		Float lastMaxX;
		Float lastMaxY;
		bool dragging;
		bool dragEnabled;
		int dragX;
		int dragY;
		bool changed;
		::Array< ::Dynamic> children;
		 ::zui::Handle nest(int i, ::Dynamic ops);
		::Dynamic nest_dyn();

};

} // end namespace zui

#endif /* INCLUDED_zui_Handle */ 
