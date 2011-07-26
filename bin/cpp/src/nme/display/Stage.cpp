#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_Timer
#include <nme/Timer.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_display_StageAlign
#include <nme/display/StageAlign.h>
#endif
#ifndef INCLUDED_nme_display_StageDisplayState
#include <nme/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_nme_display_StageQuality
#include <nme/display/StageQuality.h>
#endif
#ifndef INCLUDED_nme_display_StageScaleMode
#include <nme/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_nme_display_TouchInfo
#include <nme/display/TouchInfo.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_FocusEvent
#include <nme/events/FocusEvent.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_KeyboardEvent
#include <nme/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif
#ifndef INCLUDED_nme_events_TouchEvent
#include <nme/events/TouchEvent.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_media_SoundChannel
#include <nme/media/SoundChannel.h>
#endif
#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
namespace nme{
namespace display{

Void Stage_obj::__construct(Dynamic inHandle,int inWidth,int inHeight)
{
{
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",58)
	super::__construct(inHandle,HX_CSTRING("Stage"));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",59)
	this->nmeMouseOverObjects = Array_obj< ::nme::display::InteractiveObject >::__new();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",60)
	this->nmeFocusOverObjects = Array_obj< ::nme::display::InteractiveObject >::__new();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",61)
	this->active = true;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",62)
	this->pauseWhenDeactivated = true;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",64)
	::nme::display::Stage_obj::nme_set_stage_handler(this->nmeHandle,this->nmeProcessStageEvent_dyn(),inWidth,inHeight);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",65)
	this->nmeInvalid = false;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",66)
	this->nmeLastRender = (int)0;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",67)
	this->nmeLastDown = Array_obj< ::nme::display::InteractiveObject >::__new();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",68)
	this->nmeLastClickTime = 0.0;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",69)
	this->nmeSetFrameRate((int)100);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",70)
	this->nmeTouchInfo = ::IntHash_obj::__new();
}
;
	return null();
}

Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(Dynamic inHandle,int inWidth,int inHeight)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(inHandle,inWidth,inHeight);
	return result;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::nme::display::Stage Stage_obj::nmeGetStage( ){
	HX_SOURCE_PUSH("Stage_obj::nmeGetStage")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",74)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetStage,return )

bool Stage_obj::nmeIsOpenGL( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeIsOpenGL")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",79)
	return ::nme::display::Stage_obj::nme_stage_is_opengl(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeIsOpenGL,return )

Void Stage_obj::invalidate( ){
{
		HX_SOURCE_PUSH("Stage_obj::invalidate")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",96)
		this->nmeInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

Void Stage_obj::showCursor( bool inShow){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::showCursor")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",101)
		::nme::display::Stage_obj::nme_stage_show_cursor(this->nmeHandle,inShow);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,showCursor,(void))

double Stage_obj::nmeSetFrameRate( double inRate){
	HX_SOURCE_PUSH("Stage_obj::nmeSetFrameRate")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",107)
	this->frameRate = inRate;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",108)
	this->nmeFramePeriod = (  (((this->frameRate <= (int)0))) ? double(this->frameRate) : double((double(1.0) / double(this->frameRate))) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",109)
	return inRate;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetFrameRate,return )

::nme::display::InteractiveObject Stage_obj::nmeGetFocus( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetFocus")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",114)
	int id = ::nme::display::Stage_obj::nme_stage_get_focus_id(this->nmeHandle);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",115)
	::nme::display::DisplayObject obj = this->nmeFindByID(id);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",116)
	return obj;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetFocus,return )

::nme::display::InteractiveObject Stage_obj::nmeSetFocus( ::nme::display::InteractiveObject inObject){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetFocus")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",121)
	if (((inObject == null()))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",122)
		::nme::display::Stage_obj::nme_stage_set_focus(this->nmeHandle,null(),(int)0);
	}
	else{
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",124)
		::nme::display::Stage_obj::nme_stage_set_focus(this->nmeHandle,inObject->nmeHandle,(int)0);
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",125)
	return inObject;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetFocus,return )

bool Stage_obj::nmeGetStageFocusRect( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetStageFocusRect")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",128)
	return ::nme::display::Stage_obj::nme_stage_get_focus_rect(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetStageFocusRect,return )

bool Stage_obj::nmeSetStageFocusRect( bool inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetStageFocusRect")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",130)
	::nme::display::Stage_obj::nme_stage_set_focus_rect(this->nmeHandle,inVal);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",131)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetStageFocusRect,return )

int Stage_obj::nmeGetStageWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetStageWidth")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",135)
	return ::nme::display::Stage_obj::nme_stage_get_stage_width(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetStageWidth,return )

int Stage_obj::nmeGetStageHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetStageHeight")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",140)
	return ::nme::display::Stage_obj::nme_stage_get_stage_height(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetStageHeight,return )

double Stage_obj::nmeGetDPIScale( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetDPIScale")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",144)
	return ::nme::display::Stage_obj::nme_stage_get_dpi_scale(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetDPIScale,return )

::nme::display::StageScaleMode Stage_obj::nmeGetScaleMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetScaleMode")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",150)
	int i = ::nme::display::Stage_obj::nme_stage_get_scale_mode(this->nmeHandle);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",151)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageScaleMode >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetScaleMode,return )

::nme::display::StageScaleMode Stage_obj::nmeSetScaleMode( ::nme::display::StageScaleMode inMode){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetScaleMode")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",155)
	::nme::display::Stage_obj::nme_stage_set_scale_mode(this->nmeHandle,inMode->__Index());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",156)
	return inMode;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetScaleMode,return )

::nme::display::StageAlign Stage_obj::nmeGetAlign( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetAlign")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",160)
	int i = ::nme::display::Stage_obj::nme_stage_get_align(this->nmeHandle);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",161)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageAlign >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetAlign,return )

::nme::display::StageAlign Stage_obj::nmeSetAlign( ::nme::display::StageAlign inMode){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetAlign")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",165)
	::nme::display::Stage_obj::nme_stage_set_align(this->nmeHandle,inMode->__Index());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",166)
	return inMode;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetAlign,return )

::nme::display::StageQuality Stage_obj::nmeGetQuality( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetQuality")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",170)
	int i = ::nme::display::Stage_obj::nme_stage_get_quality(this->nmeHandle);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",171)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageQuality >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetQuality,return )

::nme::display::StageQuality Stage_obj::nmeSetQuality( ::nme::display::StageQuality inQuality){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetQuality")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",175)
	::nme::display::Stage_obj::nme_stage_set_quality(this->nmeHandle,inQuality->__Index());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",176)
	return inQuality;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetQuality,return )

::nme::display::StageDisplayState Stage_obj::nmeGetDisplayState( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeGetDisplayState")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",180)
	int i = ::nme::display::Stage_obj::nme_stage_get_display_state(this->nmeHandle);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",181)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageDisplayState >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeGetDisplayState,return )

::nme::display::StageDisplayState Stage_obj::nmeSetDisplayState( ::nme::display::StageDisplayState inState){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeSetDisplayState")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",185)
	::nme::display::Stage_obj::nme_stage_set_display_state(this->nmeHandle,inState->__Index());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",186)
	return inState;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetDisplayState,return )

Void Stage_obj::nmeStartDrag( ::nme::display::Sprite sprite,bool lockCenter,::nme::geom::Rectangle bounds){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeStartDrag")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",192)
		this->nmeDragBounds = (  (((bounds == null()))) ? ::nme::geom::Rectangle(null()) : ::nme::geom::Rectangle(bounds->clone()) );
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",193)
		this->nmeDragObject = sprite;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",195)
		if (((this->nmeDragObject != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",196)
			if ((lockCenter)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",199)
				this->nmeDragOffsetX = (double(-(this->nmeDragObject->nmeGetWidth())) / double((int)2));
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",200)
				this->nmeDragOffsetY = (double(-(this->nmeDragObject->nmeGetHeight())) / double((int)2));
			}
			else{
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",204)
				::nme::geom::Point mouse = ::nme::geom::Point_obj::__new(this->nmeGetMouseX(),this->nmeGetMouseY());
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",205)
				::nme::display::DisplayObjectContainer p = this->nmeDragObject->nmeGetParent();
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",206)
				if (((p != null()))){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",207)
					mouse = p->globalToLocal(mouse);
				}
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",209)
				this->nmeDragOffsetX = (this->nmeDragObject->nmeGetX() - mouse->x);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",210)
				this->nmeDragOffsetY = (this->nmeDragObject->nmeGetY() - mouse->y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeStartDrag,(void))

Void Stage_obj::nmeDrag( ::nme::geom::Point inMouse){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeDrag")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",217)
		::nme::display::DisplayObjectContainer p = this->nmeDragObject->nmeGetParent();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",218)
		if (((p != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",219)
			inMouse = p->globalToLocal(inMouse);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",221)
		double x = (inMouse->x + this->nmeDragOffsetX);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",222)
		double y = (inMouse->y + this->nmeDragOffsetY);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",223)
		if (((this->nmeDragBounds != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",226)
			if (((x < this->nmeDragBounds->x))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",226)
				x = this->nmeDragBounds->x;
			}
			else{
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",227)
				if (((x > this->nmeDragBounds->get_right()))){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",227)
					x = this->nmeDragBounds->get_right();
				}
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",229)
			if (((y < this->nmeDragBounds->y))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",229)
				y = this->nmeDragBounds->y;
			}
			else{
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",230)
				if (((y > this->nmeDragBounds->get_bottom()))){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",230)
					y = this->nmeDragBounds->get_bottom();
				}
			}
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",233)
		this->nmeDragObject->nmeSetX(x);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",234)
		this->nmeDragObject->nmeSetY(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeDrag,(void))

Void Stage_obj::nmeStopDrag( ::nme::display::Sprite sprite){
{
		HX_SOURCE_PUSH("Stage_obj::nmeStopDrag")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",239)
		this->nmeDragBounds = null();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",240)
		this->nmeDragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeStopDrag,(void))

bool Stage_obj::nmeCheckInOuts( ::nme::events::MouseEvent inEvent,Array< ::nme::display::InteractiveObject > inStack,::nme::display::TouchInfo touchInfo){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeCheckInOuts")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",251)
	Array< ::nme::display::InteractiveObject > prev = (  (((touchInfo == null()))) ? Array< ::nme::display::InteractiveObject >(this->nmeMouseOverObjects) : Array< ::nme::display::InteractiveObject >(touchInfo->touchOverObjects) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",252)
	Array< ::String > events = (  (((touchInfo == null()))) ? Array< ::String >(::nme::display::Stage_obj::nmeMouseChanges) : Array< ::String >(::nme::display::Stage_obj::nmeTouchChanges) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",254)
	int new_n = inStack->length;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",255)
	::nme::display::InteractiveObject new_obj = (  (((new_n > (int)0))) ? ::nme::display::InteractiveObject(inStack->__get((new_n - (int)1))) : ::nme::display::InteractiveObject(null()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",256)
	int old_n = prev->length;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",257)
	::nme::display::InteractiveObject old_obj = (  (((old_n > (int)0))) ? ::nme::display::InteractiveObject(prev->__get((old_n - (int)1))) : ::nme::display::InteractiveObject(null()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",258)
	if (((new_obj != old_obj))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",261)
		if (((old_obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",262)
			old_obj->nmeFireEvent(inEvent->nmeCreateSimilar(events->__get((int)0),new_obj,old_obj));
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",264)
		if (((new_obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",265)
			new_obj->nmeFireEvent(inEvent->nmeCreateSimilar(events->__get((int)1),old_obj,null()));
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",268)
		int common = (int)0;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",269)
		while(((bool((bool((common < new_n)) && bool((common < old_n)))) && bool((inStack->__get(common) == prev->__get(common)))))){
			__SAFE_POINT
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",270)
			(common)++;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",272)
		::nme::events::MouseEvent rollOut = inEvent->nmeCreateSimilar(events->__get((int)2),new_obj,old_obj);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",273)
		int i = (old_n - (int)1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",274)
		while(((i >= common))){
			__SAFE_POINT
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",276)
			prev->__get(i)->dispatchEvent(rollOut);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",277)
			(i)--;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",280)
		::nme::events::MouseEvent rollOver = inEvent->nmeCreateSimilar(events->__get((int)3),old_obj,null());
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",281)
		int i1 = (new_n - (int)1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",282)
		while(((i1 >= common))){
			__SAFE_POINT
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",284)
			inStack->__get(i1)->dispatchEvent(rollOver);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",285)
			(i1)--;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",288)
		if (((touchInfo == null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",289)
			this->nmeMouseOverObjects = inStack;
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",291)
			touchInfo->touchOverObjects = inStack;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",292)
		return false;
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",294)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeCheckInOuts,return )

Void Stage_obj::nmeOnMouse( Dynamic inEvent,::String inType,bool inFromMouse){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnMouse")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",303)
		::String type = inType;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",304)
		int button = inEvent->__Field(HX_CSTRING("value"));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",305)
		if ((!(inFromMouse))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",306)
			button = (int)0;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",307)
		int wheel = (int)0;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",308)
		if (((inType == ::nme::events::MouseEvent_obj::MOUSE_DOWN))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",310)
			if (((button > (int)2))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",311)
				return null();
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",312)
			type = ::nme::display::Stage_obj::sDownEvents->__get(button);
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",314)
			if (((inType == ::nme::events::MouseEvent_obj::MOUSE_UP))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",315)
				if (((button > (int)2))){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",318)
					type = ::nme::events::MouseEvent_obj::MOUSE_WHEEL;
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",319)
					wheel = (  (((button == (int)3))) ? int((int)-1) : int((int)1) );
				}
				else{
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",323)
					type = ::nme::display::Stage_obj::sUpEvents->__get(button);
				}
			}
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",326)
		if (((this->nmeDragObject != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",327)
			this->nmeDrag(::nme::geom::Point_obj::__new(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y"))));
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",329)
		Array< ::nme::display::InteractiveObject > stack = Array_obj< ::nme::display::InteractiveObject >::__new();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",330)
		::nme::display::DisplayObject obj = this->nmeFindByID(inEvent->__Field(HX_CSTRING("id")));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",331)
		if (((obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",332)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",334)
		::nme::geom::Point local = null();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",335)
		if (((stack->length > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",337)
			::nme::display::InteractiveObject obj1 = stack->__get((int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",338)
			stack->reverse();
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",339)
			local = obj1->globalToLocal(::nme::geom::Point_obj::__new(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y"))));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",340)
			::nme::events::MouseEvent evt = ::nme::events::MouseEvent_obj::nmeCreate(type,inEvent,local,obj1);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",341)
			evt->delta = wheel;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",342)
			if ((inFromMouse)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",343)
				this->nmeCheckInOuts(evt,stack,null());
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",344)
			obj1->nmeFireEvent(evt);
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",349)
			local = ::nme::geom::Point_obj::__new(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y")));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",350)
			::nme::events::MouseEvent evt = ::nme::events::MouseEvent_obj::nmeCreate(type,inEvent,local,null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",351)
			evt->delta = wheel;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",352)
			if ((inFromMouse)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",353)
				this->nmeCheckInOuts(evt,stack,null());
			}
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",356)
		::nme::display::InteractiveObject click_obj = (  (((stack->length > (int)0))) ? ::nme::display::InteractiveObject(stack->__get((stack->length - (int)1))) : ::nme::display::InteractiveObject(hx::ObjectPtr<OBJ_>(this)) );
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",357)
		if (((bool((inType == ::nme::events::MouseEvent_obj::MOUSE_DOWN)) && bool((button < (int)3))))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",358)
			this->nmeLastDown[button] = click_obj;
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",361)
			if (((bool((inType == ::nme::events::MouseEvent_obj::MOUSE_UP)) && bool((button < (int)3))))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",363)
				if (((click_obj == this->nmeLastDown->__get(button)))){
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",365)
					::nme::events::MouseEvent evt = ::nme::events::MouseEvent_obj::nmeCreate(::nme::display::Stage_obj::sClickEvents->__get(button),inEvent,local,click_obj);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",366)
					click_obj->nmeFireEvent(evt);
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",368)
					if (((bool((button == (int)0)) && bool(click_obj->doubleClickEnabled)))){
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",370)
						double now = ::nme::Timer_obj::stamp();
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",371)
						if ((((now - this->nmeLastClickTime) < 0.25))){
							HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",373)
							::nme::events::MouseEvent evt1 = ::nme::events::MouseEvent_obj::nmeCreate(::nme::events::MouseEvent_obj::DOUBLE_CLICK,inEvent,local,click_obj);
							HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",374)
							click_obj->nmeFireEvent(evt1);
						}
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",376)
						this->nmeLastClickTime = now;
					}
				}
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",379)
				this->nmeLastDown[button] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeOnMouse,(void))

Void Stage_obj::nmeOnTouch( Dynamic inEvent,::String inType,::nme::display::TouchInfo touchInfo){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnTouch")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",386)
		Array< ::nme::display::InteractiveObject > stack = Array_obj< ::nme::display::InteractiveObject >::__new();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",387)
		::nme::display::DisplayObject obj = this->nmeFindByID(inEvent->__Field(HX_CSTRING("id")));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",388)
		if (((obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",389)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",391)
		if (((stack->length > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",393)
			::nme::display::InteractiveObject obj1 = stack->__get((int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",394)
			stack->reverse();
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",395)
			::nme::geom::Point local = obj1->globalToLocal(::nme::geom::Point_obj::__new(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y"))));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",396)
			::nme::events::TouchEvent evt = ::nme::events::TouchEvent_obj::nmeCreate(inType,inEvent,local,obj1);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",397)
			evt->touchPointID = inEvent->__Field(HX_CSTRING("value"));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",398)
			evt->isPrimaryTouchPoint = (((int(inEvent->__Field(HX_CSTRING("flags"))) & int((int)32768))) > (int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",399)
			if ((evt->isPrimaryTouchPoint)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",400)
				this->nmeCheckInOuts(evt,stack,touchInfo);
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",401)
			obj1->nmeFireEvent(evt);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",402)
			if (((bool(evt->isPrimaryTouchPoint) && bool((inType == ::nme::events::TouchEvent_obj::TOUCH_MOVE))))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",404)
				::nme::events::MouseEvent evt1 = ::nme::events::MouseEvent_obj::nmeCreate(::nme::events::MouseEvent_obj::MOUSE_MOVE,inEvent,local,obj1);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",405)
				obj1->nmeFireEvent(evt1);
			}
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",411)
			::nme::events::TouchEvent evt = ::nme::events::TouchEvent_obj::nmeCreate(inType,inEvent,::nme::geom::Point_obj::__new(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y"))),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",412)
			evt->touchPointID = inEvent->__Field(HX_CSTRING("value"));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",413)
			evt->isPrimaryTouchPoint = (((int(inEvent->__Field(HX_CSTRING("flags"))) & int((int)32768))) > (int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",414)
			if ((evt->isPrimaryTouchPoint)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",415)
				this->nmeCheckInOuts(evt,stack,touchInfo);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeOnTouch,(void))

Void Stage_obj::nmeCheckFocusInOuts( Dynamic inEvent,Array< ::nme::display::InteractiveObject > inStack){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeCheckFocusInOuts")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",425)
		int new_n = inStack->length;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",426)
		::nme::display::InteractiveObject new_obj = (  (((new_n > (int)0))) ? ::nme::display::InteractiveObject(inStack->__get((new_n - (int)1))) : ::nme::display::InteractiveObject(null()) );
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",427)
		int old_n = this->nmeFocusOverObjects->length;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",428)
		::nme::display::InteractiveObject old_obj = (  (((old_n > (int)0))) ? ::nme::display::InteractiveObject(this->nmeFocusOverObjects->__get((old_n - (int)1))) : ::nme::display::InteractiveObject(null()) );
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",430)
		if (((new_obj != old_obj))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",433)
			int common = (int)0;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",434)
			while(((bool((bool((common < new_n)) && bool((common < old_n)))) && bool((inStack->__get(common) == this->nmeFocusOverObjects->__get(common)))))){
				__SAFE_POINT
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",435)
				(common)++;
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",437)
			::nme::events::FocusEvent focusOut = ::nme::events::FocusEvent_obj::__new(::nme::events::FocusEvent_obj::FOCUS_OUT,false,false,new_obj,(inEvent->__Field(HX_CSTRING("flags")) > (int)0),inEvent->__Field(HX_CSTRING("code")),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",442)
			int i = (old_n - (int)1);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",443)
			while(((i >= common))){
				__SAFE_POINT
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",445)
				this->nmeFocusOverObjects->__get(i)->dispatchEvent(focusOut);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",446)
				(i)--;
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",449)
			::nme::events::FocusEvent focusIn = ::nme::events::FocusEvent_obj::__new(::nme::events::FocusEvent_obj::FOCUS_IN,false,false,old_obj,(inEvent->__Field(HX_CSTRING("flags")) > (int)0),inEvent->__Field(HX_CSTRING("code")),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",453)
			int i1 = (new_n - (int)1);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",454)
			while(((i1 >= common))){
				__SAFE_POINT
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",456)
				inStack->__get(i1)->dispatchEvent(focusIn);
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",457)
				(i1)--;
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",460)
			this->nmeFocusOverObjects = inStack;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,nmeCheckFocusInOuts,(void))

Void Stage_obj::nmeOnFocus( Dynamic inEvent){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnFocus")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",468)
		Array< ::nme::display::InteractiveObject > stack = Array_obj< ::nme::display::InteractiveObject >::__new();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",469)
		::nme::display::DisplayObject obj = this->nmeFindByID(inEvent->__Field(HX_CSTRING("id")));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",470)
		if (((obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",471)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",472)
		if (((bool((stack->length > (int)0)) && bool(((bool((inEvent->__Field(HX_CSTRING("value")) == (int)1)) || bool((inEvent->__Field(HX_CSTRING("value")) == (int)2)))))))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",474)
			::nme::display::InteractiveObject obj1 = stack->__get((int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",475)
			::nme::events::FocusEvent evt = ::nme::events::FocusEvent_obj::__new((  (((inEvent->__Field(HX_CSTRING("value")) == (int)1))) ? ::String(::nme::events::FocusEvent_obj::MOUSE_FOCUS_CHANGE) : ::String(::nme::events::FocusEvent_obj::KEY_FOCUS_CHANGE) ),true,true,(  (((this->nmeFocusOverObjects->length == (int)0))) ? ::nme::display::InteractiveObject(null()) : ::nme::display::InteractiveObject(this->nmeFocusOverObjects->__get((int)0)) ),(inEvent->__Field(HX_CSTRING("flags")) > (int)0),inEvent->__Field(HX_CSTRING("code")),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",482)
			obj1->nmeFireEvent(evt);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",483)
			if ((evt->nmeGetIsCancelled())){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",485)
				inEvent->__FieldRef(HX_CSTRING("result")) = (int)1;
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",486)
				return null();
			}
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",490)
		stack->reverse();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",492)
		this->nmeCheckFocusInOuts(inEvent,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeOnFocus,(void))

Void Stage_obj::nmeOnKey( Dynamic inEvent,::String inType){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnKey")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",512)
		Array< ::nme::display::InteractiveObject > stack = Array_obj< ::nme::display::InteractiveObject >::__new();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",513)
		::nme::display::DisplayObject obj = this->nmeFindByID(inEvent->__Field(HX_CSTRING("id")));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",514)
		if (((obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",515)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",516)
		if (((stack->length > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",518)
			::nme::display::InteractiveObject obj1 = stack->__get((int)0);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",519)
			int flags = inEvent->__Field(HX_CSTRING("flags"));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",520)
			::nme::events::KeyboardEvent evt = ::nme::events::KeyboardEvent_obj::__new(inType,true,true,inEvent->__Field(HX_CSTRING("code")),inEvent->__Field(HX_CSTRING("value")),(  (((((int(flags) & int(::nme::display::Stage_obj::efLocationRight))) == (int)0))) ? int((int)1) : int((int)0) ),(((int(flags) & int(::nme::display::Stage_obj::efCtrlDown))) != (int)0),(((int(flags) & int(::nme::display::Stage_obj::efAltDown))) != (int)0),(((int(flags) & int(::nme::display::Stage_obj::efShiftDown))) != (int)0));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",531)
			obj1->nmeFireEvent(evt);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",532)
			if ((evt->nmeGetIsCancelled())){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",533)
				inEvent->__FieldRef(HX_CSTRING("result")) = (int)1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,nmeOnKey,(void))

Void Stage_obj::nmeOnResize( double inW,double inH){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnResize")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",540)
		::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::RESIZE,null(),null());
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",541)
		this->nmeBroadcast(evt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,nmeOnResize,(void))

Void Stage_obj::nmeRender( bool inSendEnterFrame){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeRender")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",546)
		if ((!(this->active))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",547)
			return null();
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",550)
		if ((inSendEnterFrame)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",551)
			this->nmeBroadcast(::nme::events::Event_obj::__new(::nme::events::Event_obj::ENTER_FRAME,null(),null()));
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",554)
		if ((this->nmeInvalid)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",556)
			this->nmeInvalid = false;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",557)
			this->nmeBroadcast(::nme::events::Event_obj::__new(::nme::events::Event_obj::RENDER,null(),null()));
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",559)
		::nme::display::Stage_obj::nme_render_stage(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeRender,(void))

Void Stage_obj::nmeOnChange( Dynamic inEvent){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeOnChange")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",564)
		::nme::display::DisplayObject obj = this->nmeFindByID(inEvent->__Field(HX_CSTRING("id")));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",565)
		if (((obj != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",566)
			obj->nmeFireEvent(::nme::events::Event_obj::__new(::nme::events::Event_obj::CHANGE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeOnChange,(void))

Void Stage_obj::nmeCheckRender( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeCheckRender")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",570)
		if (((this->frameRate > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",574)
			double now = ::nme::Timer_obj::stamp();
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",575)
			if (((now >= (this->nmeLastRender + this->nmeFramePeriod)))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",577)
				this->nmeLastRender = now;
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",581)
				this->nmeRender(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeCheckRender,(void))

double Stage_obj::nmeNextFrameDue( double inOtherTimers){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeNextFrameDue")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",589)
	if (((bool(!(this->active)) && bool(this->pauseWhenDeactivated)))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",590)
		return inOtherTimers;
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",591)
	if (((this->frameRate > (int)0))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",593)
		double next = (((this->nmeLastRender + this->nmeFramePeriod) - ::nme::Timer_obj::stamp()) - ::nme::display::Stage_obj::nmeEarlyWakeup);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",594)
		if (((next < inOtherTimers))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",595)
			return next;
		}
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",597)
	return inOtherTimers;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeNextFrameDue,return )

Void Stage_obj::nmePollTimers( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmePollTimers")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",603)
		::nme::Timer_obj::nmeCheckTimers();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",604)
		::nme::media::SoundChannel_obj::nmePollComplete();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",605)
		::nme::net::URLLoader_obj::nmePollData();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",606)
		this->nmeCheckRender();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmePollTimers,(void))

double Stage_obj::nmeUpdateNextWake( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeUpdateNextWake")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",612)
	double next_wake = ::nme::Timer_obj::nmeNextWake(315000000.0);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",613)
	if (((bool((next_wake > 0.02)) && bool(((bool(::nme::media::SoundChannel_obj::nmeCompletePending()) || bool(::nme::net::URLLoader_obj::nmeLoadPending()))))))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",615)
		next_wake = (  (((bool(this->active) || bool(!(this->pauseWhenDeactivated))))) ? double(0.020) : double(0.500) );
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",618)
	next_wake = this->nmeNextFrameDue(next_wake);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",619)
	::nme::display::Stage_obj::nme_stage_set_next_wake(this->nmeHandle,next_wake);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",620)
	return next_wake;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,nmeUpdateNextWake,return )

Void Stage_obj::nmeSetActive( bool inActive){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Stage_obj::nmeSetActive")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",624)
		if (((inActive != this->active))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",628)
			this->active = inActive;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",629)
			if ((!(this->active))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",630)
				this->nmeLastRender = ::nme::Timer_obj::stamp();
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",632)
			::nme::events::Event evt = ::nme::events::Event_obj::__new((  ((inActive)) ? ::String(::nme::events::Event_obj::ACTIVATE) : ::String(::nme::events::Event_obj::DEACTIVATE) ),null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",633)
			this->nmeBroadcast(evt);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",634)
			if ((inActive)){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",635)
				this->nmePollTimers();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeSetActive,(void))

double Stage_obj::nmeDoProcessStageEvent( Dynamic inEvent){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeDoProcessStageEvent")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",642)
	double result = 0.0;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",647)
	int type = ::Std_obj::_int(::Reflect_obj::field(inEvent,HX_CSTRING("type")));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",648)
	switch( (int)(type)){
		case (int)2: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",650)
			if (((this->onKey_dyn() != null()))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",652)
				this->onKey(inEvent->__Field(HX_CSTRING("code")),inEvent->__Field(HX_CSTRING("down")),inEvent->__Field(HX_CSTRING("char")),inEvent->__Field(HX_CSTRING("flags")));
			}
		}
		;break;
		case (int)1: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",654)
			this->nmeOnKey(inEvent,::nme::events::KeyboardEvent_obj::KEY_DOWN);
		}
		;break;
		case (int)3: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",657)
			this->nmeOnKey(inEvent,::nme::events::KeyboardEvent_obj::KEY_UP);
		}
		;break;
		case (int)4: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",660)
			this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::MOUSE_MOVE,true);
		}
		;break;
		case (int)5: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",663)
			this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::MOUSE_DOWN,true);
		}
		;break;
		case (int)6: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",666)
			this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::CLICK,true);
		}
		;break;
		case (int)7: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",669)
			this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::MOUSE_UP,true);
		}
		;break;
		case (int)8: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",673)
			this->nmeOnResize(inEvent->__Field(HX_CSTRING("x")),inEvent->__Field(HX_CSTRING("y")));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",675)
			this->nmeRender(false);
		}
		;break;
		case (int)9: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",678)
			this->nmePollTimers();
		}
		;break;
		case (int)10: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",681)
			if (((this->onQuit_dyn() != null()))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",683)
				this->onQuit();
			}
		}
		;break;
		case (int)11: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",685)
			this->nmeOnFocus(inEvent);
		}
		;break;
		case (int)12: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",688)
			if ((::nme::display::Stage_obj::shouldRotateInterface(inEvent->__Field(HX_CSTRING("value"))))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",690)
				inEvent->__FieldRef(HX_CSTRING("result")) = (int)2;
			}
		}
		;break;
		case (int)14: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",692)
			this->nmeRender(true);
		}
		;break;
		case (int)15: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",696)
			::nme::display::TouchInfo touchInfo = ::nme::display::TouchInfo_obj::__new();
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",697)
			this->nmeTouchInfo->set(inEvent->__Field(HX_CSTRING("value")),touchInfo);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",698)
			this->nmeOnTouch(inEvent,::nme::events::TouchEvent_obj::TOUCH_BEGIN,touchInfo);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",699)
			if (((((int(inEvent->__Field(HX_CSTRING("flags"))) & int((int)32768))) > (int)0))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",700)
				this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::MOUSE_DOWN,false);
			}
		}
		;break;
		case (int)16: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",703)
			::nme::display::TouchInfo touchInfo = this->nmeTouchInfo->get(inEvent->__Field(HX_CSTRING("value")));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",704)
			this->nmeOnTouch(inEvent,::nme::events::TouchEvent_obj::TOUCH_MOVE,touchInfo);
		}
		;break;
		case (int)17: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",707)
			::nme::display::TouchInfo touchInfo = this->nmeTouchInfo->get(inEvent->__Field(HX_CSTRING("value")));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",708)
			this->nmeOnTouch(inEvent,::nme::events::TouchEvent_obj::TOUCH_END,touchInfo);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",709)
			this->nmeTouchInfo->remove(inEvent->__Field(HX_CSTRING("value")));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",710)
			if (((((int(inEvent->__Field(HX_CSTRING("flags"))) & int((int)32768))) > (int)0))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",711)
				this->nmeOnMouse(inEvent,::nme::events::MouseEvent_obj::MOUSE_UP,false);
			}
		}
		;break;
		case (int)18: {
		}
		;break;
		case (int)19: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",716)
			this->nmeOnChange(inEvent);
		}
		;break;
		case (int)20: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",719)
			this->nmeSetActive(true);
		}
		;break;
		case (int)21: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",722)
			this->nmeSetActive(false);
		}
		;break;
		case (int)22: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",726)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::GOT_INPUT_FOCUS,null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",727)
			this->nmeBroadcast(evt);
		}
		;break;
		case (int)23: {
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",730)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::LOST_INPUT_FOCUS,null(),null());
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",731)
			this->nmeBroadcast(evt);
		}
		;break;
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",736)
	result = this->nmeUpdateNextWake();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",740)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeDoProcessStageEvent,return )

Dynamic Stage_obj::nmeProcessStageEvent( Dynamic inEvent){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stage_obj::nmeProcessStageEvent")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",745)
	this->nmeDoProcessStageEvent(inEvent);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",746)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeProcessStageEvent,return )

int Stage_obj::OrientationPortrait;

int Stage_obj::OrientationPortraitUpsideDown;

int Stage_obj::OrientationLandscapeLeft;

int Stage_obj::OrientationLandscapeRight;

int Stage_obj::OrientationFaceUp;

int Stage_obj::OrientationFaceDown;

HX_BEGIN_DEFAULT_FUNC(__default_shouldRotateInterface,Stage_obj)
bool run(int inOrientation){
	HX_SOURCE_PUSH("Stage_obj::shouldRotateInterface")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/display/Stage.hx",91)
	return (inOrientation == ::nme::display::Stage_obj::OrientationPortrait);
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::shouldRotateInterface;

Array< ::String > Stage_obj::nmeMouseChanges;

Array< ::String > Stage_obj::nmeTouchChanges;

Array< ::String > Stage_obj::sDownEvents;

Array< ::String > Stage_obj::sUpEvents;

Array< ::String > Stage_obj::sClickEvents;

double Stage_obj::nmeEarlyWakeup;

int Stage_obj::efLeftDown;

int Stage_obj::efShiftDown;

int Stage_obj::efCtrlDown;

int Stage_obj::efAltDown;

int Stage_obj::efCommandDown;

int Stage_obj::efLocationRight;

int Stage_obj::efNoNativeClick;

Dynamic Stage_obj::nme_set_stage_handler;

Dynamic Stage_obj::nme_render_stage;

Dynamic Stage_obj::nme_stage_get_focus_id;

Dynamic Stage_obj::nme_stage_set_focus;

Dynamic Stage_obj::nme_stage_get_focus_rect;

Dynamic Stage_obj::nme_stage_set_focus_rect;

Dynamic Stage_obj::nme_stage_is_opengl;

Dynamic Stage_obj::nme_stage_get_stage_width;

Dynamic Stage_obj::nme_stage_get_stage_height;

Dynamic Stage_obj::nme_stage_get_dpi_scale;

Dynamic Stage_obj::nme_stage_get_scale_mode;

Dynamic Stage_obj::nme_stage_set_scale_mode;

Dynamic Stage_obj::nme_stage_get_align;

Dynamic Stage_obj::nme_stage_set_align;

Dynamic Stage_obj::nme_stage_get_quality;

Dynamic Stage_obj::nme_stage_set_quality;

Dynamic Stage_obj::nme_stage_get_display_state;

Dynamic Stage_obj::nme_stage_set_display_state;

Dynamic Stage_obj::nme_stage_set_next_wake;

Dynamic Stage_obj::nme_stage_request_render;

Dynamic Stage_obj::nme_stage_show_cursor;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(nmeMouseOverObjects,"nmeMouseOverObjects");
	HX_MARK_MEMBER_NAME(nmeFocusOverObjects,"nmeFocusOverObjects");
	HX_MARK_MEMBER_NAME(nmeInvalid,"nmeInvalid");
	HX_MARK_MEMBER_NAME(nmeDragBounds,"nmeDragBounds");
	HX_MARK_MEMBER_NAME(nmeDragObject,"nmeDragObject");
	HX_MARK_MEMBER_NAME(nmeDragOffsetX,"nmeDragOffsetX");
	HX_MARK_MEMBER_NAME(nmeDragOffsetY,"nmeDragOffsetY");
	HX_MARK_MEMBER_NAME(nmeFramePeriod,"nmeFramePeriod");
	HX_MARK_MEMBER_NAME(nmeLastRender,"nmeLastRender");
	HX_MARK_MEMBER_NAME(nmeTouchInfo,"nmeTouchInfo");
	HX_MARK_MEMBER_NAME(nmeLastDown,"nmeLastDown");
	HX_MARK_MEMBER_NAME(nmeLastClickTime,"nmeLastClickTime");
	HX_MARK_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(dpiScale,"dpiScale");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(displayState,"displayState");
	HX_MARK_MEMBER_NAME(onKey,"onKey");
	HX_MARK_MEMBER_NAME(onQuit,"onQuit");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Stage_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return nmeGetFocus(); }
		if (HX_FIELD_EQ(inName,"align") ) { return nmeGetAlign(); }
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { return onQuit; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return nmeGetQuality(); }
		if (HX_FIELD_EQ(inName,"nmeDrag") ) { return nmeDrag_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { return nmeIsOpenGL(); }
		if (HX_FIELD_EQ(inName,"dpiScale") ) { return nmeGetDPIScale(); }
		if (HX_FIELD_EQ(inName,"nmeOnKey") ) { return nmeOnKey_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { return sUpEvents; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { return efAltDown; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return nmeGetScaleMode(); }
		if (HX_FIELD_EQ(inName,"nmeRender") ) { return nmeRender_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { return efLeftDown; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { return efCtrlDown; }
		if (HX_FIELD_EQ(inName,"nmeInvalid") ) { return nmeInvalid; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return nmeGetStageWidth(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnMouse") ) { return nmeOnMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnTouch") ) { return nmeOnTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnFocus") ) { return nmeOnFocus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { return sDownEvents; }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { return efShiftDown; }
		if (HX_FIELD_EQ(inName,"nmeLastDown") ) { return nmeLastDown; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return nmeGetStageHeight(); }
		if (HX_FIELD_EQ(inName,"nmeGetStage") ) { return nmeGetStage_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeIsOpenGL") ) { return nmeIsOpenGL_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetFocus") ) { return nmeGetFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetFocus") ) { return nmeSetFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetAlign") ) { return nmeGetAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetAlign") ) { return nmeSetAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeStopDrag") ) { return nmeStopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnResize") ) { return nmeOnResize_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnChange") ) { return nmeOnChange_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { return sClickEvents; }
		if (HX_FIELD_EQ(inName,"nmeTouchInfo") ) { return nmeTouchInfo; }
		if (HX_FIELD_EQ(inName,"displayState") ) { return nmeGetDisplayState(); }
		if (HX_FIELD_EQ(inName,"nmeStartDrag") ) { return nmeStartDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetActive") ) { return nmeSetActive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { return efCommandDown; }
		if (HX_FIELD_EQ(inName,"nmeDragBounds") ) { return nmeDragBounds; }
		if (HX_FIELD_EQ(inName,"nmeDragObject") ) { return nmeDragObject; }
		if (HX_FIELD_EQ(inName,"nmeLastRender") ) { return nmeLastRender; }
		if (HX_FIELD_EQ(inName,"nmeGetQuality") ) { return nmeGetQuality_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetQuality") ) { return nmeSetQuality_dyn(); }
		if (HX_FIELD_EQ(inName,"nmePollTimers") ) { return nmePollTimers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeEarlyWakeup") ) { return nmeEarlyWakeup; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetX") ) { return nmeDragOffsetX; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetY") ) { return nmeDragOffsetY; }
		if (HX_FIELD_EQ(inName,"nmeFramePeriod") ) { return nmeFramePeriod; }
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return nmeGetStageFocusRect(); }
		if (HX_FIELD_EQ(inName,"nmeGetDPIScale") ) { return nmeGetDPIScale_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeCheckInOuts") ) { return nmeCheckInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeCheckRender") ) { return nmeCheckRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeMouseChanges") ) { return nmeMouseChanges; }
		if (HX_FIELD_EQ(inName,"nmeTouchChanges") ) { return nmeTouchChanges; }
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { return efLocationRight; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { return efNoNativeClick; }
		if (HX_FIELD_EQ(inName,"nmeSetFrameRate") ) { return nmeSetFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScaleMode") ) { return nmeGetScaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetScaleMode") ) { return nmeSetScaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeNextFrameDue") ) { return nmeNextFrameDue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { return nme_render_stage; }
		if (HX_FIELD_EQ(inName,"nmeLastClickTime") ) { return nmeLastClickTime; }
		if (HX_FIELD_EQ(inName,"nmeGetStageWidth") ) { return nmeGetStageWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { return OrientationFaceUp; }
		if (HX_FIELD_EQ(inName,"nmeGetStageHeight") ) { return nmeGetStageHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeUpdateNextWake") ) { return nmeUpdateNextWake_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeGetDisplayState") ) { return nmeGetDisplayState_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetDisplayState") ) { return nmeSetDisplayState_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { return OrientationPortrait; }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { return OrientationFaceDown; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { return nme_stage_set_focus; }
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { return nme_stage_is_opengl; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { return nme_stage_get_align; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { return nme_stage_set_align; }
		if (HX_FIELD_EQ(inName,"nmeMouseOverObjects") ) { return nmeMouseOverObjects; }
		if (HX_FIELD_EQ(inName,"nmeFocusOverObjects") ) { return nmeFocusOverObjects; }
		if (HX_FIELD_EQ(inName,"nmeCheckFocusInOuts") ) { return nmeCheckFocusInOuts_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { return pauseWhenDeactivated; }
		if (HX_FIELD_EQ(inName,"nmeGetStageFocusRect") ) { return nmeGetStageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetStageFocusRect") ) { return nmeSetStageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeProcessStageEvent") ) { return nmeProcessStageEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { return shouldRotateInterface; }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { return nme_set_stage_handler; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { return nme_stage_get_quality; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { return nme_stage_set_quality; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { return nme_stage_show_cursor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { return nme_stage_get_focus_id; }
		if (HX_FIELD_EQ(inName,"nmeDoProcessStageEvent") ) { return nmeDoProcessStageEvent_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { return nme_stage_get_dpi_scale; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { return nme_stage_set_next_wake; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { return OrientationLandscapeLeft; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { return nme_stage_get_focus_rect; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { return nme_stage_set_focus_rect; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { return nme_stage_get_scale_mode; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { return nme_stage_set_scale_mode; }
		if (HX_FIELD_EQ(inName,"nme_stage_request_render") ) { return nme_stage_request_render; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { return OrientationLandscapeRight; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { return nme_stage_get_stage_width; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { return nme_stage_get_stage_height; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { return nme_stage_get_display_state; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { return nme_stage_set_display_state; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { return OrientationPortraitUpsideDown; }
	}
	return super::__Field(inName);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return nmeSetFocus(inValue); }
		if (HX_FIELD_EQ(inName,"align") ) { return nmeSetAlign(inValue); }
		if (HX_FIELD_EQ(inName,"onKey") ) { onKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { onQuit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return nmeSetQuality(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { isOpenGL=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpiScale") ) { dpiScale=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { sUpEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return nmeSetFrameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return nmeSetScaleMode(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeInvalid") ) { nmeInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { sDownEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastDown") ) { nmeLastDown=inValue.Cast< Array< ::nme::display::InteractiveObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { sClickEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeTouchInfo") ) { nmeTouchInfo=inValue.Cast< ::IntHash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayState") ) { return nmeSetDisplayState(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragBounds") ) { nmeDragBounds=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragObject") ) { nmeDragObject=inValue.Cast< ::nme::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastRender") ) { nmeLastRender=inValue.Cast< double >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeEarlyWakeup") ) { nmeEarlyWakeup=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetX") ) { nmeDragOffsetX=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetY") ) { nmeDragOffsetY=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFramePeriod") ) { nmeFramePeriod=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return nmeSetStageFocusRect(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeMouseChanges") ) { nmeMouseChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeTouchChanges") ) { nmeTouchChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { efLocationRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { efNoNativeClick=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { nme_render_stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastClickTime") ) { nmeLastClickTime=inValue.Cast< double >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { OrientationFaceUp=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { OrientationPortrait=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { OrientationFaceDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { nme_stage_set_focus=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { nme_stage_is_opengl=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { nme_stage_get_align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { nme_stage_set_align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeMouseOverObjects") ) { nmeMouseOverObjects=inValue.Cast< Array< ::nme::display::InteractiveObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFocusOverObjects") ) { nmeFocusOverObjects=inValue.Cast< Array< ::nme::display::InteractiveObject > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { pauseWhenDeactivated=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { shouldRotateInterface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { nme_set_stage_handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { nme_stage_get_quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { nme_stage_set_quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { nme_stage_show_cursor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { nme_stage_get_focus_id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { nme_stage_get_dpi_scale=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { nme_stage_set_next_wake=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { OrientationLandscapeLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { nme_stage_get_focus_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { nme_stage_set_focus_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { nme_stage_get_scale_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { nme_stage_set_scale_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_request_render") ) { nme_stage_request_render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { OrientationLandscapeRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { nme_stage_get_stage_width=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { nme_stage_get_stage_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { nme_stage_get_display_state=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { nme_stage_set_display_state=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { OrientationPortraitUpsideDown=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeMouseOverObjects"));
	outFields->push(HX_CSTRING("nmeFocusOverObjects"));
	outFields->push(HX_CSTRING("nmeInvalid"));
	outFields->push(HX_CSTRING("nmeDragBounds"));
	outFields->push(HX_CSTRING("nmeDragObject"));
	outFields->push(HX_CSTRING("nmeDragOffsetX"));
	outFields->push(HX_CSTRING("nmeDragOffsetY"));
	outFields->push(HX_CSTRING("nmeFramePeriod"));
	outFields->push(HX_CSTRING("nmeLastRender"));
	outFields->push(HX_CSTRING("nmeTouchInfo"));
	outFields->push(HX_CSTRING("nmeLastDown"));
	outFields->push(HX_CSTRING("nmeLastClickTime"));
	outFields->push(HX_CSTRING("pauseWhenDeactivated"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("stageFocusRect"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("isOpenGL"));
	outFields->push(HX_CSTRING("stageWidth"));
	outFields->push(HX_CSTRING("stageHeight"));
	outFields->push(HX_CSTRING("scaleMode"));
	outFields->push(HX_CSTRING("dpiScale"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("quality"));
	outFields->push(HX_CSTRING("displayState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OrientationPortrait"),
	HX_CSTRING("OrientationPortraitUpsideDown"),
	HX_CSTRING("OrientationLandscapeLeft"),
	HX_CSTRING("OrientationLandscapeRight"),
	HX_CSTRING("OrientationFaceUp"),
	HX_CSTRING("OrientationFaceDown"),
	HX_CSTRING("shouldRotateInterface"),
	HX_CSTRING("nmeMouseChanges"),
	HX_CSTRING("nmeTouchChanges"),
	HX_CSTRING("sDownEvents"),
	HX_CSTRING("sUpEvents"),
	HX_CSTRING("sClickEvents"),
	HX_CSTRING("nmeEarlyWakeup"),
	HX_CSTRING("efLeftDown"),
	HX_CSTRING("efShiftDown"),
	HX_CSTRING("efCtrlDown"),
	HX_CSTRING("efAltDown"),
	HX_CSTRING("efCommandDown"),
	HX_CSTRING("efLocationRight"),
	HX_CSTRING("efNoNativeClick"),
	HX_CSTRING("nme_set_stage_handler"),
	HX_CSTRING("nme_render_stage"),
	HX_CSTRING("nme_stage_get_focus_id"),
	HX_CSTRING("nme_stage_set_focus"),
	HX_CSTRING("nme_stage_get_focus_rect"),
	HX_CSTRING("nme_stage_set_focus_rect"),
	HX_CSTRING("nme_stage_is_opengl"),
	HX_CSTRING("nme_stage_get_stage_width"),
	HX_CSTRING("nme_stage_get_stage_height"),
	HX_CSTRING("nme_stage_get_dpi_scale"),
	HX_CSTRING("nme_stage_get_scale_mode"),
	HX_CSTRING("nme_stage_set_scale_mode"),
	HX_CSTRING("nme_stage_get_align"),
	HX_CSTRING("nme_stage_set_align"),
	HX_CSTRING("nme_stage_get_quality"),
	HX_CSTRING("nme_stage_set_quality"),
	HX_CSTRING("nme_stage_get_display_state"),
	HX_CSTRING("nme_stage_set_display_state"),
	HX_CSTRING("nme_stage_set_next_wake"),
	HX_CSTRING("nme_stage_request_render"),
	HX_CSTRING("nme_stage_show_cursor"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("nmeMouseOverObjects"),
	HX_CSTRING("nmeFocusOverObjects"),
	HX_CSTRING("nmeInvalid"),
	HX_CSTRING("nmeDragBounds"),
	HX_CSTRING("nmeDragObject"),
	HX_CSTRING("nmeDragOffsetX"),
	HX_CSTRING("nmeDragOffsetY"),
	HX_CSTRING("nmeFramePeriod"),
	HX_CSTRING("nmeLastRender"),
	HX_CSTRING("nmeTouchInfo"),
	HX_CSTRING("nmeLastDown"),
	HX_CSTRING("nmeLastClickTime"),
	HX_CSTRING("pauseWhenDeactivated"),
	HX_CSTRING("active"),
	HX_CSTRING("focus"),
	HX_CSTRING("stageFocusRect"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("isOpenGL"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("dpiScale"),
	HX_CSTRING("align"),
	HX_CSTRING("quality"),
	HX_CSTRING("displayState"),
	HX_CSTRING("onKey"),
	HX_CSTRING("onQuit"),
	HX_CSTRING("nmeGetStage"),
	HX_CSTRING("nmeIsOpenGL"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("nmeSetFrameRate"),
	HX_CSTRING("nmeGetFocus"),
	HX_CSTRING("nmeSetFocus"),
	HX_CSTRING("nmeGetStageFocusRect"),
	HX_CSTRING("nmeSetStageFocusRect"),
	HX_CSTRING("nmeGetStageWidth"),
	HX_CSTRING("nmeGetStageHeight"),
	HX_CSTRING("nmeGetDPIScale"),
	HX_CSTRING("nmeGetScaleMode"),
	HX_CSTRING("nmeSetScaleMode"),
	HX_CSTRING("nmeGetAlign"),
	HX_CSTRING("nmeSetAlign"),
	HX_CSTRING("nmeGetQuality"),
	HX_CSTRING("nmeSetQuality"),
	HX_CSTRING("nmeGetDisplayState"),
	HX_CSTRING("nmeSetDisplayState"),
	HX_CSTRING("nmeStartDrag"),
	HX_CSTRING("nmeDrag"),
	HX_CSTRING("nmeStopDrag"),
	HX_CSTRING("nmeCheckInOuts"),
	HX_CSTRING("nmeOnMouse"),
	HX_CSTRING("nmeOnTouch"),
	HX_CSTRING("nmeCheckFocusInOuts"),
	HX_CSTRING("nmeOnFocus"),
	HX_CSTRING("nmeOnKey"),
	HX_CSTRING("nmeOnResize"),
	HX_CSTRING("nmeRender"),
	HX_CSTRING("nmeOnChange"),
	HX_CSTRING("nmeCheckRender"),
	HX_CSTRING("nmeNextFrameDue"),
	HX_CSTRING("nmePollTimers"),
	HX_CSTRING("nmeUpdateNextWake"),
	HX_CSTRING("nmeSetActive"),
	HX_CSTRING("nmeDoProcessStageEvent"),
	HX_CSTRING("nmeProcessStageEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_MARK_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeMouseChanges,"nmeMouseChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeTouchChanges,"nmeTouchChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeEarlyWakeup,"nmeEarlyWakeup");
	HX_MARK_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_set_stage_handler,"nme_set_stage_handler");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_render_stage,"nme_render_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_id,"nme_stage_get_focus_id");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus,"nme_stage_set_focus");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_rect,"nme_stage_get_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus_rect,"nme_stage_set_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_is_opengl,"nme_stage_is_opengl");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_stage_width,"nme_stage_get_stage_width");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_stage_height,"nme_stage_get_stage_height");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_dpi_scale,"nme_stage_get_dpi_scale");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_scale_mode,"nme_stage_get_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_scale_mode,"nme_stage_set_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_align,"nme_stage_get_align");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_align,"nme_stage_set_align");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_quality,"nme_stage_get_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_quality,"nme_stage_set_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_display_state,"nme_stage_get_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_display_state,"nme_stage_set_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_next_wake,"nme_stage_set_next_wake");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_request_render,"nme_stage_request_render");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
};

Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.display.Stage"), hx::TCanCast< Stage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Stage_obj::__boot()
{
	hx::Static(OrientationPortrait) = (int)1;
	hx::Static(OrientationPortraitUpsideDown) = (int)2;
	hx::Static(OrientationLandscapeLeft) = (int)3;
	hx::Static(OrientationLandscapeRight) = (int)4;
	hx::Static(OrientationFaceUp) = (int)5;
	hx::Static(OrientationFaceDown) = (int)6;
	hx::Static(shouldRotateInterface) = new __default_shouldRotateInterface;

	hx::Static(nmeMouseChanges) = Array_obj< ::String >::__new().Add(::nme::events::MouseEvent_obj::MOUSE_OUT).Add(::nme::events::MouseEvent_obj::MOUSE_OVER).Add(::nme::events::MouseEvent_obj::ROLL_OUT).Add(::nme::events::MouseEvent_obj::ROLL_OVER);
	hx::Static(nmeTouchChanges) = Array_obj< ::String >::__new().Add(::nme::events::TouchEvent_obj::TOUCH_OUT).Add(::nme::events::TouchEvent_obj::TOUCH_OVER).Add(::nme::events::TouchEvent_obj::TOUCH_ROLL_OUT).Add(::nme::events::TouchEvent_obj::TOUCH_ROLL_OVER);
	hx::Static(sDownEvents) = Array_obj< ::String >::__new().Add(HX_CSTRING("mouseDown")).Add(HX_CSTRING("middleMouseDown")).Add(HX_CSTRING("rightMouseDown"));
	hx::Static(sUpEvents) = Array_obj< ::String >::__new().Add(HX_CSTRING("mouseUp")).Add(HX_CSTRING("middleMouseUp")).Add(HX_CSTRING("rightMouseUp"));
	hx::Static(sClickEvents) = Array_obj< ::String >::__new().Add(HX_CSTRING("click")).Add(HX_CSTRING("middleClick")).Add(HX_CSTRING("rightClick"));
	hx::Static(nmeEarlyWakeup) = 0.005;
	hx::Static(efLeftDown) = (int)1;
	hx::Static(efShiftDown) = (int)2;
	hx::Static(efCtrlDown) = (int)4;
	hx::Static(efAltDown) = (int)8;
	hx::Static(efCommandDown) = (int)16;
	hx::Static(efLocationRight) = (int)16384;
	hx::Static(efNoNativeClick) = (int)65536;
	hx::Static(nme_set_stage_handler) = ::nme::Loader_obj::load(HX_CSTRING("nme_set_stage_handler"),(int)4);
	hx::Static(nme_render_stage) = ::nme::Loader_obj::load(HX_CSTRING("nme_render_stage"),(int)1);
	hx::Static(nme_stage_get_focus_id) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_focus_id"),(int)1);
	hx::Static(nme_stage_set_focus) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_focus"),(int)3);
	hx::Static(nme_stage_get_focus_rect) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_focus_rect"),(int)1);
	hx::Static(nme_stage_set_focus_rect) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_focus_rect"),(int)2);
	hx::Static(nme_stage_is_opengl) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_is_opengl"),(int)1);
	hx::Static(nme_stage_get_stage_width) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_stage_width"),(int)1);
	hx::Static(nme_stage_get_stage_height) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_stage_height"),(int)1);
	hx::Static(nme_stage_get_dpi_scale) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_dpi_scale"),(int)1);
	hx::Static(nme_stage_get_scale_mode) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_scale_mode"),(int)1);
	hx::Static(nme_stage_set_scale_mode) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_scale_mode"),(int)2);
	hx::Static(nme_stage_get_align) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_align"),(int)1);
	hx::Static(nme_stage_set_align) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_align"),(int)2);
	hx::Static(nme_stage_get_quality) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_quality"),(int)1);
	hx::Static(nme_stage_set_quality) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_quality"),(int)2);
	hx::Static(nme_stage_get_display_state) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_get_display_state"),(int)1);
	hx::Static(nme_stage_set_display_state) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_display_state"),(int)2);
	hx::Static(nme_stage_set_next_wake) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_set_next_wake"),(int)2);
	hx::Static(nme_stage_request_render) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_request_render"),(int)0);
	hx::Static(nme_stage_show_cursor) = ::nme::Loader_obj::load(HX_CSTRING("nme_stage_show_cursor"),(int)2);
}

} // end namespace nme
} // end namespace display
