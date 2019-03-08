// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <hxinc/haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <hxinc/kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <hxinc/kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <hxinc/kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6dc83ef3f0d80db1_144_init,"kha.Shaders","init",0xd438187a,"kha.Shaders.init","kha/internal/ShadersBuilder.hx",144,0xb403e06a)
static const ::String _hx_array_data_5c987b44_1[] = {
	HX_("painter-colored.frag.glsl",4c,6b,53,e7),
};
static const ::String _hx_array_data_5c987b44_2[] = {
	HX_("painter-colored.vert.glsl",6d,c3,6a,24),
};
static const ::String _hx_array_data_5c987b44_3[] = {
	HX_("painter-image.frag.glsl",e5,4f,cb,b1),
};
static const ::String _hx_array_data_5c987b44_4[] = {
	HX_("painter-image.vert.glsl",06,a8,e2,ee),
};
static const ::String _hx_array_data_5c987b44_5[] = {
	HX_("painter-text.frag.glsl",7b,b9,81,77),
};
static const ::String _hx_array_data_5c987b44_6[] = {
	HX_("painter-text.vert.glsl",9c,11,99,b4),
};
static const ::String _hx_array_data_5c987b44_7[] = {
	HX_("painter-video.frag.glsl",05,ed,4f,8e),
};
static const ::String _hx_array_data_5c987b44_8[] = {
	HX_("painter-video.vert.glsl",26,45,67,cb),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6dc83ef3f0d80db1_37_boot,"kha.Shaders","boot",0xcf98619c,"kha.Shaders.boot","kha/internal/ShadersBuilder.hx",37,0xb403e06a)
HX_LOCAL_STACK_FRAME(_hx_pos_6dc83ef3f0d80db1_163_boot,"kha.Shaders","boot",0xcf98619c,"kha.Shaders.boot","kha/internal/ShadersBuilder.hx",163,0xb403e06a)
HX_LOCAL_STACK_FRAME(_hx_pos_6dc83ef3f0d80db1_140_boot,"kha.Shaders","boot",0xcf98619c,"kha.Shaders.boot","kha/internal/ShadersBuilder.hx",140,0xb403e06a)
namespace kha{

void Shaders_obj::__construct() { }

Dynamic Shaders_obj::__CreateEmpty() { return new Shaders_obj; }

void *Shaders_obj::_hx_vtable = 0;

Dynamic Shaders_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shaders_obj > _hx_result = new Shaders_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shaders_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cef2af2;
}

::String Shaders_obj::painter_colored_fragData0;

 ::kha::graphics4::FragmentShader Shaders_obj::painter_colored_frag;

::String Shaders_obj::painter_colored_vertData0;

 ::kha::graphics4::VertexShader Shaders_obj::painter_colored_vert;

::String Shaders_obj::painter_image_fragData0;

 ::kha::graphics4::FragmentShader Shaders_obj::painter_image_frag;

::String Shaders_obj::painter_image_vertData0;

 ::kha::graphics4::VertexShader Shaders_obj::painter_image_vert;

::String Shaders_obj::painter_text_fragData0;

 ::kha::graphics4::FragmentShader Shaders_obj::painter_text_frag;

::String Shaders_obj::painter_text_vertData0;

 ::kha::graphics4::VertexShader Shaders_obj::painter_text_vert;

::String Shaders_obj::painter_video_fragData0;

 ::kha::graphics4::FragmentShader Shaders_obj::painter_video_frag;

::String Shaders_obj::painter_video_vertData0;

 ::kha::graphics4::VertexShader Shaders_obj::painter_video_vert;

void Shaders_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_144_init)
HXLINE( 167)		{
HXDLIN( 144)			{
HXLINE( 167)				{
HXDLIN( 144)					{
HXLINE( 167)						{
HXDLIN( 144)							{
HXLINE( 169)								{
HXLINE( 170)									::Array< ::Dynamic> blobs = ::Array_obj< ::Dynamic>::__new();
HXLINE( 171)									{
HXLINE( 172)										::String data = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_colored_fragData",8d,d9,25,8d) + 0))) );
HXLINE( 173)										 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data)) );
HXLINE( 174)										blobs->push(::kha::internal::BytesBlob_obj::fromBytes(bytes));
            									}
HXLINE( 176)									::kha::Shaders_obj::painter_colored_frag =  ::kha::graphics4::FragmentShader_obj::__alloc( HX_CTX ,blobs,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_1,1));
            								}
HXLINE( 146)								{
HXLINE( 147)									::Array< ::Dynamic> blobs1 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 148)									{
HXLINE( 149)										::String data1 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_colored_vertData",8c,a0,fc,4b) + 0))) );
HXLINE( 150)										 ::haxe::io::Bytes bytes1 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data1)) );
HXLINE( 151)										blobs1->push(::kha::internal::BytesBlob_obj::fromBytes(bytes1));
            									}
HXLINE( 153)									::kha::Shaders_obj::painter_colored_vert =  ::kha::graphics4::VertexShader_obj::__alloc( HX_CTX ,blobs1,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_2,1));
            								}
            							}
HXLINE( 169)							{
HXLINE( 170)								::Array< ::Dynamic> blobs2 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 171)								{
HXLINE( 172)									::String data2 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_image_fragData",94,7a,37,e2) + 0))) );
HXLINE( 173)									 ::haxe::io::Bytes bytes2 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data2)) );
HXLINE( 174)									blobs2->push(::kha::internal::BytesBlob_obj::fromBytes(bytes2));
            								}
HXLINE( 176)								::kha::Shaders_obj::painter_image_frag =  ::kha::graphics4::FragmentShader_obj::__alloc( HX_CTX ,blobs2,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_3,1));
            							}
            						}
HXLINE( 146)						{
HXLINE( 147)							::Array< ::Dynamic> blobs3 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 148)							{
HXLINE( 149)								::String data3 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_image_vertData",93,41,0e,a1) + 0))) );
HXLINE( 150)								 ::haxe::io::Bytes bytes3 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data3)) );
HXLINE( 151)								blobs3->push(::kha::internal::BytesBlob_obj::fromBytes(bytes3));
            							}
HXLINE( 153)							::kha::Shaders_obj::painter_image_vert =  ::kha::graphics4::VertexShader_obj::__alloc( HX_CTX ,blobs3,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_4,1));
            						}
            					}
HXLINE( 169)					{
HXLINE( 170)						::Array< ::Dynamic> blobs4 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 171)						{
HXLINE( 172)							::String data4 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_text_fragData",9a,ea,65,f3) + 0))) );
HXLINE( 173)							 ::haxe::io::Bytes bytes4 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data4)) );
HXLINE( 174)							blobs4->push(::kha::internal::BytesBlob_obj::fromBytes(bytes4));
            						}
HXLINE( 176)						::kha::Shaders_obj::painter_text_frag =  ::kha::graphics4::FragmentShader_obj::__alloc( HX_CTX ,blobs4,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_5,1));
            					}
            				}
HXLINE( 146)				{
HXLINE( 147)					::Array< ::Dynamic> blobs5 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 148)					{
HXLINE( 149)						::String data5 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_text_vertData",99,b1,3c,b2) + 0))) );
HXLINE( 150)						 ::haxe::io::Bytes bytes5 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data5)) );
HXLINE( 151)						blobs5->push(::kha::internal::BytesBlob_obj::fromBytes(bytes5));
            					}
HXLINE( 153)					::kha::Shaders_obj::painter_text_vert =  ::kha::graphics4::VertexShader_obj::__alloc( HX_CTX ,blobs5,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_6,1));
            				}
            			}
HXLINE( 169)			{
HXLINE( 170)				::Array< ::Dynamic> blobs6 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 171)				{
HXLINE( 172)					::String data6 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_video_fragData",74,e1,6c,f4) + 0))) );
HXLINE( 173)					 ::haxe::io::Bytes bytes6 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data6)) );
HXLINE( 174)					blobs6->push(::kha::internal::BytesBlob_obj::fromBytes(bytes6));
            				}
HXLINE( 176)				::kha::Shaders_obj::painter_video_frag =  ::kha::graphics4::FragmentShader_obj::__alloc( HX_CTX ,blobs6,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_7,1));
            			}
            		}
HXLINE( 146)		{
HXLINE( 147)			::Array< ::Dynamic> blobs7 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 148)			{
HXLINE( 149)				::String data7 = ( (::String)(::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),(HX_("painter_video_vertData",73,a8,43,b3) + 0))) );
HXLINE( 150)				 ::haxe::io::Bytes bytes7 = ( ( ::haxe::io::Bytes)(::haxe::Unserializer_obj::run(data7)) );
HXLINE( 151)				blobs7->push(::kha::internal::BytesBlob_obj::fromBytes(bytes7));
            			}
HXLINE( 153)			::kha::Shaders_obj::painter_video_vert =  ::kha::graphics4::VertexShader_obj::__alloc( HX_CTX ,blobs7,::Array_obj< ::String >::fromData( _hx_array_data_5c987b44_8,1));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shaders_obj,init,(void))


Shaders_obj::Shaders_obj()
{
}

bool Shaders_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"painter_text_frag") ) { outValue = ( painter_text_frag ); return true; }
		if (HX_FIELD_EQ(inName,"painter_text_vert") ) { outValue = ( painter_text_vert ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"painter_image_frag") ) { outValue = ( painter_image_frag ); return true; }
		if (HX_FIELD_EQ(inName,"painter_image_vert") ) { outValue = ( painter_image_vert ); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_frag") ) { outValue = ( painter_video_frag ); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_vert") ) { outValue = ( painter_video_vert ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"painter_colored_frag") ) { outValue = ( painter_colored_frag ); return true; }
		if (HX_FIELD_EQ(inName,"painter_colored_vert") ) { outValue = ( painter_colored_vert ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"painter_text_fragData0") ) { outValue = ( painter_text_fragData0 ); return true; }
		if (HX_FIELD_EQ(inName,"painter_text_vertData0") ) { outValue = ( painter_text_vertData0 ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"painter_image_fragData0") ) { outValue = ( painter_image_fragData0 ); return true; }
		if (HX_FIELD_EQ(inName,"painter_image_vertData0") ) { outValue = ( painter_image_vertData0 ); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_fragData0") ) { outValue = ( painter_video_fragData0 ); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_vertData0") ) { outValue = ( painter_video_vertData0 ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"painter_colored_fragData0") ) { outValue = ( painter_colored_fragData0 ); return true; }
		if (HX_FIELD_EQ(inName,"painter_colored_vertData0") ) { outValue = ( painter_colored_vertData0 ); return true; }
	}
	return false;
}

bool Shaders_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"painter_text_frag") ) { painter_text_frag=ioValue.Cast<  ::kha::graphics4::FragmentShader >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_text_vert") ) { painter_text_vert=ioValue.Cast<  ::kha::graphics4::VertexShader >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"painter_image_frag") ) { painter_image_frag=ioValue.Cast<  ::kha::graphics4::FragmentShader >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_image_vert") ) { painter_image_vert=ioValue.Cast<  ::kha::graphics4::VertexShader >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_frag") ) { painter_video_frag=ioValue.Cast<  ::kha::graphics4::FragmentShader >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_vert") ) { painter_video_vert=ioValue.Cast<  ::kha::graphics4::VertexShader >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"painter_colored_frag") ) { painter_colored_frag=ioValue.Cast<  ::kha::graphics4::FragmentShader >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_colored_vert") ) { painter_colored_vert=ioValue.Cast<  ::kha::graphics4::VertexShader >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"painter_text_fragData0") ) { painter_text_fragData0=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_text_vertData0") ) { painter_text_vertData0=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"painter_image_fragData0") ) { painter_image_fragData0=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_image_vertData0") ) { painter_image_vertData0=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_fragData0") ) { painter_video_fragData0=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_video_vertData0") ) { painter_video_vertData0=ioValue.Cast< ::String >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"painter_colored_fragData0") ) { painter_colored_fragData0=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"painter_colored_vertData0") ) { painter_colored_vertData0=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Shaders_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Shaders_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Shaders_obj::painter_colored_fragData0,HX_("painter_colored_fragData0",03,82,f8,f3)},
	{hx::fsObject /*  ::kha::graphics4::FragmentShader */ ,(void *) &Shaders_obj::painter_colored_frag,HX_("painter_colored_frag",c3,b9,f5,d8)},
	{hx::fsString,(void *) &Shaders_obj::painter_colored_vertData0,HX_("painter_colored_vertData0",24,da,0f,31)},
	{hx::fsObject /*  ::kha::graphics4::VertexShader */ ,(void *) &Shaders_obj::painter_colored_vert,HX_("painter_colored_vert",42,55,7f,e3)},
	{hx::fsString,(void *) &Shaders_obj::painter_image_fragData0,HX_("painter_image_fragData0",1c,c7,53,0e)},
	{hx::fsObject /*  ::kha::graphics4::FragmentShader */ ,(void *) &Shaders_obj::painter_image_frag,HX_("painter_image_frag",4a,8b,b2,a5)},
	{hx::fsString,(void *) &Shaders_obj::painter_image_vertData0,HX_("painter_image_vertData0",3d,1f,6b,4b)},
	{hx::fsObject /*  ::kha::graphics4::VertexShader */ ,(void *) &Shaders_obj::painter_image_vert,HX_("painter_image_vert",c9,26,3c,b0)},
	{hx::fsString,(void *) &Shaders_obj::painter_text_fragData0,HX_("painter_text_fragData0",56,5c,c7,05)},
	{hx::fsObject /*  ::kha::graphics4::FragmentShader */ ,(void *) &Shaders_obj::painter_text_frag,HX_("painter_text_frag",50,00,9b,cc)},
	{hx::fsString,(void *) &Shaders_obj::painter_text_vertData0,HX_("painter_text_vertData0",77,b4,de,42)},
	{hx::fsObject /*  ::kha::graphics4::VertexShader */ ,(void *) &Shaders_obj::painter_text_vert,HX_("painter_text_vert",cf,9b,24,d7)},
	{hx::fsString,(void *) &Shaders_obj::painter_video_fragData0,HX_("painter_video_fragData0",3c,64,d8,ea)},
	{hx::fsObject /*  ::kha::graphics4::FragmentShader */ ,(void *) &Shaders_obj::painter_video_frag,HX_("painter_video_frag",2a,02,b3,75)},
	{hx::fsString,(void *) &Shaders_obj::painter_video_vertData0,HX_("painter_video_vertData0",5d,bc,ef,27)},
	{hx::fsObject /*  ::kha::graphics4::VertexShader */ ,(void *) &Shaders_obj::painter_video_vert,HX_("painter_video_vert",a9,9d,3c,80)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Shaders_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_fragData0,"painter_colored_fragData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_frag,"painter_colored_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_vertData0,"painter_colored_vertData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_vert,"painter_colored_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_fragData0,"painter_image_fragData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_frag,"painter_image_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_vertData0,"painter_image_vertData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_vert,"painter_image_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_fragData0,"painter_text_fragData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_frag,"painter_text_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_vertData0,"painter_text_vertData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_vert,"painter_text_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_fragData0,"painter_video_fragData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_frag,"painter_video_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_vertData0,"painter_video_vertData0");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_vert,"painter_video_vert");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shaders_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_fragData0,"painter_colored_fragData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_frag,"painter_colored_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_vertData0,"painter_colored_vertData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_vert,"painter_colored_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_fragData0,"painter_image_fragData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_frag,"painter_image_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_vertData0,"painter_image_vertData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_vert,"painter_image_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_fragData0,"painter_text_fragData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_frag,"painter_text_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_vertData0,"painter_text_vertData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_vert,"painter_text_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_fragData0,"painter_video_fragData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_frag,"painter_video_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_vertData0,"painter_video_vertData0");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_vert,"painter_video_vert");
};

#endif

hx::Class Shaders_obj::__mClass;

static ::String Shaders_obj_sStaticFields[] = {
	HX_("painter_colored_fragData0",03,82,f8,f3),
	HX_("painter_colored_frag",c3,b9,f5,d8),
	HX_("painter_colored_vertData0",24,da,0f,31),
	HX_("painter_colored_vert",42,55,7f,e3),
	HX_("painter_image_fragData0",1c,c7,53,0e),
	HX_("painter_image_frag",4a,8b,b2,a5),
	HX_("painter_image_vertData0",3d,1f,6b,4b),
	HX_("painter_image_vert",c9,26,3c,b0),
	HX_("painter_text_fragData0",56,5c,c7,05),
	HX_("painter_text_frag",50,00,9b,cc),
	HX_("painter_text_vertData0",77,b4,de,42),
	HX_("painter_text_vert",cf,9b,24,d7),
	HX_("painter_video_fragData0",3c,64,d8,ea),
	HX_("painter_video_frag",2a,02,b3,75),
	HX_("painter_video_vertData0",5d,bc,ef,27),
	HX_("painter_video_vert",a9,9d,3c,80),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void Shaders_obj::__register()
{
	Shaders_obj _hx_dummy;
	Shaders_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Shaders",44,7b,98,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shaders_obj::__GetStatic;
	__mClass->mSetStaticField = &Shaders_obj::__SetStatic;
	__mClass->mMarkFunc = Shaders_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Shaders_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Shaders_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shaders_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shaders_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shaders_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shaders_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_colored_fragData0 = HX_("s260:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKCnZvaWQgbWFpbigpCnsKICAgIGdsX0ZyYWdEYXRhWzBdID0gZnJhZ21lbnRDb2xvcjsKfQoK",36,9f,18,fa);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_163_boot)
HXDLIN( 163)		painter_colored_frag = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_colored_vertData0 = HX_("s463:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKYXR0cmlidXRlIHZlYzQgdmVydGV4Q29sb3I7Cgp2b2lkIG1haW4oKQp7CiAgICBnbF9Qb3NpdGlvbiA9IHByb2plY3Rpb25NYXRyaXggKiB2ZWM0KHZlcnRleFBvc2l0aW9uLCAxLjApOwogICAgZnJhZ21lbnRDb2xvciA9IHZlcnRleENvbG9yOwp9Cgo",0b,e6,fa,98);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_140_boot)
HXDLIN( 140)		painter_colored_vert = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_image_fragData0 = HX_("s502:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CnZhcnlpbmcgdmVjNCBjb2xvcjsKCnZvaWQgbWFpbigpCnsKICAgIHZlYzQgdGV4Y29sb3IgPSB0ZXh0dXJlMkQodGV4LCB0ZXhDb29yZCkgKiBjb2xvcjsKICAgIHZlYzMgXzMyID0gdGV4Y29sb3IueHl6ICogY29sb3IudzsKICAgIHRleGNvbG9yID0gdmVjNChfMzIueCwgXzMyLnksIF8zMi56LCB0ZXhjb2xvci53KTsKICAgIGdsX0ZyYWdEYXRhWzBdID0gdGV4Y29sb3I7Cn0KCg",30,a3,6f,69);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_163_boot)
HXDLIN( 163)		painter_image_frag = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_image_vertData0 = HX_("s547:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgY29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKdm9pZCBtYWluKCkKewogICAgZ2xfUG9zaXRpb24gPSBwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvbiwgMS4wKTsKICAgIHRleENvb3JkID0gdGV4UG9zaXRpb247CiAgICBjb2xvciA9IHZlcnRleENvbG9yOwp9Cgo",c7,d5,c1,9b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_140_boot)
HXDLIN( 140)		painter_image_vert = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_text_fragData0 = HX_("s398:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKdmFyeWluZyB2ZWMyIHRleENvb3JkOwoKdm9pZCBtYWluKCkKewogICAgZ2xfRnJhZ0RhdGFbMF0gPSB2ZWM0KGZyYWdtZW50Q29sb3IueHl6LCB0ZXh0dXJlMkQodGV4LCB0ZXhDb29yZCkueCAqIGZyYWdtZW50Q29sb3Iudyk7Cn0KCg",be,41,e5,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_163_boot)
HXDLIN( 163)		painter_text_frag = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_text_vertData0 = HX_("s568:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKYXR0cmlidXRlIHZlYzQgdmVydGV4Q29sb3I7Cgp2b2lkIG1haW4oKQp7CiAgICBnbF9Qb3NpdGlvbiA9IHByb2plY3Rpb25NYXRyaXggKiB2ZWM0KHZlcnRleFBvc2l0aW9uLCAxLjApOwogICAgdGV4Q29vcmQgPSB0ZXhQb3NpdGlvbjsKICAgIGZyYWdtZW50Q29sb3IgPSB2ZXJ0ZXhDb2xvcjsKfQoK",54,7f,4b,20);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_140_boot)
HXDLIN( 140)		painter_text_vert = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_video_fragData0 = HX_("s502:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CnZhcnlpbmcgdmVjNCBjb2xvcjsKCnZvaWQgbWFpbigpCnsKICAgIHZlYzQgdGV4Y29sb3IgPSB0ZXh0dXJlMkQodGV4LCB0ZXhDb29yZCkgKiBjb2xvcjsKICAgIHZlYzMgXzMyID0gdGV4Y29sb3IueHl6ICogY29sb3IudzsKICAgIHRleGNvbG9yID0gdmVjNChfMzIueCwgXzMyLnksIF8zMi56LCB0ZXhjb2xvci53KTsKICAgIGdsX0ZyYWdEYXRhWzBdID0gdGV4Y29sb3I7Cn0KCg",30,a3,6f,69);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_163_boot)
HXDLIN( 163)		painter_video_frag = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_37_boot)
HXDLIN(  37)		painter_video_vertData0 = HX_("s547:I3ZlcnNpb24gMTEwCiNpZmRlZiBHTF9BUkJfc2hhZGluZ19sYW5ndWFnZV80MjBwYWNrCiNleHRlbnNpb24gR0xfQVJCX3NoYWRpbmdfbGFuZ3VhZ2VfNDIwcGFjayA6IHJlcXVpcmUKI2VuZGlmCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgY29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKdm9pZCBtYWluKCkKewogICAgZ2xfUG9zaXRpb24gPSBwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvbiwgMS4wKTsKICAgIHRleENvb3JkID0gdGV4UG9zaXRpb247CiAgICBjb2xvciA9IHZlcnRleENvbG9yOwp9Cgo",c7,d5,c1,9b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dc83ef3f0d80db1_140_boot)
HXDLIN( 140)		painter_video_vert = null();
            	}
}

} // end namespace kha