// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_entity_element_Entity
#include <hxinc/entity/element/Entity.h>
#endif
#ifndef INCLUDED_entity_element_IEntity
#include <hxinc/entity/element/IEntity.h>
#endif
#ifndef INCLUDED_entity_element_item_Sprite
#include <hxinc/entity/element/item/Sprite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a193c1cfd4a42ec_4_new,"entity.element.item.Sprite","new",0x9b7adf15,"entity.element.item.Sprite.new","entity/element/item/Sprite.hx",4,0xd7513a5c)
namespace entity{
namespace element{
namespace item{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a193c1cfd4a42ec_4_new)
HXLINE(   5)		super::__construct();
HXLINE(   6)		this->name = HX_("Sprite",25,50,2a,f8);
HXLINE(   7)		this->active = false;
HXLINE(   8)		this->alive = true;
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49e62f7c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49e62f7c;
	} else {
		return inClassId==(int)0x6217bbf1;
	}
}


hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "entity.element.item.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Sprite_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	Sprite_obj _hx_dummy;
	Sprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("entity.element.item.Sprite",a3,b0,56,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entity
} // end namespace element
} // end namespace item
