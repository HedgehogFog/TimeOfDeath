// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#define INCLUDED_zpp_nape_callbacks_ZPP_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)

namespace zpp_nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES ZPP_Listener_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Listener_obj OBJ_;
		ZPP_Listener_obj();

	public:
		enum { _hx_ClassId = 0x763b4a3a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.callbacks.ZPP_Listener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.callbacks.ZPP_Listener"); }
		static hx::ObjectPtr< ZPP_Listener_obj > __new();
		static hx::ObjectPtr< ZPP_Listener_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Listener_obj();

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
		::String __ToString() const { return HX_("ZPP_Listener",d9,37,8d,d3); }

		static void __boot();
		static bool internal;
		static ::Array< ::Dynamic> types;
		static ::Array< ::Dynamic> events;
		static bool setlt( ::zpp_nape::callbacks::ZPP_Listener a, ::zpp_nape::callbacks::ZPP_Listener b);
		static ::Dynamic setlt_dyn();

		 ::nape::callbacks::Listener outer;
		int id;
		int type;
		int event;
		int precedence;
		 ::zpp_nape::callbacks::ZPP_BodyListener body;
		 ::zpp_nape::callbacks::ZPP_ConstraintListener constraint;
		 ::zpp_nape::callbacks::ZPP_InteractionListener interaction;
		 ::zpp_nape::space::ZPP_Space space;
		virtual void swapEvent(int event);
		::Dynamic swapEvent_dyn();

		virtual void invalidate_precedence();
		::Dynamic invalidate_precedence_dyn();

		virtual void addedToSpace();
		::Dynamic addedToSpace_dyn();

		virtual void removedFromSpace();
		::Dynamic removedFromSpace_dyn();

};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_Listener */ 