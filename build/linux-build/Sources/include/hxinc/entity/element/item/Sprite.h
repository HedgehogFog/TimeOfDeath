// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_entity_element_item_Sprite
#define INCLUDED_entity_element_item_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_entity_element_Entity
#include <hxinc/entity/element/Entity.h>
#endif
HX_DECLARE_CLASS2(entity,element,Entity)
HX_DECLARE_CLASS2(entity,element,IEntity)
HX_DECLARE_CLASS3(entity,element,item,Sprite)

namespace entity{
namespace element{
namespace item{


class HXCPP_CLASS_ATTRIBUTES Sprite_obj : public  ::entity::element::Entity_obj
{
	public:
		typedef  ::entity::element::Entity_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();

	public:
		enum { _hx_ClassId = 0x6217bbf1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entity.element.item.Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entity.element.item.Sprite"); }
		static hx::ObjectPtr< Sprite_obj > __new();
		static hx::ObjectPtr< Sprite_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sprite",25,50,2a,f8); }

};

} // end namespace entity
} // end namespace element
} // end namespace item

#endif /* INCLUDED_entity_element_item_Sprite */ 
