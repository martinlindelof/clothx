#ifndef INCLUDED_clothx_physics_Attraction
#define INCLUDED_clothx_physics_Attraction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <clothx/physics/Force.h>
HX_DECLARE_CLASS2(clothx,physics,Attraction)
HX_DECLARE_CLASS2(clothx,physics,Force)
HX_DECLARE_CLASS2(clothx,physics,Particle)
namespace clothx{
namespace physics{


class Attraction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Attraction_obj OBJ_;
		Attraction_obj();
		Void __construct(::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance);

	public:
		static hx::ObjectPtr< Attraction_obj > __new(::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Attraction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::clothx::physics::Force_obj *()
			{ return new ::clothx::physics::Force_delegate_< Attraction_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Attraction"); }

		::clothx::physics::Particle a; /* REM */ 
		::clothx::physics::Particle b; /* REM */ 
		double strength; /* REM */ 
		double minDistance; /* REM */ 
		double minDistanceSquared; /* REM */ 
		bool on; /* REM */ 
		virtual double getMinimumDistance( );
		Dynamic getMinimumDistance_dyn();

		virtual Void setMinimumDistance( double d);
		Dynamic setMinimumDistance_dyn();

		virtual Void turnOn( );
		Dynamic turnOn_dyn();

		virtual Void turnOff( );
		Dynamic turnOff_dyn();

		virtual bool isOn( );
		Dynamic isOn_dyn();

		virtual bool isOff( );
		Dynamic isOff_dyn();

		virtual double getStrength( );
		Dynamic getStrength_dyn();

		virtual Void setStrength( double k);
		Dynamic setStrength_dyn();

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

#endif /* INCLUDED_clothx_physics_Attraction */ 
