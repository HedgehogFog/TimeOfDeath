// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Mat23
#include <hxinc/nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <hxinc/zpp_nape/geom/ZPP_Mat23.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01f2fcede0312d4f_174_new,"zpp_nape.geom.ZPP_Mat23","new",0xd071addd,"zpp_nape.geom.ZPP_Mat23.new","zpp_nape/geom/Mat23.hx",174,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_176_wrapper,"zpp_nape.geom.ZPP_Mat23","wrapper",0x374bb550,"zpp_nape.geom.ZPP_Mat23.wrapper","zpp_nape/geom/Mat23.hx",176,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_210_invalidate,"zpp_nape.geom.ZPP_Mat23","invalidate",0x1ed3959e,"zpp_nape.geom.ZPP_Mat23.invalidate","zpp_nape/geom/Mat23.hx",210,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_217_set,"zpp_nape.geom.ZPP_Mat23","set",0xd075791f,"zpp_nape.geom.ZPP_Mat23.set","zpp_nape/geom/Mat23.hx",217,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_219_setas,"zpp_nape.geom.ZPP_Mat23","setas",0xf39d93d1,"zpp_nape.geom.ZPP_Mat23.setas","zpp_nape/geom/Mat23.hx",219,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_274_free,"zpp_nape.geom.ZPP_Mat23","free",0x8dc68c8f,"zpp_nape.geom.ZPP_Mat23.free","zpp_nape/geom/Mat23.hx",274,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_277_alloc,"zpp_nape.geom.ZPP_Mat23","alloc",0x9b019b32,"zpp_nape.geom.ZPP_Mat23.alloc","zpp_nape/geom/Mat23.hx",277,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_279_get,"zpp_nape.geom.ZPP_Mat23","get",0xd06c5e13,"zpp_nape.geom.ZPP_Mat23.get","zpp_nape/geom/Mat23.hx",279,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_300_identity,"zpp_nape.geom.ZPP_Mat23","identity",0x394c62a1,"zpp_nape.geom.ZPP_Mat23.identity","zpp_nape/geom/Mat23.hx",300,0xe23340ce)
HX_LOCAL_STACK_FRAME(_hx_pos_01f2fcede0312d4f_248_boot,"zpp_nape.geom.ZPP_Mat23","boot",0x8b1f7415,"zpp_nape.geom.ZPP_Mat23.boot","zpp_nape/geom/Mat23.hx",248,0xe23340ce)
namespace zpp_nape{
namespace geom{

void ZPP_Mat23_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_174_new)
HXLINE( 247)		this->next = null();
HXLINE( 206)		this->_invalidate = null();
HXLINE( 205)		this->ty = ((Float)0.0);
HXLINE( 204)		this->tx = ((Float)0.0);
HXLINE( 203)		this->d = ((Float)0.0);
HXLINE( 202)		this->c = ((Float)0.0);
HXLINE( 201)		this->b = ((Float)0.0);
HXLINE( 200)		this->a = ((Float)0.0);
HXLINE( 175)		this->outer = null();
            	}

Dynamic ZPP_Mat23_obj::__CreateEmpty() { return new ZPP_Mat23_obj; }

void *ZPP_Mat23_obj::_hx_vtable = 0;

Dynamic ZPP_Mat23_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_Mat23_obj > _hx_result = new ZPP_Mat23_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_Mat23_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49b10e0f;
}

 ::nape::geom::Mat23 ZPP_Mat23_obj::wrapper(){
            	HX_GC_STACKFRAME(&_hx_pos_01f2fcede0312d4f_176_wrapper)
HXLINE( 177)		if (hx::IsNull( this->outer )) {
HXLINE( 178)			this->outer =  ::nape::geom::Mat23_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 179)			{
HXLINE( 180)				 ::zpp_nape::geom::ZPP_Mat23 o = this->outer->zpp_inner;
HXLINE( 190)				o->next = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;
HXLINE( 191)				::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = o;
            			}
HXLINE( 196)			this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 198)		return this->outer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,wrapper,return )

void ZPP_Mat23_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_210_invalidate)
HXDLIN( 210)		if (hx::IsNotNull( this->_invalidate )) {
HXLINE( 211)			this->_invalidate();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,invalidate,(void))

void ZPP_Mat23_obj::set( ::zpp_nape::geom::ZPP_Mat23 m){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_217_set)
HXDLIN( 217)		this->setas(m->a,m->b,m->c,m->d,m->tx,m->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Mat23_obj,set,(void))

void ZPP_Mat23_obj::setas(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_219_setas)
HXLINE( 220)		{
HXLINE( 221)			this->tx = tx;
HXLINE( 222)			this->ty = ty;
            		}
HXLINE( 240)		{
HXLINE( 241)			this->a = a;
HXLINE( 242)			this->b = b;
HXLINE( 243)			this->c = c;
HXLINE( 244)			this->d = d;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Mat23_obj,setas,(void))

void ZPP_Mat23_obj::free(){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_274_free)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,free,(void))

void ZPP_Mat23_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_277_alloc)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,alloc,(void))

 ::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::zpp_pool;

 ::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_01f2fcede0312d4f_279_get)
HXLINE( 280)		 ::zpp_nape::geom::ZPP_Mat23 ret;
HXLINE( 282)		if (hx::IsNull( ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool )) {
HXLINE( 283)			ret =  ::zpp_nape::geom::ZPP_Mat23_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 289)			ret = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;
HXLINE( 290)			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = ret->next;
HXLINE( 291)			ret->next = null();
            		}
HXLINE( 298)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,get,return )

 ::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_300_identity)
HXLINE( 301)		 ::zpp_nape::geom::ZPP_Mat23 ret = ::zpp_nape::geom::ZPP_Mat23_obj::get();
HXLINE( 302)		ret->setas(( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 303)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,identity,return )


hx::ObjectPtr< ZPP_Mat23_obj > ZPP_Mat23_obj::__new() {
	hx::ObjectPtr< ZPP_Mat23_obj > __this = new ZPP_Mat23_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_Mat23_obj > ZPP_Mat23_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_Mat23_obj *__this = (ZPP_Mat23_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_Mat23_obj), true, "zpp_nape.geom.ZPP_Mat23"));
	*(void **)__this = ZPP_Mat23_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_Mat23_obj::ZPP_Mat23_obj()
{
}

void ZPP_Mat23_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Mat23);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_Mat23_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(next,"next");
}

hx::Val ZPP_Mat23_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return hx::Val( ty ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return hx::Val( outer ); }
		if (HX_FIELD_EQ(inName,"setas") ) { return hx::Val( setas_dyn() ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return hx::Val( wrapper_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return hx::Val( invalidate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return hx::Val( _invalidate ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Mat23_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = ( zpp_pool ); return true; }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true; }
	}
	return false;
}

hx::Val ZPP_Mat23_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::geom::Mat23 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Mat23_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::geom::ZPP_Mat23 >(); return true; }
	}
	return false;
}

void ZPP_Mat23_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("outer",7b,b8,28,37));
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_Mat23_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::nape::geom::Mat23 */ ,(int)offsetof(ZPP_Mat23_obj,outer),HX_("outer",7b,b8,28,37)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,a),HX_("a",61,00,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,b),HX_("b",62,00,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,c),HX_("c",63,00,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,d),HX_("d",64,00,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,tx),HX_("tx",84,65,00,00)},
	{hx::fsFloat,(int)offsetof(ZPP_Mat23_obj,ty),HX_("ty",85,65,00,00)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ZPP_Mat23_obj,_invalidate),HX_("_invalidate",9a,e6,b3,59)},
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Mat23 */ ,(int)offsetof(ZPP_Mat23_obj,next),HX_("next",f3,84,02,49)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_Mat23_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_Mat23 */ ,(void *) &ZPP_Mat23_obj::zpp_pool,HX_("zpp_pool",81,5d,d4,38)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_Mat23_obj_sMemberFields[] = {
	HX_("outer",7b,b8,28,37),
	HX_("wrapper",53,d5,64,0d),
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	HX_("_invalidate",9a,e6,b3,59),
	HX_("invalidate",7b,19,2a,87),
	HX_("set",a2,9b,57,00),
	HX_("setas",14,9d,2f,7a),
	HX_("next",f3,84,02,49),
	HX_("free",ac,9c,c2,43),
	HX_("alloc",75,a4,93,21),
	::String(null()) };

static void ZPP_Mat23_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_Mat23_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Mat23_obj::__mClass;

static ::String ZPP_Mat23_obj_sStaticFields[] = {
	HX_("zpp_pool",81,5d,d4,38),
	HX_("get",96,80,4e,00),
	HX_("identity",3e,45,2f,b9),
	::String(null())
};

void ZPP_Mat23_obj::__register()
{
	ZPP_Mat23_obj _hx_dummy;
	ZPP_Mat23_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zpp_nape.geom.ZPP_Mat23",6b,7b,7c,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Mat23_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Mat23_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_Mat23_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_Mat23_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_Mat23_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Mat23_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_Mat23_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_Mat23_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_Mat23_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_Mat23_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_01f2fcede0312d4f_248_boot)
HXDLIN( 248)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace geom
