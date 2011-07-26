#include <hxcpp.h>

#ifndef INCLUDED_clothx_physics_Force
#include <clothx/physics/Force.h>
#endif
namespace clothx{
namespace physics{

HX_DEFINE_DYNAMIC_FUNC0(Force_obj,turnOn,)

HX_DEFINE_DYNAMIC_FUNC0(Force_obj,turnOff,)

HX_DEFINE_DYNAMIC_FUNC0(Force_obj,isOn,return )

HX_DEFINE_DYNAMIC_FUNC0(Force_obj,isOff,return )

HX_DEFINE_DYNAMIC_FUNC0(Force_obj,apply,)


Class Force_obj::__mClass;

void Force_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("clothx.physics.Force"), hx::TCanCast< Force_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace clothx
} // end namespace physics
