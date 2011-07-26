#ifndef INCLUDED_clothx_geom_Vector3D
#define INCLUDED_clothx_geom_Vector3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,geom,Vector3D)
namespace clothx{
namespace geom{


class Vector3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector3D_obj OBJ_;
		Vector3D_obj();
		Void __construct(Dynamic x,Dynamic y,Dynamic z,Dynamic w);

	public:
		static hx::ObjectPtr< Vector3D_obj > __new(Dynamic x,Dynamic y,Dynamic z,Dynamic w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vector3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vector3D"); }

		double w; /* REM */ 
		double x; /* REM */ 
		double y; /* REM */ 
		double z; /* REM */ 
		double length; /* REM */ 
		double lengthSquared; /* REM */ 
		virtual ::clothx::geom::Vector3D add( ::clothx::geom::Vector3D a);
		Dynamic add_dyn();

		virtual ::clothx::geom::Vector3D clone( );
		Dynamic clone_dyn();

		virtual ::clothx::geom::Vector3D crossProduct( ::clothx::geom::Vector3D a);
		Dynamic crossProduct_dyn();

		virtual Void decrementBy( ::clothx::geom::Vector3D a);
		Dynamic decrementBy_dyn();

		virtual double dotProduct( ::clothx::geom::Vector3D a);
		Dynamic dotProduct_dyn();

		virtual bool equals( ::clothx::geom::Vector3D toCompare,Dynamic allFour);
		Dynamic equals_dyn();

		virtual double getLength( );
		Dynamic getLength_dyn();

		virtual double getLengthSquared( );
		Dynamic getLengthSquared_dyn();

		virtual Void incrementBy( ::clothx::geom::Vector3D a);
		Dynamic incrementBy_dyn();

		virtual bool nearEquals( ::clothx::geom::Vector3D toCompare,double tolerance,Dynamic allFour);
		Dynamic nearEquals_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual double normalize( );
		Dynamic normalize_dyn();

		virtual Void project( );
		Dynamic project_dyn();

		virtual Void scaleBy( double s);
		Dynamic scaleBy_dyn();

		virtual ::clothx::geom::Vector3D subtract( ::clothx::geom::Vector3D a);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::clothx::geom::Vector3D X_AXIS; /* REM */ 
		static ::clothx::geom::Vector3D Y_AXIS; /* REM */ 
		static ::clothx::geom::Vector3D Z_AXIS; /* REM */ 
		static double angleBetween( ::clothx::geom::Vector3D a,::clothx::geom::Vector3D b);
		static Dynamic angleBetween_dyn();

		static double distance( ::clothx::geom::Vector3D a,::clothx::geom::Vector3D b);
		static Dynamic distance_dyn();

		static ::clothx::geom::Vector3D getX_AXIS( );
		static Dynamic getX_AXIS_dyn();

		static ::clothx::geom::Vector3D getY_AXIS( );
		static Dynamic getY_AXIS_dyn();

		static ::clothx::geom::Vector3D getZ_AXIS( );
		static Dynamic getZ_AXIS_dyn();

};

} // end namespace clothx
} // end namespace geom

#endif /* INCLUDED_clothx_geom_Vector3D */ 
