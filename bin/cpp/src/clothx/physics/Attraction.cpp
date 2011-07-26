#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_clothx_physics_Attraction
#include <clothx/physics/Attraction.h>
#endif
#ifndef INCLUDED_clothx_physics_Force
#include <clothx/physics/Force.h>
#endif
#ifndef INCLUDED_clothx_physics_Particle
#include <clothx/physics/Particle.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void Attraction_obj::__construct(::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance)
{
{
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",32)
	this->a = a;
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",33)
	this->b = b;
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",34)
	this->strength = strength;
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",36)
	this->on = true;
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",38)
	this->minDistance = minDistance;
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",39)
	this->minDistanceSquared = (minDistance * minDistance);
}
;
	return null();
}

Attraction_obj::~Attraction_obj() { }

Dynamic Attraction_obj::__CreateEmpty() { return  new Attraction_obj; }
hx::ObjectPtr< Attraction_obj > Attraction_obj::__new(::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance)
{  hx::ObjectPtr< Attraction_obj > result = new Attraction_obj();
	result->__construct(a,b,strength,minDistance);
	return result;}

Dynamic Attraction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attraction_obj > result = new Attraction_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *Attraction_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::clothx::physics::Force_obj)) return operator ::clothx::physics::Force_obj *();
	return super::__ToInterface(inType);
}

double Attraction_obj::getMinimumDistance( ){
	HX_SOURCE_PUSH("Attraction_obj::getMinimumDistance")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",43)
	return this->minDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,getMinimumDistance,return )

Void Attraction_obj::setMinimumDistance( double d){
{
		HX_SOURCE_PUSH("Attraction_obj::setMinimumDistance")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",49)
		this->minDistance = d;
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",50)
		this->minDistanceSquared = (d * d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attraction_obj,setMinimumDistance,(void))

Void Attraction_obj::turnOn( ){
{
		HX_SOURCE_PUSH("Attraction_obj::turnOn")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",54)
		this->on = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,turnOn,(void))

Void Attraction_obj::turnOff( ){
{
		HX_SOURCE_PUSH("Attraction_obj::turnOff")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",59)
		this->on = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,turnOff,(void))

bool Attraction_obj::isOn( ){
	HX_SOURCE_PUSH("Attraction_obj::isOn")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",64)
	return this->on;
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,isOn,return )

bool Attraction_obj::isOff( ){
	HX_SOURCE_PUSH("Attraction_obj::isOff")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",69)
	return !(this->on);
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,isOff,return )

double Attraction_obj::getStrength( ){
	HX_SOURCE_PUSH("Attraction_obj::getStrength")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",74)
	return this->strength;
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,getStrength,return )

Void Attraction_obj::setStrength( double k){
{
		HX_SOURCE_PUSH("Attraction_obj::setStrength")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",79)
		this->strength = k;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attraction_obj,setStrength,(void))

Void Attraction_obj::setA( ::clothx::physics::Particle p){
{
		HX_SOURCE_PUSH("Attraction_obj::setA")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",84)
		this->a = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attraction_obj,setA,(void))

Void Attraction_obj::setB( ::clothx::physics::Particle p){
{
		HX_SOURCE_PUSH("Attraction_obj::setB")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",89)
		this->b = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attraction_obj,setB,(void))

::clothx::physics::Particle Attraction_obj::getOneEnd( ){
	HX_SOURCE_PUSH("Attraction_obj::getOneEnd")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",94)
	return this->a;
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,getOneEnd,return )

::clothx::physics::Particle Attraction_obj::getTheOtherEnd( ){
	HX_SOURCE_PUSH("Attraction_obj::getTheOtherEnd")
	HX_SOURCE_POS("src/clothx/physics/Attraction.hx",99)
	return this->b;
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,getTheOtherEnd,return )

Void Attraction_obj::apply( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Attraction_obj::apply")
		HX_SOURCE_POS("src/clothx/physics/Attraction.hx",104)
		if (((bool(this->on) && bool(((bool(this->a->isFree()) || bool(this->b->isFree()))))))){
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",107)
			double a2bX;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",108)
			a2bX = (this->a->position->x - this->b->position->x);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",109)
			double a2bY;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",110)
			a2bY = (this->a->position->y - this->b->position->y);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",111)
			double a2bZ;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",112)
			a2bZ = (this->a->position->z - this->b->position->z);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",114)
			double a2bDistanceSquared;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",115)
			a2bDistanceSquared = (((a2bX * a2bX) + (a2bY * a2bY)) + (a2bZ * a2bZ));
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",117)
			if (((a2bDistanceSquared < this->minDistanceSquared))){
				HX_SOURCE_POS("src/clothx/physics/Attraction.hx",118)
				a2bDistanceSquared = this->minDistanceSquared;
			}
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",120)
			double force;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",121)
			force = (double(((this->strength * this->a->mass) * this->b->mass)) / double(a2bDistanceSquared));
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",123)
			double length;
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",124)
			length = ::Math_obj::sqrt(a2bDistanceSquared);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",126)
			hx::DivEq(a2bX,length);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",127)
			hx::DivEq(a2bY,length);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",128)
			hx::DivEq(a2bZ,length);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",130)
			hx::MultEq(a2bX,force);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",131)
			hx::MultEq(a2bY,force);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",132)
			hx::MultEq(a2bZ,force);
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",134)
			if ((this->a->isFree())){
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Attraction_obj *__this,double &a2bZ,double &a2bY,double &a2bX){
						HX_SOURCE_POS("src/clothx/physics/Attraction.hx",134)
						::nme::geom::Vector3D _this = __this->a->force;
						::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new(-(a2bX),-(a2bY),-(a2bZ),null());
						HX_SOURCE_POS("src/clothx/physics/Attraction.hx",134)
						return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/Attraction.hx",134)
				this->a->force = _Function_3_1::Block(this,a2bZ,a2bY,a2bX);
			}
			HX_SOURCE_POS("src/clothx/physics/Attraction.hx",135)
			if ((this->b->isFree())){
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Attraction_obj *__this,double &a2bZ,double &a2bY,double &a2bX){
						HX_SOURCE_POS("src/clothx/physics/Attraction.hx",135)
						::nme::geom::Vector3D _this = __this->b->force;
						::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new(a2bX,a2bY,a2bZ,null());
						HX_SOURCE_POS("src/clothx/physics/Attraction.hx",135)
						return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/Attraction.hx",135)
				this->b->force = _Function_3_1::Block(this,a2bZ,a2bY,a2bX);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attraction_obj,apply,(void))


Attraction_obj::Attraction_obj()
{
}

void Attraction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Attraction);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(minDistance,"minDistance");
	HX_MARK_MEMBER_NAME(minDistanceSquared,"minDistanceSquared");
	HX_MARK_MEMBER_NAME(on,"on");
	HX_MARK_END_CLASS();
}

Dynamic Attraction_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isOn") ) { return isOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setA") ) { return setA_dyn(); }
		if (HX_FIELD_EQ(inName,"setB") ) { return setB_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isOff") ) { return isOff_dyn(); }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"turnOn") ) { return turnOn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"turnOff") ) { return turnOff_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOneEnd") ) { return getOneEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minDistance") ) { return minDistance; }
		if (HX_FIELD_EQ(inName,"getStrength") ) { return getStrength_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrength") ) { return setStrength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTheOtherEnd") ) { return getTheOtherEnd_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"minDistanceSquared") ) { return minDistanceSquared; }
		if (HX_FIELD_EQ(inName,"getMinimumDistance") ) { return getMinimumDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"setMinimumDistance") ) { return setMinimumDistance_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Attraction_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< double >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minDistance") ) { minDistance=inValue.Cast< double >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"minDistanceSquared") ) { minDistanceSquared=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Attraction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("strength"));
	outFields->push(HX_CSTRING("minDistance"));
	outFields->push(HX_CSTRING("minDistanceSquared"));
	outFields->push(HX_CSTRING("on"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("strength"),
	HX_CSTRING("minDistance"),
	HX_CSTRING("minDistanceSquared"),
	HX_CSTRING("on"),
	HX_CSTRING("getMinimumDistance"),
	HX_CSTRING("setMinimumDistance"),
	HX_CSTRING("turnOn"),
	HX_CSTRING("turnOff"),
	HX_CSTRING("isOn"),
	HX_CSTRING("isOff"),
	HX_CSTRING("getStrength"),
	HX_CSTRING("setStrength"),
	HX_CSTRING("setA"),
	HX_CSTRING("setB"),
	HX_CSTRING("getOneEnd"),
	HX_CSTRING("getTheOtherEnd"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Attraction_obj::__mClass;

void Attraction_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.Attraction"), hx::TCanCast< Attraction_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Attraction_obj::__boot()
{
}

} // end namespace clothx
} // end namespace physics
