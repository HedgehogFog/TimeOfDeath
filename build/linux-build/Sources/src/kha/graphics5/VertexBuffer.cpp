// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <hxinc/kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <hxinc/kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_graphics5_VertexBuffer
#include <hxinc/kha/graphics5/VertexBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_17_new,"kha.graphics5.VertexBuffer","new",0x2c204e84,"kha.graphics5.VertexBuffer.new","kha/graphics5/VertexBuffer.hx",17,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_23_delete,"kha.graphics5.VertexBuffer","delete",0x073ab087,"kha.graphics5.VertexBuffer.delete","kha/graphics5/VertexBuffer.hx",23,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_51_init,"kha.graphics5.VertexBuffer","init",0x6cdd1c6c,"kha.graphics5.VertexBuffer.init","kha/graphics5/VertexBuffer.hx",51,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_61_lock2,"kha.graphics5.VertexBuffer","lock2",0x8f74210b,"kha.graphics5.VertexBuffer.lock2","kha/graphics5/VertexBuffer.hx",61,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_64_lock,"kha.graphics5.VertexBuffer","lock",0x6ed97d47,"kha.graphics5.VertexBuffer.lock","kha/graphics5/VertexBuffer.hx",64,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_71_unlock,"kha.graphics5.VertexBuffer","unlock",0x01ee9320,"kha.graphics5.VertexBuffer.unlock","kha/graphics5/VertexBuffer.hx",71,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_77_stride,"kha.graphics5.VertexBuffer","stride",0xad921075,"kha.graphics5.VertexBuffer.stride","kha/graphics5/VertexBuffer.hx",77,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_82_count,"kha.graphics5.VertexBuffer","count",0x60e693f3,"kha.graphics5.VertexBuffer.count","kha/graphics5/VertexBuffer.hx",82,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_88__unused1,"kha.graphics5.VertexBuffer","_unused1",0xcd7f7338,"kha.graphics5.VertexBuffer._unused1","kha/graphics5/VertexBuffer.hx",88,0x21d07c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_b9bb15328b8cccb5_94__unused2,"kha.graphics5.VertexBuffer","_unused2",0xcd7f7339,"kha.graphics5.VertexBuffer._unused2","kha/graphics5/VertexBuffer.hx",94,0x21d07c6a)
namespace kha{
namespace graphics5{

void VertexBuffer_obj::__construct(int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead){
            		int instanceDataStepRate = __o_instanceDataStepRate.Default(0);
            		bool canRead = __o_canRead.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_17_new)
HXLINE(  18)		this->init(vertexCount,structure,_hx_getEnumValueIndex(usage),instanceDataStepRate);
HXLINE(  19)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,0);
HXDLIN(  19)		this->data = this1;
            	}

Dynamic VertexBuffer_obj::__CreateEmpty() { return new VertexBuffer_obj; }

void *VertexBuffer_obj::_hx_vtable = 0;

Dynamic VertexBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexBuffer_obj > _hx_result = new VertexBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool VertexBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x205c8e52;
}

void VertexBuffer_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_23_delete)
HXDLIN(  23)		delete buffer; buffer = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_hx_delete,(void))

void VertexBuffer_obj::init(int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,int instanceDataStepRate){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_51_init)
            	
		Kore::Graphics4::VertexStructure structure2;
		for (int i = 0; i < structure->size(); ++i) {
			Kore::Graphics4::VertexData data;
			switch (structure->get(i)->data) {
			case 0:
				data = Kore::Graphics4::Float1VertexData;
				break;
			case 1:
				data = Kore::Graphics4::Float2VertexData;
				break;
			case 2:
				data = Kore::Graphics4::Float3VertexData;
				break;
			case 3:
				data = Kore::Graphics4::Float4VertexData;
				break;
			case 4:
				data = Kore::Graphics4::Float4x4VertexData;
				break;
			}
			structure2.add(structure->get(i)->name, data);
		}
		buffer = new Kore::Graphics5::VertexBuffer(vertexCount, structure2, false);
	

            	}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer_obj,init,(void))

 ::kha::arrays::Float32ArrayPrivate VertexBuffer_obj::lock2(int start,int count){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_61_lock2)
            	
		data->self.data = buffer->lock() + start * buffer->stride() / 4;
		data->self.myLength = count * buffer->stride() / 4;
		return data;
	

HXDLIN(  61)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lock2,return )

 ::kha::arrays::Float32ArrayPrivate VertexBuffer_obj::lock( ::Dynamic start, ::Dynamic count){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_64_lock)
HXLINE(  65)		if (hx::IsNull( start )) {
HXLINE(  65)			start = 0;
            		}
HXLINE(  66)		if (hx::IsNull( count )) {
HXLINE(  66)			count = this->count();
            		}
HXLINE(  67)		return this->lock2(( (int)(start) ),( (int)(count) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lock,return )

void VertexBuffer_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_71_unlock)
            	buffer->unlock();

            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,unlock,(void))

int VertexBuffer_obj::stride(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_77_stride)
            	return buffer->stride();

HXDLIN(  77)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,stride,return )

int VertexBuffer_obj::count(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_82_count)
            	return buffer->count();

HXDLIN(  82)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,count,return )

 ::kha::graphics4::VertexElement VertexBuffer_obj::_unused1(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_88__unused1)
HXDLIN(  88)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_unused1,return )

int VertexBuffer_obj::_unused2(){
            	HX_STACKFRAME(&_hx_pos_b9bb15328b8cccb5_94__unused2)
HXDLIN(  94)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,_unused2,return )


hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new(int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead) {
	hx::ObjectPtr< VertexBuffer_obj > __this = new VertexBuffer_obj();
	__this->__construct(vertexCount,structure,usage,__o_instanceDataStepRate,__o_canRead);
	return __this;
}

hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__alloc(hx::Ctx *_hx_ctx,int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead) {
	VertexBuffer_obj *__this = (VertexBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexBuffer_obj), true, "kha.graphics5.VertexBuffer"));
	*(void **)__this = VertexBuffer_obj::_hx_vtable;
	__this->__construct(vertexCount,structure,usage,__o_instanceDataStepRate,__o_canRead);
	return __this;
}

VertexBuffer_obj::VertexBuffer_obj()
{
}

void VertexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void VertexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

hx::Val VertexBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lock2") ) { return hx::Val( lock2_dyn() ); }
		if (HX_FIELD_EQ(inName,"count") ) { return hx::Val( count_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return hx::Val( unlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return hx::Val( stride_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VertexBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_unused1") ) { outValue = _unused1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused2") ) { outValue = _unused2_dyn(); return true; }
	}
	return false;
}

hx::Val VertexBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo VertexBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::arrays::Float32ArrayPrivate */ ,(int)offsetof(VertexBuffer_obj,data),HX_("data",2a,56,63,42)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VertexBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexBuffer_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("delete",2b,c0,d8,6a),
	HX_("init",10,3b,bb,45),
	HX_("lock2",e7,d1,f0,78),
	HX_("lock",eb,9b,b7,47),
	HX_("unlock",c4,a2,8c,65),
	HX_("stride",19,20,30,11),
	HX_("count",cf,44,63,4a),
	::String(null()) };

hx::Class VertexBuffer_obj::__mClass;

static ::String VertexBuffer_obj_sStaticFields[] = {
	HX_("_unused1",dc,b3,7b,e0),
	HX_("_unused2",dd,b3,7b,e0),
	::String(null())
};

void VertexBuffer_obj::__register()
{
	VertexBuffer_obj _hx_dummy;
	VertexBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics5.VertexBuffer",92,fc,35,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VertexBuffer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics5
