// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_netsync_Network
#define INCLUDED_kha_netsync_Network

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,netsync,Network)


#include <Kore/Network/Socket.h>

namespace kha{
namespace netsync{


class HXCPP_CLASS_ATTRIBUTES Network_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Network_obj OBJ_;
		Network_obj();

	public:
		enum { _hx_ClassId = 0x6af2d296 };

		void __construct(::String url,int port, ::Dynamic errorCallback, ::Dynamic closeCallback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.netsync.Network")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.netsync.Network"); }
		static hx::ObjectPtr< Network_obj > __new(::String url,int port, ::Dynamic errorCallback, ::Dynamic closeCallback);
		static hx::ObjectPtr< Network_obj > __alloc(hx::Ctx *_hx_ctx,::String url,int port, ::Dynamic errorCallback, ::Dynamic closeCallback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Network_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Network",8e,ec,0d,27); }

		::String url;
		int port;
		int bufferPos;
		 ::haxe::io::Bytes buffer;
		 ::haxe::io::Bytes tempBuffer;
		 ::Dynamic listener;
		Dynamic listener_dyn() { return listener;}
		void init(::String url,int port);
		::Dynamic init_dyn();

		void send( ::haxe::io::Bytes bytes,bool mandatory);
		::Dynamic send_dyn();

		void listen( ::Dynamic listener);
		::Dynamic listen_dyn();

		void update();
		::Dynamic update_dyn();

		int getBytesFromSocket( ::haxe::io::Bytes inBuffer);
		::Dynamic getBytesFromSocket_dyn();


	Kore::Socket *socket;

};

} // end namespace kha
} // end namespace netsync

#endif /* INCLUDED_kha_netsync_Network */ 