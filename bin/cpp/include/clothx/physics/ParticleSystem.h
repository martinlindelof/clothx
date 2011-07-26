#ifndef INCLUDED_clothx_physics_ParticleSystem
#define INCLUDED_clothx_physics_ParticleSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,physics,Attraction)
HX_DECLARE_CLASS2(clothx,physics,Force)
HX_DECLARE_CLASS2(clothx,physics,Integrator)
HX_DECLARE_CLASS2(clothx,physics,Particle)
HX_DECLARE_CLASS2(clothx,physics,ParticleSystem)
HX_DECLARE_CLASS2(clothx,physics,Spring)
HX_DECLARE_CLASS2(nme,geom,Vector3D)
namespace clothx{
namespace physics{


class ParticleSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleSystem_obj OBJ_;
		ParticleSystem_obj();
		Void __construct(::nme::geom::Vector3D gravity,Dynamic __o_drag);

	public:
		static hx::ObjectPtr< ParticleSystem_obj > __new(::nme::geom::Vector3D gravity,Dynamic __o_drag);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ParticleSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParticleSystem"); }

		::clothx::physics::Integrator integrator; /* REM */ 
		::nme::geom::Vector3D gravity; /* REM */ 
		double drag; /* REM */ 
		Array< ::clothx::physics::Particle > particles; /* REM */ 
		Array< ::clothx::physics::Spring > springs; /* REM */ 
		Array< ::clothx::physics::Attraction > attractions; /* REM */ 
		Array< ::clothx::physics::Force > custom; /* REM */ 
		bool hasDeadParticles; /* REM */ 
		virtual Void setIntegrator( int integrator);
		Dynamic setIntegrator_dyn();

		virtual Void setGravity( ::nme::geom::Vector3D gravity);
		Dynamic setGravity_dyn();

		virtual Void setDrag( double d);
		Dynamic setDrag_dyn();

		virtual Void tick( Dynamic t);
		Dynamic tick_dyn();

		virtual ::clothx::physics::Particle makeParticle( Dynamic mass,::nme::geom::Vector3D position);
		Dynamic makeParticle_dyn();

		virtual ::clothx::physics::Spring makeSpring( ::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength);
		Dynamic makeSpring_dyn();

		virtual ::clothx::physics::Attraction makeAttraction( ::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance);
		Dynamic makeAttraction_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void applyForces( );
		Dynamic applyForces_dyn();

		virtual Void clearForces( );
		Dynamic clearForces_dyn();

		virtual int numberOfParticles( );
		Dynamic numberOfParticles_dyn();

		virtual int numberOfSprings( );
		Dynamic numberOfSprings_dyn();

		virtual int numberOfAttractions( );
		Dynamic numberOfAttractions_dyn();

		virtual ::clothx::physics::Particle getParticle( int i);
		Dynamic getParticle_dyn();

		virtual ::clothx::physics::Spring getSpring( int i);
		Dynamic getSpring_dyn();

		virtual ::clothx::physics::Attraction getAttraction( int i);
		Dynamic getAttraction_dyn();

		virtual Void addCustomForce( ::clothx::physics::Force f);
		Dynamic addCustomForce_dyn();

		virtual int numberOfCustomForces( );
		Dynamic numberOfCustomForces_dyn();

		virtual ::clothx::physics::Force getCustomForce( int i);
		Dynamic getCustomForce_dyn();

		virtual Void removeCustomForce( int i);
		Dynamic removeCustomForce_dyn();

		virtual bool removeCustomForceByReference( ::clothx::physics::Force f);
		Dynamic removeCustomForceByReference_dyn();

		virtual Void removeSpring( int i);
		Dynamic removeSpring_dyn();

		virtual bool removeSpringByReference( ::clothx::physics::Spring s);
		Dynamic removeSpringByReference_dyn();

		virtual Void removeAttraction( int i);
		Dynamic removeAttraction_dyn();

		virtual bool removeAttractionByReference( ::clothx::physics::Attraction s);
		Dynamic removeAttractionByReference_dyn();

		virtual Void removeParticle( int i);
		Dynamic removeParticle_dyn();

		virtual bool removeParticleByReference( ::clothx::physics::Particle p);
		Dynamic removeParticleByReference_dyn();

		static int RUNGE_KUTTA; /* REM */ 
		static int MODIFIED_EULER; /* REM */ 
};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_ParticleSystem */ 
