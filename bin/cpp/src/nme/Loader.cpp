#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_io_Process
#include <cpp/io/Process.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
namespace nme{

Void Loader_obj::__construct()
{
	return null();
}

Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

bool Loader_obj::moduleInit;

::String Loader_obj::moduleName;

Dynamic Loader_obj::tryLoad( ::String inName,::String func,int args){
	__SAFE_POINT
	HX_SOURCE_PUSH("Loader_obj::tryLoad")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",34)
	try{
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",36)
		Dynamic result = ::cpp::Lib_obj::load(inName,func,args);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",37)
		if (((result != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",39)
			::nme::Loader_obj::loaderTrace((HX_CSTRING("Got result ") + inName));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",40)
			::nme::Loader_obj::moduleName = inName;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",41)
			return result;
		}
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",44)
				::nme::Loader_obj::loaderTrace((HX_CSTRING("Failed to load : ") + inName));
			}
		}
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",47)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,tryLoad,return )

::String Loader_obj::findHaxeLib( ::String inLib){
	__SAFE_POINT
	HX_SOURCE_PUSH("Loader_obj::findHaxeLib")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",52)
	try{
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",54)
		::cpp::io::Process proc = ::cpp::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(inLib));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",55)
		if (((proc != null()))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",57)
			::haxe::io::Input stream = proc->_stdout;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",58)
			try{
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",59)
				while((true)){
					__SAFE_POINT
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",62)
					::String s = stream->readLine();
					HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",63)
					if (((s.substr((int)0,(int)1) != HX_CSTRING("-")))){
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",65)
						stream->close();
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",66)
						proc->close();
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",67)
						::nme::Loader_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",68)
						return s;
					}
				}
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",73)
			stream->close();
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",74)
			proc->close();
		}
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",79)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,findHaxeLib,return )

Void Loader_obj::loaderTrace( ::String inStr){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Loader_obj::loaderTrace")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",87)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",88)
		bool debug = (get_env(HX_CSTRING("NME_LOAD_DEBUG")) != null());
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",93)
		if ((debug)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",94)
			::cpp::Lib_obj::println(inStr);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loaderTrace,(void))

Dynamic Loader_obj::sysName( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Loader_obj::sysName")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",101)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",102)
	return sys_string();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,sysName,return )

Dynamic Loader_obj::load( ::String func,int args){
	__SAFE_POINT
	HX_SOURCE_PUSH("Loader_obj::load")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",129)
	if ((::nme::Loader_obj::moduleInit)){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",130)
		return ::cpp::Lib_obj::load(::nme::Loader_obj::moduleName,func,args);
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",134)
	::nme::Loader_obj::moduleInit = true;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",136)
	::nme::Loader_obj::moduleName = HX_CSTRING("nme");
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",139)
	Dynamic result = ::nme::Loader_obj::tryLoad(HX_CSTRING("./nme"),func,args);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",140)
	if (((result == null()))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",141)
		result = ::nme::Loader_obj::tryLoad(HX_CSTRING(".\\nme"),func,args);
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",144)
	if (((result == null()))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",145)
		result = ::nme::Loader_obj::tryLoad(HX_CSTRING("nme"),func,args);
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",147)
	if (((result == null()))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",149)
		::String slash = (  (((::nme::Loader_obj::sysName()->__Field(HX_CSTRING("substr"))((int)7)->__Field(HX_CSTRING("toLowerCase"))() == HX_CSTRING("windows")))) ? ::String(HX_CSTRING("\\")) : ::String(HX_CSTRING("/")) );
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",150)
		::String haxelib = ::nme::Loader_obj::findHaxeLib(HX_CSTRING("nme"));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",151)
		if (((haxelib != HX_CSTRING("")))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",153)
			result = ::nme::Loader_obj::tryLoad(((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::nme::Loader_obj::sysName()) + slash) + HX_CSTRING("nme")),func,args);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",156)
			if (((result == null()))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",157)
				result = ::nme::Loader_obj::tryLoad((((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::nme::Loader_obj::sysName()) + HX_CSTRING("64")) + slash) + HX_CSTRING("nme")),func,args);
			}
		}
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",161)
	::nme::Loader_obj::loaderTrace((HX_CSTRING("Result : ") + result));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/Loader.hx",167)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,return )


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_END_CLASS();
}

Dynamic Loader_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"moduleInit") ) { return moduleInit; }
		if (HX_FIELD_EQ(inName,"moduleName") ) { return moduleName; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"moduleInit") ) { moduleInit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moduleName") ) { moduleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moduleInit"),
	HX_CSTRING("moduleName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("sysName"),
	HX_CSTRING("load"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::moduleInit,"moduleInit");
	HX_MARK_MEMBER_NAME(Loader_obj::moduleName,"moduleName");
};

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Loader_obj::__boot()
{
	hx::Static(moduleInit) = false;
	hx::Static(moduleName) = HX_CSTRING("");
}

} // end namespace nme
