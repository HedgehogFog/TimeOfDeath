// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <hxinc/haxe/ds/ObjectMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed1a57f4f2d0373a_57_new,"haxe.ds.ObjectMap","new",0x27af5498,"haxe.ds.ObjectMap.new","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",57,0x694d25fb)
HX_LOCAL_STACK_FRAME(_hx_pos_ed1a57f4f2d0373a_60_set,"haxe.ds.ObjectMap","set",0x27b31fda,"haxe.ds.ObjectMap.set","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",60,0x694d25fb)
HX_LOCAL_STACK_FRAME(_hx_pos_ed1a57f4f2d0373a_64_get,"haxe.ds.ObjectMap","get",0x27aa04ce,"haxe.ds.ObjectMap.get","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",64,0x694d25fb)
HX_LOCAL_STACK_FRAME(_hx_pos_ed1a57f4f2d0373a_75_keys,"haxe.ds.ObjectMap","keys",0x8fbf0ebc,"haxe.ds.ObjectMap.keys","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",75,0x694d25fb)
namespace haxe{
namespace ds{

void ObjectMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ed1a57f4f2d0373a_57_new)
            	}

Dynamic ObjectMap_obj::__CreateEmpty() { return new ObjectMap_obj; }

void *ObjectMap_obj::_hx_vtable = 0;

Dynamic ObjectMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectMap_obj > _hx_result = new ObjectMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a82dae8;
}

static ::haxe::IMap_obj _hx_haxe_ds_ObjectMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ds::ObjectMap_obj::get,
	(  ::Dynamic (hx::Object::*)())&::haxe::ds::ObjectMap_obj::keys,
};

void *ObjectMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_ObjectMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ObjectMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ed1a57f4f2d0373a_60_set)
HXDLIN(  60)		 ::__object_hash_set(HX_MAP_THIS,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMap_obj,set,(void))

 ::Dynamic ObjectMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ed1a57f4f2d0373a_64_get)
HXDLIN(  64)		return  ::__object_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,get,return )

 ::Dynamic ObjectMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_ed1a57f4f2d0373a_75_keys)
HXLINE(  76)		::cpp::VirtualArray a =  ::__object_hash_keys(this->h);
HXLINE(  77)		return a->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMap_obj,keys,return )


hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__new() {
	hx::ObjectPtr< ObjectMap_obj > __this = new ObjectMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	ObjectMap_obj *__this = (ObjectMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectMap_obj), true, "haxe.ds.ObjectMap"));
	*(void **)__this = ObjectMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ObjectMap_obj::ObjectMap_obj()
{
}

void ObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void ObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

hx::Val ObjectMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectMap_obj,h),HX_("h",68,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectMap_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectMap_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("keys",f4,e1,06,47),
	::String(null()) };

hx::Class ObjectMap_obj::__mClass;

void ObjectMap_obj::__register()
{
	ObjectMap_obj _hx_dummy;
	ObjectMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.ObjectMap",a6,68,9b,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
