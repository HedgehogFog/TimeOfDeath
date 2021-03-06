// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyP)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SimplifyP)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SimplifyP)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_ZPP_SimplifyP_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_SimplifyP_obj OBJ_;
		ZNPList_ZPP_SimplifyP_obj();

	public:
		enum { _hx_ClassId = 0x6d58048e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_SimplifyP")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_ZPP_SimplifyP"); }
		static hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > __new();
		static hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_SimplifyP_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPList_ZPP_SimplifyP",7d,71,d7,21); }

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP head;
		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP i);
		::Dynamic setbegin_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP add( ::zpp_nape::geom::ZPP_SimplifyP o);
		::Dynamic add_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP inlined_add( ::zpp_nape::geom::ZPP_SimplifyP o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_ZPP_SimplifyP x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur, ::zpp_nape::geom::ZPP_SimplifyP o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur, ::zpp_nape::geom::ZPP_SimplifyP o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic remove_dyn();

		bool try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP splice( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre,int n);
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

		bool has( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic has_dyn();

		bool inlined_has( ::zpp_nape::geom::ZPP_SimplifyP obj);
		::Dynamic inlined_has_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP front();
		::Dynamic front_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimplifyP iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::zpp_nape::geom::ZPP_SimplifyP at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP */ 
