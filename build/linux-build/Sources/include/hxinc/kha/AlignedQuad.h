// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_AlignedQuad
#define INCLUDED_kha_AlignedQuad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_26390ef81ec94f5e_10_new)
HX_DECLARE_CLASS1(kha,AlignedQuad)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES AlignedQuad_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AlignedQuad_obj OBJ_;
		AlignedQuad_obj();

	public:
		enum { _hx_ClassId = 0x1e29b4f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.AlignedQuad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.AlignedQuad"); }

		hx::ObjectPtr< AlignedQuad_obj > __new() {
			hx::ObjectPtr< AlignedQuad_obj > __this = new AlignedQuad_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AlignedQuad_obj > __alloc(hx::Ctx *_hx_ctx) {
			AlignedQuad_obj *__this = (AlignedQuad_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AlignedQuad_obj), false, "kha.AlignedQuad"));
			*(void **)__this = AlignedQuad_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_26390ef81ec94f5e_10_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AlignedQuad_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AlignedQuad",2b,a9,6d,6a); }

		Float x0;
		Float y0;
		Float s0;
		Float t0;
		Float x1;
		Float y1;
		Float s1;
		Float t1;
		Float xadvance;
};

} // end namespace kha

#endif /* INCLUDED_kha_AlignedQuad */ 
