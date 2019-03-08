// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <hxinc/nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <hxinc/nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <hxinc/nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <hxinc/nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <hxinc/nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <hxinc/nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <hxinc/nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <hxinc/nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <hxinc/nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <hxinc/zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <hxinc/zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <hxinc/zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <hxinc/zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <hxinc/zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <hxinc/zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <hxinc/zpp_nape/space/ZPP_Space.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_192_new,"nape.constraint.UserConstraint","new",0x7be6e705,"nape.constraint.UserConstraint.new","nape/constraint/UserConstraint.hx",192,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_223___bindVec2,"nape.constraint.UserConstraint","__bindVec2",0xff6e16d6,"nape.constraint.UserConstraint.__bindVec2","nape/constraint/UserConstraint.hx",223,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_243___copy,"nape.constraint.UserConstraint","__copy",0xaacbfd50,"nape.constraint.UserConstraint.__copy","nape/constraint/UserConstraint.hx",243,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_256___broken,"nape.constraint.UserConstraint","__broken",0x46e6d4b0,"nape.constraint.UserConstraint.__broken","nape/constraint/UserConstraint.hx",256,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_271___validate,"nape.constraint.UserConstraint","__validate",0x483b7bb1,"nape.constraint.UserConstraint.__validate","nape/constraint/UserConstraint.hx",271,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_282___draw,"nape.constraint.UserConstraint","__draw",0xab776d9f,"nape.constraint.UserConstraint.__draw","nape/constraint/UserConstraint.hx",282,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_291___prepare,"nape.constraint.UserConstraint","__prepare",0x4a8902cc,"nape.constraint.UserConstraint.__prepare","nape/constraint/UserConstraint.hx",291,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_302___position,"nape.constraint.UserConstraint","__position",0x0e524bc4,"nape.constraint.UserConstraint.__position","nape/constraint/UserConstraint.hx",302,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_315___velocity,"nape.constraint.UserConstraint","__velocity",0x6255ad38,"nape.constraint.UserConstraint.__velocity","nape/constraint/UserConstraint.hx",315,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_337___eff_mass,"nape.constraint.UserConstraint","__eff_mass",0x299a2ce9,"nape.constraint.UserConstraint.__eff_mass","nape/constraint/UserConstraint.hx",337,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_347___clamp,"nape.constraint.UserConstraint","__clamp",0xc5aa9900,"nape.constraint.UserConstraint.__clamp","nape/constraint/UserConstraint.hx",347,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_360___impulse,"nape.constraint.UserConstraint","__impulse",0x8068c1fa,"nape.constraint.UserConstraint.__impulse","nape/constraint/UserConstraint.hx",360,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_400_impulse,"nape.constraint.UserConstraint","impulse",0x80b11dda,"nape.constraint.UserConstraint.impulse","nape/constraint/UserConstraint.hx",400,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_410_bodyImpulse,"nape.constraint.UserConstraint","bodyImpulse",0xdad439d8,"nape.constraint.UserConstraint.bodyImpulse","nape/constraint/UserConstraint.hx",410,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_436_visitBodies,"nape.constraint.UserConstraint","visitBodies",0x5f90b750,"nape.constraint.UserConstraint.visitBodies","nape/constraint/UserConstraint.hx",436,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_468___invalidate,"nape.constraint.UserConstraint","__invalidate",0x10170156,"nape.constraint.UserConstraint.__invalidate","nape/constraint/UserConstraint.hx",468,0x5f14de6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f3d6ee74117d91d9_503___registerBody,"nape.constraint.UserConstraint","__registerBody",0x08e58f40,"nape.constraint.UserConstraint.__registerBody","nape/constraint/UserConstraint.hx",503,0x5f14de6b)
namespace nape{
namespace constraint{

void UserConstraint_obj::__construct(int dimensions,hx::Null< bool >  __o_velocityOnly){
            		bool velocityOnly = __o_velocityOnly.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_192_new)
HXLINE( 196)		this->zpp_inner_zn = null();
HXLINE( 378)		if ((dimensions < 1)) {
HXLINE( 379)			HX_STACK_DO_THROW(HX_("Error: Constraint dimension must be at least 1",e2,aa,a9,d6));
            		}
HXLINE( 382)		this->zpp_inner_zn =  ::zpp_nape::constraint::ZPP_UserConstraint_obj::__alloc( HX_CTX ,dimensions,velocityOnly);
HXLINE( 383)		this->zpp_inner = this->zpp_inner_zn;
HXLINE( 384)		this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
HXLINE( 385)		this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
HXLINE( 387)		::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
HXLINE( 388)		super::__construct();
HXLINE( 389)		::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
            	}

Dynamic UserConstraint_obj::__CreateEmpty() { return new UserConstraint_obj; }

void *UserConstraint_obj::_hx_vtable = 0;

Dynamic UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UserConstraint_obj > _hx_result = new UserConstraint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool UserConstraint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00e9fd26) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00e9fd26;
	} else {
		return inClassId==(int)0x5909076d;
	}
}

 ::nape::geom::Vec2 UserConstraint_obj::_hx___bindVec2(){
            	HX_GC_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_223___bindVec2)
HXLINE( 224)		 ::nape::geom::Vec2 ret =  ::nape::geom::Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 225)		ret->zpp_inner->_inuse = true;
HXLINE( 226)		ret->zpp_inner->_invalidate = this->zpp_inner_zn->bindVec2_invalidate_dyn();
HXLINE( 227)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,_hx___bindVec2,return )

 ::nape::constraint::UserConstraint UserConstraint_obj::__copy(){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_243___copy)
HXDLIN( 243)		HX_STACK_DO_THROW(HX_("Error: UserConstraint::__copy must be overriden",27,c2,9a,ca));
HXDLIN( 243)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__copy,return )

void UserConstraint_obj::_hx___broken(){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_256___broken)
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,_hx___broken,(void))

void UserConstraint_obj::_hx___validate(){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_271___validate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,_hx___validate,(void))

void UserConstraint_obj::_hx___draw( ::nape::util::Debug debug){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_282___draw)
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,_hx___draw,(void))

void UserConstraint_obj::_hx___prepare(){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_291___prepare)
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,_hx___prepare,(void))

void UserConstraint_obj::_hx___position(::Array< Float > err){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_302___position)
HXDLIN( 302)		HX_STACK_DO_THROW(HX_("Error: UserConstraint::__position must be overriden",1b,17,63,f9));
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,_hx___position,(void))

void UserConstraint_obj::_hx___velocity(::Array< Float > err){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_315___velocity)
HXDLIN( 315)		HX_STACK_DO_THROW(HX_("Error: Userconstraint::__velocity must be overriden",6f,a9,29,b9));
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,_hx___velocity,(void))

void UserConstraint_obj::_hx___eff_mass(::Array< Float > eff){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_337___eff_mass)
HXDLIN( 337)		HX_STACK_DO_THROW(HX_("Error: UserConstraint::__eff_mass must be overriden",80,25,1b,ac));
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,_hx___eff_mass,(void))

void UserConstraint_obj::_hx___clamp(::Array< Float > jAcc){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_347___clamp)
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,_hx___clamp,(void))

void UserConstraint_obj::_hx___impulse(::Array< Float > imp, ::nape::phys::Body body, ::nape::geom::Vec3 out){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_360___impulse)
HXDLIN( 360)		HX_STACK_DO_THROW(HX_("Error: UserConstraint::__impulse must be overriden",3b,b7,c3,4a));
            	}


HX_DEFINE_DYNAMIC_FUNC3(UserConstraint_obj,_hx___impulse,(void))

 ::nape::geom::MatMN UserConstraint_obj::impulse(){
            	HX_GC_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_400_impulse)
HXLINE( 401)		 ::nape::geom::MatMN ret =  ::nape::geom::MatMN_obj::__alloc( HX_CTX ,this->zpp_inner_zn->dim,1);
HXLINE( 402)		{
HXLINE( 402)			int _g = 0;
HXDLIN( 402)			int _g1 = this->zpp_inner_zn->dim;
HXDLIN( 402)			while((_g < _g1)){
HXLINE( 402)				_g = (_g + 1);
HXDLIN( 402)				int i = (_g - 1);
HXLINE( 403)				{
HXLINE( 403)					bool _hx_tmp;
HXDLIN( 403)					bool _hx_tmp1;
HXDLIN( 403)					if ((i >= 0)) {
HXLINE( 403)						_hx_tmp1 = (i >= ret->zpp_inner->m);
            					}
            					else {
HXLINE( 403)						_hx_tmp1 = true;
            					}
HXDLIN( 403)					if (!(_hx_tmp1)) {
HXLINE( 403)						_hx_tmp = (0 >= ret->zpp_inner->n);
            					}
            					else {
HXLINE( 403)						_hx_tmp = true;
            					}
HXDLIN( 403)					if (_hx_tmp) {
HXLINE( 403)						HX_STACK_DO_THROW(HX_("Error: MatMN indices out of range",cc,72,58,e6));
            					}
HXDLIN( 403)					ret->zpp_inner->x[(i * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc->__get(i);
            				}
            			}
            		}
HXLINE( 405)		return ret;
            	}


 ::nape::geom::Vec3 UserConstraint_obj::bodyImpulse( ::nape::phys::Body body){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_410_bodyImpulse)
HXLINE( 412)		if (hx::IsNull( body )) {
HXLINE( 413)			HX_STACK_DO_THROW(HX_("Error: Cannot evaluate impulse on null body",9d,b5,dc,16));
            		}
HXLINE( 415)		bool found = false;
HXLINE( 416)		{
HXLINE( 416)			int _g = 0;
HXDLIN( 416)			::Array< ::Dynamic> _g1 = this->zpp_inner_zn->bodies;
HXDLIN( 416)			while((_g < _g1->length)){
HXLINE( 416)				 ::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g).StaticCast<  ::zpp_nape::constraint::ZPP_UserBody >();
HXDLIN( 416)				_g = (_g + 1);
HXLINE( 417)				if (hx::IsEq( b->body,body->zpp_inner )) {
HXLINE( 418)					found = true;
HXLINE( 419)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 422)		if (!(found)) {
HXLINE( 423)			HX_STACK_DO_THROW(HX_("Error: Body is not linked to this constraint",2e,e5,48,bf));
            		}
HXLINE( 426)		if (!(this->zpp_inner->active)) {
HXLINE( 427)			return ::nape::geom::Vec3_obj::get(null(),null(),null());
            		}
            		else {
HXLINE( 430)			return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
            		}
HXLINE( 426)		return null();
            	}


void UserConstraint_obj::visitBodies( ::Dynamic lambda){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_436_visitBodies)
HXLINE( 437)		int i = 0;
HXLINE( 438)		int nbodies = this->zpp_inner_zn->bodies->length;
HXLINE( 439)		while((i < nbodies)){
HXLINE( 440)			 ::zpp_nape::constraint::ZPP_UserBody b = this->zpp_inner_zn->bodies->__get(i).StaticCast<  ::zpp_nape::constraint::ZPP_UserBody >();
HXLINE( 441)			if (hx::IsNotNull( b->body )) {
HXLINE( 442)				bool found = false;
HXLINE( 443)				{
HXLINE( 443)					int _g = (i + 1);
HXDLIN( 443)					int _g1 = nbodies;
HXDLIN( 443)					while((_g < _g1)){
HXLINE( 443)						_g = (_g + 1);
HXDLIN( 443)						int j = (_g - 1);
HXLINE( 444)						 ::zpp_nape::constraint::ZPP_UserBody c = this->zpp_inner_zn->bodies->__get(j).StaticCast<  ::zpp_nape::constraint::ZPP_UserBody >();
HXLINE( 445)						if (hx::IsEq( c->body,b->body )) {
HXLINE( 446)							found = true;
HXLINE( 447)							goto _hx_goto_17;
            						}
            					}
            					_hx_goto_17:;
            				}
HXLINE( 450)				if (!(found)) {
HXLINE( 451)					lambda(b->body->outer);
            				}
            			}
HXLINE( 454)			i = (i + 1);
            		}
            	}


void UserConstraint_obj::_hx___invalidate(){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_468___invalidate)
HXLINE( 469)		this->zpp_inner->immutable_midstep(HX_("UserConstraint::invalidate()",a4,90,d0,1f));
HXLINE( 470)		bool _hx_tmp;
HXDLIN( 470)		if (this->zpp_inner->active) {
HXLINE( 470)			 ::nape::space::Space _hx_tmp1;
HXDLIN( 470)			if (hx::IsNull( this->zpp_inner->space )) {
HXLINE( 470)				_hx_tmp1 = null();
            			}
            			else {
HXLINE( 470)				_hx_tmp1 = this->zpp_inner->space->outer;
            			}
HXDLIN( 470)			_hx_tmp = hx::IsNotNull( _hx_tmp1 );
            		}
            		else {
HXLINE( 470)			_hx_tmp = false;
            		}
HXDLIN( 470)		if (_hx_tmp) {
HXLINE( 471)			this->zpp_inner->wake();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,_hx___invalidate,(void))

 ::nape::phys::Body UserConstraint_obj::_hx___registerBody( ::nape::phys::Body oldBody, ::nape::phys::Body newBody){
            	HX_STACKFRAME(&_hx_pos_f3d6ee74117d91d9_503___registerBody)
HXLINE( 504)		this->zpp_inner->immutable_midstep(HX_("UserConstraint::registerBody(..)",4e,9d,e9,a6));
HXLINE( 505)		if (hx::IsNotEq( oldBody,newBody )) {
HXLINE( 506)			if (hx::IsNotNull( oldBody )) {
HXLINE( 507)				if (!(this->zpp_inner_zn->remBody(oldBody->zpp_inner))) {
HXLINE( 509)					HX_STACK_DO_THROW(HX_("Error: oldBody is not registered to the cosntraint",47,eb,23,ca));
            				}
HXLINE( 512)				bool _hx_tmp;
HXDLIN( 512)				if (this->zpp_inner->active) {
HXLINE( 512)					 ::nape::space::Space _hx_tmp1;
HXDLIN( 512)					if (hx::IsNull( this->zpp_inner->space )) {
HXLINE( 512)						_hx_tmp1 = null();
            					}
            					else {
HXLINE( 512)						_hx_tmp1 = this->zpp_inner->space->outer;
            					}
HXDLIN( 512)					_hx_tmp = hx::IsNotNull( _hx_tmp1 );
            				}
            				else {
HXLINE( 512)					_hx_tmp = false;
            				}
HXDLIN( 512)				if (_hx_tmp) {
HXLINE( 513)					oldBody->zpp_inner->wake();
            				}
            			}
HXLINE( 516)			if (hx::IsNotNull( newBody )) {
HXLINE( 517)				this->zpp_inner_zn->addBody(newBody->zpp_inner);
            			}
HXLINE( 519)			this->zpp_inner->wake();
HXLINE( 520)			if (hx::IsNotNull( newBody )) {
HXLINE( 521)				newBody->zpp_inner->wake();
            			}
            		}
HXLINE( 524)		return newBody;
            	}


HX_DEFINE_DYNAMIC_FUNC2(UserConstraint_obj,_hx___registerBody,return )


hx::ObjectPtr< UserConstraint_obj > UserConstraint_obj::__new(int dimensions,hx::Null< bool >  __o_velocityOnly) {
	hx::ObjectPtr< UserConstraint_obj > __this = new UserConstraint_obj();
	__this->__construct(dimensions,__o_velocityOnly);
	return __this;
}

hx::ObjectPtr< UserConstraint_obj > UserConstraint_obj::__alloc(hx::Ctx *_hx_ctx,int dimensions,hx::Null< bool >  __o_velocityOnly) {
	UserConstraint_obj *__this = (UserConstraint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UserConstraint_obj), true, "nape.constraint.UserConstraint"));
	*(void **)__this = UserConstraint_obj::_hx_vtable;
	__this->__construct(dimensions,__o_velocityOnly);
	return __this;
}

UserConstraint_obj::UserConstraint_obj()
{
}

void UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserConstraint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	 ::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

hx::Val UserConstraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__copy") ) { return hx::Val( __copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"__draw") ) { return hx::Val( _hx___draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { return hx::Val( _hx___clamp_dyn() ); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return hx::Val( impulse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__broken") ) { return hx::Val( _hx___broken_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__prepare") ) { return hx::Val( _hx___prepare_dyn() ); }
		if (HX_FIELD_EQ(inName,"__impulse") ) { return hx::Val( _hx___impulse_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__bindVec2") ) { return hx::Val( _hx___bindVec2_dyn() ); }
		if (HX_FIELD_EQ(inName,"__validate") ) { return hx::Val( _hx___validate_dyn() ); }
		if (HX_FIELD_EQ(inName,"__position") ) { return hx::Val( _hx___position_dyn() ); }
		if (HX_FIELD_EQ(inName,"__velocity") ) { return hx::Val( _hx___velocity_dyn() ); }
		if (HX_FIELD_EQ(inName,"__eff_mass") ) { return hx::Val( _hx___eff_mass_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return hx::Val( bodyImpulse_dyn() ); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return hx::Val( visitBodies_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return hx::Val( zpp_inner_zn ); }
		if (HX_FIELD_EQ(inName,"__invalidate") ) { return hx::Val( _hx___invalidate_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__registerBody") ) { return hx::Val( _hx___registerBody_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UserConstraint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast<  ::zpp_nape::constraint::ZPP_UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zpp_inner_zn",22,84,fa,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo UserConstraint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::zpp_nape::constraint::ZPP_UserConstraint */ ,(int)offsetof(UserConstraint_obj,zpp_inner_zn),HX_("zpp_inner_zn",22,84,fa,e0)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *UserConstraint_obj_sStaticStorageInfo = 0;
#endif

static ::String UserConstraint_obj_sMemberFields[] = {
	HX_("zpp_inner_zn",22,84,fa,e0),
	HX_("__bindVec2",db,de,4e,5f),
	HX_("__copy",d5,1e,bd,f0),
	HX_("__broken",75,21,87,c4),
	HX_("__validate",b6,43,1c,a8),
	HX_("__draw",24,8f,68,f1),
	HX_("__prepare",67,e2,2b,b9),
	HX_("__position",c9,13,33,6e),
	HX_("__velocity",3d,75,36,c2),
	HX_("__eff_mass",ee,f4,7a,89),
	HX_("__clamp",db,cb,b6,b2),
	HX_("__impulse",95,a1,0b,ef),
	HX_("impulse",b5,50,bd,6d),
	HX_("bodyImpulse",33,76,a2,5f),
	HX_("visitBodies",ab,f3,5e,e4),
	HX_("__invalidate",9b,94,bd,bf),
	HX_("__registerBody",c5,3d,cb,dd),
	::String(null()) };

hx::Class UserConstraint_obj::__mClass;

void UserConstraint_obj::__register()
{
	UserConstraint_obj _hx_dummy;
	UserConstraint_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nape.constraint.UserConstraint",93,00,44,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UserConstraint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UserConstraint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UserConstraint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UserConstraint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace constraint
