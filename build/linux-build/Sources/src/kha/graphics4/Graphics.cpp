// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <hxinc/kha/Video.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <hxinc/kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CubeMap
#include <hxinc/kha/graphics4/CubeMap.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <hxinc/kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <hxinc/kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_MipMapFilter
#include <hxinc/kha/graphics4/MipMapFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <hxinc/kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <hxinc/kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <hxinc/kha/graphics4/TextureAddressing.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <hxinc/kha/graphics4/TextureFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <hxinc/kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <hxinc/kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <hxinc/kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <hxinc/kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_FastVector2
#include <hxinc/kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_math_FastVector3
#include <hxinc/kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_FastVector4
#include <hxinc/kha/math/FastVector4.h>
#endif

namespace kha{
namespace graphics4{


static ::String Graphics_obj_sMemberFields[] = {
	HX_("begin",29,ea,55,b0),
	HX_("beginFace",66,93,8f,8c),
	HX_("beginEye",c8,da,06,3a),
	HX_("end",db,03,4d,00),
	HX_("vsynced",70,5c,6c,1a),
	HX_("refreshRate",5b,e2,3f,40),
	HX_("clear",8d,71,5b,48),
	HX_("viewport",66,4c,a5,9c),
	HX_("scissor",1c,28,e7,04),
	HX_("disableScissor",14,73,66,02),
	HX_("setVertexBuffer",46,82,5f,8f),
	HX_("setVertexBuffers",6d,7b,32,e4),
	HX_("setIndexBuffer",30,a1,64,9d),
	HX_("setTexture",59,ed,bf,f1),
	HX_("setTextureDepth",ea,70,7f,ee),
	HX_("setTextureArray",80,ed,e4,3c),
	HX_("setVideoTexture",62,04,93,d7),
	HX_("setImageTexture",82,15,5f,ad),
	HX_("setTextureParameters",63,39,4d,35),
	HX_("setTexture3DParameters",94,25,c2,24),
	HX_("setCubeMap",25,71,af,df),
	HX_("setCubeMapDepth",9e,a9,42,6f),
	HX_("setStencilReferenceValue",c0,df,a3,11),
	HX_("renderTargetsInvertedY",d8,54,7d,0d),
	HX_("instancedRenderingAvailable",ec,b3,0a,bc),
	HX_("setPipeline",e4,84,e4,7b),
	HX_("setBool",ec,c4,9f,06),
	HX_("setInt",6d,9a,67,6f),
	HX_("setFloat",9a,2e,cb,10),
	HX_("setFloat2",58,98,fd,a0),
	HX_("setFloat3",59,98,fd,a0),
	HX_("setFloat4",5a,98,fd,a0),
	HX_("setFloats",99,98,fd,a0),
	HX_("setVector2",8d,1e,7c,2d),
	HX_("setVector3",8e,1e,7c,2d),
	HX_("setVector4",8f,1e,7c,2d),
	HX_("setMatrix",83,ab,6f,1b),
	HX_("setMatrix3",50,67,46,e6),
	HX_("drawIndexedVertices",66,b1,0b,a1),
	HX_("drawIndexedVerticesInstanced",e9,54,0f,6d),
	HX_("flush",c4,62,9b,02),
	::String(null()) };

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.Graphics",fa,ae,de,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xba2f5490 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
