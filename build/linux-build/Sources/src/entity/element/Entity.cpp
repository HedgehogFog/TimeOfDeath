// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_entity_element_Entity
#include <hxinc/entity/element/Entity.h>
#endif
#ifndef INCLUDED_entity_element_IEntity
#include <hxinc/entity/element/IEntity.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_59b713bdf192bc68_5_new,"entity.element.Entity","new",0x58865092,"entity.element.Entity.new","entity/element/Entity.hx",5,0xb786cddc)
HX_LOCAL_STACK_FRAME(_hx_pos_59b713bdf192bc68_22_draw,"entity.element.Entity","draw",0x166dd792,"entity.element.Entity.draw","entity/element/Entity.hx",22,0xb786cddc)
HX_LOCAL_STACK_FRAME(_hx_pos_59b713bdf192bc68_26_update,"entity.element.Entity","update",0x966fb117,"entity.element.Entity.update","entity/element/Entity.hx",26,0xb786cddc)
HX_LOCAL_STACK_FRAME(_hx_pos_59b713bdf192bc68_29_destroy,"entity.element.Entity","destroy",0x9201ae2c,"entity.element.Entity.destroy","entity/element/Entity.hx",29,0xb786cddc)
HX_LOCAL_STACK_FRAME(_hx_pos_59b713bdf192bc68_34_kill,"entity.element.Entity","kill",0x1b078b2c,"entity.element.Entity.kill","entity/element/Entity.hx",34,0xb786cddc)
HX_LOCAL_STACK_FRAME(_hx_pos_59b713bdf192bc68_38_revive,"entity.element.Entity","revive",0x19e12563,"entity.element.Entity.revive","entity/element/Entity.hx",38,0xb786cddc)
namespace entity{
namespace element{

void Entity_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_5_new)
HXLINE(  16)		this->alive = true;
HXLINE(  15)		this->visible = true;
HXLINE(  14)		this->active = true;
HXLINE(  13)		this->name = HX_("Entity",43,87,b0,39);
            	}

Dynamic Entity_obj::__CreateEmpty() { return new Entity_obj; }

void *Entity_obj::_hx_vtable = 0;

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Entity_obj > _hx_result = new Entity_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Entity_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49e62f7c;
}

static ::entity::element::IEntity_obj _hx_entity_element_Entity__hx_entity_element_IEntity= {
	( void (hx::Object::*)( ::kha::graphics2::Graphics))&::entity::element::Entity_obj::draw,
	( void (hx::Object::*)(Float))&::entity::element::Entity_obj::update,
	( void (hx::Object::*)())&::entity::element::Entity_obj::destroy,
	( void (hx::Object::*)())&::entity::element::Entity_obj::kill,
	( void (hx::Object::*)())&::entity::element::Entity_obj::revive,
};

void *Entity_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x340cedf3: return &_hx_entity_element_Entity__hx_entity_element_IEntity;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Entity_obj::draw( ::kha::graphics2::Graphics gr){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_22_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,draw,(void))

void Entity_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_26_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

void Entity_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_29_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,destroy,(void))

void Entity_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_34_kill)
HXDLIN(  34)		this->alive = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,kill,(void))

void Entity_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_59b713bdf192bc68_38_revive)
HXDLIN(  38)		this->alive = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,revive,(void))


hx::ObjectPtr< Entity_obj > Entity_obj::__new() {
	hx::ObjectPtr< Entity_obj > __this = new Entity_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Entity_obj > Entity_obj::__alloc(hx::Ctx *_hx_ctx) {
	Entity_obj *__this = (Entity_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Entity_obj), true, "entity.element.Entity"));
	*(void **)__this = Entity_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alive,"alive");
}

hx::Val Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"alive") ) { return hx::Val( alive ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Entity_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alive") ) { alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("alive",cd,63,91,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Entity_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Entity_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(Entity_obj,y),HX_("y",79,00,00,00)},
	{hx::fsFloat,(int)offsetof(Entity_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsFloat,(int)offsetof(Entity_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsString,(int)offsetof(Entity_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsBool,(int)offsetof(Entity_obj,active),HX_("active",c6,41,46,16)},
	{hx::fsBool,(int)offsetof(Entity_obj,visible),HX_("visible",72,78,24,a3)},
	{hx::fsBool,(int)offsetof(Entity_obj,alive),HX_("alive",cd,63,91,21)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Entity_obj_sStaticStorageInfo = 0;
#endif

static ::String Entity_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("name",4b,72,ff,48),
	HX_("active",c6,41,46,16),
	HX_("visible",72,78,24,a3),
	HX_("alive",cd,63,91,21),
	HX_("draw",04,2c,70,42),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	::String(null()) };

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	Entity_obj _hx_dummy;
	Entity_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("entity.element.Entity",a0,5f,92,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Entity_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entity_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entity
} // end namespace element
