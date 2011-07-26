#ifndef INCLUDED_nme_geom_Vector3D
#define INCLUDED_nme_geom_Vector3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,Vector3D)
namespace nme{
namespace geom{


class Vector3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector3D_obj OBJ_;
		Vector3D_obj();
		Void __construct(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w);

	public:
		static hx::ObjectPtr< Vector3D_obj > __new(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vector3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vector3D"); }

		double length; /* REM */ 
		virtual double getLength( );
		Dynamic getLength_dyn();

		double lengthSquared; /* REM */ 
		virtual double getLengthSquared( );
		Dynamic getLengthSquared_dyn();

		double w; /* REM */ 
		double x; /* REM */ 
		double y; /* REM */ 
		double z; /* REM */ 
		virtual ::nme::geom::Vector3D add( ::nme::geom::Vector3D a);
		Dynamic add_dyn();

		virtual ::nme::geom::Vector3D clone( );
		Dynamic clone_dyn();

		virtual ::nme::geom::Vector3D crossProduct( ::nme::geom::Vector3D a);
		Dynamic crossProduct_dyn();

		virtual Void decrementBy( ::nme::geom::Vector3D a);
		Dynamic decrementBy_dyn();

		virtual double dotProduct( ::nme::geom::Vector3D a);
		Dynamic dotProduct_dyn();

		virtual bool equals( ::nme::geom::Vector3D toCompare,Dynamic allFour);
		Dynamic equals_dyn();

		virtual Void incrementBy( ::nme::geom::Vector3D a);
		Dynamic incrementBy_dyn();

		virtual bool nearEquals( ::nme::geom::Vector3D toCompare,double tolerance,Dynamic allFour);
		Dynamic nearEquals_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual double normalize( );
		Dynamic normalize_dyn();

		virtual Void project( );
		Dynamic project_dyn();

		virtual Void scaleBy( double s);
		Dynamic scaleBy_dyn();

		virtual ::nme::geom::Vector3D subtract( ::nme::geom::Vector3D a);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		static double angleBetween( ::nme::geom::Vector3D a,::nme::geom::Vector3D b);
		static Dynamic angleBetween_dyn();

		static double distance( ::nme::geom::Vector3D pt1,::nme::geom::Vector3D pt2);
		static Dynamic distance_dyn();

		static ::nme::geom::Vector3D X_AXIS; /* REM */ 
		static ::nme::geom::Vector3D getX_AXIS( );
		static Dynamic getX_AXIS_dyn();

		static ::nme::geom::Vector3D Y_AXIS; /* REM */ 
		static ::nme::geom::Vector3D getY_AXIS( );
		static Dynamic getY_AXIS_dyn();

		static ::nme::geom::Vector3D Z_AXIS; /* REM */ 
		static ::nme::geom::Vector3D getZ_AXIS( );
		static Dynamic getZ_AXIS_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Vector3D */ 
