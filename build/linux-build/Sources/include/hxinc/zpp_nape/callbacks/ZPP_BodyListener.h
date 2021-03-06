// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#define INCLUDED_zpp_nape_callbacks_ZPP_BodyListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <hxinc/zpp_nape/callbacks/ZPP_Listener.h>
#endif
HX_DECLARE_CLASS2(nape,callbacks,BodyCallback)
HX_DECLARE_CLASS2(nape,callbacks,BodyListener)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_OptionType)

namespace zpp_nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES ZPP_BodyListener_obj : public  ::zpp_nape::callbacks::ZPP_Listener_obj
{
	public:
		typedef  ::zpp_nape::callbacks::ZPP_Listener_obj super;
		typedef ZPP_BodyListener_obj OBJ_;
		ZPP_BodyListener_obj();

	public:
		enum { _hx_ClassId = 0x43f05318 };

		void __construct( ::nape::callbacks::OptionType options,int event, ::Dynamic handler);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.callbacks.ZPP_BodyListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.callbacks.ZPP_BodyListener"); }
		static hx::ObjectPtr< ZPP_BodyListener_obj > __new( ::nape::callbacks::OptionType options,int event, ::Dynamic handler);
		static hx::ObjectPtr< ZPP_BodyListener_obj > __alloc(hx::Ctx *_hx_ctx, ::nape::callbacks::OptionType options,int event, ::Dynamic handler);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_BodyListener_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_BodyListener",1b,f7,08,05); }

		 ::nape::callbacks::BodyListener outer_zn;
		 ::zpp_nape::callbacks::ZPP_OptionType options;
		 ::Dynamic handler;
		Dynamic handler_dyn() { return handler;}
		void immutable_options();
		::Dynamic immutable_options_dyn();

		void addedToSpace();

		void removedFromSpace();

		void cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added);
		::Dynamic cbtype_change_dyn();

		void invalidate_precedence();

		void swapEvent(int newev);

};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_BodyListener */ 
