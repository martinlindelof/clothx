#include <hxcpp.h>

#ifndef INCLUDED_clothx_physics_Integrator
#include <clothx/physics/Integrator.h>
#endif
#ifndef INCLUDED_clothx_physics_ModifiedEulerIntegrator
#include <clothx/physics/ModifiedEulerIntegrator.h>
#endif
#ifndef INCLUDED_clothx_physics_Particle
#include <clothx/physics/Particle.h>
#endif
#ifndef INCLUDED_clothx_physics_ParticleSystem
#include <clothx/physics/ParticleSystem.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void ModifiedEulerIntegrator_obj::__construct(::clothx::physics::ParticleSystem s)
{
{
	HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",21)
	this->s = s;
}
;
	return null();
}

ModifiedEulerIntegrator_obj::~ModifiedEulerIntegrator_obj() { }

Dynamic ModifiedEulerIntegrator_obj::__CreateEmpty() { return  new ModifiedEulerIntegrator_obj; }
hx::ObjectPtr< ModifiedEulerIntegrator_obj > ModifiedEulerIntegrator_obj::__new(::clothx::physics::ParticleSystem s)
{  hx::ObjectPtr< ModifiedEulerIntegrator_obj > result = new ModifiedEulerIntegrator_obj();
	result->__construct(s);
	return result;}

Dynamic ModifiedEulerIntegrator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ModifiedEulerIntegrator_obj > result = new ModifiedEulerIntegrator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ModifiedEulerIntegrator_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::clothx::physics::Integrator_obj)) return operator ::clothx::physics::Integrator_obj *();
	return super::__ToInterface(inType);
}

Void ModifiedEulerIntegrator_obj::step( double t){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ModifiedEulerIntegrator_obj::step")
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",27)
		Array< ::clothx::physics::Particle > particles;
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",28)
		particles = this->s->particles;
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",30)
		this->s->clearForces();
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",31)
		this->s->applyForces();
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",33)
		double halftt;
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",34)
		halftt = ((t * t) * .5);
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",35)
		double one_over_t;
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",36)
		one_over_t = (double((int)1) / double(t));
		HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",38)
		{
			HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",38)
			int _g1 = (int)0;
			int _g = particles->length;
			HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",38)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",38)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",40)
				::clothx::physics::Particle p;
				HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",41)
				p = particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",43)
				if ((!(p->fixed))){
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",45)
					double ax;
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",46)
					ax = (double(p->force->x) / double(p->mass));
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",47)
					double ay;
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",48)
					ay = (double(p->force->y) / double(p->mass));
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",49)
					double az;
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",50)
					az = (double(p->force->z) / double(p->mass));
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",52)
					::nme::geom::Vector3D vel_div_t;
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::Particle &p){
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",53)
							::nme::geom::Vector3D _this = p->velocity;
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",53)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",53)
					vel_div_t = _Function_4_1::Block(p);
					struct _Function_4_2{
						inline static double Block( ::nme::geom::Vector3D &vel_div_t,double &one_over_t){
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
							hx::MultEq(vel_div_t->x,one_over_t);
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
							hx::MultEq(vel_div_t->y,one_over_t);
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
							return hx::MultEq(vel_div_t->z,one_over_t);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
					{
						HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
						hx::MultEq(vel_div_t->x,one_over_t);
						HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
						hx::MultEq(vel_div_t->y,one_over_t);
						HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",54)
						hx::MultEq(vel_div_t->z,one_over_t);
					}
					struct _Function_4_3{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::Particle &p,::nme::geom::Vector3D &vel_div_t){
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",55)
							::nme::geom::Vector3D _this = p->position;
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",55)
							return ::nme::geom::Vector3D_obj::__new((_this->x + vel_div_t->x),(_this->y + vel_div_t->y),(_this->z + vel_div_t->z),null());
						}
					};
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",55)
					p->position = _Function_4_2::Block(vel_div_t,one_over_t);
					struct _Function_4_4{
						inline static ::nme::geom::Vector3D Block( double &ay,::clothx::physics::Particle &p,double &ax,double &halftt,double &az){
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",56)
							::nme::geom::Vector3D _this = p->position;
							::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new((ax * halftt),(ay * halftt),(az * halftt),null());
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",56)
							return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
						}
					};
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",56)
					p->position = _Function_4_3::Block(p,vel_div_t);
					struct _Function_4_5{
						inline static ::nme::geom::Vector3D Block( double &one_over_t,double &ay,::clothx::physics::Particle &p,double &ax,double &az){
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",57)
							::nme::geom::Vector3D _this = p->velocity;
							::nme::geom::Vector3D a = ::nme::geom::Vector3D_obj::__new((ax * one_over_t),(ay * one_over_t),(az * one_over_t),null());
							HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",57)
							return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
						}
					};
					HX_SOURCE_POS("src/clothx/physics/ModifiedEulerIntegrator.hx",57)
					p->velocity = _Function_4_4::Block(ay,p,ax,halftt,az);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ModifiedEulerIntegrator_obj,step,(void))


ModifiedEulerIntegrator_obj::ModifiedEulerIntegrator_obj()
{
}

void ModifiedEulerIntegrator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModifiedEulerIntegrator);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

Dynamic ModifiedEulerIntegrator_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ModifiedEulerIntegrator_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::clothx::physics::ParticleSystem >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ModifiedEulerIntegrator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("step"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ModifiedEulerIntegrator_obj::__mClass;

void ModifiedEulerIntegrator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.ModifiedEulerIntegrator"), hx::TCanCast< ModifiedEulerIntegrator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ModifiedEulerIntegrator_obj::__boot()
{
}

} // end namespace clothx
} // end namespace physics
