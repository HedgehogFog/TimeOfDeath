// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#define INCLUDED_nape_callbacks_ConstraintListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_callbacks_Listener
#include <hxinc/nape/callbacks/Listener.h>
#endif
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,ConstraintCallback)
HX_DECLARE_CLASS2(nape,callbacks,ConstraintListener)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)

namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES ConstraintListener_obj : public  ::nape::callbacks::Listener_obj
{
	public:
		typedef  ::nape::callbacks::Listener_obj super;
		typedef ConstraintListener_obj OBJ_;
		ConstraintListener_obj();

	public:
		enum { _hx_ClassId = 0x73ad8c37 };

		void __construct( ::nape::callbacks::CbEvent event, ::Dynamic options, ::Dynamic handler,hx::Null< int >  __o_precedence);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.ConstraintListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.callbacks.ConstraintListener"); }
		static hx::ObjectPtr< ConstraintListener_obj > __new( ::nape::callbacks::CbEvent event, ::Dynamic options, ::Dynamic handler,hx::Null< int >  __o_precedence);
		static hx::ObjectPtr< ConstraintListener_obj > __alloc(hx::Ctx *_hx_ctx, ::nape::callbacks::CbEvent event, ::Dynamic options, ::Dynamic handler,hx::Null< int >  __o_precedence);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstraintListener_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConstraintListener",11,06,e5,6d); }

		 ::zpp_nape::callbacks::ZPP_ConstraintListener zpp_inner_zn;
		 ::nape::callbacks::OptionType get_options();
		::Dynamic get_options_dyn();

		 ::nape::callbacks::OptionType set_options( ::nape::callbacks::OptionType options);
		::Dynamic set_options_dyn();

		 ::Dynamic get_handler();
		::Dynamic get_handler_dyn();

		 ::Dynamic set_handler( ::Dynamic handler);
		::Dynamic set_handler_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ConstraintListener */ 
