// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_graphics4_StencilValue
#define INCLUDED_kha_graphics4_StencilValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,StencilValue)
namespace kha{
namespace graphics4{


class StencilValue_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StencilValue_obj OBJ_;

	public:
		StencilValue_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("kha.graphics4.StencilValue",84,f9,02,a0); }
		::String __ToString() const { return HX_("StencilValue.",99,2a,4c,f8) + _hx_tag; }

		static ::kha::graphics4::StencilValue Dynamic;
		static inline ::kha::graphics4::StencilValue Dynamic_dyn() { return Dynamic; }
		static ::kha::graphics4::StencilValue Static(int value);
		static ::Dynamic Static_dyn();
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_StencilValue */ 
