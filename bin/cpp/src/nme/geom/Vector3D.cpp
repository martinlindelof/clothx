#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace nme{
namespace geom{

Void Vector3D_obj::__construct(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w)
{
double x = __o_x.Default(0.);
double y = __o_y.Default(0.);
double z = __o_z.Default(0.);
double w = __o_w.Default(0.);
{
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",19)
	this->w = w;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",20)
	this->x = x;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",21)
	this->y = y;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",22)
	this->z = z;
}
;
	return null();
}

Vector3D_obj::~Vector3D_obj() { }

Dynamic Vector3D_obj::__CreateEmpty() { return  new Vector3D_obj; }
hx::ObjectPtr< Vector3D_obj > Vector3D_obj::__new(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(__o_x,__o_y,__o_z,__o_w);
	return result;}

Dynamic Vector3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

double Vector3D_obj::getLength( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::getLength")
	struct _Function_1_1{
		inline static double Block( ::nme::geom::Vector3D_obj *__this){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",6)
			::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",6)
			double x = (pt2->x - __this->x);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",6)
			double y = (pt2->y - __this->y);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",6)
			double z = (pt2->z - __this->z);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",6)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",5)
	return ::Math_obj::abs(_Function_1_1::Block(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getLength,return )

double Vector3D_obj::getLengthSquared( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::getLengthSquared")
	struct _Function_1_1{
		inline static double Block( ::nme::geom::Vector3D_obj *__this){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double x = (pt2->x - __this->x);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double y = (pt2->y - __this->y);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double z = (pt2->z - __this->z);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	struct _Function_1_2{
		inline static double Block( ::nme::geom::Vector3D_obj *__this){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double x = (pt2->x - __this->x);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double y = (pt2->y - __this->y);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			double z = (pt2->z - __this->z);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",10)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",9)
	return (::Math_obj::abs(_Function_1_1::Block(this)) * ::Math_obj::abs(_Function_1_2::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getLengthSquared,return )

::nme::geom::Vector3D Vector3D_obj::add( ::nme::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::add")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",25)
	return ::nme::geom::Vector3D_obj::__new((this->x + a->x),(this->y + a->y),(this->z + a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,add,return )

::nme::geom::Vector3D Vector3D_obj::clone( ){
	HX_SOURCE_PUSH("Vector3D_obj::clone")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",37)
	return ::nme::geom::Vector3D_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,clone,return )

::nme::geom::Vector3D Vector3D_obj::crossProduct( ::nme::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::crossProduct")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",41)
	return ::nme::geom::Vector3D_obj::__new(((this->y * a->z) - (this->z * a->y)),((this->z * a->x) - (this->x * a->z)),((this->x * a->y) - (this->y * a->x)),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,crossProduct,return )

Void Vector3D_obj::decrementBy( ::nme::geom::Vector3D a){
{
		HX_SOURCE_PUSH("Vector3D_obj::decrementBy")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",46)
		hx::SubEq(this->x,a->x);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",47)
		hx::SubEq(this->y,a->y);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",48)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,decrementBy,(void))

double Vector3D_obj::dotProduct( ::nme::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::dotProduct")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",59)
	return (((this->x * a->x) + (this->y * a->y)) + (this->z * a->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,dotProduct,return )

bool Vector3D_obj::equals( ::nme::geom::Vector3D toCompare,Dynamic __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_SOURCE_PUSH("Vector3D_obj::equals");
{
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",63)
		return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->z == toCompare->z)))) && bool(((bool(!(allFour)) || bool((this->w == toCompare->w))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,equals,return )

Void Vector3D_obj::incrementBy( ::nme::geom::Vector3D a){
{
		HX_SOURCE_PUSH("Vector3D_obj::incrementBy")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",68)
		hx::AddEq(this->x,a->x);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",69)
		hx::AddEq(this->y,a->y);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",70)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,incrementBy,(void))

bool Vector3D_obj::nearEquals( ::nme::geom::Vector3D toCompare,double tolerance,Dynamic __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_SOURCE_PUSH("Vector3D_obj::nearEquals");
{
		__SAFE_POINT
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",73)
		return (bool((bool((bool((::Math_obj::abs((this->x - toCompare->x)) < tolerance)) && bool((::Math_obj::abs((this->y - toCompare->y)) < tolerance)))) && bool((::Math_obj::abs((this->z - toCompare->z)) < tolerance)))) && bool(((bool(!(allFour)) || bool((::Math_obj::abs((this->w - toCompare->w)) < tolerance))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,nearEquals,return )

Void Vector3D_obj::negate( ){
{
		HX_SOURCE_PUSH("Vector3D_obj::negate")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",78)
		hx::MultEq(this->x,(int)-1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",79)
		hx::MultEq(this->y,(int)-1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",80)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,negate,(void))

double Vector3D_obj::normalize( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::normalize")
	struct _Function_1_1{
		inline static double Block( ::nme::geom::Vector3D_obj *__this){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
			::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
			double x = (pt2->x - __this->x);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
			double y = (pt2->y - __this->y);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
			double z = (pt2->z - __this->z);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",84)
	double l = ::Math_obj::abs(_Function_1_1::Block(this));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",85)
	if (((l != (int)0))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",86)
		hx::DivEq(this->x,l);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",87)
		hx::DivEq(this->y,l);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",88)
		hx::DivEq(this->z,l);
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",90)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,normalize,return )

Void Vector3D_obj::project( ){
{
		HX_SOURCE_PUSH("Vector3D_obj::project")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",94)
		hx::DivEq(this->x,this->w);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",95)
		hx::DivEq(this->y,this->w);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",96)
		hx::DivEq(this->z,this->w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,project,(void))

Void Vector3D_obj::scaleBy( double s){
{
		HX_SOURCE_PUSH("Vector3D_obj::scaleBy")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",100)
		hx::MultEq(this->x,s);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",101)
		hx::MultEq(this->y,s);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",102)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,scaleBy,(void))

::nme::geom::Vector3D Vector3D_obj::subtract( ::nme::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::subtract")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",105)
	return ::nme::geom::Vector3D_obj::__new((this->x - a->x),(this->y - a->y),(this->z - a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,subtract,return )

::String Vector3D_obj::toString( ){
	HX_SOURCE_PUSH("Vector3D_obj::toString")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",109)
	return ((((((HX_CSTRING("Vector3D(") + this->x) + HX_CSTRING(", ")) + this->y) + HX_CSTRING(", ")) + this->z) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,toString,return )

double Vector3D_obj::angleBetween( ::nme::geom::Vector3D a,::nme::geom::Vector3D b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::angleBetween")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",30)
	::nme::geom::Vector3D a0 = ::nme::geom::Vector3D_obj::__new(a->x,a->y,a->z,a->w);
	struct _Function_1_1{
		inline static double Block( ::nme::geom::Vector3D &a0){
			struct _Function_2_1{
				inline static double Block( ::nme::geom::Vector3D &a0){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
					::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
					double x = (pt2->x - a0->x);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
					double y = (pt2->y - a0->y);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
					double z = (pt2->z - a0->z);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
					return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
				}
			};
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			double l = ::Math_obj::abs(_Function_2_1::Block(a0));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			if (((l != (int)0))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				hx::DivEq(a0->x,l);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				hx::DivEq(a0->y,l);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				hx::DivEq(a0->z,l);
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			return l;
		}
	};
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
	{
		struct _Function_2_1{
			inline static double Block( ::nme::geom::Vector3D &a0){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				double x = (pt2->x - a0->x);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				double y = (pt2->y - a0->y);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				double z = (pt2->z - a0->z);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
				return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
			}
		};
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
		double l = ::Math_obj::abs(_Function_2_1::Block(a0));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
		if (((l != (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			hx::DivEq(a0->x,l);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			hx::DivEq(a0->y,l);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
			hx::DivEq(a0->z,l);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",31)
		l;
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",32)
	::nme::geom::Vector3D b0 = ::nme::geom::Vector3D_obj::__new(b->x,b->y,b->z,b->w);
	struct _Function_1_2{
		inline static double Block( ::nme::geom::Vector3D &b0){
			struct _Function_2_1{
				inline static double Block( ::nme::geom::Vector3D &b0){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
					::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
					double x = (pt2->x - b0->x);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
					double y = (pt2->y - b0->y);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
					double z = (pt2->z - b0->z);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
					return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
				}
			};
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			double l = ::Math_obj::abs(_Function_2_1::Block(b0));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			if (((l != (int)0))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				hx::DivEq(b0->x,l);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				hx::DivEq(b0->y,l);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				hx::DivEq(b0->z,l);
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			return l;
		}
	};
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
	{
		struct _Function_2_1{
			inline static double Block( ::nme::geom::Vector3D &b0){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				::nme::geom::Vector3D pt2 = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				double x = (pt2->x - b0->x);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				double y = (pt2->y - b0->y);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				double z = (pt2->z - b0->z);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
				return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
			}
		};
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
		double l = ::Math_obj::abs(_Function_2_1::Block(b0));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
		if (((l != (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			hx::DivEq(b0->x,l);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			hx::DivEq(b0->y,l);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
			hx::DivEq(b0->z,l);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",33)
		l;
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",34)
	return ::Math_obj::acos((((a0->x * b0->x) + (a0->y * b0->y)) + (a0->z * b0->z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,angleBetween,return )

double Vector3D_obj::distance( ::nme::geom::Vector3D pt1,::nme::geom::Vector3D pt2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::distance")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",52)
	double x = (pt2->x - pt1->x);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",53)
	double y = (pt2->y - pt1->y);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",54)
	double z = (pt2->z - pt1->z);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",56)
	return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,distance,return )

::nme::geom::Vector3D Vector3D_obj::X_AXIS;

::nme::geom::Vector3D Vector3D_obj::getX_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getX_AXIS")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",114)
	return ::nme::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getX_AXIS,return )

::nme::geom::Vector3D Vector3D_obj::Y_AXIS;

::nme::geom::Vector3D Vector3D_obj::getY_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getY_AXIS")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",118)
	return ::nme::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getY_AXIS,return )

::nme::geom::Vector3D Vector3D_obj::Z_AXIS;

::nme::geom::Vector3D Vector3D_obj::getZ_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getZ_AXIS")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Vector3D.hx",122)
	return ::nme::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getZ_AXIS,return )


Vector3D_obj::Vector3D_obj()
{
}

void Vector3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector3D);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSquared,"lengthSquared");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_END_CLASS();
}

Dynamic Vector3D_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { return getX_AXIS(); }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { return getY_AXIS(); }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { return getZ_AXIS(); }
		if (HX_FIELD_EQ(inName,"length") ) { return getLength(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getX_AXIS") ) { return getX_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"getY_AXIS") ) { return getY_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"getZ_AXIS") ) { return getZ_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return getLengthSquared(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getLengthSquared") ) { return getLengthSquared_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Vector3D_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< double >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Vector3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("angleBetween"),
	HX_CSTRING("distance"),
	HX_CSTRING("X_AXIS"),
	HX_CSTRING("getX_AXIS"),
	HX_CSTRING("Y_AXIS"),
	HX_CSTRING("getY_AXIS"),
	HX_CSTRING("Z_AXIS"),
	HX_CSTRING("getZ_AXIS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("getLength"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("getLengthSquared"),
	HX_CSTRING("w"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("crossProduct"),
	HX_CSTRING("decrementBy"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("equals"),
	HX_CSTRING("incrementBy"),
	HX_CSTRING("nearEquals"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("project"),
	HX_CSTRING("scaleBy"),
	HX_CSTRING("subtract"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3D_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Y_AXIS,"Y_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Z_AXIS,"Z_AXIS");
};

Class Vector3D_obj::__mClass;

void Vector3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.geom.Vector3D"), hx::TCanCast< Vector3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Vector3D_obj::__boot()
{
	hx::Static(X_AXIS);
	hx::Static(Y_AXIS);
	hx::Static(Z_AXIS);
}

} // end namespace nme
} // end namespace geom
