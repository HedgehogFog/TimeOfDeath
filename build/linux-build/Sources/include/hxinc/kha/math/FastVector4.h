// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_math_FastVector4
#define INCLUDED_kha_math_FastVector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastVector4)
HX_DECLARE_CLASS2(kha,math,Vector4)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FastVector4_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FastVector4_obj OBJ_;
		FastVector4_obj();

	public:
		enum { _hx_ClassId = 0x06595af5 };

		void __construct(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z,hx::Null< float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.FastVector4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.math.FastVector4"); }
		static hx::ObjectPtr< FastVector4_obj > __new(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z,hx::Null< float >  __o_w);
		static hx::ObjectPtr< FastVector4_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z,hx::Null< float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastVector4_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FastVector4",b5,c2,44,6e); }

		static  ::kha::math::FastVector4 fromVector4( ::kha::math::Vector4 v);
		static ::Dynamic fromVector4_dyn();

		float x;
		float y;
		float z;
		float w;
		float get_length();
		::Dynamic get_length_dyn();

		float set_length(float length);
		::Dynamic set_length_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastVector4 */ 
