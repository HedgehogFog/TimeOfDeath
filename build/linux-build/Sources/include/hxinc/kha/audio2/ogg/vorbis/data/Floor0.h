// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor0
#define INCLUDED_kha_audio2_ogg_vorbis_data_Floor0

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d98ba3cfb1ea9348_130_new)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor0)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Floor0_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Floor0_obj OBJ_;
		Floor0_obj();

	public:
		enum { _hx_ClassId = 0x76b986b4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Floor0")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Floor0"); }

		hx::ObjectPtr< Floor0_obj > __new() {
			hx::ObjectPtr< Floor0_obj > __this = new Floor0_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Floor0_obj > __alloc(hx::Ctx *_hx_ctx) {
			Floor0_obj *__this = (Floor0_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Floor0_obj), true, "kha.audio2.ogg.vorbis.data.Floor0"));
			*(void **)__this = Floor0_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d98ba3cfb1ea9348_130_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor0_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Floor0",04,35,f5,75); }

		int order;
		int rate;
		int barkMapSize;
		int amplitudeBits;
		int amplitudeOffset;
		int numberOfBooks;
		::Array< int > bookList;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Floor0 */ 
