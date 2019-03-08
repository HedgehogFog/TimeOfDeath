// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#define INCLUDED_nape_dynamics_InteractionGroupIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupIterator)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)

namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES InteractionGroupIterator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef InteractionGroupIterator_obj OBJ_;
		InteractionGroupIterator_obj();

	public:
		enum { _hx_ClassId = 0x043f097f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.InteractionGroupIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.dynamics.InteractionGroupIterator"); }
		static hx::ObjectPtr< InteractionGroupIterator_obj > __new();
		static hx::ObjectPtr< InteractionGroupIterator_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionGroupIterator_obj();

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
		::String __ToString() const { return HX_("InteractionGroupIterator",3b,a9,87,c0); }

		static void __boot();
		static  ::nape::dynamics::InteractionGroupIterator zpp_pool;
		static  ::nape::dynamics::InteractionGroupIterator get( ::nape::dynamics::InteractionGroupList list);
		static ::Dynamic get_dyn();

		 ::nape::dynamics::InteractionGroupList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		 ::nape::dynamics::InteractionGroupIterator zpp_next;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::nape::dynamics::InteractionGroup next();
		::Dynamic next_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionGroupIterator */ 
