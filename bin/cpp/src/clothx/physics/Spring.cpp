#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_clothx_physics_Particle
#include <clothx/physics/Particle.h>
#endif
#ifndef INCLUDED_clothx_physics_Spring
#include <clothx/physics/Spring.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void Spring_obj::__construct(::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength)
{
{
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",29)
	this->a = a;
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",30)
	this->b = b;
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",31)
	this->springConstant = springConstant;
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",32)
	this->damping = damping;
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",33)
	this->restLength = restLength;
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",34)
	this->on = true;
}
;
	return null();
}

Spring_obj::~Spring_obj() { }

Dynamic Spring_obj::__CreateEmpty() { return  new Spring_obj; }
hx::ObjectPtr< Spring_obj > Spring_obj::__new(::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength)
{  hx::ObjectPtr< Spring_obj > result = new Spring_obj();
	result->__construct(a,b,springConstant,damping,restLength);
	return result;}

Dynamic Spring_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spring_obj > result = new Spring_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Spring_obj::turnOn( ){
{
		HX_SOURCE_PUSH("Spring_obj::turnOn")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",38)
		this->on = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,turnOn,(void))

Void Spring_obj::turnOff( ){
{
		HX_SOURCE_PUSH("Spring_obj::turnOff")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",43)
		this->on = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,turnOff,(void))

bool Spring_obj::isOn( ){
	HX_SOURCE_PUSH("Spring_obj::isOn")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",48)
	return this->on;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,isOn,return )

bool Spring_obj::isOff( ){
	HX_SOURCE_PUSH("Spring_obj::isOff")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",53)
	return !(this->on);
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,isOff,return )

double Spring_obj::currentLength( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Spring_obj::currentLength")
	struct _Function_1_1{
		inline static double Block( ::clothx::physics::Spring_obj *__this){
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",59)
			::nme::geom::Vector3D pt1 = __this->a->position;
			::nme::geom::Vector3D pt2 = __this->b->position;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",59)
			double x = (pt2->x - pt1->x);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",59)
			double y = (pt2->y - pt1->y);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",59)
			double z = (pt2->z - pt1->z);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",59)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",58)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,currentLength,return )

double Spring_obj::getStrength( ){
	HX_SOURCE_PUSH("Spring_obj::getStrength")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",63)
	return this->springConstant;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,getStrength,return )

Void Spring_obj::setStrength( double ks){
{
		HX_SOURCE_PUSH("Spring_obj::setStrength")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",68)
		this->springConstant = ks;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spring_obj,setStrength,(void))

double Spring_obj::getDamping( ){
	HX_SOURCE_PUSH("Spring_obj::getDamping")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",73)
	return this->damping;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,getDamping,return )

Void Spring_obj::setDamping( double d){
{
		HX_SOURCE_PUSH("Spring_obj::setDamping")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",78)
		this->damping = d;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spring_obj,setDamping,(void))

double Spring_obj::getRestLength( ){
	HX_SOURCE_PUSH("Spring_obj::getRestLength")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",83)
	return this->restLength;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,getRestLength,return )

Void Spring_obj::setRestLength( double l){
{
		HX_SOURCE_PUSH("Spring_obj::setRestLength")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",88)
		this->restLength = l;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spring_obj,setRestLength,(void))

Void Spring_obj::setA( ::clothx::physics::Particle p){
{
		HX_SOURCE_PUSH("Spring_obj::setA")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",93)
		this->a = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spring_obj,setA,(void))

Void Spring_obj::setB( ::clothx::physics::Particle p){
{
		HX_SOURCE_PUSH("Spring_obj::setB")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",98)
		this->b = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spring_obj,setB,(void))

::clothx::physics::Particle Spring_obj::getOneEnd( ){
	HX_SOURCE_PUSH("Spring_obj::getOneEnd")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",103)
	return this->a;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,getOneEnd,return )

::clothx::physics::Particle Spring_obj::getTheOtherEnd( ){
	HX_SOURCE_PUSH("Spring_obj::getTheOtherEnd")
	HX_SOURCE_POS("src/clothx/physics/Spring.hx",108)
	return this->b;
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,getTheOtherEnd,return )

Void Spring_obj::apply( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Spring_obj::apply")
		HX_SOURCE_POS("src/clothx/physics/Spring.hx",113)
		if (((bool(this->on) && bool(((bool(this->a->isFree()) || bool(this->b->isFree()))))))){
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",116)
			double a2bX;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",117)
			a2bX = (this->a->position->x - this->b->position->x);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",118)
			double a2bY;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",119)
			a2bY = (this->a->position->y - this->b->position->y);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",120)
			double a2bZ;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",121)
			double a2bZ1 = (this->a->position->z - this->b->position->z);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",123)
			double a2bDistance;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",124)
			a2bDistance = ::Math_obj::sqrt((((a2bX * a2bX) + (a2bY * a2bY)) + (a2bZ1 * a2bZ1)));
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",126)
			if (((a2bDistance == (int)0))){
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",128)
				a2bX = (int)0;
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",129)
				a2bY = (int)0;
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",130)
				a2bZ1 = (int)0;
			}
			else{
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",134)
				hx::DivEq(a2bX,a2bDistance);
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",135)
				hx::DivEq(a2bY,a2bDistance);
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",136)
				hx::DivEq(a2bZ1,a2bDistance);
			}
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",139)
			double springForce;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",140)
			springForce = (-(((a2bDistance - this->restLength))) * this->springConstant);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",142)
			double Va2bX;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",143)
			Va2bX = (this->a->velocity->x - this->b->velocity->x);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",144)
			double Va2bY;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",145)
			Va2bY = (this->a->velocity->y - this->b->velocity->y);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",146)
			double Va2bZ;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",147)
			Va2bZ = (this->a->velocity->z - this->b->velocity->z);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",149)
			double dampingForce;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",150)
			dampingForce = (-(this->damping) * ((((a2bX * Va2bX) + (a2bY * Va2bY)) + (a2bZ1 * Va2bZ))));
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",151)
			double r;
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",152)
			r = (springForce + dampingForce);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",154)
			hx::MultEq(a2bX,r);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",155)
			hx::MultEq(a2bY,r);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",156)
			hx::MultEq(a2bZ1,r);
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",158)
			if ((this->a->isFree())){
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Spring_obj *__this,double &a2bY,double &a2bX,double &a2bZ1){
						HX_SOURCE_POS("src/clothx/physics/Spring.hx",158)
						::nme::geom::Vector3D _this = __this->a->force;
						::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new(a2bX,a2bY,a2bZ1,null());
						HX_SOURCE_POS("src/clothx/physics/Spring.hx",158)
						return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",158)
				this->a->force = _Function_3_1::Block(this,a2bY,a2bX,a2bZ1);
			}
			HX_SOURCE_POS("src/clothx/physics/Spring.hx",159)
			if ((this->b->isFree())){
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Spring_obj *__this,double &a2bY,double &a2bX,double &a2bZ1){
						HX_SOURCE_POS("src/clothx/physics/Spring.hx",159)
						::nme::geom::Vector3D _this = __this->b->force;
						::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new(-(a2bX),-(a2bY),-(a2bZ1),null());
						HX_SOURCE_POS("src/clothx/physics/Spring.hx",159)
						return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/Spring.hx",159)
				this->b->force = _Function_3_1::Block(this,a2bY,a2bX,a2bZ1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spring_obj,apply,(void))


Spring_obj::Spring_obj()
{
}

void Spring_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spring);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(springConstant,"springConstant");
	HX_MARK_MEMBER_NAME(damping,"damping");
	HX_MARK_MEMBER_NAME(restLength,"restLength");
	HX_MARK_MEMBER_NAME(on,"on");
	HX_MARK_END_CLASS();
}

Dynamic Spring_obj::__Field(const ::String &inName)
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
		if (HX_FIELD_EQ(inName,"damping") ) { return damping; }
		if (HX_FIELD_EQ(inName,"turnOff") ) { return turnOff_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOneEnd") ) { return getOneEnd_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restLength") ) { return restLength; }
		if (HX_FIELD_EQ(inName,"getDamping") ) { return getDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"setDamping") ) { return setDamping_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getStrength") ) { return getStrength_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrength") ) { return setStrength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLength") ) { return currentLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getRestLength") ) { return getRestLength_dyn(); }
		if (HX_FIELD_EQ(inName,"setRestLength") ) { return setRestLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"springConstant") ) { return springConstant; }
		if (HX_FIELD_EQ(inName,"getTheOtherEnd") ) { return getTheOtherEnd_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Spring_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { damping=inValue.Cast< double >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restLength") ) { restLength=inValue.Cast< double >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"springConstant") ) { springConstant=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Spring_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("springConstant"));
	outFields->push(HX_CSTRING("damping"));
	outFields->push(HX_CSTRING("restLength"));
	outFields->push(HX_CSTRING("on"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("springConstant"),
	HX_CSTRING("damping"),
	HX_CSTRING("restLength"),
	HX_CSTRING("on"),
	HX_CSTRING("turnOn"),
	HX_CSTRING("turnOff"),
	HX_CSTRING("isOn"),
	HX_CSTRING("isOff"),
	HX_CSTRING("currentLength"),
	HX_CSTRING("getStrength"),
	HX_CSTRING("setStrength"),
	HX_CSTRING("getDamping"),
	HX_CSTRING("setDamping"),
	HX_CSTRING("getRestLength"),
	HX_CSTRING("setRestLength"),
	HX_CSTRING("setA"),
	HX_CSTRING("setB"),
	HX_CSTRING("getOneEnd"),
	HX_CSTRING("getTheOtherEnd"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Spring_obj::__mClass;

void Spring_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.Spring"), hx::TCanCast< Spring_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Spring_obj::__boot()
{
}

} // end namespace clothx
} // end namespace physics
