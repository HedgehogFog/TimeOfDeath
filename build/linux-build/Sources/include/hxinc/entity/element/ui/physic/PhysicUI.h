// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_entity_element_ui_physic_PhysicUI
#define INCLUDED_entity_element_ui_physic_PhysicUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_entity_element_Entity
#include <hxinc/entity/element/Entity.h>
#endif
HX_DECLARE_CLASS2(entity,element,Entity)
HX_DECLARE_CLASS2(entity,element,IEntity)
HX_DECLARE_CLASS4(entity,element,ui,physic,PhysicUI)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Polygon)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,space,Space)

namespace entity{
namespace element{
namespace ui{
namespace physic{


class HXCPP_CLASS_ATTRIBUTES PhysicUI_obj : public  ::entity::element::Entity_obj
{
	public:
		typedef  ::entity::element::Entity_obj super;
		typedef PhysicUI_obj OBJ_;
		PhysicUI_obj();

	public:
		enum { _hx_ClassId = 0x2e1ea9d1 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entity.element.ui.physic.PhysicUI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entity.element.ui.physic.PhysicUI"); }
		static hx::ObjectPtr< PhysicUI_obj > __new(Float x,Float y);
		static hx::ObjectPtr< PhysicUI_obj > __alloc(hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicUI_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PhysicUI",a0,17,72,a2); }

		 ::nape::space::Space space;
		 ::nape::phys::Body body;
		 ::nape::shape::Polygon shape;
};

} // end namespace entity
} // end namespace element
} // end namespace ui
} // end namespace physic

#endif /* INCLUDED_entity_element_ui_physic_PhysicUI */ 
