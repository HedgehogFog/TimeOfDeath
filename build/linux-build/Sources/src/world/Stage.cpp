// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_Xml
#include <hxinc/Xml.h>
#endif
#ifndef INCLUDED_entity_element_IEntity
#include <hxinc/entity/element/IEntity.h>
#endif
#ifndef INCLUDED_entity_group_TypedGroup
#include <hxinc/entity/group/TypedGroup.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <hxinc/haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <hxinc/haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <hxinc/haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <hxinc/haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <hxinc/haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <hxinc/kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <hxinc/kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif
#ifndef INCLUDED_scene_Scene
#include <hxinc/scene/Scene.h>
#endif
#ifndef INCLUDED_scene_managment_SceneManager
#include <hxinc/scene/managment/SceneManager.h>
#endif
#ifndef INCLUDED_world_Stage
#include <hxinc/world/Stage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b531b8d6639760a_31_new,"world.Stage","new",0xe0951d74,"world.Stage.new","world/Stage.hx",31,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_39_setStage,"world.Stage","setStage",0xa04a9e28,"world.Stage.setStage","world/Stage.hx",39,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_35_setStage,"world.Stage","setStage",0xa04a9e28,"world.Stage.setStage","world/Stage.hx",35,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_43_loadSucc,"world.Stage","loadSucc",0xcb074374,"world.Stage.loadSucc","world/Stage.hx",43,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_71_loadValues,"world.Stage","loadValues",0xc3057014,"world.Stage.loadValues","world/Stage.hx",71,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_96_spawn,"world.Stage","spawn",0xee64584f,"world.Stage.spawn","world/Stage.hx",96,0xf663b57d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b531b8d6639760a_133_parseBool,"world.Stage","parseBool",0x04282a11,"world.Stage.parseBool","world/Stage.hx",133,0xf663b57d)
namespace world{

void Stage_obj::__construct(::String file){
            	HX_STACKFRAME(&_hx_pos_3b531b8d6639760a_31_new)
HXDLIN(  31)		if (hx::IsNotNull( file )) {
HXLINE(  32)			this->setStage(file);
            		}
            	}

Dynamic Stage_obj::__CreateEmpty() { return new Stage_obj; }

void *Stage_obj::_hx_vtable = 0;

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stage_obj > _hx_result = new Stage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1aeb67cc;
}

void Stage_obj::setStage(::String file){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::Dynamic fail){
            			HX_GC_STACKFRAME(&_hx_pos_3b531b8d6639760a_39_setStage)
HXLINE(  39)			::haxe::Log_obj::trace(fail,hx::SourceInfo(HX_("world/Stage.hx",7d,b5,63,f6),39,HX_("world.Stage",82,93,7c,12),HX_("setStage",bc,d3,3f,92)));
HXDLIN(  39)			return;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3b531b8d6639760a_35_setStage)
HXLINE(  36)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->objects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		::kha::Assets_obj::loadBlob(file,this->loadSucc_dyn(), ::Dynamic(new _hx_Closure_0()),hx::SourceInfo(HX_("world/Stage.hx",7d,b5,63,f6),39,HX_("world.Stage",82,93,7c,12),HX_("setStage",bc,d3,3f,92)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setStage,(void))

void Stage_obj::loadSucc( ::kha::internal::BytesBlob blob){
            	HX_STACKFRAME(&_hx_pos_3b531b8d6639760a_43_loadSucc)
HXLINE(  44)		::String data = blob->toString();
HXLINE(  46)		this->xml = ::haxe::xml::Parser_obj::parse(data,null());
HXLINE(  47)		 ::Xml x = this->xml->firstElement();
HXDLIN(  47)		bool _hx_tmp;
HXDLIN(  47)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  47)			_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  47)			HX_STACK_DO_THROW((HX_("Invalid nodeType ",3b,e0,cb,e1) + x->nodeType));
            		}
HXDLIN(  47)		 ::Xml this1 = x;
HXDLIN(  47)		this->fastXml = this1;
HXLINE(  50)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("width",06,b6,62,ca))) {
HXLINE(  51)			this->width = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("width",06,b6,62,ca)))) );
            		}
HXLINE(  52)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("height",e7,07,4c,02))) {
HXLINE(  53)			this->height = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("height",e7,07,4c,02)))) );
            		}
HXLINE(  55)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("name",4b,72,ff,48))) {
HXLINE(  56)			this->name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("name",4b,72,ff,48));
            		}
HXLINE(  58)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("desc",51,5e,66,42))) {
HXLINE(  59)			this->desc = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("desc",51,5e,66,42));
            		}
HXLINE(  61)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("version",18,e7,f1,7c))) {
HXLINE(  62)			this->version = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("version",18,e7,f1,7c));
            		}
HXLINE(  64)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("bgColor",5e,81,83,f7))) {
HXLINE(  65)			::String _hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->fastXml,HX_("bgColor",5e,81,83,f7));
HXDLIN(  65)			::scene::managment::SceneManager_obj::instance->currentScene->__SetField(HX_("bgColor",5e,81,83,f7),::kha::_Color::Color_Impl__obj::fromString(_hx_tmp1),hx::paccDynamic);
            		}
HXLINE(  67)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->fastXml,HX_("values",e2,03,b7,4f))) {
HXLINE(  68)			this->loadValues();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,loadSucc,(void))

void Stage_obj::loadValues(){
            	HX_STACKFRAME(&_hx_pos_3b531b8d6639760a_71_loadValues)
HXLINE(  72)		 ::Xml valuesNode = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(this->fastXml,HX_("values",e2,03,b7,4f));
HXLINE(  74)		{
HXLINE(  74)			 ::Dynamic element = valuesNode->elements();
HXDLIN(  74)			while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  74)				 ::Xml element1 = ( ( ::Xml)(element->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  75)				bool _hx_tmp;
HXDLIN(  75)				bool _hx_tmp1;
HXDLIN(  75)				bool _hx_tmp2;
HXDLIN(  75)				::String _hx_tmp3;
HXDLIN(  75)				if ((element1->nodeType == ::Xml_obj::Document)) {
HXLINE(  75)					_hx_tmp3 = HX_("Document",3b,ab,c4,74);
            				}
            				else {
HXLINE(  75)					if ((element1->nodeType != ::Xml_obj::Element)) {
HXLINE(  75)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + element1->nodeType));
            					}
HXDLIN(  75)					_hx_tmp3 = element1->nodeName;
            				}
HXDLIN(  75)				if ((_hx_tmp3 == HX_("val",e1,de,59,00))) {
HXLINE(  75)					_hx_tmp2 = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(element1,HX_("id",db,5b,00,00));
            				}
            				else {
HXLINE(  75)					_hx_tmp2 = false;
            				}
HXDLIN(  75)				if (_hx_tmp2) {
HXLINE(  75)					_hx_tmp1 = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(element1,HX_("type",ba,f2,08,4d));
            				}
            				else {
HXLINE(  75)					_hx_tmp1 = false;
            				}
HXDLIN(  75)				if (_hx_tmp1) {
HXLINE(  75)					_hx_tmp = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(element1,HX_("value",71,7f,b8,31));
            				}
            				else {
HXLINE(  75)					_hx_tmp = false;
            				}
HXDLIN(  75)				if (_hx_tmp) {
HXLINE(  76)					::String _hx_switch_0 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("type",ba,f2,08,4d));
            					if (  (_hx_switch_0==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE(  78)						bool _hx_const = this->parseBool(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("value",71,7f,b8,31)));
HXLINE(  79)						{
HXLINE(  79)							::Dynamic this1 = this->values;
HXDLIN(  79)							( ( ::haxe::ds::StringMap)(this1) )->set(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("id",db,5b,00,00)),_hx_const);
            						}
HXLINE(  77)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("Float",7c,35,c4,95)) ){
HXLINE(  85)						Float const1 = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("value",71,7f,b8,31)));
HXLINE(  86)						{
HXLINE(  86)							::Dynamic this2 = this->values;
HXDLIN(  86)							( ( ::haxe::ds::StringMap)(this2) )->set(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("id",db,5b,00,00)),const1);
            						}
HXLINE(  84)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("Int",cf,c4,37,00)) ){
HXLINE(  81)						int const2 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("value",71,7f,b8,31)))) );
HXLINE(  82)						{
HXLINE(  82)							::Dynamic this3 = this->values;
HXDLIN(  82)							( ( ::haxe::ds::StringMap)(this3) )->set(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("id",db,5b,00,00)),const2);
            						}
HXLINE(  80)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("String",f1,9c,c4,45)) ){
HXLINE(  89)						::String const3 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("value",71,7f,b8,31));
HXLINE(  90)						{
HXLINE(  90)							::Dynamic this4 = this->values;
HXDLIN(  90)							( ( ::haxe::ds::StringMap)(this4) )->set(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(element1,HX_("id",db,5b,00,00)),const3);
            						}
HXLINE(  88)						goto _hx_goto_5;
            					}
            					_hx_goto_5:;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,loadValues,(void))

void Stage_obj::spawn( ::entity::group::TypedGroup container,::String layerId){
            	HX_STACKFRAME(&_hx_pos_3b531b8d6639760a_96_spawn)
HXLINE(  97)		::Array< ::Dynamic> layerNodes = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(this->fastXml,HX_("layer",d1,81,c0,6f));
HXLINE(  98)		{
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			while((_g < layerNodes->length)){
HXLINE(  98)				 ::Xml layer = layerNodes->__get(_g).StaticCast<  ::Xml >();
HXDLIN(  98)				_g = (_g + 1);
HXLINE(  99)				if ((::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(layer,HX_("id",db,5b,00,00)) != layerId)) {
HXLINE(  99)					continue;
            				}
HXLINE( 101)				{
HXLINE( 101)					 ::Dynamic element = layer->elements();
HXDLIN( 101)					while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 101)						 ::Xml element1 = ( ( ::Xml)(element->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 102)						::String _g1;
HXDLIN( 102)						if ((element1->nodeType == ::Xml_obj::Document)) {
HXLINE( 102)							_g1 = HX_("Document",3b,ab,c4,74);
            						}
            						else {
HXLINE( 102)							if ((element1->nodeType != ::Xml_obj::Element)) {
HXLINE( 102)								HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + element1->nodeType));
            							}
HXDLIN( 102)							_g1 = element1->nodeName;
            						}
HXLINE( 104)						return;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,spawn,(void))

bool Stage_obj::parseBool(::String value){
            	HX_STACKFRAME(&_hx_pos_3b531b8d6639760a_133_parseBool)
HXDLIN( 133)		bool _hx_tmp;
HXDLIN( 133)		if ((value != HX_("false",a3,35,4f,fb))) {
HXDLIN( 133)			_hx_tmp = hx::IsEq( ::Std_obj::parseInt(value),0 );
            		}
            		else {
HXDLIN( 133)			_hx_tmp = true;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 134)			return false;
            		}
            		else {
HXLINE( 136)			return true;
            		}
HXLINE( 133)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,parseBool,return )


hx::ObjectPtr< Stage_obj > Stage_obj::__new(::String file) {
	hx::ObjectPtr< Stage_obj > __this = new Stage_obj();
	__this->__construct(file);
	return __this;
}

hx::ObjectPtr< Stage_obj > Stage_obj::__alloc(hx::Ctx *_hx_ctx,::String file) {
	Stage_obj *__this = (Stage_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stage_obj), true, "world.Stage"));
	*(void **)__this = Stage_obj::_hx_vtable;
	__this->__construct(file);
	return __this;
}

Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(desc,"desc");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(fastXml,"fastXml");
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(desc,"desc");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(fastXml,"fastXml");
}

hx::Val Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return hx::Val( xml ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"desc") ) { return hx::Val( desc ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"spawn") ) { return hx::Val( spawn_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"objects") ) { return hx::Val( objects ); }
		if (HX_FIELD_EQ(inName,"fastXml") ) { return hx::Val( fastXml ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setStage") ) { return hx::Val( setStage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadSucc") ) { return hx::Val( loadSucc_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { return hx::Val( parseBool_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadValues") ) { return hx::Val( loadValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"desc") ) { desc=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fastXml") ) { fastXml=inValue.Cast<  ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("desc",51,5e,66,42));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("xml",d7,6d,5b,00));
	outFields->push(HX_("fastXml",9b,ec,2f,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stage_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stage_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Stage_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsString,(int)offsetof(Stage_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsString,(int)offsetof(Stage_obj,desc),HX_("desc",51,5e,66,42)},
	{hx::fsString,(int)offsetof(Stage_obj,version),HX_("version",18,e7,f1,7c)},
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Stage_obj,values),HX_("values",e2,03,b7,4f)},
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Stage_obj,objects),HX_("objects",d4,68,4f,82)},
	{hx::fsObject /*  ::Xml */ ,(int)offsetof(Stage_obj,xml),HX_("xml",d7,6d,5b,00)},
	{hx::fsObject /*  ::Xml */ ,(int)offsetof(Stage_obj,fastXml),HX_("fastXml",9b,ec,2f,de)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stage_obj_sStaticStorageInfo = 0;
#endif

static ::String Stage_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("name",4b,72,ff,48),
	HX_("desc",51,5e,66,42),
	HX_("version",18,e7,f1,7c),
	HX_("values",e2,03,b7,4f),
	HX_("objects",d4,68,4f,82),
	HX_("xml",d7,6d,5b,00),
	HX_("fastXml",9b,ec,2f,de),
	HX_("setStage",bc,d3,3f,92),
	HX_("loadSucc",08,79,fc,bc),
	HX_("loadValues",a8,32,e2,04),
	HX_("spawn",3b,9e,66,81),
	HX_("parseBool",fd,d5,c1,c8),
	::String(null()) };

hx::Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	Stage_obj _hx_dummy;
	Stage_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("world.Stage",82,93,7c,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace world
