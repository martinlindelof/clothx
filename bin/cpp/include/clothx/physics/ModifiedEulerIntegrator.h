#ifndef INCLUDED_clothx_physics_ModifiedEulerIntegrator
#define INCLUDED_clothx_physics_ModifiedEulerIntegrator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <clothx/physics/Integrator.h>
HX_DECLARE_CLASS2(clothx,physics,Integrator)
HX_DECLARE_CLASS2(clothx,physics,ModifiedEulerIntegrator)
HX_DECLARE_CLASS2(clothx,physics,ParticleSystem)
namespace clothx{
namespace physics{


class ModifiedEulerIntegrator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ModifiedEulerIntegrator_obj OBJ_;
		ModifiedEulerIntegrator_obj();
		Void __construct(::clothx::physics::ParticleSystem s);

	public:
		static hx::ObjectPtr< ModifiedEulerIntegrator_obj > __new(::clothx::physics::ParticleSystem s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ModifiedEulerIntegrator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::clothx::physics::Integrator_obj *()
			{ return new ::clothx::physics::Integrator_delegate_< ModifiedEulerIntegrator_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("ModifiedEulerIntegrator"); }

		::clothx::physics::ParticleSystem s; /* REM */ 
		virtual Void step( double t);
		Dynamic step_dyn();

};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_ModifiedEulerIntegrator */ 
