// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <hxinc/kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d67788c1245542db_14_new,"kha.graphics4.VertexShader","new",0xb744d84a,"kha.graphics4.VertexShader.new","kha/graphics4/VertexShader.hx",14,0x1cb2cd64)
HX_LOCAL_STACK_FRAME(_hx_pos_d67788c1245542db_20_init,"kha.graphics4.VertexShader","init",0xa1b11fe6,"kha.graphics4.VertexShader.init","kha/graphics4/VertexShader.hx",20,0x1cb2cd64)
HX_LOCAL_STACK_FRAME(_hx_pos_d67788c1245542db_30_delete,"kha.graphics4.VertexShader","delete",0x1bb20681,"kha.graphics4.VertexShader.delete","kha/graphics4/VertexShader.hx",30,0x1cb2cd64)
HX_LOCAL_STACK_FRAME(_hx_pos_d67788c1245542db_35__forceInclude,"kha.graphics4.VertexShader","_forceInclude",0xe846bac6,"kha.graphics4.VertexShader._forceInclude","kha/graphics4/VertexShader.hx",35,0x1cb2cd64)
HX_LOCAL_STACK_FRAME(_hx_pos_d67788c1245542db_23_fromSource,"kha.graphics4.VertexShader","fromSource",0x97dfdf3b,"kha.graphics4.VertexShader.fromSource","kha/graphics4/VertexShader.hx",23,0x1cb2cd64)
namespace kha{
namespace graphics4{

void VertexShader_obj::__construct(::Array< ::Dynamic> sources,::Array< ::String > files){
            	HX_STACKFRAME(&_hx_pos_d67788c1245542db_14_new)
HXDLIN(  14)		if (hx::IsNotNull( sources )) {
HXLINE(  15)			this->init(sources->__get(0).StaticCast<  ::kha::internal::BytesBlob >(),files->__get(0));
            		}
            	}

Dynamic VertexShader_obj::__CreateEmpty() { return new VertexShader_obj; }

void *VertexShader_obj::_hx_vtable = 0;

Dynamic VertexShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexShader_obj > _hx_result = new VertexShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VertexShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3936d3ee;
}

void VertexShader_obj::init( ::kha::internal::BytesBlob source,::String file){
            	HX_STACKFRAME(&_hx_pos_d67788c1245542db_20_init)
HXDLIN(  20)		shader = new Kore::Graphics4::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::Graphics4::VertexShader);;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexShader_obj,init,(void))

void VertexShader_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_d67788c1245542db_30_delete)
HXDLIN(  30)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexShader_obj,_hx_delete,(void))

void VertexShader_obj::_forceInclude(){
            	HX_STACKFRAME(&_hx_pos_d67788c1245542db_35__forceInclude)
HXDLIN(  35)		::haxe::io::Bytes_obj::alloc(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexShader_obj,_forceInclude,(void))

 ::kha::graphics4::VertexShader VertexShader_obj::fromSource(::String source){
            	HX_GC_STACKFRAME(&_hx_pos_d67788c1245542db_23_fromSource)
HXLINE(  24)		 ::kha::graphics4::VertexShader vertexShader =  ::kha::graphics4::VertexShader_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  25)		vertexShader->shader = new Kore::Graphics4::Shader(source, Kore::Graphics4::VertexShader);;
HXLINE(  26)		return vertexShader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexShader_obj,fromSource,return )


hx::ObjectPtr< VertexShader_obj > VertexShader_obj::__new(::Array< ::Dynamic> sources,::Array< ::String > files) {
	hx::ObjectPtr< VertexShader_obj > __this = new VertexShader_obj();
	__this->__construct(sources,files);
	return __this;
}

hx::ObjectPtr< VertexShader_obj > VertexShader_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files) {
	VertexShader_obj *__this = (VertexShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexShader_obj), false, "kha.graphics4.VertexShader"));
	*(void **)__this = VertexShader_obj::_hx_vtable;
	__this->__construct(sources,files);
	return __this;
}

VertexShader_obj::VertexShader_obj()
{
}

hx::Val VertexShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_forceInclude") ) { return hx::Val( _forceInclude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VertexShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromSource") ) { outValue = fromSource_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *VertexShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VertexShader_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexShader_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("delete",2b,c0,d8,6a),
	HX_("_forceInclude",5c,ea,d8,d9),
	::String(null()) };

hx::Class VertexShader_obj::__mClass;

static ::String VertexShader_obj_sStaticFields[] = {
	HX_("fromSource",e5,b5,75,75),
	::String(null())
};

void VertexShader_obj::__register()
{
	VertexShader_obj _hx_dummy;
	VertexShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.VertexShader",58,ab,14,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexShader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VertexShader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
