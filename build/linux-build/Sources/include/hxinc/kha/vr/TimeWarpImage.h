// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_vr_TimeWarpImage
#define INCLUDED_kha_vr_TimeWarpImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_685b63c66f33a56d_40_new)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,vr,PoseState)
HX_DECLARE_CLASS2(kha,vr,TimeWarpImage)

namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES TimeWarpImage_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TimeWarpImage_obj OBJ_;
		TimeWarpImage_obj();

	public:
		enum { _hx_ClassId = 0x523be326 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.vr.TimeWarpImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.vr.TimeWarpImage"); }

		hx::ObjectPtr< TimeWarpImage_obj > __new() {
			hx::ObjectPtr< TimeWarpImage_obj > __this = new TimeWarpImage_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TimeWarpImage_obj > __alloc(hx::Ctx *_hx_ctx) {
			TimeWarpImage_obj *__this = (TimeWarpImage_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TimeWarpImage_obj), true, "kha.vr.TimeWarpImage"));
			*(void **)__this = TimeWarpImage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_685b63c66f33a56d_40_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeWarpImage_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TimeWarpImage",06,e2,07,90); }

		 ::kha::Image Image;
		 ::kha::math::Matrix4 TexCoordsFromTanAngles;
		 ::kha::vr::PoseState Pose;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_TimeWarpImage */ 
