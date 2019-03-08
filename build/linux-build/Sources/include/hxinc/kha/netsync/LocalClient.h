// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_netsync_LocalClient
#define INCLUDED_kha_netsync_LocalClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_netsync_Client
#include <hxinc/kha/netsync/Client.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,netsync,Client)
HX_DECLARE_CLASS2(kha,netsync,Controller)
HX_DECLARE_CLASS2(kha,netsync,LocalClient)

namespace kha{
namespace netsync{


class HXCPP_CLASS_ATTRIBUTES LocalClient_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LocalClient_obj OBJ_;
		LocalClient_obj();

	public:
		enum { _hx_ClassId = 0x0469c0e2 };

		void __construct(int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.netsync.LocalClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.netsync.LocalClient"); }
		static hx::ObjectPtr< LocalClient_obj > __new(int id);
		static hx::ObjectPtr< LocalClient_obj > __alloc(hx::Ctx *_hx_ctx,int id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LocalClient_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LocalClient",f6,01,bd,ab); }

		int myId;
		void send( ::haxe::io::Bytes bytes,bool mandatory);
		::Dynamic send_dyn();

		void receive( ::Dynamic receiver);
		::Dynamic receive_dyn();

		void onClose( ::Dynamic close);
		::Dynamic onClose_dyn();

		::Array< ::Dynamic> controllers;
		::Array< ::Dynamic> get_controllers();
		::Dynamic get_controllers_dyn();

		int id;
		int get_id();
		::Dynamic get_id_dyn();

};

} // end namespace kha
} // end namespace netsync

#endif /* INCLUDED_kha_netsync_LocalClient */ 
