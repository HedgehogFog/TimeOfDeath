// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#define INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSetPair)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_CbSetPair)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZPP_Set_ZPP_CbSetPair_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Set_ZPP_CbSetPair_obj OBJ_;
		ZPP_Set_ZPP_CbSetPair_obj();

	public:
		enum { _hx_ClassId = 0x3af78083 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZPP_Set_ZPP_CbSetPair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZPP_Set_ZPP_CbSetPair"); }
		static hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > __new();
		static hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Set_ZPP_CbSetPair_obj();

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
		::String __ToString() const { return HX_("ZPP_Set_ZPP_CbSetPair",56,e8,8c,52); }

		static void __boot();
		static  ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair zpp_pool;
		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

		 ::Dynamic lt;
		Dynamic lt_dyn() { return lt;}
		 ::Dynamic swapped;
		Dynamic swapped_dyn() { return swapped;}
		 ::zpp_nape::callbacks::ZPP_CbSetPair data;
		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair prev;
		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair next;
		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent;
		int colour;
		bool verify();
		::Dynamic verify_dyn();

		bool empty();
		::Dynamic empty_dyn();

		bool singular();
		::Dynamic singular_dyn();

		int size();
		::Dynamic size_dyn();

		bool has( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic has_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair find( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic find_dyn();

		bool has_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic has_weak_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair find_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic find_weak_dyn();

		 ::zpp_nape::callbacks::ZPP_CbSetPair lower_bound( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic lower_bound_dyn();

		 ::zpp_nape::callbacks::ZPP_CbSetPair first();
		::Dynamic first_dyn();

		 ::zpp_nape::callbacks::ZPP_CbSetPair pop_front();
		::Dynamic pop_front_dyn();

		void remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic remove_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur);
		::Dynamic successor_node_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur);
		::Dynamic predecessor_node_dyn();

		 ::zpp_nape::callbacks::ZPP_CbSetPair successor( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic successor_dyn();

		 ::zpp_nape::callbacks::ZPP_CbSetPair predecessor( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic predecessor_dyn();

		void remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur);
		::Dynamic remove_node_dyn();

		void clear();
		::Dynamic clear_dyn();

		void clear_with( ::Dynamic lambda);
		::Dynamic clear_with_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node, ::Dynamic lambda);
		::Dynamic clear_node_dyn();

		void _hx___fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair negred);
		::Dynamic _hx___fix_neg_red_dyn();

		void _hx___fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x);
		::Dynamic _hx___fix_dbl_red_dyn();

		bool try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic try_insert_bool_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair try_insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic try_insert_dyn();

		 ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj);
		::Dynamic insert_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair */ 
