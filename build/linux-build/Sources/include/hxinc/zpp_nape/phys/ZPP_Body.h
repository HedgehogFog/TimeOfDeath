// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#define INCLUDED_zpp_nape_phys_ZPP_Body

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <hxinc/zpp_nape/phys/ZPP_Interactor.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,BodyType)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ShapeList)

namespace zpp_nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES ZPP_Body_obj : public  ::zpp_nape::phys::ZPP_Interactor_obj
{
	public:
		typedef  ::zpp_nape::phys::ZPP_Interactor_obj super;
		typedef ZPP_Body_obj OBJ_;
		ZPP_Body_obj();

	public:
		enum { _hx_ClassId = 0x4ef3cd4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.phys.ZPP_Body")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.phys.ZPP_Body"); }
		static hx::ObjectPtr< ZPP_Body_obj > __new();
		static hx::ObjectPtr< ZPP_Body_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Body_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Body",87,db,03,f6); }

		static void __boot();
		static ::Array< ::Dynamic> types;
		static  ::zpp_nape::util::ZNPList_ZPP_Body bodystack;
		static  ::zpp_nape::util::ZPP_Set_ZPP_Body bodyset;
		static bool bodysetlt( ::zpp_nape::phys::ZPP_Body a, ::zpp_nape::phys::ZPP_Body b);
		static ::Dynamic bodysetlt_dyn();

		static int cur_graph_depth;
		static  ::nape::phys::Body _hx___static();
		static ::Dynamic _hx___static_dyn();

		 ::nape::phys::Body outer;
		bool world;
		int type;
		bool isStatic();
		::Dynamic isStatic_dyn();

		bool isDynamic();
		::Dynamic isDynamic_dyn();

		bool isKinematic();
		::Dynamic isKinematic_dyn();

		void invalidate_type();
		::Dynamic invalidate_type_dyn();

		 ::zpp_nape::phys::ZPP_Compound compound;
		 ::zpp_nape::util::ZNPList_ZPP_Shape shapes;
		 ::nape::shape::ShapeList wrap_shapes;
		void invalidate_shapes();
		::Dynamic invalidate_shapes_dyn();

		 ::zpp_nape::space::ZPP_Space space;
		 ::zpp_nape::util::ZNPList_ZPP_Arbiter arbiters;
		 ::nape::dynamics::ArbiterList wrap_arbiters;
		 ::zpp_nape::util::ZNPList_ZPP_Constraint constraints;
		 ::nape::constraint::ConstraintList wrap_constraints;
		 ::zpp_nape::space::ZPP_Component component;
		int graph_depth;
		void init_bodysetlist();
		::Dynamic init_bodysetlist_dyn();

		void connectedBodies_cont( ::nape::phys::Body b);
		::Dynamic connectedBodies_cont_dyn();

		 ::nape::phys::BodyList connectedBodies(int depth, ::nape::phys::BodyList output);
		::Dynamic connectedBodies_dyn();

		 ::nape::phys::BodyList interactingBodies(int arbiter_type,int depth, ::nape::phys::BodyList output);
		::Dynamic interactingBodies_dyn();

		bool atRest(Float dt);
		::Dynamic atRest_dyn();

		void refreshArbiters();
		::Dynamic refreshArbiters_dyn();

		Float sweepTime;
		Float sweep_angvel;
		bool sweepFrozen;
		Float sweepRadius;
		bool bullet;
		bool bulletEnabled;
		bool disableCCD;
		void sweepIntegrate(Float dt);
		::Dynamic sweepIntegrate_dyn();

		void sweepValidate( ::zpp_nape::shape::ZPP_Shape s);
		::Dynamic sweepValidate_dyn();

		Float pre_posx;
		Float pre_posy;
		Float posx;
		Float posy;
		 ::nape::geom::Vec2 wrap_pos;
		Float velx;
		Float vely;
		 ::nape::geom::Vec2 wrap_vel;
		Float forcex;
		Float forcey;
		 ::nape::geom::Vec2 wrap_force;
		Float kinvelx;
		Float kinvely;
		 ::nape::geom::Vec2 wrap_kinvel;
		Float svelx;
		Float svely;
		 ::nape::geom::Vec2 wrap_svel;
		void invalidate_pos();
		::Dynamic invalidate_pos_dyn();

		void pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos);
		::Dynamic pos_invalidate_dyn();

		void pos_validate();
		::Dynamic pos_validate_dyn();

		void vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		::Dynamic vel_invalidate_dyn();

		void vel_validate();
		::Dynamic vel_validate_dyn();

		void kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		::Dynamic kinvel_invalidate_dyn();

		void kinvel_validate();
		::Dynamic kinvel_validate_dyn();

		void svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		::Dynamic svel_invalidate_dyn();

		void svel_validate();
		::Dynamic svel_validate_dyn();

		void force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force);
		::Dynamic force_invalidate_dyn();

		void force_validate();
		::Dynamic force_validate_dyn();

		void setupPosition();
		::Dynamic setupPosition_dyn();

		void setupVelocity();
		::Dynamic setupVelocity_dyn();

		void setupkinvel();
		::Dynamic setupkinvel_dyn();

		void setupsvel();
		::Dynamic setupsvel_dyn();

		void setupForce();
		::Dynamic setupForce_dyn();

		void cvel_validate();
		::Dynamic cvel_validate_dyn();

		 ::nape::geom::Vec3 wrapcvel;
		void setup_cvel();
		::Dynamic setup_cvel_dyn();

		Float angvel;
		Float torque;
		Float kinangvel;
		Float pre_rot;
		Float rot;
		void invalidate_rot();
		::Dynamic invalidate_rot_dyn();

		Float axisx;
		Float axisy;
		bool zip_axis;
		void validate_axis();
		::Dynamic validate_axis_dyn();

		void quick_validate_axis();
		::Dynamic quick_validate_axis_dyn();

		void delta_rot(Float dr);
		::Dynamic delta_rot_dyn();

		bool kinematicDelaySleep;
		Float mass;
		bool zip_mass;
		int massMode;
		Float imass;
		Float smass;
		Float cmass;
		bool nomove;
		void invalidate_mass();
		::Dynamic invalidate_mass_dyn();

		void validate_mass();
		::Dynamic validate_mass_dyn();

		Float gravMass;
		bool zip_gravMass;
		int gravMassMode;
		Float gravMassScale;
		bool zip_gravMassScale;
		void invalidate_gravMass();
		::Dynamic invalidate_gravMass_dyn();

		void validate_gravMass();
		::Dynamic validate_gravMass_dyn();

		void invalidate_gravMassScale();
		::Dynamic invalidate_gravMassScale_dyn();

		void validate_gravMassScale();
		::Dynamic validate_gravMassScale_dyn();

		int inertiaMode;
		Float inertia;
		bool zip_inertia;
		Float cinertia;
		Float iinertia;
		Float sinertia;
		bool norotate;
		void invalidate_inertia();
		::Dynamic invalidate_inertia_dyn();

		void validate_inertia();
		::Dynamic validate_inertia_dyn();

		void invalidate_wake();
		::Dynamic invalidate_wake_dyn();

		 ::zpp_nape::geom::ZPP_AABB aabb;
		bool zip_aabb;
		void validate_aabb();
		::Dynamic validate_aabb_dyn();

		void invalidate_aabb();
		::Dynamic invalidate_aabb_dyn();

		Float localCOMx;
		Float localCOMy;
		bool zip_localCOM;
		Float worldCOMx;
		Float worldCOMy;
		bool zip_worldCOM;
		 ::nape::geom::Vec2 wrap_localCOM;
		 ::nape::geom::Vec2 wrap_worldCOM;
		void invalidate_localCOM();
		::Dynamic invalidate_localCOM_dyn();

		void invalidate_worldCOM();
		::Dynamic invalidate_worldCOM_dyn();

		void validate_localCOM();
		::Dynamic validate_localCOM_dyn();

		void validate_worldCOM();
		::Dynamic validate_worldCOM_dyn();

		void getlocalCOM();
		::Dynamic getlocalCOM_dyn();

		void getworldCOM();
		::Dynamic getworldCOM_dyn();

		void _hx___immutable_midstep(::String name);
		::Dynamic _hx___immutable_midstep_dyn();

		void clear();
		::Dynamic clear_dyn();

		void aabb_validate();
		::Dynamic aabb_validate_dyn();

		bool shapes_adder( ::nape::shape::Shape s);
		::Dynamic shapes_adder_dyn();

		void shapes_subber( ::nape::shape::Shape s);
		::Dynamic shapes_subber_dyn();

		void shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _);
		::Dynamic shapes_invalidate_dyn();

		void shapes_modifiable();
		::Dynamic shapes_modifiable_dyn();

		void addedToSpace();
		::Dynamic addedToSpace_dyn();

		void removedFromSpace();
		::Dynamic removedFromSpace_dyn();

		 ::nape::phys::Body copy();
		::Dynamic copy_dyn();

};

} // end namespace zpp_nape
} // end namespace phys

#endif /* INCLUDED_zpp_nape_phys_ZPP_Body */ 
