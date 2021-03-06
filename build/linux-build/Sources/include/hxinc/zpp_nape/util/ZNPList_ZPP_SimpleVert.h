// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SimpleVert)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_ZPP_SimpleVert_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_SimpleVert_obj OBJ_;
		ZNPList_ZPP_SimpleVert_obj();

	public:
		enum { _hx_ClassId = 0x47241384 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_SimpleVert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_ZPP_SimpleVert"); }
		static hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > __new();
		static hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_SimpleVert_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPList_ZPP_SimpleVert",ed,10,6f,22); }

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert head;
		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert i);
		::Dynamic setbegin_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert add( ::zpp_nape::geom::ZPP_SimpleVert o);
		::Dynamic add_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert inlined_add( ::zpp_nape::geom::ZPP_SimpleVert o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleVert x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur, ::zpp_nape::geom::ZPP_SimpleVert o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur, ::zpp_nape::geom::ZPP_SimpleVert o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic remove_dyn();

		bool try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre,int n);
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

		bool has( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic has_dyn();

		bool inlined_has( ::zpp_nape::geom::ZPP_SimpleVert obj);
		::Dynamic inlined_has_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert front();
		::Dynamic front_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::zpp_nape::geom::ZPP_SimpleVert at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert */ 
