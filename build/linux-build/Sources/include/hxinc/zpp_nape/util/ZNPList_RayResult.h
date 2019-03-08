// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#define INCLUDED_zpp_nape_util_ZNPList_RayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_RayResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_RayResult)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_RayResult_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_RayResult_obj OBJ_;
		ZNPList_RayResult_obj();

	public:
		enum { _hx_ClassId = 0x0dfc71cf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_RayResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_RayResult"); }
		static hx::ObjectPtr< ZNPList_RayResult_obj > __new();
		static hx::ObjectPtr< ZNPList_RayResult_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_RayResult_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZNPList_RayResult",22,b4,06,1c); }

		 ::zpp_nape::util::ZNPNode_RayResult head;
		 ::zpp_nape::util::ZNPNode_RayResult begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_RayResult i);
		::Dynamic setbegin_dyn();

		 ::nape::geom::RayResult add( ::nape::geom::RayResult o);
		::Dynamic add_dyn();

		 ::nape::geom::RayResult inlined_add( ::nape::geom::RayResult o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_RayResult x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult insert( ::zpp_nape::util::ZNPNode_RayResult cur, ::nape::geom::RayResult o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult inlined_insert( ::zpp_nape::util::ZNPNode_RayResult cur, ::nape::geom::RayResult o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::nape::geom::RayResult pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::nape::geom::RayResult inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::nape::geom::RayResult obj);
		::Dynamic remove_dyn();

		bool try_remove( ::nape::geom::RayResult obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::nape::geom::RayResult obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::nape::geom::RayResult obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult erase( ::zpp_nape::util::ZNPNode_RayResult pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult inlined_erase( ::zpp_nape::util::ZNPNode_RayResult pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult splice( ::zpp_nape::util::ZNPNode_RayResult pre,int n);
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

		bool has( ::nape::geom::RayResult obj);
		::Dynamic has_dyn();

		bool inlined_has( ::nape::geom::RayResult obj);
		::Dynamic inlined_has_dyn();

		 ::nape::geom::RayResult front();
		::Dynamic front_dyn();

		 ::nape::geom::RayResult back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_RayResult iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::nape::geom::RayResult at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_RayResult */ 
