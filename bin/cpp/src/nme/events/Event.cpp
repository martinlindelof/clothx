#include <hxcpp.h>

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventPhase
#include <nme/events/EventPhase.h>
#endif
namespace nme{
namespace events{

Void Event_obj::__construct(::String inType,Dynamic __o_inBubbles,Dynamic __o_inCancelable)
{
bool inBubbles = __o_inBubbles.Default(false);
bool inCancelable = __o_inCancelable.Default(false);
{
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",23)
	this->type = inType;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",24)
	this->bubbles = inBubbles;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",25)
	this->cancelable = inCancelable;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",26)
	this->nmeIsCancelled = false;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",27)
	this->nmeIsCancelledNow = false;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",28)
	this->target = null();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",29)
	this->currentTarget = null();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",30)
	this->eventPhase = ::nme::events::EventPhase_obj::AT_TARGET;
}
;
	return null();
}

Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String inType,Dynamic __o_inBubbles,Dynamic __o_inCancelable)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(inType,__o_inBubbles,__o_inCancelable);
	return result;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Event_obj::nmeSetPhase( int inPhase){
{
		HX_SOURCE_PUSH("Event_obj::nmeSetPhase")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",15)
		this->eventPhase = inPhase;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,nmeSetPhase,(void))

bool Event_obj::nmeGetIsCancelled( ){
	HX_SOURCE_PUSH("Event_obj::nmeGetIsCancelled")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",18)
	return this->nmeIsCancelled;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,nmeGetIsCancelled,return )

bool Event_obj::nmeGetIsCancelledNow( ){
	HX_SOURCE_PUSH("Event_obj::nmeGetIsCancelledNow")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",19)
	return this->nmeIsCancelledNow;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,nmeGetIsCancelledNow,return )

::nme::events::Event Event_obj::clone( ){
	HX_SOURCE_PUSH("Event_obj::clone")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",34)
	return ::nme::events::Event_obj::__new(this->type,this->bubbles,this->cancelable);
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

Void Event_obj::stopImmediatePropagation( ){
{
		HX_SOURCE_PUSH("Event_obj::stopImmediatePropagation")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",40)
		if ((this->cancelable)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",42)
			this->nmeIsCancelledNow = this->nmeIsCancelled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

Void Event_obj::stopPropagation( ){
{
		HX_SOURCE_PUSH("Event_obj::stopPropagation")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",46)
		if ((this->cancelable)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",48)
			this->nmeIsCancelled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

::String Event_obj::toString( ){
	HX_SOURCE_PUSH("Event_obj::toString")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/events/Event.hx",52)
	return this->type;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::UNLOAD;

::String Event_obj::GOT_INPUT_FOCUS;

::String Event_obj::LOST_INPUT_FOCUS;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(bubbles,"bubbles");
	HX_MARK_MEMBER_NAME(cancelable,"cancelable");
	HX_MARK_MEMBER_NAME(eventPhase,"eventPhase");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(nmeIsCancelled,"nmeIsCancelled");
	HX_MARK_MEMBER_NAME(nmeIsCancelledNow,"nmeIsCancelledNow");
	HX_MARK_END_CLASS();
}

Dynamic Event_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { return ID3; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { return INIT; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { return OPEN; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { return ADDED; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { return CLOSE; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { return CANCEL; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { return CHANGE; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { return RENDER; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { return RESIZE; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { return SCROLL; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { return SELECT; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { return UNLOAD; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { return CONNECT; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { return REMOVED; }
		if (HX_FIELD_EQ(inName,"bubbles") ) { return bubbles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { return ACTIVATE; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { return DEACTIVATE; }
		if (HX_FIELD_EQ(inName,"cancelable") ) { return cancelable; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return eventPhase; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { return ENTER_FRAME; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { return MOUSE_LEAVE; }
		if (HX_FIELD_EQ(inName,"nmeSetPhase") ) { return nmeSetPhase_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return currentTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { return ADDED_TO_STAGE; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { return SOUND_COMPLETE; }
		if (HX_FIELD_EQ(inName,"nmeIsCancelled") ) { return nmeIsCancelled; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GOT_INPUT_FOCUS") ) { return GOT_INPUT_FOCUS; }
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { return TAB_INDEX_CHANGE; }
		if (HX_FIELD_EQ(inName,"LOST_INPUT_FOCUS") ) { return LOST_INPUT_FOCUS; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIsCancelledNow") ) { return nmeIsCancelledNow; }
		if (HX_FIELD_EQ(inName,"nmeGetIsCancelled") ) { return nmeGetIsCancelled_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { return REMOVED_FROM_STAGE; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { return TAB_ENABLED_CHANGE; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { return TAB_CHILDREN_CHANGE; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeGetIsCancelledNow") ) { return nmeGetIsCancelledNow_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { ID3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { INIT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { SCROLL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { UNLOAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { CONNECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bubbles") ) { bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cancelable") ) { cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { eventPhase=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { MOUSE_LEAVE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeIsCancelled") ) { nmeIsCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GOT_INPUT_FOCUS") ) { GOT_INPUT_FOCUS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { TAB_INDEX_CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOST_INPUT_FOCUS") ) { LOST_INPUT_FOCUS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIsCancelledNow") ) { nmeIsCancelledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { TAB_ENABLED_CHANGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { TAB_CHILDREN_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bubbles"));
	outFields->push(HX_CSTRING("cancelable"));
	outFields->push(HX_CSTRING("eventPhase"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("currentTarget"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("nmeIsCancelled"));
	outFields->push(HX_CSTRING("nmeIsCancelledNow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ACTIVATE"),
	HX_CSTRING("ADDED"),
	HX_CSTRING("ADDED_TO_STAGE"),
	HX_CSTRING("CANCEL"),
	HX_CSTRING("CHANGE"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("CONNECT"),
	HX_CSTRING("DEACTIVATE"),
	HX_CSTRING("ENTER_FRAME"),
	HX_CSTRING("ID3"),
	HX_CSTRING("INIT"),
	HX_CSTRING("MOUSE_LEAVE"),
	HX_CSTRING("OPEN"),
	HX_CSTRING("REMOVED"),
	HX_CSTRING("REMOVED_FROM_STAGE"),
	HX_CSTRING("RENDER"),
	HX_CSTRING("RESIZE"),
	HX_CSTRING("SCROLL"),
	HX_CSTRING("SELECT"),
	HX_CSTRING("SOUND_COMPLETE"),
	HX_CSTRING("TAB_CHILDREN_CHANGE"),
	HX_CSTRING("TAB_ENABLED_CHANGE"),
	HX_CSTRING("TAB_INDEX_CHANGE"),
	HX_CSTRING("UNLOAD"),
	HX_CSTRING("GOT_INPUT_FOCUS"),
	HX_CSTRING("LOST_INPUT_FOCUS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bubbles"),
	HX_CSTRING("cancelable"),
	HX_CSTRING("eventPhase"),
	HX_CSTRING("target"),
	HX_CSTRING("currentTarget"),
	HX_CSTRING("type"),
	HX_CSTRING("nmeIsCancelled"),
	HX_CSTRING("nmeIsCancelledNow"),
	HX_CSTRING("nmeSetPhase"),
	HX_CSTRING("nmeGetIsCancelled"),
	HX_CSTRING("nmeGetIsCancelledNow"),
	HX_CSTRING("clone"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("stopPropagation"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
	HX_MARK_MEMBER_NAME(Event_obj::GOT_INPUT_FOCUS,"GOT_INPUT_FOCUS");
	HX_MARK_MEMBER_NAME(Event_obj::LOST_INPUT_FOCUS,"LOST_INPUT_FOCUS");
};

Class Event_obj::__mClass;

void Event_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.events.Event"), hx::TCanCast< Event_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Event_obj::__boot()
{
	hx::Static(ACTIVATE) = HX_CSTRING("activate");
	hx::Static(ADDED) = HX_CSTRING("added");
	hx::Static(ADDED_TO_STAGE) = HX_CSTRING("addedToStage");
	hx::Static(CANCEL) = HX_CSTRING("cancel");
	hx::Static(CHANGE) = HX_CSTRING("change");
	hx::Static(CLOSE) = HX_CSTRING("close");
	hx::Static(COMPLETE) = HX_CSTRING("complete");
	hx::Static(CONNECT) = HX_CSTRING("connect");
	hx::Static(DEACTIVATE) = HX_CSTRING("deactivate");
	hx::Static(ENTER_FRAME) = HX_CSTRING("enterFrame");
	hx::Static(ID3) = HX_CSTRING("id3");
	hx::Static(INIT) = HX_CSTRING("init");
	hx::Static(MOUSE_LEAVE) = HX_CSTRING("mouseLeave");
	hx::Static(OPEN) = HX_CSTRING("open");
	hx::Static(REMOVED) = HX_CSTRING("removed");
	hx::Static(REMOVED_FROM_STAGE) = HX_CSTRING("removedFromStage");
	hx::Static(RENDER) = HX_CSTRING("render");
	hx::Static(RESIZE) = HX_CSTRING("resize");
	hx::Static(SCROLL) = HX_CSTRING("scroll");
	hx::Static(SELECT) = HX_CSTRING("select");
	hx::Static(SOUND_COMPLETE) = HX_CSTRING("soundComplete");
	hx::Static(TAB_CHILDREN_CHANGE) = HX_CSTRING("tabChildrenChange");
	hx::Static(TAB_ENABLED_CHANGE) = HX_CSTRING("tabEnabledChange");
	hx::Static(TAB_INDEX_CHANGE) = HX_CSTRING("tabIndexChange");
	hx::Static(UNLOAD) = HX_CSTRING("unload");
	hx::Static(GOT_INPUT_FOCUS) = HX_CSTRING("gotInputFocus");
	hx::Static(LOST_INPUT_FOCUS) = HX_CSTRING("lostInputFocus");
}

} // end namespace nme
} // end namespace events
