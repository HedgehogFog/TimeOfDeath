// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#define INCLUDED_zpp_nape_space_ZPP_AABBPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBPair)

namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES ZPP_AABBPair_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_AABBPair_obj OBJ_;
		ZPP_AABBPair_obj();

	public:
		enum { _hx_ClassId = 0x0a1d3fd4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.space.ZPP_AABBPair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.space.ZPP_AABBPair"); }
		static hx::ObjectPtr< ZPP_AABBPair_obj > __new();
		static hx::ObjectPtr< ZPP_AABBPair_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_AABBPair_obj();

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
		::String __ToString() const { return HX_("ZPP_AABBPair",1f,be,96,6f); }

		static void __boot();
		static  ::zpp_nape::space::ZPP_AABBPair zpp_pool;
		 ::zpp_nape::space::ZPP_AABBNode n1;
		 ::zpp_nape::space::ZPP_AABBNode n2;
		bool first;
		bool sleeping;
		int id;
		int di;
		 ::zpp_nape::dynamics::ZPP_Arbiter arb;
		 ::zpp_nape::space::ZPP_AABBPair next;
		void alloc();
		::Dynamic alloc_dyn();

		void free();
		::Dynamic free_dyn();

};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_AABBPair */ 
