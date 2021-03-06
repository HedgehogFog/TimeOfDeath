// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <hxinc/nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <hxinc/zpp_nape/geom/ZPP_MatMN.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_179_new,"nape.geom.MatMN","new",0x580e1be7,"nape.geom.MatMN.new","nape/geom/MatMN.hx",179,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_190_get_rows,"nape.geom.MatMN","get_rows",0xefad3bbb,"nape.geom.MatMN.get_rows","nape/geom/MatMN.hx",190,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_198_get_cols,"nape.geom.MatMN","get_cols",0xe5c2fed5,"nape.geom.MatMN.get_cols","nape/geom/MatMN.hx",198,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_209_x,"nape.geom.MatMN","x",0x4f2a8c3f,"nape.geom.MatMN.x","nape/geom/MatMN.hx",209,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_228_setx,"nape.geom.MatMN","setx",0xb7985d2f,"nape.geom.MatMN.setx","nape/geom/MatMN.hx",228,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_258_toString,"nape.geom.MatMN","toString",0x5cb25bc5,"nape.geom.MatMN.toString","nape/geom/MatMN.hx",258,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_274_transpose,"nape.geom.MatMN","transpose",0xe3057b40,"nape.geom.MatMN.transpose","nape/geom/MatMN.hx",274,0x8baed9c9)
HX_LOCAL_STACK_FRAME(_hx_pos_e4aae68bce5f9bdc_294_mul,"nape.geom.MatMN","mul",0x580d678b,"nape.geom.MatMN.mul","nape/geom/MatMN.hx",294,0x8baed9c9)
namespace nape{
namespace geom{

void MatMN_obj::__construct(int rows,int cols){
            	HX_GC_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_179_new)
HXLINE( 183)		this->zpp_inner = null();
HXLINE( 248)		bool _hx_tmp;
HXDLIN( 248)		if ((rows > 0)) {
HXLINE( 248)			_hx_tmp = (cols <= 0);
            		}
            		else {
HXLINE( 248)			_hx_tmp = true;
            		}
HXDLIN( 248)		if (_hx_tmp) {
HXLINE( 249)			HX_STACK_DO_THROW(HX_("Error: MatMN::dimensions cannot be < 1",2d,f2,70,4e));
            		}
HXLINE( 252)		this->zpp_inner =  ::zpp_nape::geom::ZPP_MatMN_obj::__alloc( HX_CTX ,rows,cols);
HXLINE( 253)		this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic MatMN_obj::__CreateEmpty() { return new MatMN_obj; }

void *MatMN_obj::_hx_vtable = 0;

Dynamic MatMN_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MatMN_obj > _hx_result = new MatMN_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MatMN_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x285ceb3d;
}

int MatMN_obj::get_rows(){
            	HX_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_190_get_rows)
HXDLIN( 190)		return this->zpp_inner->m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_rows,return )

int MatMN_obj::get_cols(){
            	HX_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_198_get_cols)
HXDLIN( 198)		return this->zpp_inner->n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_cols,return )

Float MatMN_obj::x(int row,int col){
            	HX_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_209_x)
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		bool _hx_tmp1;
HXDLIN( 211)		bool _hx_tmp2;
HXDLIN( 211)		if ((row >= 0)) {
HXLINE( 211)			_hx_tmp2 = (col < 0);
            		}
            		else {
HXLINE( 211)			_hx_tmp2 = true;
            		}
HXDLIN( 211)		if (!(_hx_tmp2)) {
HXLINE( 211)			_hx_tmp1 = (row >= this->zpp_inner->m);
            		}
            		else {
HXLINE( 211)			_hx_tmp1 = true;
            		}
HXDLIN( 211)		if (!(_hx_tmp1)) {
HXLINE( 211)			_hx_tmp = (col >= this->zpp_inner->n);
            		}
            		else {
HXLINE( 211)			_hx_tmp = true;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 212)			HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            		}
HXLINE( 215)		return this->zpp_inner->x->__get(((row * this->zpp_inner->n) + col));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MatMN_obj,x,return )

Float MatMN_obj::setx(int row,int col,Float x){
            	HX_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_228_setx)
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		bool _hx_tmp1;
HXDLIN( 230)		bool _hx_tmp2;
HXDLIN( 230)		if ((row >= 0)) {
HXLINE( 230)			_hx_tmp2 = (col < 0);
            		}
            		else {
HXLINE( 230)			_hx_tmp2 = true;
            		}
HXDLIN( 230)		if (!(_hx_tmp2)) {
HXLINE( 230)			_hx_tmp1 = (row >= this->zpp_inner->m);
            		}
            		else {
HXLINE( 230)			_hx_tmp1 = true;
            		}
HXDLIN( 230)		if (!(_hx_tmp1)) {
HXLINE( 230)			_hx_tmp = (col >= this->zpp_inner->n);
            		}
            		else {
HXLINE( 230)			_hx_tmp = true;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXLINE( 231)			HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            		}
HXLINE( 234)		return (this->zpp_inner->x[((row * this->zpp_inner->n) + col)] = x);
            	}


HX_DEFINE_DYNAMIC_FUNC3(MatMN_obj,setx,return )

::String MatMN_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_258_toString)
HXLINE( 259)		::String ret = HX_("{ ",45,6b,00,00);
HXLINE( 260)		bool fst = true;
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			int _g1 = this->zpp_inner->m;
HXDLIN( 261)			while((_g < _g1)){
HXLINE( 261)				_g = (_g + 1);
HXDLIN( 261)				int i = (_g - 1);
HXLINE( 262)				if (!(fst)) {
HXLINE( 262)					ret = (ret + HX_("; ",85,33,00,00));
            				}
HXLINE( 263)				fst = false;
HXLINE( 264)				{
HXLINE( 264)					int _g2 = 0;
HXDLIN( 264)					int _g11 = this->zpp_inner->n;
HXDLIN( 264)					while((_g2 < _g11)){
HXLINE( 264)						_g2 = (_g2 + 1);
HXDLIN( 264)						int j = (_g2 - 1);
HXDLIN( 264)						bool ret1;
HXDLIN( 264)						bool ret2;
HXDLIN( 264)						bool ret3;
HXDLIN( 264)						if ((i >= 0)) {
HXLINE( 264)							ret3 = (j < 0);
            						}
            						else {
HXLINE( 264)							ret3 = true;
            						}
HXDLIN( 264)						if (!(ret3)) {
HXLINE( 264)							ret2 = (i >= this->zpp_inner->m);
            						}
            						else {
HXLINE( 264)							ret2 = true;
            						}
HXDLIN( 264)						if (!(ret2)) {
HXLINE( 264)							ret1 = (j >= this->zpp_inner->n);
            						}
            						else {
HXLINE( 264)							ret1 = true;
            						}
HXDLIN( 264)						if (ret1) {
HXLINE( 264)							HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            						}
HXDLIN( 264)						ret = (ret + (this->zpp_inner->x->__get(((i * this->zpp_inner->n) + j)) + HX_(" ",20,00,00,00)));
            					}
            				}
            			}
            		}
HXLINE( 266)		ret = (ret + HX_("}",7d,00,00,00));
HXLINE( 267)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,toString,return )

 ::nape::geom::MatMN MatMN_obj::transpose(){
            	HX_GC_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_274_transpose)
HXLINE( 275)		 ::nape::geom::MatMN ret =  ::nape::geom::MatMN_obj::__alloc( HX_CTX ,this->zpp_inner->n,this->zpp_inner->m);
HXLINE( 276)		{
HXLINE( 276)			int _g = 0;
HXDLIN( 276)			int _g1 = this->zpp_inner->m;
HXDLIN( 276)			while((_g < _g1)){
HXLINE( 276)				_g = (_g + 1);
HXDLIN( 276)				int i = (_g - 1);
HXLINE( 277)				{
HXLINE( 277)					int _g2 = 0;
HXDLIN( 277)					int _g11 = this->zpp_inner->n;
HXDLIN( 277)					while((_g2 < _g11)){
HXLINE( 277)						_g2 = (_g2 + 1);
HXDLIN( 277)						int j = (_g2 - 1);
HXDLIN( 277)						{
HXLINE( 277)							bool _hx_tmp;
HXDLIN( 277)							bool _hx_tmp1;
HXDLIN( 277)							bool _hx_tmp2;
HXDLIN( 277)							if ((i >= 0)) {
HXLINE( 277)								_hx_tmp2 = (j < 0);
            							}
            							else {
HXLINE( 277)								_hx_tmp2 = true;
            							}
HXDLIN( 277)							if (!(_hx_tmp2)) {
HXLINE( 277)								_hx_tmp1 = (i >= this->zpp_inner->m);
            							}
            							else {
HXLINE( 277)								_hx_tmp1 = true;
            							}
HXDLIN( 277)							if (!(_hx_tmp1)) {
HXLINE( 277)								_hx_tmp = (j >= this->zpp_inner->n);
            							}
            							else {
HXLINE( 277)								_hx_tmp = true;
            							}
HXDLIN( 277)							if (_hx_tmp) {
HXLINE( 277)								HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            							}
HXDLIN( 277)							bool _hx_tmp3;
HXDLIN( 277)							bool _hx_tmp4;
HXDLIN( 277)							bool _hx_tmp5;
HXDLIN( 277)							if ((j >= 0)) {
HXLINE( 277)								_hx_tmp5 = (i < 0);
            							}
            							else {
HXLINE( 277)								_hx_tmp5 = true;
            							}
HXDLIN( 277)							if (!(_hx_tmp5)) {
HXLINE( 277)								_hx_tmp4 = (j >= ret->zpp_inner->m);
            							}
            							else {
HXLINE( 277)								_hx_tmp4 = true;
            							}
HXDLIN( 277)							if (!(_hx_tmp4)) {
HXLINE( 277)								_hx_tmp3 = (i >= ret->zpp_inner->n);
            							}
            							else {
HXLINE( 277)								_hx_tmp3 = true;
            							}
HXDLIN( 277)							if (_hx_tmp3) {
HXLINE( 277)								HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            							}
HXDLIN( 277)							ret->zpp_inner->x[((j * ret->zpp_inner->n) + i)] = this->zpp_inner->x->__get(((i * this->zpp_inner->n) + j));
            						}
            					}
            				}
            			}
            		}
HXLINE( 279)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,transpose,return )

 ::nape::geom::MatMN MatMN_obj::mul( ::nape::geom::MatMN matrix){
            	HX_GC_STACKFRAME(&_hx_pos_e4aae68bce5f9bdc_294_mul)
HXLINE( 295)		 ::nape::geom::MatMN y = matrix;
HXLINE( 297)		if ((this->zpp_inner->n != y->zpp_inner->m)) {
HXLINE( 298)			HX_STACK_DO_THROW(HX_("Error: Matrix dimensions aren't compatible",4b,cb,42,4d));
            		}
HXLINE( 301)		 ::nape::geom::MatMN ret =  ::nape::geom::MatMN_obj::__alloc( HX_CTX ,this->zpp_inner->m,y->zpp_inner->n);
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			int _g1 = this->zpp_inner->m;
HXDLIN( 302)			while((_g < _g1)){
HXLINE( 302)				_g = (_g + 1);
HXDLIN( 302)				int i = (_g - 1);
HXLINE( 303)				{
HXLINE( 303)					int _g2 = 0;
HXDLIN( 303)					int _g11 = y->zpp_inner->n;
HXDLIN( 303)					while((_g2 < _g11)){
HXLINE( 303)						_g2 = (_g2 + 1);
HXDLIN( 303)						int j = (_g2 - 1);
HXLINE( 304)						Float v = ((Float)0.0);
HXLINE( 305)						{
HXLINE( 305)							int _g3 = 0;
HXDLIN( 305)							int _g12 = this->zpp_inner->n;
HXDLIN( 305)							while((_g3 < _g12)){
HXLINE( 305)								_g3 = (_g3 + 1);
HXDLIN( 305)								int k = (_g3 - 1);
HXDLIN( 305)								bool v1;
HXDLIN( 305)								bool v2;
HXDLIN( 305)								bool v3;
HXDLIN( 305)								if ((i >= 0)) {
HXLINE( 305)									v3 = (k < 0);
            								}
            								else {
HXLINE( 305)									v3 = true;
            								}
HXDLIN( 305)								if (!(v3)) {
HXLINE( 305)									v2 = (i >= this->zpp_inner->m);
            								}
            								else {
HXLINE( 305)									v2 = true;
            								}
HXDLIN( 305)								if (!(v2)) {
HXLINE( 305)									v1 = (k >= this->zpp_inner->n);
            								}
            								else {
HXLINE( 305)									v1 = true;
            								}
HXDLIN( 305)								if (v1) {
HXLINE( 305)									HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            								}
HXDLIN( 305)								bool v4;
HXDLIN( 305)								bool v5;
HXDLIN( 305)								bool v6;
HXDLIN( 305)								if ((k >= 0)) {
HXLINE( 305)									v6 = (j < 0);
            								}
            								else {
HXLINE( 305)									v6 = true;
            								}
HXDLIN( 305)								if (!(v6)) {
HXLINE( 305)									v5 = (k >= y->zpp_inner->m);
            								}
            								else {
HXLINE( 305)									v5 = true;
            								}
HXDLIN( 305)								if (!(v5)) {
HXLINE( 305)									v4 = (j >= y->zpp_inner->n);
            								}
            								else {
HXLINE( 305)									v4 = true;
            								}
HXDLIN( 305)								if (v4) {
HXLINE( 305)									HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            								}
HXDLIN( 305)								v = (v + (this->zpp_inner->x->__get(((i * this->zpp_inner->n) + k)) * y->zpp_inner->x->__get(((k * y->zpp_inner->n) + j))));
            							}
            						}
HXLINE( 306)						{
HXLINE( 306)							bool _hx_tmp;
HXDLIN( 306)							bool _hx_tmp1;
HXDLIN( 306)							bool _hx_tmp2;
HXDLIN( 306)							if ((i >= 0)) {
HXLINE( 306)								_hx_tmp2 = (j < 0);
            							}
            							else {
HXLINE( 306)								_hx_tmp2 = true;
            							}
HXDLIN( 306)							if (!(_hx_tmp2)) {
HXLINE( 306)								_hx_tmp1 = (i >= ret->zpp_inner->m);
            							}
            							else {
HXLINE( 306)								_hx_tmp1 = true;
            							}
HXDLIN( 306)							if (!(_hx_tmp1)) {
HXLINE( 306)								_hx_tmp = (j >= ret->zpp_inner->n);
            							}
            							else {
HXLINE( 306)								_hx_tmp = true;
            							}
HXDLIN( 306)							if (_hx_tmp) {
HXLINE( 306)								HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            							}
HXDLIN( 306)							ret->zpp_inner->x[((i * ret->zpp_inner->n) + j)] = v;
            						}
            					}
            				}
            			}
            		}
HXLINE( 309)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MatMN_obj,mul,return )


hx::ObjectPtr< MatMN_obj > MatMN_obj::__new(int rows,int cols) {
	hx::ObjectPtr< MatMN_obj > __this = new MatMN_obj();
	__this->__construct(rows,cols);
	return __this;
}

hx::ObjectPtr< MatMN_obj > MatMN_obj::__alloc(hx::Ctx *_hx_ctx,int rows,int cols) {
	MatMN_obj *__this = (MatMN_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MatMN_obj), true, "nape.geom.MatMN"));
	*(void **)__this = MatMN_obj::_hx_vtable;
	__this->__construct(rows,cols);
	return __this;
}

MatMN_obj::MatMN_obj()
{
}

void MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatMN);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val MatMN_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return hx::Val( mul_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rows() ); }
		if (HX_FIELD_EQ(inName,"cols") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_cols() ); }
		if (HX_FIELD_EQ(inName,"setx") ) { return hx::Val( setx_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return hx::Val( get_rows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return hx::Val( get_cols_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner ); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return hx::Val( transpose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MatMN_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::geom::ZPP_MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner",51,65,85,78));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("cols",33,b8,c4,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo MatMN_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::geom::ZPP_MatMN */ ,(int)offsetof(MatMN_obj,zpp_inner),HX_("zpp_inner",51,65,85,78)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MatMN_obj_sStaticStorageInfo = 0;
#endif

static ::String MatMN_obj_sMemberFields[] = {
	HX_("zpp_inner",51,65,85,78),
	HX_("get_rows",a2,b0,69,cb),
	HX_("get_cols",bc,73,7f,c1),
	HX_("x",78,00,00,00),
	HX_("setx",96,92,50,4c),
	HX_("toString",ac,d0,6e,38),
	HX_("transpose",79,50,2f,4c),
	HX_("mul",04,1c,53,00),
	::String(null()) };

hx::Class MatMN_obj::__mClass;

void MatMN_obj::__register()
{
	MatMN_obj _hx_dummy;
	MatMN_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.geom.MatMN",75,9c,f2,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MatMN_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatMN_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MatMN_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MatMN_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace geom
