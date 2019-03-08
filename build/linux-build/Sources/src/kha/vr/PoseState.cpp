// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_math_Vector3
#include <hxinc/kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <hxinc/kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <hxinc/kha/vr/PoseState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4000b2914fad01e_16_new,"kha.vr.PoseState","new",0x444367aa,"kha.vr.PoseState.new","kha/vr/PoseState.hx",16,0x30d561a6)
namespace kha{
namespace vr{

void PoseState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a4000b2914fad01e_16_new)
            	}

Dynamic PoseState_obj::__CreateEmpty() { return new PoseState_obj; }

void *PoseState_obj::_hx_vtable = 0;

Dynamic PoseState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PoseState_obj > _hx_result = new PoseState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PoseState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x494ded00;
}


PoseState_obj::PoseState_obj()
{
}

void PoseState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PoseState);
	HX_MARK_MEMBER_NAME(Pose,"Pose");
	HX_MARK_MEMBER_NAME(AngularVelocity,"AngularVelocity");
	HX_MARK_MEMBER_NAME(LinearVelocity,"LinearVelocity");
	HX_MARK_MEMBER_NAME(AngularAcceleration,"AngularAcceleration");
	HX_MARK_MEMBER_NAME(LinearAcceleration,"LinearAcceleration");
	HX_MARK_MEMBER_NAME(TimeInSeconds,"TimeInSeconds");
	HX_MARK_END_CLASS();
}

void PoseState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Pose,"Pose");
	HX_VISIT_MEMBER_NAME(AngularVelocity,"AngularVelocity");
	HX_VISIT_MEMBER_NAME(LinearVelocity,"LinearVelocity");
	HX_VISIT_MEMBER_NAME(AngularAcceleration,"AngularAcceleration");
	HX_VISIT_MEMBER_NAME(LinearAcceleration,"LinearAcceleration");
	HX_VISIT_MEMBER_NAME(TimeInSeconds,"TimeInSeconds");
}

hx::Val PoseState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { return hx::Val( Pose ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TimeInSeconds") ) { return hx::Val( TimeInSeconds ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LinearVelocity") ) { return hx::Val( LinearVelocity ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"AngularVelocity") ) { return hx::Val( AngularVelocity ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LinearAcceleration") ) { return hx::Val( LinearAcceleration ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AngularAcceleration") ) { return hx::Val( AngularAcceleration ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PoseState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { Pose=inValue.Cast<  ::kha::vr::Pose >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TimeInSeconds") ) { TimeInSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LinearVelocity") ) { LinearVelocity=inValue.Cast<  ::kha::math::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"AngularVelocity") ) { AngularVelocity=inValue.Cast<  ::kha::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LinearAcceleration") ) { LinearAcceleration=inValue.Cast<  ::kha::math::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AngularAcceleration") ) { AngularAcceleration=inValue.Cast<  ::kha::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PoseState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Pose",71,b0,35,35));
	outFields->push(HX_("AngularVelocity",ff,26,8a,b9));
	outFields->push(HX_("LinearVelocity",42,91,d1,43));
	outFields->push(HX_("AngularAcceleration",22,3e,5e,f8));
	outFields->push(HX_("LinearAcceleration",e5,85,7b,bf));
	outFields->push(HX_("TimeInSeconds",2d,f3,24,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo PoseState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::vr::Pose */ ,(int)offsetof(PoseState_obj,Pose),HX_("Pose",71,b0,35,35)},
	{hx::fsObject /*  ::kha::math::Vector3 */ ,(int)offsetof(PoseState_obj,AngularVelocity),HX_("AngularVelocity",ff,26,8a,b9)},
	{hx::fsObject /*  ::kha::math::Vector3 */ ,(int)offsetof(PoseState_obj,LinearVelocity),HX_("LinearVelocity",42,91,d1,43)},
	{hx::fsObject /*  ::kha::math::Vector3 */ ,(int)offsetof(PoseState_obj,AngularAcceleration),HX_("AngularAcceleration",22,3e,5e,f8)},
	{hx::fsObject /*  ::kha::math::Vector3 */ ,(int)offsetof(PoseState_obj,LinearAcceleration),HX_("LinearAcceleration",e5,85,7b,bf)},
	{hx::fsFloat,(int)offsetof(PoseState_obj,TimeInSeconds),HX_("TimeInSeconds",2d,f3,24,79)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PoseState_obj_sStaticStorageInfo = 0;
#endif

static ::String PoseState_obj_sMemberFields[] = {
	HX_("Pose",71,b0,35,35),
	HX_("AngularVelocity",ff,26,8a,b9),
	HX_("LinearVelocity",42,91,d1,43),
	HX_("AngularAcceleration",22,3e,5e,f8),
	HX_("LinearAcceleration",e5,85,7b,bf),
	HX_("TimeInSeconds",2d,f3,24,79),
	::String(null()) };

hx::Class PoseState_obj::__mClass;

void PoseState_obj::__register()
{
	PoseState_obj _hx_dummy;
	PoseState_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.vr.PoseState",b8,0a,00,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PoseState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PoseState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PoseState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PoseState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace vr
