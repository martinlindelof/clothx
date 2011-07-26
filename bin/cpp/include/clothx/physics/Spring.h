#ifndef INCLUDED_clothx_physics_Spring
#define INCLUDED_clothx_physics_Spring

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,physics,Particle)
HX_DECLARE_CLASS2(clothx,physics,Spring)
namespace clothx{
namespace physics{


class Spring_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Spring_obj OBJ_;
		Spring_obj();
		Void __construct(::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength);

	public:
		static hx::ObjectPtr< Spring_obj > __new(::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Spring_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spring"); }

		::clothx::physics::Particle a; /* REM */ 
		::clothx::physics::Particle b; /* REM */ 
		double springConstant; /* REM */ 
		double damping; /* REM */ 
		double restLength; /* REM */ 
		bool on; /* REM */ 
		virtual Void turnOn( );
		Dynamic turnOn_dyn();

		virtual Void turnOff( );
		Dynamic turnOff_dyn();

		virtual bool isOn( );
		Dynamic isOn_dyn();

		virtual bool isOff( );
		Dynamic isOff_dyn();

		virtual double currentLength( );
		Dynamic currentLength_dyn();

		virtual double getStrength( );
		Dynamic getStrength_dyn();

		virtual Void setStrength( double ks);
		Dynamic setStrength_dyn();

		virtual double getDamping( );
		Dynamic getDamping_dyn();

		virtual Void setDamping( double d);
		Dynamic setDamping_dyn();

		virtual double getRestLength( );
		Dynamic getRestLength_dyn();

		virtual Void setRestLength( double l);
		Dynamic setRestLength_dyn();

		virtual Void setA( ::clothx::physics::Particle p);
		Dynamic setA_dyn();

		virtual Void setB( ::clothx::physics::Particle p);
		Dynamic setB_dyn();

		virtual ::clothx::physics::Particle getOneEnd( );
		Dynamic getOneEnd_dyn();

		virtual ::clothx::physics::Particle getTheOtherEnd( );
		Dynamic getTheOtherEnd_dyn();

		virtual Void apply( );
		Dynamic apply_dyn();

};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_Spring */ 
