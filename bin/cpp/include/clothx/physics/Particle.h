#ifndef INCLUDED_clothx_physics_Particle
#define INCLUDED_clothx_physics_Particle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,physics,Particle)
HX_DECLARE_CLASS2(nme,geom,Vector3D)
namespace clothx{
namespace physics{


class Particle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Particle_obj OBJ_;
		Particle_obj();
		Void __construct(double mass,::nme::geom::Vector3D position);

	public:
		static hx::ObjectPtr< Particle_obj > __new(double mass,::nme::geom::Vector3D position);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Particle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Particle"); }

		::nme::geom::Vector3D position; /* REM */ 
		::nme::geom::Vector3D velocity; /* REM */ 
		::nme::geom::Vector3D force; /* REM */ 
		double mass; /* REM */ 
		double age; /* REM */ 
		bool fixed; /* REM */ 
		bool dead; /* REM */ 
		virtual double distanceTo( ::clothx::physics::Particle p);
		Dynamic distanceTo_dyn();

		virtual Void makeFixed( );
		Dynamic makeFixed_dyn();

		virtual Void makeFree( );
		Dynamic makeFree_dyn();

		virtual bool isFixed( );
		Dynamic isFixed_dyn();

		virtual bool isFree( );
		Dynamic isFree_dyn();

		virtual Void setMass( double m);
		Dynamic setMass_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_Particle */ 
