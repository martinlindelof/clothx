#ifndef INCLUDED_clothx_physics_RungeKuttaIntegrator
#define INCLUDED_clothx_physics_RungeKuttaIntegrator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <clothx/physics/Integrator.h>
HX_DECLARE_CLASS2(clothx,physics,Integrator)
HX_DECLARE_CLASS2(clothx,physics,Particle)
HX_DECLARE_CLASS2(clothx,physics,ParticleSystem)
HX_DECLARE_CLASS2(clothx,physics,RungeKuttaIntegrator)
HX_DECLARE_CLASS2(nme,geom,Vector3D)
namespace clothx{
namespace physics{


class RungeKuttaIntegrator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RungeKuttaIntegrator_obj OBJ_;
		RungeKuttaIntegrator_obj();
		Void __construct(::clothx::physics::ParticleSystem s);

	public:
		static hx::ObjectPtr< RungeKuttaIntegrator_obj > __new(::clothx::physics::ParticleSystem s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RungeKuttaIntegrator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::clothx::physics::Integrator_obj *()
			{ return new ::clothx::physics::Integrator_delegate_< RungeKuttaIntegrator_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("RungeKuttaIntegrator"); }

		::clothx::physics::ParticleSystem s; /* REM */ 
		Array< ::nme::geom::Vector3D > originalPositions; /* REM */ 
		Array< ::nme::geom::Vector3D > originalVelocities; /* REM */ 
		Array< ::nme::geom::Vector3D > k1Forces; /* REM */ 
		Array< ::nme::geom::Vector3D > k1Velocities; /* REM */ 
		Array< ::nme::geom::Vector3D > k2Forces; /* REM */ 
		Array< ::nme::geom::Vector3D > k2Velocities; /* REM */ 
		Array< ::nme::geom::Vector3D > k3Forces; /* REM */ 
		Array< ::nme::geom::Vector3D > k3Velocities; /* REM */ 
		Array< ::nme::geom::Vector3D > k4Forces; /* REM */ 
		Array< ::nme::geom::Vector3D > k4Velocities; /* REM */ 
		virtual Void allocateParticles( );
		Dynamic allocateParticles_dyn();

		Array< ::clothx::physics::Particle > particles; /* REM */ 
		::clothx::physics::Particle p; /* REM */ 
		::nme::geom::Vector3D originalPosition; /* REM */ 
		::nme::geom::Vector3D originalVelocity; /* REM */ 
		::nme::geom::Vector3D k1Velocity; /* REM */ 
		::nme::geom::Vector3D k2Velocity; /* REM */ 
		::nme::geom::Vector3D k3Velocity; /* REM */ 
		::nme::geom::Vector3D k4Velocity; /* REM */ 
		::nme::geom::Vector3D k1Force; /* REM */ 
		::nme::geom::Vector3D k2Force; /* REM */ 
		::nme::geom::Vector3D k3Force; /* REM */ 
		::nme::geom::Vector3D k4Force; /* REM */ 
		virtual Void step( double t);
		Dynamic step_dyn();

};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_RungeKuttaIntegrator */ 
