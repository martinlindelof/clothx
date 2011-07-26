#ifndef INCLUDED_clothx_physics_Integrator
#define INCLUDED_clothx_physics_Integrator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,physics,Integrator)
namespace clothx{
namespace physics{


class Integrator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Integrator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void step( double t)=0;
		Dynamic step_dyn();
};

#define DELEGATE_clothx_physics_Integrator \
virtual Void step( double t) { return mDelegate->step(t);}  \
virtual Dynamic step_dyn() { return mDelegate->step_dyn();}  \


template<typename IMPL>
class Integrator_delegate_ : public Integrator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Integrator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_clothx_physics_Integrator
};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_Integrator */ 
