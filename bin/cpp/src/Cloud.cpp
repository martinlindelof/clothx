#include <hxcpp.h>

#ifndef INCLUDED_Cloud
#include <Cloud.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_clothx_physics_Attraction
#include <clothx/physics/Attraction.h>
#endif
#ifndef INCLUDED_clothx_physics_Force
#include <clothx/physics/Force.h>
#endif
#ifndef INCLUDED_clothx_physics_Particle
#include <clothx/physics/Particle.h>
#endif
#ifndef INCLUDED_clothx_physics_ParticleSystem
#include <clothx/physics/ParticleSystem.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_MovieClip
#include <nme/display/MovieClip.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif
#ifndef INCLUDED_nme_geom_Vector3D
#include <nme/geom/Vector3D.h>
#endif

Void Cloud_obj::__construct()
{
{
	HX_SOURCE_POS("src_test/Cloud.hx",26)
	super::__construct();
	HX_SOURCE_POS("src_test/Cloud.hx",27)
	::nme::Lib_obj::nmeGetCurrent()->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_SOURCE_POS("src_test/Cloud.hx",28)
	this->s = ::clothx::physics::ParticleSystem_obj::__new(null(),.10);
	HX_SOURCE_POS("src_test/Cloud.hx",29)
	this->mouse = this->s->makeParticle(null(),null());
	HX_SOURCE_POS("src_test/Cloud.hx",30)
	this->mouse->makeFixed();
	HX_SOURCE_POS("src_test/Cloud.hx",31)
	this->others = Array_obj< ::clothx::physics::Particle >::__new();
	HX_SOURCE_POS("src_test/Cloud.hx",32)
	{
		HX_SOURCE_POS("src_test/Cloud.hx",32)
		int _g = (int)0;
		HX_SOURCE_POS("src_test/Cloud.hx",32)
		while(((_g < (int)1000))){
			__SAFE_POINT
			HX_SOURCE_POS("src_test/Cloud.hx",32)
			int i = (_g)++;
			HX_SOURCE_POS("src_test/Cloud.hx",34)
			this->others[i] = this->s->makeParticle(1.0,::nme::geom::Vector3D_obj::__new((::Math_obj::random() * this->nmeGetStage()->nmeGetStageWidth()),(::Math_obj::random() * this->nmeGetStage()->nmeGetStageHeight()),(int)0,null()));
			HX_SOURCE_POS("src_test/Cloud.hx",35)
			this->s->makeAttraction(this->mouse,this->others->__get(i),(int)5000,(int)50);
			HX_SOURCE_POS("src_test/Cloud.hx",36)
			this->s->makeAttraction(this->others->__get(i),this->mouse,(int)-500,(int)10);
		}
	}
	HX_SOURCE_POS("src_test/Cloud.hx",38)
	this->overlay = ::nme::display::Sprite_obj::__new();
	HX_SOURCE_POS("src_test/Cloud.hx",39)
	this->overlay->nmeGetGraphics()->beginFill((int)16777215,null());
	HX_SOURCE_POS("src_test/Cloud.hx",40)
	this->overlay->nmeGetGraphics()->drawRect((int)0,(int)0,this->nmeGetStage()->nmeGetStageWidth(),this->nmeGetStage()->nmeGetStageHeight());
	HX_SOURCE_POS("src_test/Cloud.hx",41)
	this->overlay->nmeGetGraphics()->endFill();
	HX_SOURCE_POS("src_test/Cloud.hx",42)
	this->overlay->nmeSetAlpha(.75);
	HX_SOURCE_POS("src_test/Cloud.hx",43)
	this->nmeGetStage()->addChild(this->overlay);
	HX_SOURCE_POS("src_test/Cloud.hx",44)
	this->onFrame(null());
	HX_SOURCE_POS("src_test/Cloud.hx",45)
	this->nmeGetStage()->addEventListener(::nme::events::Event_obj::MOUSE_LEAVE,this->onLeave_dyn(),null(),null(),null());
	HX_SOURCE_POS("src_test/Cloud.hx",46)
	this->nmeGetStage()->addEventListener(::nme::events::MouseEvent_obj::MOUSE_OVER,this->onEnter_dyn(),null(),null(),null());
}
;
	return null();
}

Cloud_obj::~Cloud_obj() { }

Dynamic Cloud_obj::__CreateEmpty() { return  new Cloud_obj; }
hx::ObjectPtr< Cloud_obj > Cloud_obj::__new()
{  hx::ObjectPtr< Cloud_obj > result = new Cloud_obj();
	result->__construct();
	return result;}

Dynamic Cloud_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cloud_obj > result = new Cloud_obj();
	result->__construct();
	return result;}

Void Cloud_obj::onEnter( Dynamic _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Cloud_obj::onEnter")
		HX_SOURCE_POS("src_test/Cloud.hx",51)
		this->overlay->nmeSetVisible(false);
		HX_SOURCE_POS("src_test/Cloud.hx",52)
		this->nmeGetStage()->addEventListener(::nme::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cloud_obj,onEnter,(void))

Void Cloud_obj::onLeave( Dynamic _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Cloud_obj::onLeave")
		HX_SOURCE_POS("src_test/Cloud.hx",57)
		this->overlay->nmeSetVisible(true);
		HX_SOURCE_POS("src_test/Cloud.hx",58)
		this->nmeGetStage()->removeEventListener(::nme::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cloud_obj,onLeave,(void))

Void Cloud_obj::onFrame( Dynamic _){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Cloud_obj::onFrame")
		HX_SOURCE_POS("src_test/Cloud.hx",63)
		this->mouse->position->x = this->nmeGetStage()->nmeGetMouseX();
		HX_SOURCE_POS("src_test/Cloud.hx",64)
		this->mouse->position->y = this->nmeGetStage()->nmeGetMouseY();
		HX_SOURCE_POS("src_test/Cloud.hx",65)
		this->s->tick((int)1);
		HX_SOURCE_POS("src_test/Cloud.hx",66)
		this->nmeGetGraphics()->clear();
		HX_SOURCE_POS("src_test/Cloud.hx",67)
		{
			HX_SOURCE_POS("src_test/Cloud.hx",67)
			int _g1 = (int)0;
			int _g = this->others->length;
			HX_SOURCE_POS("src_test/Cloud.hx",67)
			while(((_g1 < _g))){
				__SAFE_POINT
				HX_SOURCE_POS("src_test/Cloud.hx",67)
				int i = (_g1)++;
				HX_SOURCE_POS("src_test/Cloud.hx",69)
				if (((hx::Mod(i,(int)20) == (int)0))){
					HX_SOURCE_POS("src_test/Cloud.hx",69)
					this->nmeGetGraphics()->beginFill((int)16711748,null());
				}
				else{
					HX_SOURCE_POS("src_test/Cloud.hx",70)
					if (((hx::Mod(i,(int)25) == (int)0))){
						HX_SOURCE_POS("src_test/Cloud.hx",70)
						this->nmeGetGraphics()->beginFill((int)5570815,null());
					}
					else{
						HX_SOURCE_POS("src_test/Cloud.hx",71)
						this->nmeGetGraphics()->beginFill((int)3355443,null());
					}
				}
				HX_SOURCE_POS("src_test/Cloud.hx",72)
				this->nmeGetGraphics()->drawCircle(this->others->__get(i)->position->x,this->others->__get(i)->position->y,(int)5);
				HX_SOURCE_POS("src_test/Cloud.hx",73)
				this->nmeGetGraphics()->endFill();
			}
		}
		HX_SOURCE_POS("src_test/Cloud.hx",76)
		{
			HX_SOURCE_POS("src_test/Cloud.hx",76)
			int _g = (int)0;
			Array< ::clothx::physics::Particle > _g1 = this->s->particles;
			HX_SOURCE_POS("src_test/Cloud.hx",76)
			while(((_g < _g1->length))){
				__SAFE_POINT
				HX_SOURCE_POS("src_test/Cloud.hx",76)
				::clothx::physics::Particle j = _g1->__get(_g);
				HX_SOURCE_POS("src_test/Cloud.hx",76)
				++(_g);
				HX_SOURCE_POS("src_test/Cloud.hx",78)
				if (((j->position->x > this->nmeGetStage()->nmeGetStageWidth()))){
					HX_SOURCE_POS("src_test/Cloud.hx",80)
					hx::MultEq(j->velocity->x,-.95);
					HX_SOURCE_POS("src_test/Cloud.hx",81)
					j->position->x = this->nmeGetStage()->nmeGetStageWidth();
				}
				else{
					HX_SOURCE_POS("src_test/Cloud.hx",83)
					if (((j->position->x < (int)0))){
						HX_SOURCE_POS("src_test/Cloud.hx",85)
						hx::MultEq(j->velocity->x,-.95);
						HX_SOURCE_POS("src_test/Cloud.hx",86)
						j->position->x = (int)0;
					}
				}
				HX_SOURCE_POS("src_test/Cloud.hx",88)
				if (((j->position->y > this->nmeGetStage()->nmeGetStageHeight()))){
					HX_SOURCE_POS("src_test/Cloud.hx",90)
					hx::MultEq(j->velocity->y,-.95);
					HX_SOURCE_POS("src_test/Cloud.hx",91)
					j->position->y = this->nmeGetStage()->nmeGetStageHeight();
				}
				else{
					HX_SOURCE_POS("src_test/Cloud.hx",93)
					if (((j->position->y < (int)0))){
						HX_SOURCE_POS("src_test/Cloud.hx",95)
						hx::MultEq(j->velocity->y,-.95);
						HX_SOURCE_POS("src_test/Cloud.hx",96)
						j->position->y = (int)0;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cloud_obj,onFrame,(void))

Void Cloud_obj::main( ){
{
		HX_SOURCE_PUSH("Cloud_obj::main")
		HX_SOURCE_POS("src_test/Cloud.hx",20)
		::Cloud_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cloud_obj,main,(void))


Cloud_obj::Cloud_obj()
{
}

void Cloud_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cloud);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_MEMBER_NAME(others,"others");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Cloud_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"others") ) { return others; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onLeave") ) { return onLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"onFrame") ) { return onFrame_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Cloud_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::clothx::physics::ParticleSystem >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::clothx::physics::Particle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"others") ) { others=inValue.Cast< Array< ::clothx::physics::Particle > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::nme::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Cloud_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("mouse"));
	outFields->push(HX_CSTRING("others"));
	outFields->push(HX_CSTRING("overlay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("mouse"),
	HX_CSTRING("others"),
	HX_CSTRING("overlay"),
	HX_CSTRING("onEnter"),
	HX_CSTRING("onLeave"),
	HX_CSTRING("onFrame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Cloud_obj::__mClass;

void Cloud_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Cloud"), hx::TCanCast< Cloud_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Cloud_obj::__boot()
{
}

