// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <hxinc/zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <hxinc/zpp_nape/geom/ZPP_SimplifyV.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6832b4f085caf273_174_new,"zpp_nape.geom.ZPP_SimplifyV","new",0xa2a783a9,"zpp_nape.geom.ZPP_SimplifyV.new","zpp_nape/geom/Simplify.hx",174,0xe5fbc624)
HX_LOCAL_STACK_FRAME(_hx_pos_6832b4f085caf273_207_free,"zpp_nape.geom.ZPP_SimplifyV","free",0xaaabc943,"zpp_nape.geom.ZPP_SimplifyV.free","zpp_nape/geom/Simplify.hx",207,0xe5fbc624)
HX_LOCAL_STACK_FRAME(_hx_pos_6832b4f085caf273_210_alloc,"zpp_nape.geom.ZPP_SimplifyV","alloc",0xc6b17bfe,"zpp_nape.geom.ZPP_SimplifyV.alloc","zpp_nape/geom/Simplify.hx",210,0xe5fbc624)
HX_LOCAL_STACK_FRAME(_hx_pos_6832b4f085caf273_213_get,"zpp_nape.geom.ZPP_SimplifyV","get",0xa2a233df,"zpp_nape.geom.ZPP_SimplifyV.get","zpp_nape/geom/Simplify.hx",213,0xe5fbc624)
HX_LOCAL_STACK_FRAME(_hx_pos_6832b4f085caf273_178_boot,"zpp_nape.geom.ZPP_SimplifyV","boot",0xa804b0c9,"zpp_nape.geom.ZPP_SimplifyV.boot","zpp_nape/geom/Simplify.hx",178,0xe5fbc624)
namespace zpp_nape{
namespace geom{

void ZPP_SimplifyV_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6832b4f085caf273_174_new)
HXLINE( 204)		this->forced = false;
HXLINE( 203)		this->flag = false;
HXLINE( 202)		this->prev = null();
HXLINE( 177)		this->next = null();
HXLINE( 176)		this->y = ((Float)0.0);
HXLINE( 175)		this->x = ((Float)0.0);
            	}

Dynamic ZPP_SimplifyV_obj::__CreateEmpty() { return new ZPP_SimplifyV_obj; }

void *ZPP_SimplifyV_obj::_hx_vtable = 0;

Dynamic ZPP_SimplifyV_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_SimplifyV_obj > _hx_result = new ZPP_SimplifyV_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_SimplifyV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ed3a6bf;
}

void ZPP_SimplifyV_obj::free(){
            	HX_STACKFRAME(&_hx_pos_6832b4f085caf273_207_free)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,free,(void))

void ZPP_SimplifyV_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_6832b4f085caf273_210_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,alloc,(void))

 ::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::zpp_pool;

 ::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::get( ::zpp_nape::geom::ZPP_GeomVert v){
            	HX_GC_STACKFRAME(&_hx_pos_6832b4f085caf273_213_get)
HXLINE( 214)		 ::zpp_nape::geom::ZPP_SimplifyV ret;
HXLINE( 216)		if (hx::IsNull( ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool )) {
HXLINE( 217)			ret =  ::zpp_nape::geom::ZPP_SimplifyV_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 223)			ret = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
HXLINE( 224)			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret->next;
HXLINE( 225)			ret->next = null();
            		}
HXLINE( 232)		{
HXLINE( 233)			ret->x = v->x;
HXLINE( 234)			ret->y = v->y;
            		}
HXLINE( 252)		ret->flag = false;
HXLINE( 253)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimplifyV_obj,get,return )


ZPP_SimplifyV_obj::ZPP_SimplifyV_obj()
{
}

void ZPP_SimplifyV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyV);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(flag,"flag");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(flag,"flag");
	HX_VISIT_MEMBER_NAME(forced,"forced");
}

hx::Val ZPP_SimplifyV_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"flag") ) { return hx::Val( flag ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return hx::Val( forced ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SimplifyV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
	}
	return false;
}

hx::Val ZPP_SimplifyV_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimplifyV_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::geom::ZPP_SimplifyV >(); return true; }
	}
	return false;
}

void ZPP_SimplifyV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("flag",ac,0b,be,43));
	outFields->push(HX_("forced",19,fc,86,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_SimplifyV_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_SimplifyV_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_SimplifyV_obj,y),HX_("y",79,00,00,00)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_SimplifyV */ ,(int)offsetof(ZPP_SimplifyV_obj,next),HX_("next",f3,84,02,49)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_SimplifyV */ ,(int)offsetof(ZPP_SimplifyV_obj,prev),HX_("prev",f3,be,5e,4a)},
	{hx::fsBool,(int)offsetof(ZPP_SimplifyV_obj,flag),HX_("flag",ac,0b,be,43)},
	{hx::fsBool,(int)offsetof(ZPP_SimplifyV_obj,forced),HX_("forced",19,fc,86,fd)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_SimplifyV_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_SimplifyV */ ,(void *) &ZPP_SimplifyV_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_SimplifyV_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("next",f3,84,02,49),
	HX_("prev",f3,be,5e,4a),
	HX_("flag",ac,0b,be,43),
	HX_("forced",19,fc,86,fd),
	HX_("free",ac,9c,c2,43),
	HX_("alloc",75,a4,93,21),
	::String(null()) };

static void ZPP_SimplifyV_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_SimplifyV_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SimplifyV_obj::__mClass;

static ::String ZPP_SimplifyV_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	::String(null())
};

void ZPP_SimplifyV_obj::__register()
{
	ZPP_SimplifyV_obj _hx_dummy;
	ZPP_SimplifyV_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_SimplifyV",37,7b,88,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SimplifyV_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SimplifyV_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_SimplifyV_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_SimplifyV_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_SimplifyV_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimplifyV_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_SimplifyV_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_SimplifyV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_SimplifyV_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_SimplifyV_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6832b4f085caf273_178_boot)
HXDLIN( 178)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace geom
