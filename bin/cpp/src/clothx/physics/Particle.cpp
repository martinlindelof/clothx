#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_clothx_physics_Particle
#include <clothx/physics/Particle.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void Particle_obj::__construct(double mass,::nme::geom::Vector3D position)
{
{
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",27)
	this->mass = mass;
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",28)
	this->position = (  (((position != null()))) ? ::nme::geom::Vector3D(position) : ::nme::geom::Vector3D(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null())) );
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",30)
	this->velocity = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",31)
	this->force = ::nme::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",33)
	this->fixed = false;
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",34)
	this->age = (int)0;
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",35)
	this->dead = false;
}
;
	return null();
}

Particle_obj::~Particle_obj() { }

Dynamic Particle_obj::__CreateEmpty() { return  new Particle_obj; }
hx::ObjectPtr< Particle_obj > Particle_obj::__new(double mass,::nme::geom::Vector3D position)
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct(mass,position);
	return result;}

Dynamic Particle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

double Particle_obj::distanceTo( ::clothx::physics::Particle p){
	__SAFE_POINT
	HX_SOURCE_PUSH("Particle_obj::distanceTo")
	struct _Function_1_1{
		inline static double Block( ::clothx::physics::Particle_obj *__this,::clothx::physics::Particle &p){
			HX_SOURCE_POS("src/clothx/physics/Particle.hx",40)
			::nme::geom::Vector3D pt1 = __this->position;
			::nme::geom::Vector3D pt2 = p->position;
			HX_SOURCE_POS("src/clothx/physics/Particle.hx",40)
			double x = (pt2->x - pt1->x);
			HX_SOURCE_POS("src/clothx/physics/Particle.hx",40)
			double y = (pt2->y - pt1->y);
			HX_SOURCE_POS("src/clothx/physics/Particle.hx",40)
			double z = (pt2->z - pt1->z);
			HX_SOURCE_POS("src/clothx/physics/Particle.hx",40)
			return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
		}
	};
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",39)
	return _Function_1_1::Block(this,p);
}


HX_DEFINE_DYNAMIC_FUNC1(Particle_obj,distanceTo,return )

Void Particle_obj::makeFixed( ){
{
		HX_SOURCE_PUSH("Particle_obj::makeFixed")
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",45)
		this->fixed = true;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",46)
		this->velocity->x = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",46)
		this->velocity->y = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",46)
		this->velocity->z = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,makeFixed,(void))

Void Particle_obj::makeFree( ){
{
		HX_SOURCE_PUSH("Particle_obj::makeFree")
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",50)
		this->fixed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,makeFree,(void))

bool Particle_obj::isFixed( ){
	HX_SOURCE_PUSH("Particle_obj::isFixed")
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",55)
	return this->fixed;
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,isFixed,return )

bool Particle_obj::isFree( ){
	HX_SOURCE_PUSH("Particle_obj::isFree")
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",60)
	return !(this->fixed);
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,isFree,return )

Void Particle_obj::setMass( double m){
{
		HX_SOURCE_PUSH("Particle_obj::setMass")
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",65)
		this->mass = m;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Particle_obj,setMass,(void))

Void Particle_obj::reset( ){
{
		HX_SOURCE_PUSH("Particle_obj::reset")
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",71)
		this->age = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",72)
		this->dead = false;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",73)
		this->position->x = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",73)
		this->position->y = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",73)
		this->position->z = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",74)
		this->velocity->x = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",74)
		this->velocity->y = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",74)
		this->velocity->z = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",75)
		this->force->x = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",75)
		this->force->y = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",75)
		this->force->z = (int)0;
		HX_SOURCE_POS("src/clothx/physics/Particle.hx",76)
		this->mass = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,reset,(void))

::String Particle_obj::toString( ){
	HX_SOURCE_PUSH("Particle_obj::toString")
	HX_SOURCE_POS("src/clothx/physics/Particle.hx",80)
	return ((((((((HX_CSTRING("[object Particle]\tm:") + this->mass) + HX_CSTRING(" [")) + this->position->x) + HX_CSTRING(", ")) + this->position->y) + HX_CSTRING(", ")) + this->position->z) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Particle_obj,toString,return )


Particle_obj::Particle_obj()
{
}

void Particle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Particle);
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(force,"force");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_END_CLASS();
}

Dynamic Particle_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return age; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"force") ) { return force; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isFree") ) { return isFree_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFixed") ) { return isFixed_dyn(); }
		if (HX_FIELD_EQ(inName,"setMass") ) { return setMass_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"makeFree") ) { return makeFree_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeFixed") ) { return makeFixed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Particle_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< double >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"force") ) { force=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Particle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("force"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("age"));
	outFields->push(HX_CSTRING("fixed"));
	outFields->push(HX_CSTRING("dead"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("position"),
	HX_CSTRING("velocity"),
	HX_CSTRING("force"),
	HX_CSTRING("mass"),
	HX_CSTRING("age"),
	HX_CSTRING("fixed"),
	HX_CSTRING("dead"),
	HX_CSTRING("distanceTo"),
	HX_CSTRING("makeFixed"),
	HX_CSTRING("makeFree"),
	HX_CSTRING("isFixed"),
	HX_CSTRING("isFree"),
	HX_CSTRING("setMass"),
	HX_CSTRING("reset"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Particle_obj::__mClass;

void Particle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.Particle"), hx::TCanCast< Particle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Particle_obj::__boot()
{
}

} // end namespace clothx
} // end namespace physics
