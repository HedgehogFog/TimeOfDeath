// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_audio2_AudioChannel
#define INCLUDED_kha_audio2_AudioChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <hxinc/kha/audio1/AudioChannel.h>
#endif
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,AudioChannel)

namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES AudioChannel_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioChannel_obj OBJ_;
		AudioChannel_obj();

	public:
		enum { _hx_ClassId = 0x0cffaaed };

		void __construct(bool looping);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.AudioChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.AudioChannel"); }
		static hx::ObjectPtr< AudioChannel_obj > __new(bool looping);
		static hx::ObjectPtr< AudioChannel_obj > __alloc(hx::Ctx *_hx_ctx,bool looping);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AudioChannel",ad,62,5f,a0); }

		 ::kha::arrays::Float32ArrayPrivate data;
		Float myVolume;
		int myPosition;
		bool paused;
		bool looping;
		void nextSamples( ::kha::arrays::Float32ArrayPrivate samples,int length,int sampleRate);
		::Dynamic nextSamples_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		Float length;
		Float get_length();
		::Dynamic get_length_dyn();

		Float position;
		Float get_position();
		::Dynamic get_position_dyn();

		Float get_volume();
		::Dynamic get_volume_dyn();

		Float set_volume(Float value);
		::Dynamic set_volume_dyn();

		bool finished;
		bool get_finished();
		::Dynamic get_finished_dyn();

};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_AudioChannel */ 
