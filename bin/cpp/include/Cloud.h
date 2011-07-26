#ifndef INCLUDED_Cloud
#define INCLUDED_Cloud

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nme/display/Sprite.h>
HX_DECLARE_CLASS0(Cloud)
HX_DECLARE_CLASS2(clothx,physics,Particle)
HX_DECLARE_CLASS2(clothx,physics,ParticleSystem)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)


class Cloud_obj : public ::nme::display::Sprite_obj{
	public:
		typedef ::nme::display::Sprite_obj super;
		typedef Cloud_obj OBJ_;
		Cloud_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Cloud_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Cloud_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cloud"); }

		::clothx::physics::ParticleSystem s; /* REM */ 
		::clothx::physics::Particle mouse; /* REM */ 
		Array< ::clothx::physics::Particle > others; /* REM */ 
		::nme::display::Sprite overlay; /* REM */ 
		virtual Void onEnter( Dynamic _);
		Dynamic onEnter_dyn();

		virtual Void onLeave( Dynamic _);
		Dynamic onLeave_dyn();

		virtual Void onFrame( Dynamic _);
		Dynamic onFrame_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Cloud */ 
