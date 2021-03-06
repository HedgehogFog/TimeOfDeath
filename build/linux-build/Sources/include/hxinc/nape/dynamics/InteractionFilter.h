// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#define INCLUDED_nape_dynamics_InteractionFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionFilter)

namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES InteractionFilter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef InteractionFilter_obj OBJ_;
		InteractionFilter_obj();

	public:
		enum { _hx_ClassId = 0x03d87446 };

		void __construct(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.InteractionFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.dynamics.InteractionFilter"); }
		static hx::ObjectPtr< InteractionFilter_obj > __new(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask);
		static hx::ObjectPtr< InteractionFilter_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionFilter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InteractionFilter",0a,35,87,19); }

		 ::zpp_nape::dynamics::ZPP_InteractionFilter zpp_inner;
		 ::Dynamic get_userData();
		::Dynamic get_userData_dyn();

		 ::nape::shape::ShapeList get_shapes();
		::Dynamic get_shapes_dyn();

		int get_collisionGroup();
		::Dynamic get_collisionGroup_dyn();

		int set_collisionGroup(int collisionGroup);
		::Dynamic set_collisionGroup_dyn();

		int get_collisionMask();
		::Dynamic get_collisionMask_dyn();

		int set_collisionMask(int collisionMask);
		::Dynamic set_collisionMask_dyn();

		int get_sensorGroup();
		::Dynamic get_sensorGroup_dyn();

		int set_sensorGroup(int sensorGroup);
		::Dynamic set_sensorGroup_dyn();

		int get_sensorMask();
		::Dynamic get_sensorMask_dyn();

		int set_sensorMask(int sensorMask);
		::Dynamic set_sensorMask_dyn();

		int get_fluidGroup();
		::Dynamic get_fluidGroup_dyn();

		int set_fluidGroup(int fluidGroup);
		::Dynamic set_fluidGroup_dyn();

		int get_fluidMask();
		::Dynamic get_fluidMask_dyn();

		int set_fluidMask(int fluidMask);
		::Dynamic set_fluidMask_dyn();

		bool shouldCollide( ::nape::dynamics::InteractionFilter filter);
		::Dynamic shouldCollide_dyn();

		bool shouldSense( ::nape::dynamics::InteractionFilter filter);
		::Dynamic shouldSense_dyn();

		bool shouldFlow( ::nape::dynamics::InteractionFilter filter);
		::Dynamic shouldFlow_dyn();

		 ::nape::dynamics::InteractionFilter copy();
		::Dynamic copy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionFilter */ 
