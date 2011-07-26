#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_clothx_geom_Vector3D
#include <clothx/geom/Vector3D.h>
#endif
namespace clothx{
namespace geom{

Void Vector3D_obj::__construct(Dynamic x,Dynamic y,Dynamic z,Dynamic w)
{
{
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",31)
	this->x = (  (((x != null()))) ? Dynamic(x) : Dynamic(0.0) );
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",32)
	this->y = (  (((y != null()))) ? Dynamic(y) : Dynamic(0.0) );
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",33)
	this->z = (  (((z != null()))) ? Dynamic(z) : Dynamic(0.0) );
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",34)
	this->w = (  (((w != null()))) ? Dynamic(w) : Dynamic(0.0) );
}
;
	return null();
}

Vector3D_obj::~Vector3D_obj() { }

Dynamic Vector3D_obj::__CreateEmpty() { return  new Vector3D_obj; }
hx::ObjectPtr< Vector3D_obj > Vector3D_obj::__new(Dynamic x,Dynamic y,Dynamic z,Dynamic w)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(x,y,z,w);
	return result;}

Dynamic Vector3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::clothx::geom::Vector3D Vector3D_obj::add( ::clothx::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::add")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",43)
	return ::clothx::geom::Vector3D_obj::__new((this->x + a->x),(this->y + a->y),(this->z + a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,add,return )

::clothx::geom::Vector3D Vector3D_obj::clone( ){
	HX_SOURCE_PUSH("Vector3D_obj::clone")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",68)
	return ::clothx::geom::Vector3D_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,clone,return )

::clothx::geom::Vector3D Vector3D_obj::crossProduct( ::clothx::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::crossProduct")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",78)
	return ::clothx::geom::Vector3D_obj::__new(((this->y * a->z) - (this->z * a->y)),((this->z * a->x) - (this->x * a->z)),((this->x * a->y) - (this->y * a->x)),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,crossProduct,return )

Void Vector3D_obj::decrementBy( ::clothx::geom::Vector3D a){
{
		HX_SOURCE_PUSH("Vector3D_obj::decrementBy")
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",88)
		hx::SubEq(this->x,a->x);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",89)
		hx::SubEq(this->y,a->y);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",90)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,decrementBy,(void))

double Vector3D_obj::dotProduct( ::clothx::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::dotProduct")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",114)
	return (((this->x * a->x) + (this->y * a->y)) + (this->z * a->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,dotProduct,return )

bool Vector3D_obj::equals( ::clothx::geom::Vector3D toCompare,Dynamic __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_SOURCE_PUSH("Vector3D_obj::equals");
{
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",125)
		return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->z == toCompare->z)))) && bool(((bool(!(allFour)) || bool((this->w == toCompare->w))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,equals,return )

double Vector3D_obj::getLength( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::getLength")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",135)
	return ::Math_obj::abs(::clothx::geom::Vector3D_obj::distance(hx::ObjectPtr<OBJ_>(this),::clothx::geom::Vector3D_obj::__new(null(),null(),null(),null())));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getLength,return )

double Vector3D_obj::getLengthSquared( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::getLengthSquared")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",145)
	return (this->getLength() * this->getLength());
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getLengthSquared,return )

Void Vector3D_obj::incrementBy( ::clothx::geom::Vector3D a){
{
		HX_SOURCE_PUSH("Vector3D_obj::incrementBy")
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",155)
		hx::AddEq(this->x,a->x);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",156)
		hx::AddEq(this->y,a->y);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",157)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,incrementBy,(void))

bool Vector3D_obj::nearEquals( ::clothx::geom::Vector3D toCompare,double tolerance,Dynamic __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_SOURCE_PUSH("Vector3D_obj::nearEquals");
{
		__SAFE_POINT
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",168)
		return (bool((bool((bool((::Math_obj::abs((this->x - toCompare->x)) < tolerance)) && bool((::Math_obj::abs((this->y - toCompare->y)) < tolerance)))) && bool((::Math_obj::abs((this->z - toCompare->z)) < tolerance)))) && bool(((bool(!(allFour)) || bool((::Math_obj::abs((this->w - toCompare->w)) < tolerance))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,nearEquals,return )

Void Vector3D_obj::negate( ){
{
		HX_SOURCE_PUSH("Vector3D_obj::negate")
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",178)
		hx::MultEq(this->x,(int)-1);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",179)
		hx::MultEq(this->y,(int)-1);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",180)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,negate,(void))

double Vector3D_obj::normalize( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::normalize")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",190)
	double l = this->getLength();
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",191)
	if (((l != (int)0))){
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",192)
		hx::DivEq(this->x,l);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",193)
		hx::DivEq(this->y,l);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",194)
		hx::DivEq(this->z,l);
	}
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",196)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,normalize,return )

Void Vector3D_obj::project( ){
{
		HX_SOURCE_PUSH("Vector3D_obj::project")
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",205)
		hx::DivEq(this->x,this->w);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",206)
		hx::DivEq(this->y,this->w);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",207)
		hx::DivEq(this->z,this->w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,project,(void))

Void Vector3D_obj::scaleBy( double s){
{
		HX_SOURCE_PUSH("Vector3D_obj::scaleBy")
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",216)
		hx::MultEq(this->x,s);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",217)
		hx::MultEq(this->y,s);
		HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",218)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,scaleBy,(void))

::clothx::geom::Vector3D Vector3D_obj::subtract( ::clothx::geom::Vector3D a){
	HX_SOURCE_PUSH("Vector3D_obj::subtract")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",227)
	return ::clothx::geom::Vector3D_obj::__new((this->x - a->x),(this->y - a->y),(this->z - a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,subtract,return )

::String Vector3D_obj::toString( ){
	HX_SOURCE_PUSH("Vector3D_obj::toString")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",237)
	return ((((((HX_CSTRING("Vector3D(") + this->x) + HX_CSTRING(", ")) + this->y) + HX_CSTRING(", ")) + this->z) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,toString,return )

::clothx::geom::Vector3D Vector3D_obj::X_AXIS;

::clothx::geom::Vector3D Vector3D_obj::Y_AXIS;

::clothx::geom::Vector3D Vector3D_obj::Z_AXIS;

double Vector3D_obj::angleBetween( ::clothx::geom::Vector3D a,::clothx::geom::Vector3D b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::angleBetween")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",55)
	::clothx::geom::Vector3D a0 = a->clone();
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",56)
	a0->normalize();
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",57)
	::clothx::geom::Vector3D b0 = b->clone();
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",58)
	b0->normalize();
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",59)
	return ::Math_obj::acos(a0->dotProduct(b0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,angleBetween,return )

double Vector3D_obj::distance( ::clothx::geom::Vector3D a,::clothx::geom::Vector3D b){
	__SAFE_POINT
	HX_SOURCE_PUSH("Vector3D_obj::distance")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",101)
	double x = (b->x - a->x);
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",102)
	double y = (b->y - a->y);
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",103)
	double z = (b->z - a->z);
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",105)
	return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,distance,return )

::clothx::geom::Vector3D Vector3D_obj::getX_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getX_AXIS")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",242)
	return ::clothx::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getX_AXIS,return )

::clothx::geom::Vector3D Vector3D_obj::getY_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getY_AXIS")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",247)
	return ::clothx::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getY_AXIS,return )

::clothx::geom::Vector3D Vector3D_obj::getZ_AXIS( ){
	HX_SOURCE_PUSH("Vector3D_obj::getZ_AXIS")
	HX_SOURCE_POS("src/clothx/geom/Vector3D.hx",252)
	return ::clothx::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,getZ_AXIS,return )


Vector3D_obj::Vector3D_obj()
{
}

void Vector3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector3D);
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSquared,"lengthSquared");
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
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=inValue.Cast< ::clothx::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=inValue.Cast< ::clothx::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=inValue.Cast< ::clothx::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< double >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Vector3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("X_AXIS"),
	HX_CSTRING("Y_AXIS"),
	HX_CSTRING("Z_AXIS"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("distance"),
	HX_CSTRING("getX_AXIS"),
	HX_CSTRING("getY_AXIS"),
	HX_CSTRING("getZ_AXIS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("w"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("crossProduct"),
	HX_CSTRING("decrementBy"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("equals"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getLengthSquared"),
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
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.geom.Vector3D"), hx::TCanCast< Vector3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Vector3D_obj::__boot()
{
	hx::Static(X_AXIS);
	hx::Static(Y_AXIS);
	hx::Static(Z_AXIS);
}

} // end namespace clothx
} // end namespace geom
