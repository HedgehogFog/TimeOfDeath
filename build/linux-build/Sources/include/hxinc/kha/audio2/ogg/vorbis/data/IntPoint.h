// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint
#define INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c6f2e87243923e54_12_new)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,IntPoint)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES IntPoint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IntPoint_obj OBJ_;
		IntPoint_obj();

	public:
		enum { _hx_ClassId = 0x1267c315 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.IntPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.vorbis.data.IntPoint"); }

		hx::ObjectPtr< IntPoint_obj > __new() {
			hx::ObjectPtr< IntPoint_obj > __this = new IntPoint_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< IntPoint_obj > __alloc(hx::Ctx *_hx_ctx) {
			IntPoint_obj *__this = (IntPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IntPoint_obj), false, "kha.audio2.ogg.vorbis.data.IntPoint"));
			*(void **)__this = IntPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c6f2e87243923e54_12_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntPoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IntPoint",01,91,be,e8); }

		int x;
		int y;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint */ 
