// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_callbacks_ListenerType
#define INCLUDED_nape_callbacks_ListenerType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,ListenerType)

namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES ListenerType_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ListenerType_obj OBJ_;
		ListenerType_obj();

	public:
		enum { _hx_ClassId = 0x10d21668 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="nape.callbacks.ListenerType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"nape.callbacks.ListenerType"); }
		static hx::ObjectPtr< ListenerType_obj > __new();
		static hx::ObjectPtr< ListenerType_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListenerType_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListenerType",6e,b5,a1,03); }

		static  ::nape::callbacks::ListenerType get_BODY();
		static ::Dynamic get_BODY_dyn();

		static  ::nape::callbacks::ListenerType get_CONSTRAINT();
		static ::Dynamic get_CONSTRAINT_dyn();

		static  ::nape::callbacks::ListenerType get_INTERACTION();
		static ::Dynamic get_INTERACTION_dyn();

		static  ::nape::callbacks::ListenerType get_PRE();
		static ::Dynamic get_PRE_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ListenerType */ 
