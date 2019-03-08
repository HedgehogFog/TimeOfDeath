// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#define INCLUDED_zpp_nape_util_ZPP_GeomPolyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,GeomPolyList)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_GeomPoly)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_GeomPoly)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_GeomPolyList)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZPP_GeomPolyList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomPolyList_obj OBJ_;
		ZPP_GeomPolyList_obj();

	public:
		enum { _hx_ClassId = 0x2fc4481a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZPP_GeomPolyList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZPP_GeomPolyList"); }
		static hx::ObjectPtr< ZPP_GeomPolyList_obj > __new();
		static hx::ObjectPtr< ZPP_GeomPolyList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_GeomPolyList_obj();

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
		::String __ToString() const { return HX_("ZPP_GeomPolyList",8b,01,3a,87); }

		static void __boot();
		static bool internal;
		static  ::nape::geom::GeomPolyList get( ::zpp_nape::util::ZNPList_ZPP_GeomPoly list,hx::Null< bool >  imm);
		static ::Dynamic get_dyn();

		 ::nape::geom::GeomPolyList outer;
		 ::zpp_nape::util::ZNPList_ZPP_GeomPoly inner;
		bool immutable;
		bool _invalidated;
		 ::Dynamic _invalidate;
		Dynamic _invalidate_dyn() { return _invalidate;}
		 ::Dynamic _validate;
		Dynamic _validate_dyn() { return _validate;}
		 ::Dynamic _modifiable;
		Dynamic _modifiable_dyn() { return _modifiable;}
		 ::Dynamic adder;
		Dynamic adder_dyn() { return adder;}
		 ::Dynamic post_adder;
		Dynamic post_adder_dyn() { return post_adder;}
		 ::Dynamic subber;
		Dynamic subber_dyn() { return subber;}
		bool dontremove;
		bool reverse_flag;
		void valmod();
		::Dynamic valmod_dyn();

		void modified();
		::Dynamic modified_dyn();

		void modify_test();
		::Dynamic modify_test_dyn();

		void validate();
		::Dynamic validate_dyn();

		void invalidate();
		::Dynamic invalidate_dyn();

		int at_index;
		 ::zpp_nape::util::ZNPNode_ZPP_GeomPoly at_ite;
		 ::zpp_nape::util::ZNPNode_ZPP_GeomPoly push_ite;
		bool zip_length;
		int user_length;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_GeomPolyList */ 
