// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",36,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_57_getClassName,"Type","getClassName",0x8e66dd41,"Type.getClassName","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",57,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_67_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",67,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_74_resolveEnum,"Type","resolveEnum",0x26394079,"Type.resolveEnum","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",74,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_88_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",88,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_92_createEnum,"Type","createEnum",0xd8d56d31,"Type.createEnum","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",92,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_102_getInstanceFields,"Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",102,0x6a437881)
HX_LOCAL_STACK_FRAME(_hx_pos_d9284bf4eaf65eea_110_getEnumConstructs,"Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/cpp/_std/Type.hx",110,0x6a437881)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37e21eda;
}

hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return null();
            		}
HXLINE(  38)		 ::Dynamic c = o->__GetClass();
HXLINE(  39)		::String _hx_switch_0 = ( (::String)(c->toString()) );
            		if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  42)			return null();
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  41)			return null();
HXDLIN(  41)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  44)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::String Type_obj::getClassName(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_57_getClassName)
HXLINE(  58)		if (hx::IsNull( c )) {
HXLINE(  59)			return null();
            		}
HXLINE(  60)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_67_resolveClass)
HXLINE(  68)		hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (hx::IsNotNull( result )) {
HXLINE(  69)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			return null();
            		}
HXLINE(  71)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_74_resolveEnum)
HXLINE(  75)		hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (hx::IsNotNull( result )) {
HXLINE(  76)			_hx_tmp = !(( (bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			return null();
            		}
HXLINE(  78)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createEmptyInstance(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_88_createEmptyInstance)
HXDLIN(  88)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_92_createEnum)
HXDLIN(  92)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

::Array< ::String > Type_obj::getInstanceFields(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_102_getInstanceFields)
HXDLIN( 102)		return ( (::Array< ::String >)(c->GetInstanceFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

::Array< ::String > Type_obj::getEnumConstructs(hx::Class e){
            	HX_STACKFRAME(&_hx_pos_d9284bf4eaf65eea_110_getEnumConstructs)
HXDLIN( 110)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("getClass",c2,87,2f,a8),
	HX_("getClassName",2d,2f,94,eb),
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("createEmptyInstance",a6,26,85,ce),
	HX_("createEnum",1d,2c,a4,55),
	HX_("getInstanceFields",24,2f,97,ed),
	HX_("getEnumConstructs",13,06,6d,83),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

