// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_phys_GravMassMode
#define INCLUDED_nape_phys_GravMassMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,GravMassMode)

namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES GravMassMode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GravMassMode_obj OBJ_;
		GravMassMode_obj();

	public:
		enum { _hx_ClassId = 0x3b1922b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="nape.phys.GravMassMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"nape.phys.GravMassMode"); }
		static hx::ObjectPtr< GravMassMode_obj > __new();
		static hx::ObjectPtr< GravMassMode_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GravMassMode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GravMassMode",97,82,c8,11); }

		static  ::nape::phys::GravMassMode get_DEFAULT();
		static ::Dynamic get_DEFAULT_dyn();

		static  ::nape::phys::GravMassMode get_FIXED();
		static ::Dynamic get_FIXED_dyn();

		static  ::nape::phys::GravMassMode get_SCALED();
		static ::Dynamic get_SCALED_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_GravMassMode */ 
