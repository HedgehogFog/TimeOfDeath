// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_util_ZPP_Math
#define INCLUDED_zpp_nape_util_ZPP_Math

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Math)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZPP_Math_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Math_obj OBJ_;
		ZPP_Math_obj();

	public:
		enum { _hx_ClassId = 0x3fb8423c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="zpp_nape.util.ZPP_Math")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"zpp_nape.util.ZPP_Math"); }

		hx::ObjectPtr< ZPP_Math_obj > __new() {
			hx::ObjectPtr< ZPP_Math_obj > __this = new ZPP_Math_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ZPP_Math_obj > __alloc(hx::Ctx *_hx_ctx) {
			ZPP_Math_obj *__this = (ZPP_Math_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_Math_obj), false, "zpp_nape.util.ZPP_Math"));
			*(void **)__this = ZPP_Math_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Math_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Math",ad,a2,3e,fd); }

		static Float sqrt(Float x);
		static ::Dynamic sqrt_dyn();

		static Float invsqrt(Float x);
		static ::Dynamic invsqrt_dyn();

		static Float sqr(Float x);
		static ::Dynamic sqr_dyn();

		static Float clamp2(Float x,Float a);
		static ::Dynamic clamp2_dyn();

		static Float clamp(Float x,Float a,Float b);
		static ::Dynamic clamp_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_Math */ 