// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_entity_element_Entity
#include <hxinc/entity/element/Entity.h>
#endif
#ifndef INCLUDED_entity_element_IEntity
#include <hxinc/entity/element/IEntity.h>
#endif
#ifndef INCLUDED_entity_element_user_Player
#include <hxinc/entity/element/user/Player.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <hxinc/kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_netsync_Controller
#include <hxinc/kha/netsync/Controller.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_179cd32b39fff6da_8_new,"entity.element.user.Player","new",0xda8a1a39,"entity.element.user.Player.new","entity/element/user/Player.hx",8,0xe0c8afb8)
HX_LOCAL_STACK_FRAME(_hx_pos_179cd32b39fff6da_16_update,"entity.element.user.Player","update",0x429229d0,"entity.element.user.Player.update","entity/element/user/Player.hx",16,0xe0c8afb8)
HX_LOCAL_STACK_FRAME(_hx_pos_179cd32b39fff6da_21_draw,"entity.element.user.Player","draw",0x57ba800b,"entity.element.user.Player.draw","entity/element/user/Player.hx",21,0xe0c8afb8)
HX_LOCAL_STACK_FRAME(_hx_pos_179cd32b39fff6da_25_downListener,"entity.element.user.Player","downListener",0x11cc19fd,"entity.element.user.Player.downListener","entity/element/user/Player.hx",25,0xe0c8afb8)
HX_LOCAL_STACK_FRAME(_hx_pos_179cd32b39fff6da_31_upListener,"entity.element.user.Player","upListener",0x94620936,"entity.element.user.Player.upListener","entity/element/user/Player.hx",31,0xe0c8afb8)
namespace entity{
namespace element{
namespace user{

void Player_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_179cd32b39fff6da_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  11)		this->x = x;
HXLINE(  12)		this->y = y;
HXLINE(  14)		::kha::input::Keyboard_obj::get(null())->notify(this->downListener_dyn(),this->upListener_dyn(),null());
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a52b4f5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a52b4f5;
	} else {
		return inClassId==(int)0x49e62f7c;
	}
}

void Player_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_179cd32b39fff6da_16_update)
            	}


void Player_obj::draw( ::kha::graphics2::Graphics gr){
            	HX_STACKFRAME(&_hx_pos_179cd32b39fff6da_21_draw)
HXDLIN(  21)		gr->drawRect(this->x,this->y,(this->x + 50),(this->y + 50),10);
            	}


void Player_obj::downListener(int code){
            	HX_STACKFRAME(&_hx_pos_179cd32b39fff6da_25_downListener)
HXDLIN(  25)		if ((code == 65)) {
HXLINE(  26)			 ::entity::element::user::Player _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  26)			_hx_tmp->x = (_hx_tmp->x - ( (Float)(1) ));
            		}
            		else {
HXLINE(  27)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,downListener,(void))

void Player_obj::upListener(int code){
            	HX_STACKFRAME(&_hx_pos_179cd32b39fff6da_31_upListener)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,upListener,(void))


hx::ObjectPtr< Player_obj > Player_obj::__new(Float x,Float y) {
	hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(x,y);
	return __this;
}

hx::ObjectPtr< Player_obj > Player_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y) {
	Player_obj *__this = (Player_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "entity.element.user.Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Player_obj::Player_obj()
{
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"upListener") ) { return hx::Val( upListener_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"downListener") ) { return hx::Val( downListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Player_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("downListener",f6,e6,73,a7),
	HX_("upListener",ef,75,8a,3d),
	::String(null()) };

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("entity.element.user.Player",c7,89,98,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entity
} // end namespace element
} // end namespace user
