// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#define INCLUDED_zpp_nape_util_Hashable2_Boolfalse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3308b970c96a192f_176_new)
HX_DECLARE_CLASS2(zpp_nape,util,Hashable2_Boolfalse)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Hashable2_Boolfalse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Hashable2_Boolfalse_obj OBJ_;
		Hashable2_Boolfalse_obj();

	public:
		enum { _hx_ClassId = 0x0b0acef1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.Hashable2_Boolfalse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.Hashable2_Boolfalse"); }

		hx::ObjectPtr< Hashable2_Boolfalse_obj > __new() {
			hx::ObjectPtr< Hashable2_Boolfalse_obj > __this = new Hashable2_Boolfalse_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Hashable2_Boolfalse_obj > __alloc(hx::Ctx *_hx_ctx) {
			Hashable2_Boolfalse_obj *__this = (Hashable2_Boolfalse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Hashable2_Boolfalse_obj), true, "zpp_nape.util.Hashable2_Boolfalse"));
			*(void **)__this = Hashable2_Boolfalse_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3308b970c96a192f_176_new)
HXLINE( 205)		( ( ::zpp_nape::util::Hashable2_Boolfalse)(__this) )->di = 0;
HXLINE( 204)		( ( ::zpp_nape::util::Hashable2_Boolfalse)(__this) )->id = 0;
HXLINE( 203)		( ( ::zpp_nape::util::Hashable2_Boolfalse)(__this) )->hnext = null();
HXLINE( 178)		( ( ::zpp_nape::util::Hashable2_Boolfalse)(__this) )->next = null();
HXLINE( 177)		( ( ::zpp_nape::util::Hashable2_Boolfalse)(__this) )->value = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hashable2_Boolfalse_obj();

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
		::String __ToString() const { return HX_("Hashable2_Boolfalse",04,8c,e8,61); }

		static void __boot();
		static  ::zpp_nape::util::Hashable2_Boolfalse zpp_pool;
		static  ::zpp_nape::util::Hashable2_Boolfalse get(int id,int di,bool val);
		static ::Dynamic get_dyn();

		static  ::zpp_nape::util::Hashable2_Boolfalse getpersist(int id,int di);
		static ::Dynamic getpersist_dyn();

		static  ::zpp_nape::util::Hashable2_Boolfalse ordered_get(int id,int di,bool val);
		static ::Dynamic ordered_get_dyn();

		static  ::zpp_nape::util::Hashable2_Boolfalse ordered_get_persist(int id,int di);
		static ::Dynamic ordered_get_persist_dyn();

		bool value;
		 ::zpp_nape::util::Hashable2_Boolfalse next;
		 ::zpp_nape::util::Hashable2_Boolfalse hnext;
		int id;
		int di;
		void free();
		::Dynamic free_dyn();

		void alloc();
		::Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_Hashable2_Boolfalse */ 
