#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
namespace nme{
namespace geom{

Void Point_obj::__construct(Dynamic __o_inX,Dynamic __o_inY)
{
double inX = __o_inX.Default(0);
double inY = __o_inY.Default(0);
{
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",37)
	this->x = inX;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",38)
	this->y = inY;
}
;
	return null();
}

Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(Dynamic __o_inX,Dynamic __o_inY)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(__o_inX,__o_inY);
	return result;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nme::geom::Point Point_obj::add( ::nme::geom::Point v){
	HX_SOURCE_PUSH("Point_obj::add")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",42)
	return ::nme::geom::Point_obj::__new((v->x + this->x),(v->y + this->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

::nme::geom::Point Point_obj::clone( ){
	HX_SOURCE_PUSH("Point_obj::clone")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",47)
	return ::nme::geom::Point_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

bool Point_obj::equals( ::nme::geom::Point toCompare){
	HX_SOURCE_PUSH("Point_obj::equals")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",52)
	return (bool((toCompare->x == this->x)) && bool((toCompare->y == this->y)));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

double Point_obj::get_length( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::get_length")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",58)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

Void Point_obj::normalize( double thickness){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Point_obj::normalize")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",62)
		if (((bool((this->x == (int)0)) && bool((this->y == (int)0))))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",64)
			this->x = thickness;
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",67)
			double norm = (double(thickness) / double(::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)))));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",68)
			hx::MultEq(this->x,norm);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",69)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

Void Point_obj::offset( double dx,double dy){
{
		HX_SOURCE_PUSH("Point_obj::offset")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",75)
		hx::AddEq(this->x,dx);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",76)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

::nme::geom::Point Point_obj::subtract( ::nme::geom::Point v){
	HX_SOURCE_PUSH("Point_obj::subtract")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",79)
	return ::nme::geom::Point_obj::__new((this->x - v->x),(this->y - v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

double Point_obj::distance( ::nme::geom::Point pt1,::nme::geom::Point pt2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::distance")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",85)
	double dx = (pt1->x - pt2->x);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",86)
	double dy = (pt1->y - pt2->y);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",87)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

::nme::geom::Point Point_obj::interpolate( ::nme::geom::Point pt1,::nme::geom::Point pt2,double f){
	HX_SOURCE_PUSH("Point_obj::interpolate")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",91)
	return ::nme::geom::Point_obj::__new((pt2->x + (f * ((pt1->x - pt2->x)))),(pt2->y + (f * ((pt1->y - pt2->y)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

::nme::geom::Point Point_obj::polar( double len,double angle){
	__SAFE_POINT
	HX_SOURCE_PUSH("Point_obj::polar")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/geom/Point.hx",97)
	return ::nme::geom::Point_obj::__new((len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


Point_obj::Point_obj()
{
}

void Point_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Point);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

Dynamic Point_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { return polar_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("distance"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("polar"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("equals"),
	HX_CSTRING("length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("normalize"),
	HX_CSTRING("offset"),
	HX_CSTRING("subtract"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Point_obj::__mClass;

void Point_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.geom.Point"), hx::TCanCast< Point_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Point_obj::__boot()
{
}

} // end namespace nme
} // end namespace geom
