#include <hxcpp.h>

#ifndef INCLUDED_clothx_physics_Integrator
#include <clothx/physics/Integrator.h>
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
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif
namespace clothx{
namespace physics{

Void RungeKuttaIntegrator_obj::__construct(::clothx::physics::ParticleSystem s)
{
{
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",33)
	this->s = s;
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",35)
	this->originalPositions = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",36)
	this->originalVelocities = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",37)
	this->k1Forces = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",38)
	this->k1Velocities = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",39)
	this->k2Forces = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",40)
	this->k2Velocities = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",41)
	this->k3Forces = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",42)
	this->k3Velocities = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",43)
	this->k4Forces = Array_obj< ::nme::geom::Vector3D >::__new();
	HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",44)
	this->k4Velocities = Array_obj< ::nme::geom::Vector3D >::__new();
}
;
	return null();
}

RungeKuttaIntegrator_obj::~RungeKuttaIntegrator_obj() { }

Dynamic RungeKuttaIntegrator_obj::__CreateEmpty() { return  new RungeKuttaIntegrator_obj; }
hx::ObjectPtr< RungeKuttaIntegrator_obj > RungeKuttaIntegrator_obj::__new(::clothx::physics::ParticleSystem s)
{  hx::ObjectPtr< RungeKuttaIntegrator_obj > result = new RungeKuttaIntegrator_obj();
	result->__construct(s);
	return result;}

Dynamic RungeKuttaIntegrator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RungeKuttaIntegrator_obj > result = new RungeKuttaIntegrator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *RungeKuttaIntegrator_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::clothx::physics::Integrator_obj)) return operator ::clothx::physics::Integrator_obj *();
	return super::__ToInterface(inType);
}

Void RungeKuttaIntegrator_obj::allocateParticles( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("RungeKuttaIntegrator_obj::allocateParticles")
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",48)
		while(((this->s->particles->length > this->originalPositions->length))){
			__SAFE_POINT
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",51)
			this->originalPositions->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",52)
			this->originalVelocities->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",53)
			this->k1Forces->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",54)
			this->k1Velocities->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",55)
			this->k2Forces->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",56)
			this->k2Velocities->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",57)
			this->k3Forces->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",58)
			this->k3Velocities->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",59)
			this->k4Forces->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",60)
			this->k4Velocities->push(::nme::geom::Vector3D_obj::__new(null(),null(),null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RungeKuttaIntegrator_obj,allocateParticles,(void))

Void RungeKuttaIntegrator_obj::step( double t){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("RungeKuttaIntegrator_obj::step")
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",83)
		this->particles = this->s->particles;
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",87)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",87)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",87)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",87)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",89)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",91)
				if ((!(this->p->fixed))){
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",93)
							::nme::geom::Vector3D _this = __this->p->position;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",93)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",93)
					this->originalPositions[i] = _Function_4_1::Block(this);
					struct _Function_4_2{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",94)
							::nme::geom::Vector3D _this = __this->p->velocity;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",94)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",94)
					this->originalVelocities[i] = _Function_4_2::Block(this);
				}
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",96)
				this->p->force->x = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",97)
				this->p->force->y = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",98)
				this->p->force->z = (int)0;
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",102)
		this->s->applyForces();
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",104)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",104)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",104)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",104)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",106)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",108)
				if ((!(this->p->fixed))){
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",110)
							::nme::geom::Vector3D _this = __this->p->force;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",110)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",110)
					this->k1Forces[i] = _Function_4_1::Block(this);
					struct _Function_4_2{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",111)
							::nme::geom::Vector3D _this = __this->p->velocity;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",111)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",111)
					this->k1Velocities[i] = _Function_4_2::Block(this);
				}
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",114)
				this->p->force->x = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",115)
				this->p->force->y = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",116)
				this->p->force->z = (int)0;
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",123)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",123)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",123)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",123)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",125)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",127)
				if ((!(this->p->fixed))){
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",129)
					this->originalPosition = this->originalPositions->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",130)
					this->k1Velocity = this->k1Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",132)
					this->p->position->x = (this->originalPosition->x + ((this->k1Velocity->x * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",133)
					this->p->position->y = (this->originalPosition->y + ((this->k1Velocity->y * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",134)
					this->p->position->z = (this->originalPosition->z + ((this->k1Velocity->z * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",136)
					this->originalVelocity = this->originalVelocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",137)
					this->k1Force = this->k1Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",139)
					this->p->velocity->x = (this->originalVelocity->x + (double(((this->k1Force->x * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",140)
					this->p->velocity->y = (this->originalVelocity->y + (double(((this->k1Force->y * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",141)
					this->p->velocity->z = (this->originalVelocity->z + (double(((this->k1Force->z * 0.5) * t)) / double(this->p->mass)));
				}
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",146)
		this->s->applyForces();
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",148)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",148)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",148)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",148)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",150)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",152)
				if ((!(this->p->fixed))){
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",154)
							::nme::geom::Vector3D _this = __this->p->force;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",154)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",154)
					this->k2Forces[i] = _Function_4_1::Block(this);
					struct _Function_4_2{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",155)
							::nme::geom::Vector3D _this = __this->p->velocity;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",155)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",155)
					this->k2Velocities[i] = _Function_4_2::Block(this);
				}
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",158)
				this->p->force->x = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",159)
				this->p->force->y = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",160)
				this->p->force->z = (int)0;
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",165)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",165)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",165)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",165)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",167)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",169)
				if ((!(this->p->fixed))){
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",171)
					this->originalPosition = this->originalPositions->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",172)
					this->k2Velocity = this->k2Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",174)
					this->p->position->x = (this->originalPosition->x + ((this->k2Velocity->x * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",175)
					this->p->position->y = (this->originalPosition->y + ((this->k2Velocity->y * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",176)
					this->p->position->z = (this->originalPosition->z + ((this->k2Velocity->z * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",178)
					this->originalVelocity = this->originalVelocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",179)
					this->k2Force = this->k2Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",181)
					this->p->velocity->x = (this->originalVelocity->x + (double(((this->k2Force->x * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",182)
					this->p->velocity->y = (this->originalVelocity->y + (double(((this->k2Force->y * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",183)
					this->p->velocity->z = (this->originalVelocity->z + (double(((this->k2Force->z * 0.5) * t)) / double(this->p->mass)));
				}
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",187)
		this->s->applyForces();
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",189)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",189)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",189)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",189)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",191)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",193)
				if ((!(this->p->fixed))){
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",195)
							::nme::geom::Vector3D _this = __this->p->force;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",195)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",195)
					this->k3Forces[i] = _Function_4_1::Block(this);
					struct _Function_4_2{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",196)
							::nme::geom::Vector3D _this = __this->p->velocity;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",196)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",196)
					this->k3Velocities[i] = _Function_4_2::Block(this);
				}
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",199)
				this->p->force->x = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",200)
				this->p->force->y = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",201)
				this->p->force->z = (int)0;
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",206)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",206)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",206)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",206)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",208)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",210)
				if ((!(this->p->fixed))){
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",212)
					this->originalPosition = this->originalPositions->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",213)
					this->k3Velocity = this->k3Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",215)
					this->p->position->x = (this->originalPosition->x + ((this->k3Velocity->x * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",216)
					this->p->position->y = (this->originalPosition->y + ((this->k3Velocity->y * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",217)
					this->p->position->z = (this->originalPosition->z + ((this->k3Velocity->z * 0.5) * t));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",219)
					this->originalVelocity = this->originalVelocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",220)
					this->k3Force = this->k3Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",222)
					this->p->velocity->x = (this->originalVelocity->x + (double(((this->k3Force->x * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",223)
					this->p->velocity->y = (this->originalVelocity->y + (double(((this->k3Force->y * 0.5) * t)) / double(this->p->mass)));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",224)
					this->p->velocity->z = (this->originalVelocity->z + (double(((this->k3Force->z * 0.5) * t)) / double(this->p->mass)));
				}
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",228)
		this->s->applyForces();
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",230)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",230)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",230)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",230)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",232)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",234)
				if ((!(this->p->fixed))){
					struct _Function_4_1{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",236)
							::nme::geom::Vector3D _this = __this->p->force;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",236)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",236)
					this->k4Forces[i] = _Function_4_1::Block(this);
					struct _Function_4_2{
						inline static ::nme::geom::Vector3D Block( ::clothx::physics::RungeKuttaIntegrator_obj *__this){
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",237)
							::nme::geom::Vector3D _this = __this->p->velocity;
							HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",237)
							return ::nme::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
						}
					};
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",237)
					this->k4Velocities[i] = _Function_4_2::Block(this);
				}
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",240)
				this->p->force->x = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",241)
				this->p->force->y = (int)0;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",242)
				this->p->force->z = (int)0;
			}
		}
		HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",248)
		{
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",248)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",248)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",248)
				int i = (_g1)++;
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",250)
				this->p = this->particles->__get(i);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",251)
				hx::AddEq(this->p->age,t);
				HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",253)
				if ((!(this->p->fixed))){
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",257)
					this->originalPosition = this->originalPositions->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",258)
					this->k1Velocity = this->k1Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",259)
					this->k2Velocity = this->k2Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",260)
					this->k3Velocity = this->k3Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",261)
					this->k4Velocity = this->k4Velocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",263)
					this->p->position->x = (this->originalPosition->x + ((double(t) / double((int)6)) * ((((this->k1Velocity->x + ((int)2 * this->k2Velocity->x)) + ((int)2 * this->k3Velocity->x)) + this->k4Velocity->x))));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",264)
					this->p->position->y = (this->originalPosition->y + ((double(t) / double((int)6)) * ((((this->k1Velocity->y + ((int)2 * this->k2Velocity->y)) + ((int)2 * this->k3Velocity->y)) + this->k4Velocity->y))));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",265)
					this->p->position->z = (this->originalPosition->z + ((double(t) / double((int)6)) * ((((this->k1Velocity->z + ((int)2 * this->k2Velocity->z)) + ((int)2 * this->k3Velocity->z)) + this->k4Velocity->z))));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",269)
					this->originalVelocity = this->originalVelocities->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",270)
					this->k1Force = this->k1Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",271)
					this->k2Force = this->k2Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",272)
					this->k3Force = this->k3Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",273)
					this->k4Force = this->k4Forces->__get(i);
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",275)
					this->p->velocity->x = (this->originalVelocity->x + (((double(t) / double((int)6)) * this->p->mass) * ((((this->k1Force->x + ((int)2 * this->k2Force->x)) + ((int)2 * this->k3Force->x)) + this->k4Force->x))));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",276)
					this->p->velocity->y = (this->originalVelocity->y + (((double(t) / double((int)6)) * this->p->mass) * ((((this->k1Force->y + ((int)2 * this->k2Force->y)) + ((int)2 * this->k3Force->y)) + this->k4Force->y))));
					HX_SOURCE_POS("src/clothx/physics/RungeKuttaIntegrator.hx",277)
					this->p->velocity->z = (this->originalVelocity->z + (((double(t) / double((int)6)) * this->p->mass) * ((((this->k1Force->z + ((int)2 * this->k2Force->z)) + ((int)2 * this->k3Force->z)) + this->k4Force->z))));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RungeKuttaIntegrator_obj,step,(void))


RungeKuttaIntegrator_obj::RungeKuttaIntegrator_obj()
{
}

void RungeKuttaIntegrator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RungeKuttaIntegrator);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(originalPositions,"originalPositions");
	HX_MARK_MEMBER_NAME(originalVelocities,"originalVelocities");
	HX_MARK_MEMBER_NAME(k1Forces,"k1Forces");
	HX_MARK_MEMBER_NAME(k1Velocities,"k1Velocities");
	HX_MARK_MEMBER_NAME(k2Forces,"k2Forces");
	HX_MARK_MEMBER_NAME(k2Velocities,"k2Velocities");
	HX_MARK_MEMBER_NAME(k3Forces,"k3Forces");
	HX_MARK_MEMBER_NAME(k3Velocities,"k3Velocities");
	HX_MARK_MEMBER_NAME(k4Forces,"k4Forces");
	HX_MARK_MEMBER_NAME(k4Velocities,"k4Velocities");
	HX_MARK_MEMBER_NAME(particles,"particles");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(originalPosition,"originalPosition");
	HX_MARK_MEMBER_NAME(originalVelocity,"originalVelocity");
	HX_MARK_MEMBER_NAME(k1Velocity,"k1Velocity");
	HX_MARK_MEMBER_NAME(k2Velocity,"k2Velocity");
	HX_MARK_MEMBER_NAME(k3Velocity,"k3Velocity");
	HX_MARK_MEMBER_NAME(k4Velocity,"k4Velocity");
	HX_MARK_MEMBER_NAME(k1Force,"k1Force");
	HX_MARK_MEMBER_NAME(k2Force,"k2Force");
	HX_MARK_MEMBER_NAME(k3Force,"k3Force");
	HX_MARK_MEMBER_NAME(k4Force,"k4Force");
	HX_MARK_END_CLASS();
}

Dynamic RungeKuttaIntegrator_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"k1Force") ) { return k1Force; }
		if (HX_FIELD_EQ(inName,"k2Force") ) { return k2Force; }
		if (HX_FIELD_EQ(inName,"k3Force") ) { return k3Force; }
		if (HX_FIELD_EQ(inName,"k4Force") ) { return k4Force; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"k1Forces") ) { return k1Forces; }
		if (HX_FIELD_EQ(inName,"k2Forces") ) { return k2Forces; }
		if (HX_FIELD_EQ(inName,"k3Forces") ) { return k3Forces; }
		if (HX_FIELD_EQ(inName,"k4Forces") ) { return k4Forces; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"particles") ) { return particles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"k1Velocity") ) { return k1Velocity; }
		if (HX_FIELD_EQ(inName,"k2Velocity") ) { return k2Velocity; }
		if (HX_FIELD_EQ(inName,"k3Velocity") ) { return k3Velocity; }
		if (HX_FIELD_EQ(inName,"k4Velocity") ) { return k4Velocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"k1Velocities") ) { return k1Velocities; }
		if (HX_FIELD_EQ(inName,"k2Velocities") ) { return k2Velocities; }
		if (HX_FIELD_EQ(inName,"k3Velocities") ) { return k3Velocities; }
		if (HX_FIELD_EQ(inName,"k4Velocities") ) { return k4Velocities; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"originalPosition") ) { return originalPosition; }
		if (HX_FIELD_EQ(inName,"originalVelocity") ) { return originalVelocity; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"originalPositions") ) { return originalPositions; }
		if (HX_FIELD_EQ(inName,"allocateParticles") ) { return allocateParticles_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"originalVelocities") ) { return originalVelocities; }
	}
	return super::__Field(inName);
}

Dynamic RungeKuttaIntegrator_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::clothx::physics::ParticleSystem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"k1Force") ) { k1Force=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2Force") ) { k2Force=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k3Force") ) { k3Force=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k4Force") ) { k4Force=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"k1Forces") ) { k1Forces=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2Forces") ) { k2Forces=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k3Forces") ) { k3Forces=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k4Forces") ) { k4Forces=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"particles") ) { particles=inValue.Cast< Array< ::clothx::physics::Particle > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"k1Velocity") ) { k1Velocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2Velocity") ) { k2Velocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k3Velocity") ) { k3Velocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k4Velocity") ) { k4Velocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"k1Velocities") ) { k1Velocities=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2Velocities") ) { k2Velocities=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k3Velocities") ) { k3Velocities=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k4Velocities") ) { k4Velocities=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"originalPosition") ) { originalPosition=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalVelocity") ) { originalVelocity=inValue.Cast< ::nme::geom::Vector3D >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"originalPositions") ) { originalPositions=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"originalVelocities") ) { originalVelocities=inValue.Cast< Array< ::nme::geom::Vector3D > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void RungeKuttaIntegrator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("originalPositions"));
	outFields->push(HX_CSTRING("originalVelocities"));
	outFields->push(HX_CSTRING("k1Forces"));
	outFields->push(HX_CSTRING("k1Velocities"));
	outFields->push(HX_CSTRING("k2Forces"));
	outFields->push(HX_CSTRING("k2Velocities"));
	outFields->push(HX_CSTRING("k3Forces"));
	outFields->push(HX_CSTRING("k3Velocities"));
	outFields->push(HX_CSTRING("k4Forces"));
	outFields->push(HX_CSTRING("k4Velocities"));
	outFields->push(HX_CSTRING("particles"));
	outFields->push(HX_CSTRING("p"));
	outFields->push(HX_CSTRING("originalPosition"));
	outFields->push(HX_CSTRING("originalVelocity"));
	outFields->push(HX_CSTRING("k1Velocity"));
	outFields->push(HX_CSTRING("k2Velocity"));
	outFields->push(HX_CSTRING("k3Velocity"));
	outFields->push(HX_CSTRING("k4Velocity"));
	outFields->push(HX_CSTRING("k1Force"));
	outFields->push(HX_CSTRING("k2Force"));
	outFields->push(HX_CSTRING("k3Force"));
	outFields->push(HX_CSTRING("k4Force"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("originalPositions"),
	HX_CSTRING("originalVelocities"),
	HX_CSTRING("k1Forces"),
	HX_CSTRING("k1Velocities"),
	HX_CSTRING("k2Forces"),
	HX_CSTRING("k2Velocities"),
	HX_CSTRING("k3Forces"),
	HX_CSTRING("k3Velocities"),
	HX_CSTRING("k4Forces"),
	HX_CSTRING("k4Velocities"),
	HX_CSTRING("allocateParticles"),
	HX_CSTRING("particles"),
	HX_CSTRING("p"),
	HX_CSTRING("originalPosition"),
	HX_CSTRING("originalVelocity"),
	HX_CSTRING("k1Velocity"),
	HX_CSTRING("k2Velocity"),
	HX_CSTRING("k3Velocity"),
	HX_CSTRING("k4Velocity"),
	HX_CSTRING("k1Force"),
	HX_CSTRING("k2Force"),
	HX_CSTRING("k3Force"),
	HX_CSTRING("k4Force"),
	HX_CSTRING("step"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class RungeKuttaIntegrator_obj::__mClass;

void RungeKuttaIntegrator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.RungeKuttaIntegrator"), hx::TCanCast< RungeKuttaIntegrator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void RungeKuttaIntegrator_obj::__boot()
{
}

} // end namespace clothx
} // end namespace physics
