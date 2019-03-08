// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <hxinc/nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <hxinc/nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <hxinc/nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <hxinc/zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8986b1725c92b02_180_new,"nape.geom.ConvexResult","new",0x2285a4a2,"nape.geom.ConvexResult.new","nape/geom/ConvexResult.hx",180,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_190_get_normal,"nape.geom.ConvexResult","get_normal",0x9c62f9ee,"nape.geom.ConvexResult.get_normal","nape/geom/ConvexResult.hx",190,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_201_get_position,"nape.geom.ConvexResult","get_position",0x4e3ae830,"nape.geom.ConvexResult.get_position","nape/geom/ConvexResult.hx",201,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_212_get_toi,"nape.geom.ConvexResult","get_toi",0xa8eb4c67,"nape.geom.ConvexResult.get_toi","nape/geom/ConvexResult.hx",212,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_223_get_shape,"nape.geom.ConvexResult","get_shape",0x9b97b13a,"nape.geom.ConvexResult.get_shape","nape/geom/ConvexResult.hx",223,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_243_dispose,"nape.geom.ConvexResult","dispose",0x3d6a9de1,"nape.geom.ConvexResult.dispose","nape/geom/ConvexResult.hx",243,0x8636d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a8986b1725c92b02_252_toString,"nape.geom.ConvexResult","toString",0x90aa4d2a,"nape.geom.ConvexResult.toString","nape/geom/ConvexResult.hx",252,0x8636d4ae)
namespace nape{
namespace geom{

void ConvexResult_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_180_new)
HXLINE( 184)		this->zpp_inner = null();
HXLINE( 236)		if (!(::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal)) {
HXLINE( 236)			HX_STACK_DO_THROW(HX_("Error: ConvexResult cannot be instantiated derp!",ca,70,32,70));
            		}
            	}

Dynamic ConvexResult_obj::__CreateEmpty() { return new ConvexResult_obj; }

void *ConvexResult_obj::_hx_vtable = 0;

Dynamic ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConvexResult_obj > _hx_result = new ConvexResult_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvexResult_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b3705e8;
}

 ::nape::geom::Vec2 ConvexResult_obj::get_normal(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_190_get_normal)
HXLINE( 192)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 192)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 194)		return this->zpp_inner->normal;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_normal,return )

 ::nape::geom::Vec2 ConvexResult_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_201_get_position)
HXLINE( 203)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 203)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 205)		return this->zpp_inner->position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_position,return )

Float ConvexResult_obj::get_toi(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_212_get_toi)
HXLINE( 214)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 214)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 216)		return this->zpp_inner->toiDistance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_toi,return )

 ::nape::shape::Shape ConvexResult_obj::get_shape(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_223_get_shape)
HXLINE( 225)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 225)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 227)		return this->zpp_inner->shape;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,get_shape,return )

void ConvexResult_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_243_dispose)
HXLINE( 245)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 245)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 247)		this->zpp_inner->free();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,dispose,(void))

::String ConvexResult_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a8986b1725c92b02_252_toString)
HXLINE( 254)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 254)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXLINE( 256)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 256)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXDLIN( 256)		::String _hx_tmp = ((HX_("{ shape: ",62,97,c0,e7) + ::Std_obj::string(this->zpp_inner->shape)) + HX_(" toi: ",94,64,95,df));
HXDLIN( 256)		if (hx::IsNotNull( this->zpp_inner->next )) {
HXLINE( 256)			HX_STACK_DO_THROW(HX_("Error: This object has been disposed of and cannot be used",15,39,6c,f1));
            		}
HXDLIN( 256)		return ((_hx_tmp + this->zpp_inner->toiDistance) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexResult_obj,toString,return )


hx::ObjectPtr< ConvexResult_obj > ConvexResult_obj::__new() {
	hx::ObjectPtr< ConvexResult_obj > __this = new ConvexResult_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ConvexResult_obj > ConvexResult_obj::__alloc(hx::Ctx *_hx_ctx) {
	ConvexResult_obj *__this = (ConvexResult_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConvexResult_obj), true, "nape.geom.ConvexResult"));
	*(void **)__this = ConvexResult_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvexResult_obj::ConvexResult_obj()
{
}

void ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexResult);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val ConvexResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_toi() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_shape() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_normal() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_toi") ) { return hx::Val( get_toi_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return hx::Val( get_shape_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return hx::Val( get_normal_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return hx::Val( get_position_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConvexResult_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvexResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("normal",27,72,69,30));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("toi",8e,66,58,00));
	outFields->push(HX_("shape",21,e3,1c,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ConvexResult_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_ConvexRayResult */ ,(int)offsetof(ConvexResult_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConvexResult_obj_sStaticStorageInfo = 0;
#endif

static ::String ConvexResult_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_normal",f0,e1,f0,20),
	HX_("get_position",b2,54,14,80),
	HX_("get_toi",25,2f,cd,26),
	HX_("get_shape",78,3f,c6,bf),
	HX_("dispose",9f,80,4c,bb),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class ConvexResult_obj::__mClass;

void ConvexResult_obj::__register()
{
	ConvexResult_obj _hx_dummy;
	ConvexResult_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.geom.ConvexResult",b0,6b,32,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConvexResult_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConvexResult_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvexResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvexResult_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace geom