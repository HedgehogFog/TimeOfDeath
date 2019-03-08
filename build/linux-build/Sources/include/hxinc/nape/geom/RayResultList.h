// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_geom_RayResultList
#define INCLUDED_nape_geom_RayResultList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultIterator)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_RayResultList)

namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES RayResultList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RayResultList_obj OBJ_;
		RayResultList_obj();

	public:
		enum { _hx_ClassId = 0x381057a1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.geom.RayResultList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.geom.RayResultList"); }
		static hx::ObjectPtr< RayResultList_obj > __new();
		static hx::ObjectPtr< RayResultList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayResultList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RayResultList",45,56,f5,d9); }

		static  ::nape::geom::RayResultList fromArray(::Array< ::Dynamic> array);
		static ::Dynamic fromArray_dyn();

		 ::zpp_nape::util::ZPP_RayResultList zpp_inner;
		int get_length();
		::Dynamic get_length_dyn();

		bool has( ::nape::geom::RayResult obj);
		::Dynamic has_dyn();

		 ::nape::geom::RayResult at(int index);
		::Dynamic at_dyn();

		bool push( ::nape::geom::RayResult obj);
		::Dynamic push_dyn();

		bool unshift( ::nape::geom::RayResult obj);
		::Dynamic unshift_dyn();

		 ::nape::geom::RayResult pop();
		::Dynamic pop_dyn();

		 ::nape::geom::RayResult shift();
		::Dynamic shift_dyn();

		bool add( ::nape::geom::RayResult obj);
		::Dynamic add_dyn();

		bool remove( ::nape::geom::RayResult obj);
		::Dynamic remove_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool empty();
		::Dynamic empty_dyn();

		 ::nape::geom::RayResultIterator iterator();
		::Dynamic iterator_dyn();

		 ::nape::geom::RayResultList copy(hx::Null< bool >  deep);
		::Dynamic copy_dyn();

		void merge( ::nape::geom::RayResultList xs);
		::Dynamic merge_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::nape::geom::RayResultList foreach( ::Dynamic lambda);
		::Dynamic foreach_dyn();

		 ::nape::geom::RayResultList filter( ::Dynamic lambda);
		::Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_RayResultList */ 