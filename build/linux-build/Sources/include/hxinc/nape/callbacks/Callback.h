// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_callbacks_Callback
#define INCLUDED_nape_callbacks_Callback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Callback)

namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES Callback_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Callback_obj OBJ_;
		Callback_obj();

	public:
		enum { _hx_ClassId = 0x1e829ba7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.Callback")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.callbacks.Callback"); }
		static hx::ObjectPtr< Callback_obj > __new();
		static hx::ObjectPtr< Callback_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Callback_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Callback",e5,55,b8,58); }

		 ::zpp_nape::callbacks::ZPP_Callback zpp_inner;
		 ::nape::callbacks::CbEvent get_event();
		::Dynamic get_event_dyn();

		 ::nape::callbacks::Listener get_listener();
		::Dynamic get_listener_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_Callback */ 
