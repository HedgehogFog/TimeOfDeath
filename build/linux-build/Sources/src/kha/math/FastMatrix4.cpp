// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <hxinc/kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_FastVector3
#include <hxinc/kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <hxinc/kha/math/Matrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_13a5dc49b32a5012_15_new,"kha.math.FastMatrix4","new",0x1cb0bdcd,"kha.math.FastMatrix4.new","kha/math/FastMatrix4.hx",15,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_23_fromMatrix4,"kha.math.FastMatrix4","fromMatrix4",0x530348f6,"kha.math.FastMatrix4.fromMatrix4","kha/math/FastMatrix4.hx",23,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_121_orthogonalProjection,"kha.math.FastMatrix4","orthogonalProjection",0x76379f5b,"kha.math.FastMatrix4.orthogonalProjection","kha/math/FastMatrix4.hx",121,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_133_perspectiveProjection,"kha.math.FastMatrix4","perspectiveProjection",0x7ac871d8,"kha.math.FastMatrix4.perspectiveProjection","kha/math/FastMatrix4.hx",133,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_144_lookAt,"kha.math.FastMatrix4","lookAt",0x5676e9e5,"kha.math.FastMatrix4.lookAt","kha/math/FastMatrix4.hx",144,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_4_boot,"kha.math.FastMatrix4","boot",0xf60e5625,"kha.math.FastMatrix4.boot","kha/math/FastMatrix4.hx",4,0xae96fea3)
HX_LOCAL_STACK_FRAME(_hx_pos_13a5dc49b32a5012_5_boot,"kha.math.FastMatrix4","boot",0xf60e5625,"kha.math.FastMatrix4.boot","kha/math/FastMatrix4.hx",5,0xae96fea3)
namespace kha{
namespace math{

void FastMatrix4_obj::__construct(float _00,float _10,float _20,float _30,float _01,float _11,float _21,float _31,float _02,float _12,float _22,float _32,float _03,float _13,float _23,float _33){
            	HX_STACKFRAME(&_hx_pos_13a5dc49b32a5012_15_new)
HXLINE(  16)		this->_00 = _00;
HXDLIN(  16)		this->_10 = _10;
HXDLIN(  16)		this->_20 = _20;
HXDLIN(  16)		this->_30 = _30;
HXLINE(  17)		this->_01 = _01;
HXDLIN(  17)		this->_11 = _11;
HXDLIN(  17)		this->_21 = _21;
HXDLIN(  17)		this->_31 = _31;
HXLINE(  18)		this->_02 = _02;
HXDLIN(  18)		this->_12 = _12;
HXDLIN(  18)		this->_22 = _22;
HXDLIN(  18)		this->_32 = _32;
HXLINE(  19)		this->_03 = _03;
HXDLIN(  19)		this->_13 = _13;
HXDLIN(  19)		this->_23 = _23;
HXDLIN(  19)		this->_33 = _33;
            	}

Dynamic FastMatrix4_obj::__CreateEmpty() { return new FastMatrix4_obj; }

void *FastMatrix4_obj::_hx_vtable = 0;

Dynamic FastMatrix4_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FastMatrix4_obj > _hx_result = new FastMatrix4_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15]);
	return _hx_result;
}

bool FastMatrix4_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e7d5147;
}

int FastMatrix4_obj::width;

int FastMatrix4_obj::height;

 ::kha::math::FastMatrix4 FastMatrix4_obj::fromMatrix4( ::kha::math::Matrix4 m){
            	HX_GC_STACKFRAME(&_hx_pos_13a5dc49b32a5012_23_fromMatrix4)
HXDLIN(  23)		return  ::kha::math::FastMatrix4_obj::__alloc( HX_CTX ,( (float)(m->_00) ),( (float)(m->_10) ),( (float)(m->_20) ),( (float)(m->_30) ),( (float)(m->_01) ),( (float)(m->_11) ),( (float)(m->_21) ),( (float)(m->_31) ),( (float)(m->_02) ),( (float)(m->_12) ),( (float)(m->_22) ),( (float)(m->_32) ),( (float)(m->_03) ),( (float)(m->_13) ),( (float)(m->_23) ),( (float)(m->_33) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastMatrix4_obj,fromMatrix4,return )

 ::kha::math::FastMatrix4 FastMatrix4_obj::orthogonalProjection(float left,float right,float bottom,float top,float zn,float zf){
            	HX_GC_STACKFRAME(&_hx_pos_13a5dc49b32a5012_121_orthogonalProjection)
HXLINE( 122)		float tx = ( (float)((( (Float)(-((right + left))) ) / ( (Float)((right - left)) ))) );
HXLINE( 123)		float ty = ( (float)((( (Float)(-((top + bottom))) ) / ( (Float)((top - bottom)) ))) );
HXLINE( 124)		float tz = ( (float)((( (Float)(-((zf + zn))) ) / ( (Float)((zf - zn)) ))) );
HXLINE( 125)		return  ::kha::math::FastMatrix4_obj::__alloc( HX_CTX ,( (float)((( (Float)(2) ) / ( (Float)((right - left)) ))) ),( (float)(0) ),( (float)(0) ),tx,( (float)(0) ),( (float)((( (Float)(2) ) / ( (Float)((top - bottom)) ))) ),( (float)(0) ),ty,( (float)(0) ),( (float)(0) ),( (float)((( (Float)(-2) ) / ( (Float)((zf - zn)) ))) ),tz,( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(1) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FastMatrix4_obj,orthogonalProjection,return )

 ::kha::math::FastMatrix4 FastMatrix4_obj::perspectiveProjection(float fovY,float aspect,float zn,float zf){
            	HX_GC_STACKFRAME(&_hx_pos_13a5dc49b32a5012_133_perspectiveProjection)
HXLINE( 134)		Float uh = (((Float)1.0) / ::Math_obj::tan((( (Float)(fovY) ) / ( (Float)(2) ))));
HXLINE( 135)		Float uw = (uh / ( (Float)(aspect) ));
HXLINE( 136)		return  ::kha::math::FastMatrix4_obj::__alloc( HX_CTX ,( (float)(uw) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(uh) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)((( (Float)((zf + zn)) ) / ( (Float)((zn - zf)) ))) ),( (float)((( (Float)(((( (float)(2) ) * zf) * zn)) ) / ( (Float)((zn - zf)) ))) ),( (float)(0) ),( (float)(0) ),( (float)(-1) ),( (float)(0) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FastMatrix4_obj,perspectiveProjection,return )

 ::kha::math::FastMatrix4 FastMatrix4_obj::lookAt( ::kha::math::FastVector3 eye, ::kha::math::FastVector3 at, ::kha::math::FastVector3 up){
            	HX_GC_STACKFRAME(&_hx_pos_13a5dc49b32a5012_144_lookAt)
HXLINE( 145)		 ::kha::math::FastVector3 zaxis =  ::kha::math::FastVector3_obj::__alloc( HX_CTX ,(at->x - eye->x),(at->y - eye->y),(at->z - eye->z));
HXLINE( 146)		zaxis->set_length(( (float)(1) ));
HXLINE( 147)		float _x = ((zaxis->y * up->z) - (zaxis->z * up->y));
HXDLIN( 147)		float _y = ((zaxis->z * up->x) - (zaxis->x * up->z));
HXDLIN( 147)		float _z = ((zaxis->x * up->y) - (zaxis->y * up->x));
HXDLIN( 147)		 ::kha::math::FastVector3 xaxis =  ::kha::math::FastVector3_obj::__alloc( HX_CTX ,_x,_y,_z);
HXLINE( 148)		xaxis->set_length(( (float)(1) ));
HXLINE( 149)		float _x1 = ((xaxis->y * zaxis->z) - (xaxis->z * zaxis->y));
HXDLIN( 149)		float _y1 = ((xaxis->z * zaxis->x) - (xaxis->x * zaxis->z));
HXDLIN( 149)		float _z1 = ((xaxis->x * zaxis->y) - (xaxis->y * zaxis->x));
HXDLIN( 149)		float yaxis_x = _x1;
HXDLIN( 149)		float yaxis_y = _y1;
HXDLIN( 149)		float yaxis_z = _z1;
HXLINE( 151)		return  ::kha::math::FastMatrix4_obj::__alloc( HX_CTX ,xaxis->x,xaxis->y,xaxis->z,-((((xaxis->x * eye->x) + (xaxis->y * eye->y)) + (xaxis->z * eye->z))),yaxis_x,yaxis_y,yaxis_z,-((((yaxis_x * eye->x) + (yaxis_y * eye->y)) + (yaxis_z * eye->z))),-(zaxis->x),-(zaxis->y),-(zaxis->z),(((zaxis->x * eye->x) + (zaxis->y * eye->y)) + (zaxis->z * eye->z)),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(1) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FastMatrix4_obj,lookAt,return )


FastMatrix4_obj::FastMatrix4_obj()
{
}

hx::Val FastMatrix4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { return hx::Val( _00 ); }
		if (HX_FIELD_EQ(inName,"_10") ) { return hx::Val( _10 ); }
		if (HX_FIELD_EQ(inName,"_20") ) { return hx::Val( _20 ); }
		if (HX_FIELD_EQ(inName,"_30") ) { return hx::Val( _30 ); }
		if (HX_FIELD_EQ(inName,"_01") ) { return hx::Val( _01 ); }
		if (HX_FIELD_EQ(inName,"_11") ) { return hx::Val( _11 ); }
		if (HX_FIELD_EQ(inName,"_21") ) { return hx::Val( _21 ); }
		if (HX_FIELD_EQ(inName,"_31") ) { return hx::Val( _31 ); }
		if (HX_FIELD_EQ(inName,"_02") ) { return hx::Val( _02 ); }
		if (HX_FIELD_EQ(inName,"_12") ) { return hx::Val( _12 ); }
		if (HX_FIELD_EQ(inName,"_22") ) { return hx::Val( _22 ); }
		if (HX_FIELD_EQ(inName,"_32") ) { return hx::Val( _32 ); }
		if (HX_FIELD_EQ(inName,"_03") ) { return hx::Val( _03 ); }
		if (HX_FIELD_EQ(inName,"_13") ) { return hx::Val( _13 ); }
		if (HX_FIELD_EQ(inName,"_23") ) { return hx::Val( _23 ); }
		if (HX_FIELD_EQ(inName,"_33") ) { return hx::Val( _33 ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FastMatrix4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lookAt") ) { outValue = lookAt_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromMatrix4") ) { outValue = fromMatrix4_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"orthogonalProjection") ) { outValue = orthogonalProjection_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"perspectiveProjection") ) { outValue = perspectiveProjection_dyn(); return true; }
	}
	return false;
}

hx::Val FastMatrix4_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { _00=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_10") ) { _10=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_20") ) { _20=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_30") ) { _30=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_01") ) { _01=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_31") ) { _31=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_02") ) { _02=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_32") ) { _32=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_03") ) { _03=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_13") ) { _13=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_23") ) { _23=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_33") ) { _33=inValue.Cast< float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastMatrix4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_00",1f,40,48,00));
	outFields->push(HX_("_10",fe,40,48,00));
	outFields->push(HX_("_20",dd,41,48,00));
	outFields->push(HX_("_30",bc,42,48,00));
	outFields->push(HX_("_01",20,40,48,00));
	outFields->push(HX_("_11",ff,40,48,00));
	outFields->push(HX_("_21",de,41,48,00));
	outFields->push(HX_("_31",bd,42,48,00));
	outFields->push(HX_("_02",21,40,48,00));
	outFields->push(HX_("_12",00,41,48,00));
	outFields->push(HX_("_22",df,41,48,00));
	outFields->push(HX_("_32",be,42,48,00));
	outFields->push(HX_("_03",22,40,48,00));
	outFields->push(HX_("_13",01,41,48,00));
	outFields->push(HX_("_23",e0,41,48,00));
	outFields->push(HX_("_33",bf,42,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FastMatrix4_obj_sMemberStorageInfo[] = {
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_00),HX_("_00",1f,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_10),HX_("_10",fe,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_20),HX_("_20",dd,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_30),HX_("_30",bc,42,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_01),HX_("_01",20,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_11),HX_("_11",ff,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_21),HX_("_21",de,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_31),HX_("_31",bd,42,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_02),HX_("_02",21,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_12),HX_("_12",00,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_22),HX_("_22",df,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_32),HX_("_32",be,42,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_03),HX_("_03",22,40,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_13),HX_("_13",01,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_23),HX_("_23",e0,41,48,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastMatrix4_obj,_33),HX_("_33",bf,42,48,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FastMatrix4_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FastMatrix4_obj::width,HX_("width",06,b6,62,ca)},
	{hx::fsInt,(void *) &FastMatrix4_obj::height,HX_("height",e7,07,4c,02)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FastMatrix4_obj_sMemberFields[] = {
	HX_("_00",1f,40,48,00),
	HX_("_10",fe,40,48,00),
	HX_("_20",dd,41,48,00),
	HX_("_30",bc,42,48,00),
	HX_("_01",20,40,48,00),
	HX_("_11",ff,40,48,00),
	HX_("_21",de,41,48,00),
	HX_("_31",bd,42,48,00),
	HX_("_02",21,40,48,00),
	HX_("_12",00,41,48,00),
	HX_("_22",df,41,48,00),
	HX_("_32",be,42,48,00),
	HX_("_03",22,40,48,00),
	HX_("_13",01,41,48,00),
	HX_("_23",e0,41,48,00),
	HX_("_33",bf,42,48,00),
	::String(null()) };

static void FastMatrix4_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastMatrix4_obj::width,"width");
	HX_MARK_MEMBER_NAME(FastMatrix4_obj::height,"height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FastMatrix4_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastMatrix4_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FastMatrix4_obj::height,"height");
};

#endif

hx::Class FastMatrix4_obj::__mClass;

static ::String FastMatrix4_obj_sStaticFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("fromMatrix4",89,a6,a7,2b),
	HX_("orthogonalProjection",68,77,62,e1),
	HX_("perspectiveProjection",2b,a5,1a,d5),
	HX_("lookAt",32,75,b5,61),
	::String(null())
};

void FastMatrix4_obj::__register()
{
	FastMatrix4_obj _hx_dummy;
	FastMatrix4_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.math.FastMatrix4",5b,d3,18,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastMatrix4_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FastMatrix4_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FastMatrix4_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FastMatrix4_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastMatrix4_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FastMatrix4_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FastMatrix4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FastMatrix4_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FastMatrix4_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_13a5dc49b32a5012_4_boot)
HXDLIN(   4)		width = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_13a5dc49b32a5012_5_boot)
HXDLIN(   5)		height = 4;
            	}
}

} // end namespace kha
} // end namespace math
