// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_StringBuf
#include <hxinc/StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_115_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",115,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_153_htmlEscape,"StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",153,0x0bf9b1f0)
static const ::String _hx_array_data_0363db6a_3[] = {
	HX_("&quot;",2c,d9,81,8f),
};
static const ::String _hx_array_data_0363db6a_4[] = {
	HX_("&amp;",dd,d4,aa,21),
};
static const ::String _hx_array_data_0363db6a_5[] = {
	HX_("&#039;",62,26,77,78),
};
static const ::String _hx_array_data_0363db6a_6[] = {
	HX_("&lt;",4d,74,70,19),
};
static const ::String _hx_array_data_0363db6a_7[] = {
	HX_("&gt;",08,a9,6c,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_223_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",223,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_259_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",259,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_276_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",276,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_301_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",301,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_329_trim,"StringTools","trim",0x2908d066,"StringTools.trim","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",329,0x0bf9b1f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e70728332d57d311_414_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","/home/hedgehog/Program/KodeStudio-Linux/resources/app/kodeExtensions/kha/Kha/Tools/haxe/std/StringTools.hx",414,0x0bf9b1f0)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_115_urlDecode)
HXDLIN( 115)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

::String StringTools_obj::htmlEscape(::String s, ::Dynamic quotes){
            	HX_GC_STACKFRAME(&_hx_pos_e70728332d57d311_153_htmlEscape)
HXLINE( 154)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 155)		{
HXLINE( 155)			int _g_offset = 0;
HXDLIN( 155)			::String _g_s = s;
HXDLIN( 155)			while((_g_offset < _g_s.length)){
HXLINE( 155)				_g_offset = (_g_offset + 1);
HXDLIN( 155)				int c = _g_s.cca((_g_offset - 1));
HXDLIN( 155)				bool _hx_tmp;
HXDLIN( 155)				if ((c >= 55296)) {
HXLINE( 155)					_hx_tmp = (c < 56319);
            				}
            				else {
HXLINE( 155)					_hx_tmp = false;
            				}
HXDLIN( 155)				if (_hx_tmp) {
HXLINE( 155)					_g_offset = (_g_offset + 1);
HXLINE(  57)					c = (((c - 55232) << 10) | (_g_s.cca((_g_offset - 1)) & 1023));
            				}
HXLINE( 155)				int code = c;
HXLINE( 156)				switch((int)(code)){
            					case (int)34: {
HXLINE( 160)						if (( (bool)(quotes) )) {
HXLINE( 160)							if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 160)								buf->flush();
            							}
HXDLIN( 160)							if (hx::IsNull( buf->b )) {
HXLINE( 160)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_3,1);
            							}
            							else {
HXLINE( 160)								buf->b->push(HX_("&quot;",2c,d9,81,8f));
            							}
            						}
            						else {
HXLINE( 162)							if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 162)							buf->charBuf->push(code);
            						}
            					}
            					break;
            					case (int)38: {
HXLINE( 157)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 157)							buf->flush();
            						}
HXDLIN( 157)						if (hx::IsNull( buf->b )) {
HXLINE( 157)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_4,1);
            						}
            						else {
HXLINE( 157)							buf->b->push(HX_("&amp;",dd,d4,aa,21));
            						}
            					}
            					break;
            					case (int)39: {
HXLINE( 161)						if (( (bool)(quotes) )) {
HXLINE( 161)							if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 161)								buf->flush();
            							}
HXDLIN( 161)							if (hx::IsNull( buf->b )) {
HXLINE( 161)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_5,1);
            							}
            							else {
HXLINE( 161)								buf->b->push(HX_("&#039;",62,26,77,78));
            							}
            						}
            						else {
HXLINE( 162)							if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 162)							buf->charBuf->push(code);
            						}
            					}
            					break;
            					case (int)60: {
HXLINE( 158)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 158)							buf->flush();
            						}
HXDLIN( 158)						if (hx::IsNull( buf->b )) {
HXLINE( 158)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_6,1);
            						}
            						else {
HXLINE( 158)							buf->b->push(HX_("&lt;",4d,74,70,19));
            						}
            					}
            					break;
            					case (int)62: {
HXLINE( 159)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 159)							buf->flush();
            						}
HXDLIN( 159)						if (hx::IsNull( buf->b )) {
HXLINE( 159)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_7,1);
            						}
            						else {
HXLINE( 159)							buf->b->push(HX_("&gt;",08,a9,6c,19));
            						}
            					}
            					break;
            					default:{
HXLINE( 162)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 162)						buf->charBuf->push(code);
            					}
            				}
            			}
            		}
HXLINE( 165)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_223_endsWith)
HXLINE( 229)		if ((s.length < end.length)) {
HXLINE( 230)			return false;
            		}
HXLINE( 231)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 231)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 232)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			int _g1 = end.length;
HXDLIN( 233)			while((_g < _g1)){
HXLINE( 233)				_g = (_g + 1);
HXDLIN( 233)				int i = (_g - 1);
HXLINE( 234)				char & _hx_tmp = p01->at(i);
HXDLIN( 234)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 234)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 235)					return false;
            				}
            			}
            		}
HXLINE( 236)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_259_isSpace)
HXLINE( 263)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if (hx::IsGreater( c,8 )) {
HXLINE( 264)			_hx_tmp = hx::IsLess( c,14 );
            		}
            		else {
HXLINE( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (!(_hx_tmp)) {
HXLINE( 264)			return hx::IsEq( c,32 );
            		}
            		else {
HXLINE( 264)			return true;
            		}
HXDLIN( 264)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_276_ltrim)
HXLINE( 280)		int l = s.length;
HXLINE( 281)		int r = 0;
HXLINE( 282)		while(true){
HXLINE( 282)			bool _hx_tmp;
HXDLIN( 282)			if ((r < l)) {
HXLINE( 282)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 282)				_hx_tmp = false;
            			}
HXDLIN( 282)			if (!(_hx_tmp)) {
HXLINE( 282)				goto _hx_goto_11;
            			}
HXLINE( 283)			r = (r + 1);
            		}
            		_hx_goto_11:;
HXLINE( 285)		if ((r > 0)) {
HXLINE( 286)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 288)			return s;
            		}
HXLINE( 285)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_301_rtrim)
HXLINE( 305)		int l = s.length;
HXLINE( 306)		int r = 0;
HXLINE( 307)		while(true){
HXLINE( 307)			bool _hx_tmp;
HXDLIN( 307)			if ((r < l)) {
HXLINE( 307)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - 1));
            			}
            			else {
HXLINE( 307)				_hx_tmp = false;
            			}
HXDLIN( 307)			if (!(_hx_tmp)) {
HXLINE( 307)				goto _hx_goto_13;
            			}
HXLINE( 308)			r = (r + 1);
            		}
            		_hx_goto_13:;
HXLINE( 310)		if ((r > 0)) {
HXLINE( 311)			return s.substr(0,(l - r));
            		}
            		else {
HXLINE( 313)			return s;
            		}
HXLINE( 310)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_329_trim)
HXDLIN( 329)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_e70728332d57d311_414_hex)
HXLINE( 420)		::String s = HX_("",00,00,00,00);
HXLINE( 421)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 422)		while(true){
HXLINE( 423)			s = (hexChars.charAt((n & 15)) + s);
HXLINE( 424)			n = hx::UShr(n,4);
HXLINE( 422)			if (!((n > 0))) {
HXLINE( 422)				goto _hx_goto_16;
            			}
            		}
            		_hx_goto_16:;
HXLINE( 435)		if (hx::IsNotNull( digits )) {
HXLINE( 436)			while(hx::IsLess( s.length,digits )){
HXLINE( 437)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 439)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlDecode",fd,b9,5b,05),
	HX_("htmlEscape",4c,af,9b,a8),
	HX_("endsWith",5e,7a,b6,db),
	HX_("isSpace",7c,30,ec,1d),
	HX_("ltrim",4e,43,4a,7c),
	HX_("rtrim",54,be,b1,f0),
	HX_("trim",e2,9c,03,4d),
	HX_("hex",db,42,4f,00),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

