#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_zip_Compress
#include <cpp/zip/Compress.h>
#endif
#ifndef INCLUDED_cpp_zip_Uncompress
#include <cpp/zip/Uncompress.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_errors_EOFError
#include <nme/errors/EOFError.h>
#endif
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
namespace nme{
namespace utils{

Void ByteArray_obj::__construct(Dynamic __o_inSize)
{
int inSize = __o_inSize.Default(0);
{
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",31)
	this->bigEndian = true;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",32)
	this->position = (int)0;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",33)
	if (((inSize >= (int)0))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",40)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",41)
		if (((inSize > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",42)
			data[(inSize - (int)1)] = (int)0;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",43)
		super::__construct(inSize,data);
	}
}
;
	return null();
}

ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(Dynamic __o_inSize)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_inSize);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::nme::utils::IDataInput_obj)) return operator ::nme::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__(){

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::nme::utils::ByteArray run(int inLen){
{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",425)
			return ::nme::utils::ByteArray_obj::__new(inLen);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",425)
	::nme::utils::ByteArray_obj::factory =  Dynamic(new _Function_1_1());

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::nme::utils::ByteArray inArray,int inLen){
{
			__SAFE_POINT
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",427)
			if (((inLen > (int)0))){
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",428)
				inArray->__Field(HX_CSTRING("ensureElem"))((inLen - (int)1),true);
			}
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",429)
			inArray->__FieldRef(HX_CSTRING("length")) = inLen;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",426)
	::nme::utils::ByteArray_obj::resize =  Dynamic(new _Function_1_2());

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::nme::utils::ByteArray inArray){
{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",431)
			return inArray->__Field(HX_CSTRING("b"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",431)
	::nme::utils::ByteArray_obj::bytes =  Dynamic(new _Function_1_3());

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::nme::utils::ByteArray inArray){
{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",432)
			return (  (((inArray == null()))) ? int((int)0) : int(inArray->__Field(HX_CSTRING("length"))) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",432)
	::nme::utils::ByteArray_obj::slen =  Dynamic(new _Function_1_4());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",434)
	Dynamic init = ::nme::Loader_obj::load(HX_CSTRING("nme_byte_array_init"),(int)4);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",435)
	init(::nme::utils::ByteArray_obj::factory,::nme::utils::ByteArray_obj::slen,::nme::utils::ByteArray_obj::resize,::nme::utils::ByteArray_obj::bytes);
}


Void ByteArray_obj::setLength( int inLength){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::setLength")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",62)
		if (((inLength > (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",63)
			this->ensureElem((inLength - (int)1),false);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",64)
		this->length = inLength;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

Void ByteArray_obj::checkData( int inLength){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::checkData")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",68)
		if ((((inLength + this->position) > this->length))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",70)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::writeFile( ::String inString){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeFile")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",81)
		::nme::utils::ByteArray_obj::nme_byte_array_overwrite_file(inString,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

int ByteArray_obj::__get( int pos){
	HX_SOURCE_PUSH("ByteArray_obj::__get")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",90)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_SOURCE_PUSH("ByteArray_obj::__set")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",100)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

Void ByteArray_obj::compress( Dynamic __o_algorithm){
::String algorithm = __o_algorithm.Default(HX_CSTRING(""));
	HX_SOURCE_PUSH("ByteArray_obj::compress");
{
		__SAFE_POINT
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",114)
		::nme::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",116)
		::haxe::io::Bytes result = ::cpp::zip::Compress_obj::run(src,(int)8);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",117)
		this->b = result->b;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",118)
		this->length = result->length;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",119)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::uncompress( Dynamic __o_algorithm){
::String algorithm = __o_algorithm.Default(HX_CSTRING(""));
	HX_SOURCE_PUSH("ByteArray_obj::uncompress");
{
		__SAFE_POINT
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",130)
		::nme::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",133)
		::haxe::io::Bytes result = ::cpp::zip::Uncompress_obj::run(src,null());
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",134)
		this->b = result->b;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",135)
		this->length = result->length;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",136)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

int ByteArray_obj::ThrowEOFi( ){
	HX_SOURCE_PUSH("ByteArray_obj::ThrowEOFi")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",142)
	hx::Throw (::nme::errors::EOFError_obj::__new());
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",142)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

int ByteArray_obj::nmeGetBytesAvailable( ){
	HX_SOURCE_PUSH("ByteArray_obj::nmeGetBytesAvailable")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",147)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,nmeGetBytesAvailable,return )

int ByteArray_obj::readByte( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readByte")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",150)
	return (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

bool ByteArray_obj::readBoolean( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readBoolean")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",154)
	return (  ((((this->position + (int)1) < this->length))) ? bool((this->b->__get((this->position)++) != (int)0)) : bool((this->ThrowEOFi() != (int)0)) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

Void ByteArray_obj::readBytes( ::nme::utils::ByteArray outData,Dynamic __o_inOffset,Dynamic __o_inLen){
int inOffset = __o_inOffset.Default(0);
int inLen = __o_inLen.Default(0);
	HX_SOURCE_PUSH("ByteArray_obj::readBytes");
{
		__SAFE_POINT
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",159)
		if (((inLen == (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",160)
			inLen = (this->length - this->position);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",161)
		if ((((this->position + inLen) > this->length))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",162)
			this->ThrowEOFi();
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",163)
		if (((outData->length < (inOffset + inLen)))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",164)
			outData->ensureElem(((inOffset + inLen) - (int)1),true);
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",169)
		Array< unsigned char > b1 = this->b;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",170)
		Array< unsigned char > b2 = outData->b;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",171)
		int p = this->position;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",172)
		{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",172)
			int _g = (int)0;
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",172)
			while(((_g < inLen))){
				__SAFE_POINT
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",172)
				int i = (_g)++;
				HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",173)
				b2[(inOffset + i)] = b1->__get((p + i));
			}
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",175)
		hx::AddEq(this->position,inLen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

double ByteArray_obj::readFloat( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readFloat")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",180)
	if ((((this->position + (int)4) > this->length))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",181)
		this->ThrowEOFi();
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",186)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)4,this->b->slice(this->position,(this->position + (int)4)));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",189)
	hx::AddEq(this->position,(int)4);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",190)
	return ::nme::utils::ByteArray_obj::_float_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

double ByteArray_obj::readDouble( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readDouble")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",195)
	if ((((this->position + (int)8) > this->length))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",196)
		this->ThrowEOFi();
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",201)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)8,this->b->slice(this->position,(this->position + (int)8)));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",204)
	hx::AddEq(this->position,(int)8);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",205)
	return ::nme::utils::ByteArray_obj::_double_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

int ByteArray_obj::readInt( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readInt")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",211)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",212)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",213)
	int ch3 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",214)
	int ch4 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",215)
	return (  ((this->bigEndian)) ? int((int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4))) : int((int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1))) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

int ByteArray_obj::readShort( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readShort")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",221)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",222)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",223)
	int val = (  ((this->bigEndian)) ? int((int((int(ch1) << int((int)8))) | int(ch2))) : int((((int(ch2) << int((int)8))) + ch1)) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",224)
	return (  (((val >= (int)32768))) ? int(((int)65534 - val)) : int(val) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readUnsignedByte")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",227)
	return (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readUnsignedInt")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",230)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",231)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",232)
	int ch3 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",233)
	int ch4 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",234)
	return (  ((this->bigEndian)) ? int((int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4))) : int((int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1))) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readUnsignedShort")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",239)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",240)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",241)
	return (  ((this->bigEndian)) ? int((int((int(ch1) << int((int)8))) | int(ch2))) : int((((int(ch2) << int((int)8))) + ch1)) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readUTF")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",245)
	int len = this->readUnsignedShort();
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",246)
	return this->readUTFBytes(len);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int inLen){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readUTFBytes")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",251)
	if ((((this->position + inLen) > this->length))){
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",252)
		this->ThrowEOFi();
	}
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",253)
	int p = this->position;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",254)
	hx::AddEq(this->position,inLen);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",259)
	::String result = HX_CSTRING("");
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",260)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",261)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

::String ByteArray_obj::asString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::asString")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",265)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

::String ByteArray_obj::nmeGetEndian( ){
	HX_SOURCE_PUSH("ByteArray_obj::nmeGetEndian")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",268)
	return (  ((this->bigEndian)) ? ::String(HX_CSTRING("bigEndian")) : ::String(HX_CSTRING("littleEndian")) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,nmeGetEndian,return )

::String ByteArray_obj::nmeSetEndian( ::String s){
	HX_SOURCE_PUSH("ByteArray_obj::nmeSetEndian")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",274)
	this->bigEndian = (s == HX_CSTRING("bigEndian"));
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",275)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,nmeSetEndian,return )

Void ByteArray_obj::ensureElem( int inSize,bool inUpdateLenght){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::ensureElem")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",281)
		int len = (inSize + (int)1);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",291)
		this->b->EnsureSize(inSize);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",293)
		if (((bool(inUpdateLenght) && bool((this->length < len))))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",294)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

Void ByteArray_obj::push_uncheck( int inByte){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::push_uncheck")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",299)
		this->b->__unsafe_set((this->length)++,inByte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,push_uncheck,(void))

Void ByteArray_obj::push( int inByte){
{
		HX_SOURCE_PUSH("ByteArray_obj::push")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",308)
		this->b[(this->length)++] = inByte;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,push,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_SOURCE_PUSH("ByteArray_obj::writeBoolean")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",319)
		this->b[(this->length)++] = (  ((value)) ? int((int)1) : int((int)0) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_SOURCE_PUSH("ByteArray_obj::writeByte")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",323)
		this->b[(this->length)++] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,Dynamic __o_inOffset,Dynamic __o_inLength){
int inOffset = __o_inOffset.Default(0);
int inLength = __o_inLength.Default(0);
	HX_SOURCE_PUSH("ByteArray_obj::writeBytes");
{
		__SAFE_POINT
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",328)
		if (((inLength == (int)0))){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",329)
			inLength = bytes->length;
		}
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",330)
		this->ensureElem(((this->length + inLength) - (int)1),false);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",331)
		int olen = this->length;
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",332)
		hx::AddEq(this->length,inLength);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",333)
		this->blit(olen,bytes,inOffset,inLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( double x){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeDouble")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",340)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::_double_bytes(x,this->bigEndian));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",342)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFloat( double x){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeFloat")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",349)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::_float_bytes(x,this->bigEndian));
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",351)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeInt")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",355)
		this->ensureElem((this->length + (int)3),false);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",356)
		if ((this->bigEndian)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",358)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)24)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",359)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)16)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",360)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)8)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",361)
			this->b->__unsafe_set((this->length)++,value);
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",365)
			this->b->__unsafe_set((this->length)++,value);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",366)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)8)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",367)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)16)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",368)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)24)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeShort")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",375)
		this->ensureElem((this->length + (int)1),false);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",376)
		if ((this->bigEndian)){
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",378)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)8)));
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",379)
			this->b->__unsafe_set((this->length)++,value);
		}
		else{
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",383)
			this->b->__unsafe_set((this->length)++,value);
			HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",384)
			this->b->__unsafe_set((this->length)++,(int(value) >> int((int)8)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeUnsignedInt")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",388)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeUTF")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",396)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",398)
		this->writeShort(bytes->length);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",399)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ByteArray_obj::writeUTFBytes")
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",406)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);
		HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",408)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

::nme::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes inBytes){
	HX_SOURCE_PUSH("ByteArray_obj::fromBytes")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",50)
	::nme::utils::ByteArray result = ::nme::utils::ByteArray_obj::__new((int)-1);
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",51)
	result->b = inBytes->b;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",52)
	result->length = inBytes->length;
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",56)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::nme::utils::ByteArray ByteArray_obj::readFile( ::String inString){
	__SAFE_POINT
	HX_SOURCE_PUSH("ByteArray_obj::readFile")
	HX_SOURCE_POS("/Users/martin/Documents/haxelib/nekonme/nme/utils/ByteArray.hx",76)
	return ::nme::utils::ByteArray_obj::nme_byte_array_read_file(inString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::factory;

Dynamic ByteArray_obj::resize;

Dynamic ByteArray_obj::slen;

Dynamic ByteArray_obj::bytes;

Dynamic ByteArray_obj::nme_byte_array_overwrite_file;

Dynamic ByteArray_obj::nme_byte_array_read_file;


ByteArray_obj::ByteArray_obj()
{
}

void ByteArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArray);
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(endian,"endian");
	HX_MARK_MEMBER_NAME(bytesAvailable,"bytesAvailable");
	HX_MARK_MEMBER_NAME(bigEndian,"bigEndian");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ByteArray_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slen") ) { return slen; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize; }
		if (HX_FIELD_EQ(inName,"endian") ) { return nmeGetEndian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"factory") ) { return factory; }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { return _float_bytes; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetEndian") ) { return nmeGetEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetEndian") ) { return nmeSetEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"push_uncheck") ) { return push_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { return _double_bytes; }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return nmeGetBytesAvailable(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { return _float_of_bytes; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { return _double_of_bytes; }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeGetBytesAvailable") ) { return nmeGetBytesAvailable_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { return nme_byte_array_read_file; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { return nme_byte_array_overwrite_file; }
	}
	return super::__Field(inName);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slen") ) { slen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { resize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endian") ) { return nmeSetEndian(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"factory") ) { factory=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { nme_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { nme_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("bigEndian"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("_float_of_bytes"),
	HX_CSTRING("_double_of_bytes"),
	HX_CSTRING("_float_bytes"),
	HX_CSTRING("_double_bytes"),
	HX_CSTRING("factory"),
	HX_CSTRING("resize"),
	HX_CSTRING("slen"),
	HX_CSTRING("bytes"),
	HX_CSTRING("nme_byte_array_overwrite_file"),
	HX_CSTRING("nme_byte_array_read_file"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("position"),
	HX_CSTRING("endian"),
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("bigEndian"),
	HX_CSTRING("setLength"),
	HX_CSTRING("checkData"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("compress"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("ThrowEOFi"),
	HX_CSTRING("nmeGetBytesAvailable"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("asString"),
	HX_CSTRING("nmeGetEndian"),
	HX_CSTRING("nmeSetEndian"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("push_uncheck"),
	HX_CSTRING("push"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::factory,"factory");
	HX_MARK_MEMBER_NAME(ByteArray_obj::resize,"resize");
	HX_MARK_MEMBER_NAME(ByteArray_obj::slen,"slen");
	HX_MARK_MEMBER_NAME(ByteArray_obj::bytes,"bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_overwrite_file,"nme_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_read_file,"nme_byte_array_read_file");
};

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ByteArray_obj::__boot()
{
	hx::Static(_float_of_bytes) = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_of_bytes"),(int)2);
	hx::Static(_double_of_bytes) = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_of_bytes"),(int)2);
	hx::Static(_float_bytes) = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_bytes"),(int)2);
	hx::Static(_double_bytes) = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_bytes"),(int)2);
	hx::Static(factory);
	hx::Static(resize);
	hx::Static(slen);
	hx::Static(bytes);
	hx::Static(nme_byte_array_overwrite_file) = ::nme::Loader_obj::load(HX_CSTRING("nme_byte_array_overwrite_file"),(int)2);
	hx::Static(nme_byte_array_read_file) = ::nme::Loader_obj::load(HX_CSTRING("nme_byte_array_read_file"),(int)1);
}

} // end namespace nme
} // end namespace utils
