// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_kha_input_Pen
#define INCLUDED_kha_input_Pen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c9f4343854789049_94_new)
HX_DECLARE_CLASS2(kha,input,Pen)

namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES Pen_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Pen_obj OBJ_;
		Pen_obj();

	public:
		enum { _hx_ClassId = 0x5826be93 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.input.Pen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.input.Pen"); }

		hx::ObjectPtr< Pen_obj > __new() {
			hx::ObjectPtr< Pen_obj > __this = new Pen_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Pen_obj > __alloc(hx::Ctx *_hx_ctx) {
			Pen_obj *__this = (Pen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pen_obj), true, "kha.input.Pen"));
			*(void **)__this = Pen_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_94_new)
HXDLIN(  94)		::kha::input::Pen_obj::instance = ( ( ::kha::input::Pen)(__this) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pen_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pen",b9,0c,3d,00); }

		static  ::kha::input::Pen get(hx::Null< int >  num);
		static ::Dynamic get_dyn();

		static  ::kha::input::Pen instance;
		void notify( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener);
		::Dynamic notify_dyn();

		void remove( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener);
		::Dynamic remove_dyn();

		void notifyWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener);
		::Dynamic notifyWindowed_dyn();

		void removeWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener);
		::Dynamic removeWindowed_dyn();

		::Array< ::Dynamic> windowDownListeners;
		::Array< ::Dynamic> windowUpListeners;
		::Array< ::Dynamic> windowMoveListeners;
		void sendDownEvent(int windowId,int x,int y,Float pressure);
		::Dynamic sendDownEvent_dyn();

		void sendUpEvent(int windowId,int x,int y,Float pressure);
		::Dynamic sendUpEvent_dyn();

		void sendMoveEvent(int windowId,int x,int y,Float pressure);
		::Dynamic sendMoveEvent_dyn();

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Pen */ 
