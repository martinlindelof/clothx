#ifndef INCLUDED_cpp_zip_Flush
#define INCLUDED_cpp_zip_Flush

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,zip,Flush)
namespace cpp{
namespace zip{


class Flush_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Flush_obj OBJ_;

	public:
		Flush_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("cpp.zip.Flush"); }
		::String __ToString() const { return HX_CSTRING("Flush.") + tag; }

		static ::cpp::zip::Flush BLOCK;
		static ::cpp::zip::Flush FINISH;
		static ::cpp::zip::Flush FULL;
		static ::cpp::zip::Flush NO;
		static ::cpp::zip::Flush SYNC;
};

} // end namespace cpp
} // end namespace zip

#endif /* INCLUDED_cpp_zip_Flush */ 
