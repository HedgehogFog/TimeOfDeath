// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_constraint_ConstraintList
#define INCLUDED_nape_constraint_ConstraintList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintIterator)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ConstraintList)

namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES ConstraintList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConstraintList_obj OBJ_;
		ConstraintList_obj();

	public:
		enum { _hx_ClassId = 0x66fee108 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.constraint.ConstraintList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.constraint.ConstraintList"); }
		static hx::ObjectPtr< ConstraintList_obj > __new();
		static hx::ObjectPtr< ConstraintList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstraintList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConstraintList",7b,cf,f1,19); }

		static  ::nape::constraint::ConstraintList fromArray(::Array< ::Dynamic> array);
		static ::Dynamic fromArray_dyn();

		 ::zpp_nape::util::ZPP_ConstraintList zpp_inner;
		int get_length();
		::Dynamic get_length_dyn();

		bool has( ::nape::constraint::Constraint obj);
		::Dynamic has_dyn();

		 ::nape::constraint::Constraint at(int index);
		::Dynamic at_dyn();

		bool push( ::nape::constraint::Constraint obj);
		::Dynamic push_dyn();

		bool unshift( ::nape::constraint::Constraint obj);
		::Dynamic unshift_dyn();

		 ::nape::constraint::Constraint pop();
		::Dynamic pop_dyn();

		 ::nape::constraint::Constraint shift();
		::Dynamic shift_dyn();

		bool add( ::nape::constraint::Constraint obj);
		::Dynamic add_dyn();

		bool remove( ::nape::constraint::Constraint obj);
		::Dynamic remove_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool empty();
		::Dynamic empty_dyn();

		 ::nape::constraint::ConstraintIterator iterator();
		::Dynamic iterator_dyn();

		 ::nape::constraint::ConstraintList copy(hx::Null< bool >  deep);
		::Dynamic copy_dyn();

		void merge( ::nape::constraint::ConstraintList xs);
		::Dynamic merge_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::nape::constraint::ConstraintList foreach( ::Dynamic lambda);
		::Dynamic foreach_dyn();

		 ::nape::constraint::ConstraintList filter( ::Dynamic lambda);
		::Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_ConstraintList */ 
