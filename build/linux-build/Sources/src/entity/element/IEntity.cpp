// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_entity_element_IEntity
#include <hxinc/entity/element/IEntity.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

namespace entity{
namespace element{


static ::String IEntity_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("active",c6,41,46,16),
	HX_("visible",72,78,24,a3),
	HX_("alive",cd,63,91,21),
	HX_("draw",04,2c,70,42),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	::String(null()) };

hx::Class IEntity_obj::__mClass;

void IEntity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("entity.element.IEntity",4f,dd,0a,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(IEntity_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x340cedf3 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entity
} // end namespace element