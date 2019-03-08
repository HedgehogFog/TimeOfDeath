// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_Project
#define INCLUDED_Project

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Project)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)



class HXCPP_CLASS_ATTRIBUTES Project_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Project_obj OBJ_;
		Project_obj();

	public:
		enum { _hx_ClassId = 0x1af0ced5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Project")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Project"); }
		static hx::ObjectPtr< Project_obj > __new();
		static hx::ObjectPtr< Project_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Project_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Project",b9,3a,3c,c3); }

		void update();
		::Dynamic update_dyn();

		void render( ::kha::Framebuffer framebuffer);
		::Dynamic render_dyn();

};


#endif /* INCLUDED_Project */ 
