#include <hxcpp.h>

#ifndef INCLUDED_clothx_physics_Attraction
#include <clothx/physics/Attraction.h>
#endif
#ifndef INCLUDED_clothx_physics_Force
#include <clothx/physics/Force.h>
#endif
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
#ifndef INCLUDED_clothx_physics_RungeKuttaIntegrator
#include <clothx/physics/RungeKuttaIntegrator.h>
#endif
#ifndef INCLUDED_clothx_physics_Spring
#include <clothx/physics/Spring.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void ParticleSystem_obj::__construct(::nme::geom::Vector3D gravity,Dynamic __o_drag)
{
double drag = __o_drag.Default(0.001);
{
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",38)
	this->hasDeadParticles = false;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",39)
	this->integrator = ::clothx::physics::RungeKuttaIntegrator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",41)
	this->particles = Array_obj< ::clothx::physics::Particle >::__new();
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",42)
	this->springs = Array_obj< ::clothx::physics::Spring >::__new();
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",43)
	this->attractions = Array_obj< ::clothx::physics::Attraction >::__new();
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",44)
	this->custom = Array_obj< ::clothx::physics::Force >::__new();
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",46)
	this->gravity = (  (((gravity != null()))) ? ::nme::geom::Vector3D(gravity) : ::nme::geom::Vector3D(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null())) );
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",47)
	this->drag = drag;
}
;
	return null();
}

ParticleSystem_obj::~ParticleSystem_obj() { }

Dynamic ParticleSystem_obj::__CreateEmpty() { return  new ParticleSystem_obj; }
hx::ObjectPtr< ParticleSystem_obj > ParticleSystem_obj::__new(::nme::geom::Vector3D gravity,Dynamic __o_drag)
{  hx::ObjectPtr< ParticleSystem_obj > result = new ParticleSystem_obj();
	result->__construct(gravity,__o_drag);
	return result;}

Dynamic ParticleSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleSystem_obj > result = new ParticleSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ParticleSystem_obj::setIntegrator( int integrator){
{
		HX_SOURCE_PUSH("ParticleSystem_obj::setIntegrator")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",51)
		int _switch_1 = (integrator);
		if (  ( _switch_1==::clothx::physics::ParticleSystem_obj::RUNGE_KUTTA)){
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",54)
			this->integrator = ::clothx::physics::RungeKuttaIntegrator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else if (  ( _switch_1==::clothx::physics::ParticleSystem_obj::MODIFIED_EULER)){
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",56)
			this->integrator = ::clothx::physics::ModifiedEulerIntegrator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,setIntegrator,(void))

Void ParticleSystem_obj::setGravity( ::nme::geom::Vector3D gravity){
{
		HX_SOURCE_PUSH("ParticleSystem_obj::setGravity")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",62)
		this->gravity = gravity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,setGravity,(void))

Void ParticleSystem_obj::setDrag( double d){
{
		HX_SOURCE_PUSH("ParticleSystem_obj::setDrag")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",67)
		this->drag = d;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,setDrag,(void))

Void ParticleSystem_obj::tick( Dynamic __o_t){
double t = __o_t.Default(1);
	HX_SOURCE_PUSH("ParticleSystem_obj::tick");
{
		__SAFE_POINT
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",72)
		this->integrator->step(t);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,tick,(void))

::clothx::physics::Particle ParticleSystem_obj::makeParticle( Dynamic __o_mass,::nme::geom::Vector3D position){
double mass = __o_mass.Default(1);
	HX_SOURCE_PUSH("ParticleSystem_obj::makeParticle");
{
		__SAFE_POINT
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",78)
		::clothx::physics::Particle p;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",79)
		p = ::clothx::physics::Particle_obj::__new(mass,position);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",80)
		this->particles->push(p);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",81)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleSystem_obj,makeParticle,return )

::clothx::physics::Spring ParticleSystem_obj::makeSpring( ::clothx::physics::Particle a,::clothx::physics::Particle b,double springConstant,double damping,double restLength){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::makeSpring")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",86)
	::clothx::physics::Spring s;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",87)
	s = ::clothx::physics::Spring_obj::__new(a,b,springConstant,damping,restLength);
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",88)
	this->springs->push(s);
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",89)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC5(ParticleSystem_obj,makeSpring,return )

::clothx::physics::Attraction ParticleSystem_obj::makeAttraction( ::clothx::physics::Particle a,::clothx::physics::Particle b,double strength,double minDistance){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::makeAttraction")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",94)
	::clothx::physics::Attraction m;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",95)
	m = ::clothx::physics::Attraction_obj::__new(a,b,strength,minDistance);
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",96)
	this->attractions->push(m);
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",97)
	return m;
}


HX_DEFINE_DYNAMIC_FUNC4(ParticleSystem_obj,makeAttraction,return )

Void ParticleSystem_obj::clear( ){
{
		HX_SOURCE_PUSH("ParticleSystem_obj::clear")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",102)
		int i;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",104)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",104)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",104)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",104)
				int i1 = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",104)
				this->particles[i1] = null();
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",105)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",105)
			int _g1 = (int)0;
			int _g = this->springs->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",105)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",105)
				int i1 = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",105)
				this->springs[i1] = null();
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",106)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",106)
			int _g1 = (int)0;
			int _g = this->attractions->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",106)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",106)
				int i1 = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",106)
				this->attractions[i1] = null();
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",108)
		this->particles = Array_obj< ::clothx::physics::Particle >::__new();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",109)
		this->springs = Array_obj< ::clothx::physics::Spring >::__new();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",110)
		this->attractions = Array_obj< ::clothx::physics::Attraction >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,clear,(void))

Void ParticleSystem_obj::applyForces( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::applyForces")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",115)
		if (((bool((bool((this->gravity->x != (int)0)) || bool((this->gravity->y != (int)0)))) || bool((this->gravity->x != (int)0))))){
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",117)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",117)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",117)
				int i = (_g1)++;
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::ParticleSystem_obj *__this,int &i){
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",118)
						::nme::geom::Vector3D _this = __this->particles->__get(i)->force;
						::nme::geom::Vector3D a = __this->gravity;
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",118)
						return ::nme::geom::Vector3D_obj::__new((_this->x + a->x),(_this->y + a->y),(_this->z + a->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",118)
				this->particles->__get(i)->force = _Function_3_1::Block(this,i);
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",121)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",121)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",121)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",121)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",123)
				::clothx::physics::Particle p;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",124)
				p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",125)
				::nme::geom::Vector3D vdrag;
				struct _Function_3_1{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Particle &p){
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",126)
						::nme::geom::Vector3D _this = p->velocity;
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",126)
						return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
				};
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",126)
				vdrag = _Function_3_1::Block(p);
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",127)
				{
					HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",127)
					double s = -(this->drag);
					HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",127)
					hx::MultEq(vdrag->x,s);
					HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",127)
					hx::MultEq(vdrag->y,s);
					HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",127)
					hx::MultEq(vdrag->z,s);
				}
				struct _Function_3_2{
					inline static ::nme::geom::Vector3D Block( ::clothx::physics::Particle &p,::nme::geom::Vector3D &vdrag){
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",128)
						::nme::geom::Vector3D _this = p->force;
						HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",128)
						return ::nme::geom::Vector3D_obj::__new((_this->x + vdrag->x),(_this->y + vdrag->y),(_this->z + vdrag->z),null());
					}
				};
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",128)
				p->force = _Function_3_2::Block(p,vdrag);
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",131)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",131)
			int _g1 = (int)0;
			int _g = this->springs->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",131)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",131)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",131)
				this->springs->__get(i)->apply();
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",132)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",132)
			int _g1 = (int)0;
			int _g = this->attractions->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",132)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",132)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",132)
				this->attractions->__get(i)->apply();
			}
		}
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",133)
		{
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",133)
			int _g1 = (int)0;
			int _g = this->custom->length;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",133)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",133)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",133)
				this->custom->__get(i)->apply();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,applyForces,(void))

Void ParticleSystem_obj::clearForces( ){
{
		HX_SOURCE_PUSH("ParticleSystem_obj::clearForces")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",138)
		int _g1 = (int)0;
		int _g = this->particles->length;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",138)
		while(((_g1 < _g))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",138)
			int i = (_g1)++;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",140)
			::clothx::physics::Particle p;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",141)
			p = this->particles->__get(i);
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",142)
			p->force->x = (int)0;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",143)
			p->force->y = (int)0;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",144)
			p->force->z = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,clearForces,(void))

int ParticleSystem_obj::numberOfParticles( ){
	HX_SOURCE_PUSH("ParticleSystem_obj::numberOfParticles")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",149)
	return this->particles->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,numberOfParticles,return )

int ParticleSystem_obj::numberOfSprings( ){
	HX_SOURCE_PUSH("ParticleSystem_obj::numberOfSprings")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",154)
	return this->springs->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,numberOfSprings,return )

int ParticleSystem_obj::numberOfAttractions( ){
	HX_SOURCE_PUSH("ParticleSystem_obj::numberOfAttractions")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",159)
	return this->attractions->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,numberOfAttractions,return )

::clothx::physics::Particle ParticleSystem_obj::getParticle( int i){
	HX_SOURCE_PUSH("ParticleSystem_obj::getParticle")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",164)
	return this->particles->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,getParticle,return )

::clothx::physics::Spring ParticleSystem_obj::getSpring( int i){
	HX_SOURCE_PUSH("ParticleSystem_obj::getSpring")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",169)
	return this->springs->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,getSpring,return )

::clothx::physics::Attraction ParticleSystem_obj::getAttraction( int i){
	HX_SOURCE_PUSH("ParticleSystem_obj::getAttraction")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",174)
	return this->attractions->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,getAttraction,return )

Void ParticleSystem_obj::addCustomForce( ::clothx::physics::Force f){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::addCustomForce")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",179)
		this->custom->push(f);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,addCustomForce,(void))

int ParticleSystem_obj::numberOfCustomForces( ){
	HX_SOURCE_PUSH("ParticleSystem_obj::numberOfCustomForces")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",184)
	return this->custom->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,numberOfCustomForces,return )

::clothx::physics::Force ParticleSystem_obj::getCustomForce( int i){
	HX_SOURCE_PUSH("ParticleSystem_obj::getCustomForce")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",189)
	return this->custom->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,getCustomForce,return )

Void ParticleSystem_obj::removeCustomForce( int i){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::removeCustomForce")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",195)
		this->custom[i] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",196)
		this->custom->splice(i,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeCustomForce,(void))

bool ParticleSystem_obj::removeCustomForceByReference( ::clothx::physics::Force f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::removeCustomForceByReference")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",201)
	int n;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",202)
	n = (int)-1;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",204)
	{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",204)
		int _g1 = (int)0;
		int _g = this->custom->length;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",204)
		while(((_g1 < _g))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",204)
			int i = (_g1)++;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",206)
			if (((this->custom->__get(i) == f))){
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",208)
				n = i;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",209)
				break;
			}
		}
	}
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",212)
	if (((n != (int)-1))){
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",214)
		this->custom[n] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",215)
		this->custom->splice(n,(int)1);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",216)
		return true;
	}
	else{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",219)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeCustomForceByReference,return )

Void ParticleSystem_obj::removeSpring( int i){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::removeSpring")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",226)
		this->springs[i] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",227)
		this->springs->splice(i,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeSpring,(void))

bool ParticleSystem_obj::removeSpringByReference( ::clothx::physics::Spring s){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::removeSpringByReference")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",232)
	int n;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",233)
	n = (int)-1;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",235)
	{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",235)
		int _g1 = (int)0;
		int _g = this->springs->length;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",235)
		while(((_g1 < _g))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",235)
			int i = (_g1)++;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",237)
			if (((this->springs->__get(i) == s))){
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",239)
				n = i;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",240)
				break;
			}
		}
	}
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",243)
	if (((n != (int)-1))){
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",245)
		this->springs[n] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",246)
		this->springs->splice(n,(int)1);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",247)
		return true;
	}
	else{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",250)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeSpringByReference,return )

Void ParticleSystem_obj::removeAttraction( int i){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::removeAttraction")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",257)
		this->attractions[i] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",258)
		this->attractions->splice(i,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeAttraction,(void))

bool ParticleSystem_obj::removeAttractionByReference( ::clothx::physics::Attraction s){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::removeAttractionByReference")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",263)
	int n;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",264)
	n = (int)-1;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",265)
	{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",265)
		int _g1 = (int)0;
		int _g = this->attractions->length;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",265)
		while(((_g1 < _g))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",265)
			int i = (_g1)++;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",267)
			if (((this->attractions->__get(i) == s))){
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",269)
				n = i;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",270)
				break;
			}
		}
	}
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",273)
	if (((n != (int)-1))){
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",275)
		this->attractions[n] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",276)
		this->attractions->splice(n,(int)1);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",277)
		return true;
	}
	else{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",280)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeAttractionByReference,return )

Void ParticleSystem_obj::removeParticle( int i){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ParticleSystem_obj::removeParticle")
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",287)
		this->particles[i] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",288)
		this->particles->splice(i,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeParticle,(void))

bool ParticleSystem_obj::removeParticleByReference( ::clothx::physics::Particle p){
	__SAFE_POINT
	HX_SOURCE_PUSH("ParticleSystem_obj::removeParticleByReference")
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",293)
	int n;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",294)
	n = (int)-1;
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",296)
	{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",296)
		int _g1 = (int)0;
		int _g = this->particles->length;
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",296)
		while(((_g1 < _g))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",296)
			int i = (_g1)++;
			HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",298)
			if (((this->particles->__get(i) == p))){
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",300)
				n = i;
				HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",301)
				break;
			}
		}
	}
	HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",304)
	if (((n != (int)-1))){
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",306)
		this->particles[n] = null();
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",307)
		this->particles->splice(n,(int)1);
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",308)
		return true;
	}
	else{
		HX_SOURCE_POS("src/clothx/physics/ParticleSystem.hx",311)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,removeParticleByReference,return )

int ParticleSystem_obj::RUNGE_KUTTA;

int ParticleSystem_obj::MODIFIED_EULER;


ParticleSystem_obj::ParticleSystem_obj()
{
}

void ParticleSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleSystem);
	HX_MARK_MEMBER_NAME(integrator,"integrator");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(particles,"particles");
	HX_MARK_MEMBER_NAME(springs,"springs");
	HX_MARK_MEMBER_NAME(attractions,"attractions");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(hasDeadParticles,"hasDeadParticles");
	HX_MARK_END_CLASS();
}

Dynamic ParticleSystem_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"springs") ) { return springs; }
		if (HX_FIELD_EQ(inName,"setDrag") ) { return setDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"particles") ) { return particles; }
		if (HX_FIELD_EQ(inName,"getSpring") ) { return getSpring_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"integrator") ) { return integrator; }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"makeSpring") ) { return makeSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RUNGE_KUTTA") ) { return RUNGE_KUTTA; }
		if (HX_FIELD_EQ(inName,"attractions") ) { return attractions; }
		if (HX_FIELD_EQ(inName,"applyForces") ) { return applyForces_dyn(); }
		if (HX_FIELD_EQ(inName,"clearForces") ) { return clearForces_dyn(); }
		if (HX_FIELD_EQ(inName,"getParticle") ) { return getParticle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeParticle") ) { return makeParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"removeSpring") ) { return removeSpring_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setIntegrator") ) { return setIntegrator_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttraction") ) { return getAttraction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MODIFIED_EULER") ) { return MODIFIED_EULER; }
		if (HX_FIELD_EQ(inName,"makeAttraction") ) { return makeAttraction_dyn(); }
		if (HX_FIELD_EQ(inName,"addCustomForce") ) { return addCustomForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getCustomForce") ) { return getCustomForce_dyn(); }
		if (HX_FIELD_EQ(inName,"removeParticle") ) { return removeParticle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"numberOfSprings") ) { return numberOfSprings_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasDeadParticles") ) { return hasDeadParticles; }
		if (HX_FIELD_EQ(inName,"removeAttraction") ) { return removeAttraction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numberOfParticles") ) { return numberOfParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCustomForce") ) { return removeCustomForce_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"numberOfAttractions") ) { return numberOfAttractions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"numberOfCustomForces") ) { return numberOfCustomForces_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeSpringByReference") ) { return removeSpringByReference_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"removeParticleByReference") ) { return removeParticleByReference_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"removeAttractionByReference") ) { return removeAttractionByReference_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"removeCustomForceByReference") ) { return removeCustomForceByReference_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ParticleSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< Array< ::clothx::physics::Force > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"springs") ) { springs=inValue.Cast< Array< ::clothx::physics::Spring > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"particles") ) { particles=inValue.Cast< Array< ::clothx::physics::Particle > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"integrator") ) { integrator=inValue.Cast< ::clothx::physics::Integrator >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RUNGE_KUTTA") ) { RUNGE_KUTTA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attractions") ) { attractions=inValue.Cast< Array< ::clothx::physics::Attraction > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MODIFIED_EULER") ) { MODIFIED_EULER=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasDeadParticles") ) { hasDeadParticles=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ParticleSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("integrator"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("particles"));
	outFields->push(HX_CSTRING("springs"));
	outFields->push(HX_CSTRING("attractions"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("hasDeadParticles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RUNGE_KUTTA"),
	HX_CSTRING("MODIFIED_EULER"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("integrator"),
	HX_CSTRING("gravity"),
	HX_CSTRING("drag"),
	HX_CSTRING("particles"),
	HX_CSTRING("springs"),
	HX_CSTRING("attractions"),
	HX_CSTRING("custom"),
	HX_CSTRING("hasDeadParticles"),
	HX_CSTRING("setIntegrator"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("setDrag"),
	HX_CSTRING("tick"),
	HX_CSTRING("makeParticle"),
	HX_CSTRING("makeSpring"),
	HX_CSTRING("makeAttraction"),
	HX_CSTRING("clear"),
	HX_CSTRING("applyForces"),
	HX_CSTRING("clearForces"),
	HX_CSTRING("numberOfParticles"),
	HX_CSTRING("numberOfSprings"),
	HX_CSTRING("numberOfAttractions"),
	HX_CSTRING("getParticle"),
	HX_CSTRING("getSpring"),
	HX_CSTRING("getAttraction"),
	HX_CSTRING("addCustomForce"),
	HX_CSTRING("numberOfCustomForces"),
	HX_CSTRING("getCustomForce"),
	HX_CSTRING("removeCustomForce"),
	HX_CSTRING("removeCustomForceByReference"),
	HX_CSTRING("removeSpring"),
	HX_CSTRING("removeSpringByReference"),
	HX_CSTRING("removeAttraction"),
	HX_CSTRING("removeAttractionByReference"),
	HX_CSTRING("removeParticle"),
	HX_CSTRING("removeParticleByReference"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleSystem_obj::RUNGE_KUTTA,"RUNGE_KUTTA");
	HX_MARK_MEMBER_NAME(ParticleSystem_obj::MODIFIED_EULER,"MODIFIED_EULER");
};

Class ParticleSystem_obj::__mClass;

void ParticleSystem_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.ParticleSystem"), hx::TCanCast< ParticleSystem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ParticleSystem_obj::__boot()
{
	hx::Static(RUNGE_KUTTA) = (int)0;
	hx::Static(MODIFIED_EULER) = (int)1;
}

} // end namespace clothx
} // end namespace physics
