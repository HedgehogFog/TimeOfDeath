// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics
#define INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4c2ac55ef2dd2b2a_30_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_glyph_h_metrics)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_temp_glyph_h_metrics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_temp_glyph_h_metrics_obj OBJ_;
		Stbtt_temp_glyph_h_metrics_obj();

	public:
		enum { _hx_ClassId = 0x74b63d97 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics"); }

		hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > __new() {
			hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > __this = new Stbtt_temp_glyph_h_metrics_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_temp_glyph_h_metrics_obj *__this = (Stbtt_temp_glyph_h_metrics_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_temp_glyph_h_metrics_obj), false, "kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics"));
			*(void **)__this = Stbtt_temp_glyph_h_metrics_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4c2ac55ef2dd2b2a_30_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_temp_glyph_h_metrics_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt_temp_glyph_h_metrics",2c,1e,02,4a); }

		int advanceWidth;
		int leftSideBearing;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics */ 
