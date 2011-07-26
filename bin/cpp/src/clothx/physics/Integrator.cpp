#include <hxcpp.h>

#ifndef INCLUDED_clothx_physics_Integrator
#include <clothx/physics/Integrator.h>
#endif
namespace clothx{
namespace physics{

HX_DEFINE_DYNAMIC_FUNC1(Integrator_obj,step,)


Class Integrator_obj::__mClass;

void Integrator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.Integrator"), hx::TCanCast< Integrator_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace clothx
} // end namespace physics
