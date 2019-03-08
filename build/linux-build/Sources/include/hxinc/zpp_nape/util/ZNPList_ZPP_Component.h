// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Component)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_ZPP_Component_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_Component_obj OBJ_;
		ZNPList_ZPP_Component_obj();

	public:
		enum { _hx_ClassId = 0x52f12424 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_ZPP_Component"); }
		static hx::ObjectPtr< ZNPList_ZPP_Component_obj > __new();
		static hx::ObjectPtr< ZNPList_ZPP_Component_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_Component_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPList_ZPP_Component",13,91,70,07); }

		 ::zpp_nape::util::ZNPNode_ZPP_Component head;
		 ::zpp_nape::util::ZNPNode_ZPP_Component begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_ZPP_Component i);
		::Dynamic setbegin_dyn();

		 ::zpp_nape::space::ZPP_Component add( ::zpp_nape::space::ZPP_Component o);
		::Dynamic add_dyn();

		 ::zpp_nape::space::ZPP_Component inlined_add( ::zpp_nape::space::ZPP_Component o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_ZPP_Component x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur, ::zpp_nape::space::ZPP_Component o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur, ::zpp_nape::space::ZPP_Component o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::zpp_nape::space::ZPP_Component pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::zpp_nape::space::ZPP_Component inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic remove_dyn();

		bool try_remove( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component splice( ::zpp_nape::util::ZNPNode_ZPP_Component pre,int n);
		::Dynamic splice_dyn();

		void clear();
		::Dynamic clear_dyn();

		void inlined_clear();
		::Dynamic inlined_clear_dyn();

		void reverse();
		::Dynamic reverse_dyn();

		bool empty();
		::Dynamic empty_dyn();

		int size();
		::Dynamic size_dyn();

		bool has( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic has_dyn();

		bool inlined_has( ::zpp_nape::space::ZPP_Component obj);
		::Dynamic inlined_has_dyn();

		 ::zpp_nape::space::ZPP_Component front();
		::Dynamic front_dyn();

		 ::zpp_nape::space::ZPP_Component back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_Component iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::zpp_nape::space::ZPP_Component at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_Component */ 