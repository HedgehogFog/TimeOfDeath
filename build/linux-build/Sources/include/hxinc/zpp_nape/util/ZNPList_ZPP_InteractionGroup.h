// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionGroup)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionGroup)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_InteractionGroup)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_ZPP_InteractionGroup_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_InteractionGroup_obj OBJ_;
		ZNPList_ZPP_InteractionGroup_obj();

	public:
		enum { _hx_ClassId = 0x4ffe6986 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_InteractionGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_ZPP_InteractionGroup"); }
		static hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > __new();
		static hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_InteractionGroup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPList_ZPP_InteractionGroup",77,08,9d,67); }

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup head;
		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup i);
		::Dynamic setbegin_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup add( ::zpp_nape::dynamics::ZPP_InteractionGroup o);
		::Dynamic add_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup inlined_add( ::zpp_nape::dynamics::ZPP_InteractionGroup o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur, ::zpp_nape::dynamics::ZPP_InteractionGroup o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur, ::zpp_nape::dynamics::ZPP_InteractionGroup o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic remove_dyn();

		bool try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre,int n);
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

		bool has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic has_dyn();

		bool inlined_has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj);
		::Dynamic inlined_has_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup front();
		::Dynamic front_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::zpp_nape::dynamics::ZPP_InteractionGroup at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup */ 
