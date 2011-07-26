#ifndef INCLUDED_clothx_physics_Force
#define INCLUDED_clothx_physics_Force

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(clothx,physics,Force)
namespace clothx{
namespace physics{


class Force_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Force_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void turnOn( )=0;
		Dynamic turnOn_dyn();
		virtual Void turnOff( )=0;
		Dynamic turnOff_dyn();
		virtual bool isOn( )=0;
		Dynamic isOn_dyn();
		virtual bool isOff( )=0;
		Dynamic isOff_dyn();
		virtual Void apply( )=0;
		Dynamic apply_dyn();
};

#define DELEGATE_clothx_physics_Force \
virtual Void turnOn( ) { return mDelegate->turnOn();}  \
virtual Dynamic turnOn_dyn() { return mDelegate->turnOn_dyn();}  \
virtual Void turnOff( ) { return mDelegate->turnOff();}  \
virtual Dynamic turnOff_dyn() { return mDelegate->turnOff_dyn();}  \
virtual bool isOn( ) { return mDelegate->isOn();}  \
virtual Dynamic isOn_dyn() { return mDelegate->isOn_dyn();}  \
virtual bool isOff( ) { return mDelegate->isOff();}  \
virtual Dynamic isOff_dyn() { return mDelegate->isOff_dyn();}  \
virtual Void apply( ) { return mDelegate->apply();}  \
virtual Dynamic apply_dyn() { return mDelegate->apply_dyn();}  \


template<typename IMPL>
class Force_delegate_ : public Force_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Force_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_clothx_physics_Force
};

} // end namespace clothx
} // end namespace physics

#endif /* INCLUDED_clothx_physics_Force */ 
