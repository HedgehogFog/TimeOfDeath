// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_math_Matrix4
#define INCLUDED_kha_math_Matrix4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a4f4220e088ed7a0_15_new)
HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,math,Vector3)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Matrix4_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Matrix4_obj OBJ_;
		Matrix4_obj();

	public:
		enum { _hx_ClassId = 0x78b826c7 };

		void __construct(Float _00,Float _10,Float _20,Float _30,Float _01,Float _11,Float _21,Float _31,Float _02,Float _12,Float _22,Float _32,Float _03,Float _13,Float _23,Float _33);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.Matrix4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.math.Matrix4"); }

		hx::ObjectPtr< Matrix4_obj > __new(Float _00,Float _10,Float _20,Float _30,Float _01,Float _11,Float _21,Float _31,Float _02,Float _12,Float _22,Float _32,Float _03,Float _13,Float _23,Float _33) {
			hx::ObjectPtr< Matrix4_obj > __this = new Matrix4_obj();
			__this->__construct(_00,_10,_20,_30,_01,_11,_21,_31,_02,_12,_22,_32,_03,_13,_23,_33);
			return __this;
		}

		static hx::ObjectPtr< Matrix4_obj > __alloc(hx::Ctx *_hx_ctx,Float _00,Float _10,Float _20,Float _30,Float _01,Float _11,Float _21,Float _31,Float _02,Float _12,Float _22,Float _32,Float _03,Float _13,Float _23,Float _33) {
			Matrix4_obj *__this = (Matrix4_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Matrix4_obj), false, "kha.math.Matrix4"));
			*(void **)__this = Matrix4_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a4f4220e088ed7a0_15_new)
HXLINE(  16)		( ( ::kha::math::Matrix4)(__this) )->_00 = _00;
HXDLIN(  16)		( ( ::kha::math::Matrix4)(__this) )->_10 = _10;
HXDLIN(  16)		( ( ::kha::math::Matrix4)(__this) )->_20 = _20;
HXDLIN(  16)		( ( ::kha::math::Matrix4)(__this) )->_30 = _30;
HXLINE(  17)		( ( ::kha::math::Matrix4)(__this) )->_01 = _01;
HXDLIN(  17)		( ( ::kha::math::Matrix4)(__this) )->_11 = _11;
HXDLIN(  17)		( ( ::kha::math::Matrix4)(__this) )->_21 = _21;
HXDLIN(  17)		( ( ::kha::math::Matrix4)(__this) )->_31 = _31;
HXLINE(  18)		( ( ::kha::math::Matrix4)(__this) )->_02 = _02;
HXDLIN(  18)		( ( ::kha::math::Matrix4)(__this) )->_12 = _12;
HXDLIN(  18)		( ( ::kha::math::Matrix4)(__this) )->_22 = _22;
HXDLIN(  18)		( ( ::kha::math::Matrix4)(__this) )->_32 = _32;
HXLINE(  19)		( ( ::kha::math::Matrix4)(__this) )->_03 = _03;
HXDLIN(  19)		( ( ::kha::math::Matrix4)(__this) )->_13 = _13;
HXDLIN(  19)		( ( ::kha::math::Matrix4)(__this) )->_23 = _23;
HXDLIN(  19)		( ( ::kha::math::Matrix4)(__this) )->_33 = _33;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix4_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix4",b3,6a,b8,60); }

		static void __boot();
		static int width;
		static int height;
		static  ::kha::math::Matrix4 orthogonalProjection(Float left,Float right,Float bottom,Float top,Float zn,Float zf);
		static ::Dynamic orthogonalProjection_dyn();

		static  ::kha::math::Matrix4 perspectiveProjection(Float fovY,Float aspect,Float zn,Float zf);
		static ::Dynamic perspectiveProjection_dyn();

		static  ::kha::math::Matrix4 lookAt( ::kha::math::Vector3 eye, ::kha::math::Vector3 at, ::kha::math::Vector3 up);
		static ::Dynamic lookAt_dyn();

		Float _00;
		Float _10;
		Float _20;
		Float _30;
		Float _01;
		Float _11;
		Float _21;
		Float _31;
		Float _02;
		Float _12;
		Float _22;
		Float _32;
		Float _03;
		Float _13;
		Float _23;
		Float _33;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Matrix4 */ 
