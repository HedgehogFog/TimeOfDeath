// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Arbiter)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPNode_ZPP_Arbiter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_Arbiter_obj OBJ_;
		ZNPNode_ZPP_Arbiter_obj();

	public:
		enum { _hx_ClassId = 0x5c264f34 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPNode_ZPP_Arbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPNode_ZPP_Arbiter"); }
		static hx::ObjectPtr< ZNPNode_ZPP_Arbiter_obj > __new();
		static hx::ObjectPtr< ZNPNode_ZPP_Arbiter_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_Arbiter_obj();

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
		::String __ToString() const { return HX_("ZNPNode_ZPP_Arbiter",63,52,fb,ee); }

		static void __boot();
		static  ::zpp_nape::util::ZNPNode_ZPP_Arbiter zpp_pool;
		 ::zpp_nape::util::ZNPNode_ZPP_Arbiter next;
		void alloc();
		::Dynamic alloc_dyn();

		void free();
		::Dynamic free_dyn();

		 ::zpp_nape::dynamics::ZPP_Arbiter elt;
		 ::zpp_nape::dynamics::ZPP_Arbiter elem();
		::Dynamic elem_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter */ 
