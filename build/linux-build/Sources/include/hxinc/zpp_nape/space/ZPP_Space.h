// Generated by Haxe 4.0.0-preview.5
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#define INCLUDED_zpp_nape_space_ZPP_Space

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerList)
HX_DECLARE_CLASS2(nape,callbacks,PreCallback)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,ConvexResultList)
HX_DECLARE_CLASS2(nape,geom,Ray)
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(nape,space,Broadphase)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Callback)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionFilter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Broadphase)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CallbackSet)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CbSetManager)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Island)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ToiEvent)

namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES ZPP_Space_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_Space_obj OBJ_;
		ZPP_Space_obj();

	public:
		enum { _hx_ClassId = 0x54279208 };

		void __construct( ::zpp_nape::geom::ZPP_Vec2 gravity, ::nape::space::Broadphase broadphase);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.space.ZPP_Space")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.space.ZPP_Space"); }
		static hx::ObjectPtr< ZPP_Space_obj > __new( ::zpp_nape::geom::ZPP_Vec2 gravity, ::nape::space::Broadphase broadphase);
		static hx::ObjectPtr< ZPP_Space_obj > __alloc(hx::Ctx *_hx_ctx, ::zpp_nape::geom::ZPP_Vec2 gravity, ::nape::space::Broadphase broadphase);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Space_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZPP_Space",41,f4,d2,17); }

		 ::nape::space::Space outer;
		 ::Dynamic userData;
		Float gravityx;
		Float gravityy;
		 ::nape::geom::Vec2 wrap_gravity;
		void getgravity();
		::Dynamic getgravity_dyn();

		void gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		::Dynamic gravity_invalidate_dyn();

		void gravity_validate();
		::Dynamic gravity_validate_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_Body bodies;
		 ::nape::phys::BodyList wrap_bodies;
		 ::zpp_nape::util::ZNPList_ZPP_Compound compounds;
		 ::nape::phys::CompoundList wrap_compounds;
		 ::zpp_nape::util::ZNPList_ZPP_Constraint constraints;
		 ::nape::constraint::ConstraintList wrap_constraints;
		 ::zpp_nape::util::ZNPList_ZPP_Body kinematics;
		 ::zpp_nape::space::ZPP_Broadphase bphase;
		 ::nape::phys::Body _hx___static;
		Float global_lin_drag;
		Float global_ang_drag;
		int stamp;
		bool midstep;
		Float time;
		bool sortcontacts;
		 ::zpp_nape::util::ZNPList_ZPP_ColArbiter c_arbiters_true;
		 ::zpp_nape::util::ZNPList_ZPP_ColArbiter c_arbiters_false;
		 ::zpp_nape::util::ZNPList_ZPP_FluidArbiter f_arbiters;
		 ::zpp_nape::util::ZNPList_ZPP_SensorArbiter s_arbiters;
		 ::nape::dynamics::ArbiterList wrap_arbiters;
		 ::zpp_nape::util::ZNPList_ZPP_Body live;
		 ::nape::phys::BodyList wrap_live;
		 ::zpp_nape::util::ZNPList_ZPP_Constraint live_constraints;
		 ::nape::constraint::ConstraintList wrap_livecon;
		 ::zpp_nape::util::ZNPList_ZPP_Body staticsleep;
		 ::zpp_nape::space::ZPP_Island islands;
		 ::zpp_nape::util::ZNPList_ZPP_Listener listeners;
		 ::nape::callbacks::ListenerList wrap_listeners;
		 ::zpp_nape::callbacks::ZPP_Callback callbacks;
		 ::zpp_nape::space::ZPP_CallbackSet callbackset_list;
		 ::zpp_nape::space::ZPP_CbSetManager cbsets;
		void clear();
		::Dynamic clear_dyn();

		bool bodies_adder( ::nape::phys::Body x);
		::Dynamic bodies_adder_dyn();

		void bodies_subber( ::nape::phys::Body x);
		::Dynamic bodies_subber_dyn();

		void bodies_modifiable();
		::Dynamic bodies_modifiable_dyn();

		bool compounds_adder( ::nape::phys::Compound x);
		::Dynamic compounds_adder_dyn();

		void compounds_subber( ::nape::phys::Compound x);
		::Dynamic compounds_subber_dyn();

		void compounds_modifiable();
		::Dynamic compounds_modifiable_dyn();

		bool constraints_adder( ::nape::constraint::Constraint x);
		::Dynamic constraints_adder_dyn();

		void constraints_subber( ::nape::constraint::Constraint x);
		::Dynamic constraints_subber_dyn();

		void constraints_modifiable();
		::Dynamic constraints_modifiable_dyn();

		bool listeners_adder( ::nape::callbacks::Listener x);
		::Dynamic listeners_adder_dyn();

		void listeners_subber( ::nape::callbacks::Listener x);
		::Dynamic listeners_subber_dyn();

		void listeners_modifiable();
		::Dynamic listeners_modifiable_dyn();

		void revoke_listener( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		::Dynamic revoke_listener_dyn();

		void unrevoke_listener( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		::Dynamic unrevoke_listener_dyn();

		void addListener( ::zpp_nape::callbacks::ZPP_Listener x);
		::Dynamic addListener_dyn();

		void remListener( ::zpp_nape::callbacks::ZPP_Listener x);
		::Dynamic remListener_dyn();

		void add_callbackset( ::zpp_nape::space::ZPP_CallbackSet cb);
		::Dynamic add_callbackset_dyn();

		void remove_callbackset( ::zpp_nape::space::ZPP_CallbackSet cb);
		::Dynamic remove_callbackset_dyn();

		void transmitType( ::zpp_nape::phys::ZPP_Body p,int new_type);
		::Dynamic transmitType_dyn();

		void added_shape( ::zpp_nape::shape::ZPP_Shape s,hx::Null< bool >  dontwake);
		::Dynamic added_shape_dyn();

		void removed_shape( ::zpp_nape::shape::ZPP_Shape s,hx::Null< bool >  deleting);
		::Dynamic removed_shape_dyn();

		void addConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic addConstraint_dyn();

		void remConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic remConstraint_dyn();

		void addCompound( ::zpp_nape::phys::ZPP_Compound x);
		::Dynamic addCompound_dyn();

		void remCompound( ::zpp_nape::phys::ZPP_Compound x);
		::Dynamic remCompound_dyn();

		void addBody( ::zpp_nape::phys::ZPP_Body body,hx::Null< int >  flag);
		::Dynamic addBody_dyn();

		void remBody( ::zpp_nape::phys::ZPP_Body body,hx::Null< int >  flag);
		::Dynamic remBody_dyn();

		 ::nape::shape::ShapeList shapesUnderPoint(Float x,Float y, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::shape::ShapeList output);
		::Dynamic shapesUnderPoint_dyn();

		 ::nape::phys::BodyList bodiesUnderPoint(Float x,Float y, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::phys::BodyList output);
		::Dynamic bodiesUnderPoint_dyn();

		 ::nape::shape::ShapeList shapesInAABB( ::nape::geom::AABB aabb,bool strict,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::shape::ShapeList output);
		::Dynamic shapesInAABB_dyn();

		 ::nape::phys::BodyList bodiesInAABB( ::nape::geom::AABB aabb,bool strict,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::phys::BodyList output);
		::Dynamic bodiesInAABB_dyn();

		 ::nape::shape::ShapeList shapesInCircle( ::nape::geom::Vec2 pos,Float rad,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::shape::ShapeList output);
		::Dynamic shapesInCircle_dyn();

		 ::nape::phys::BodyList bodiesInCircle( ::nape::geom::Vec2 pos,Float rad,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::phys::BodyList output);
		::Dynamic bodiesInCircle_dyn();

		 ::nape::shape::ShapeList shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::shape::ShapeList output);
		::Dynamic shapesInShape_dyn();

		 ::nape::phys::BodyList bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool cont, ::zpp_nape::dynamics::ZPP_InteractionFilter filter, ::nape::phys::BodyList output);
		::Dynamic bodiesInShape_dyn();

		 ::nape::geom::RayResult rayCast( ::nape::geom::Ray ray,bool inner, ::nape::dynamics::InteractionFilter filter);
		::Dynamic rayCast_dyn();

		 ::nape::geom::RayResultList rayMultiCast( ::nape::geom::Ray ray,bool inner, ::nape::dynamics::InteractionFilter filter, ::nape::geom::RayResultList output);
		::Dynamic rayMultiCast_dyn();

		 ::nape::shape::ShapeList convexShapeList;
		 ::nape::geom::ConvexResult convexCast( ::zpp_nape::shape::ZPP_Shape shape,Float deltaTime, ::nape::dynamics::InteractionFilter filter,bool dynamics);
		::Dynamic convexCast_dyn();

		void prepareCast( ::zpp_nape::shape::ZPP_Shape s);
		::Dynamic prepareCast_dyn();

		 ::nape::geom::ConvexResultList convexMultiCast( ::zpp_nape::shape::ZPP_Shape shape,Float deltaTime, ::nape::dynamics::InteractionFilter filter,bool dynamics, ::nape::geom::ConvexResultList output);
		::Dynamic convexMultiCast_dyn();

		 ::zpp_nape::callbacks::ZPP_Callback push_callback( ::zpp_nape::callbacks::ZPP_Listener i);
		::Dynamic push_callback_dyn();

		Float pre_dt;
		void step(Float deltaTime,int velocityIterations,int positionIterations);
		::Dynamic step_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_ToiEvent toiEvents;
		void continuousCollisions(Float deltaTime);
		::Dynamic continuousCollisions_dyn();

		 ::zpp_nape::dynamics::ZPP_Arbiter continuousEvent( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2,bool stat, ::zpp_nape::dynamics::ZPP_Arbiter in_arb,bool _);
		::Dynamic continuousEvent_dyn();

		void bodyCbWake( ::zpp_nape::phys::ZPP_Body b);
		::Dynamic bodyCbWake_dyn();

		void bodyCbSleep( ::zpp_nape::phys::ZPP_Body b);
		::Dynamic bodyCbSleep_dyn();

		void constraintCbWake( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic constraintCbWake_dyn();

		void constraintCbSleep( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic constraintCbSleep_dyn();

		void constraintCbBreak( ::zpp_nape::constraint::ZPP_Constraint con);
		::Dynamic constraintCbBreak_dyn();

		void nullListenerType( ::zpp_nape::callbacks::ZPP_CbSet cb1, ::zpp_nape::callbacks::ZPP_CbSet cb2);
		::Dynamic nullListenerType_dyn();

		void nullInteractorType( ::zpp_nape::phys::ZPP_Interactor intx, ::zpp_nape::phys::ZPP_Interactor me);
		::Dynamic nullInteractorType_dyn();

		void freshListenerType( ::zpp_nape::callbacks::ZPP_CbSet cb1, ::zpp_nape::callbacks::ZPP_CbSet cb2);
		::Dynamic freshListenerType_dyn();

		void freshInteractorType( ::zpp_nape::phys::ZPP_Interactor intx, ::zpp_nape::phys::ZPP_Interactor me);
		::Dynamic freshInteractorType_dyn();

		void wakeCompound( ::zpp_nape::phys::ZPP_Compound x);
		::Dynamic wakeCompound_dyn();

		void wakeIsland( ::zpp_nape::space::ZPP_Island i);
		::Dynamic wakeIsland_dyn();

		void non_inlined_wake( ::zpp_nape::phys::ZPP_Body o,hx::Null< bool >  fst);
		::Dynamic non_inlined_wake_dyn();

		void really_wake( ::zpp_nape::phys::ZPP_Body o,hx::Null< bool >  fst);
		::Dynamic really_wake_dyn();

		bool wake_constraint( ::zpp_nape::constraint::ZPP_Constraint con,hx::Null< bool >  fst);
		::Dynamic wake_constraint_dyn();

		void doForests(Float dt);
		::Dynamic doForests_dyn();

		void sleepArbiters();
		::Dynamic sleepArbiters_dyn();

		void static_validation( ::zpp_nape::phys::ZPP_Body body);
		::Dynamic static_validation_dyn();

		void validation();
		::Dynamic validation_dyn();

		void updateVel(Float dt);
		::Dynamic updateVel_dyn();

		void updatePos(Float dt);
		::Dynamic updatePos_dyn();

		bool continuous;
		bool presteparb( ::zpp_nape::dynamics::ZPP_Arbiter arb,Float dt, ::Dynamic cont);
		::Dynamic presteparb_dyn();

		void prestep(Float dt);
		::Dynamic prestep_dyn();

		void warmStart();
		::Dynamic warmStart_dyn();

		void iterateVel(int times);
		::Dynamic iterateVel_dyn();

		void iteratePos(int times);
		::Dynamic iteratePos_dyn();

		bool group_ignore( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		::Dynamic group_ignore_dyn();

		int interactionType( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2, ::zpp_nape::phys::ZPP_Body b1, ::zpp_nape::phys::ZPP_Body b2);
		::Dynamic interactionType_dyn();

		 ::nape::callbacks::PreCallback precb;
		 ::zpp_nape::util::ZNPList_ZPP_InteractionListener prelisteners;
		 ::zpp_nape::dynamics::ZPP_Arbiter narrowPhase( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2,bool stat, ::zpp_nape::dynamics::ZPP_Arbiter in_arb,bool continuous);
		::Dynamic narrowPhase_dyn();

		 ::zpp_nape::util::ZNPList_ZPP_Interactor mrca1;
		 ::zpp_nape::util::ZNPList_ZPP_Interactor mrca2;
		void MRCA_chains( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		::Dynamic MRCA_chains_dyn();

		void inlined_MRCA_chains( ::zpp_nape::shape::ZPP_Shape s1, ::zpp_nape::shape::ZPP_Shape s2);
		::Dynamic inlined_MRCA_chains_dyn();

};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_Space */ 
