// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_dynamics_ContactList
#define INCLUDED_nape_dynamics_ContactList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Contact)
HX_DECLARE_CLASS2(nape,dynamics,ContactIterator)
HX_DECLARE_CLASS2(nape,dynamics,ContactList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ContactList)

namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES ContactList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ContactList_obj OBJ_;
		ContactList_obj();

	public:
		enum { _hx_ClassId = 0x4ea78102 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.ContactList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.dynamics.ContactList"); }
		static hx::ObjectPtr< ContactList_obj > __new();
		static hx::ObjectPtr< ContactList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ContactList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ContactList",fe,2a,15,fd); }

		static  ::nape::dynamics::ContactList fromArray(::Array< ::Dynamic> array);
		static ::Dynamic fromArray_dyn();

		 ::zpp_nape::util::ZPP_ContactList zpp_inner;
		int get_length();
		::Dynamic get_length_dyn();

		bool has( ::nape::dynamics::Contact obj);
		::Dynamic has_dyn();

		 ::nape::dynamics::Contact at(int index);
		::Dynamic at_dyn();

		bool push( ::nape::dynamics::Contact obj);
		::Dynamic push_dyn();

		bool unshift( ::nape::dynamics::Contact obj);
		::Dynamic unshift_dyn();

		 ::nape::dynamics::Contact pop();
		::Dynamic pop_dyn();

		 ::nape::dynamics::Contact shift();
		::Dynamic shift_dyn();

		bool add( ::nape::dynamics::Contact obj);
		::Dynamic add_dyn();

		bool remove( ::nape::dynamics::Contact obj);
		::Dynamic remove_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool empty();
		::Dynamic empty_dyn();

		 ::nape::dynamics::ContactIterator iterator();
		::Dynamic iterator_dyn();

		 ::nape::dynamics::ContactList copy(hx::Null< bool >  deep);
		::Dynamic copy_dyn();

		void merge( ::nape::dynamics::ContactList xs);
		::Dynamic merge_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::nape::dynamics::ContactList foreach( ::Dynamic lambda);
		::Dynamic foreach_dyn();

		 ::nape::dynamics::ContactList filter( ::Dynamic lambda);
		::Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_ContactList */ 