// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_callbacks_OptionType
#define INCLUDED_nape_callbacks_OptionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_OptionType)

namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES OptionType_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OptionType_obj OBJ_;
		OptionType_obj();

	public:
		enum { _hx_ClassId = 0x0a8e0f31 };

		void __construct( ::Dynamic includes, ::Dynamic excludes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.OptionType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.callbacks.OptionType"); }
		static hx::ObjectPtr< OptionType_obj > __new( ::Dynamic includes, ::Dynamic excludes);
		static hx::ObjectPtr< OptionType_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic includes, ::Dynamic excludes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionType_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionType",ef,54,55,89); }

		 ::zpp_nape::callbacks::ZPP_OptionType zpp_inner;
		 ::nape::callbacks::CbTypeList get_includes();
		::Dynamic get_includes_dyn();

		 ::nape::callbacks::CbTypeList get_excludes();
		::Dynamic get_excludes_dyn();

		 ::nape::callbacks::OptionType including( ::Dynamic includes);
		::Dynamic including_dyn();

		 ::nape::callbacks::OptionType excluding( ::Dynamic excludes);
		::Dynamic excluding_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_OptionType */ 
