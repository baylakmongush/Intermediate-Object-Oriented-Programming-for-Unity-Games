#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Ball
struct Ball_t2206666566;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// Block
struct Block_t1429612866;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t631007953;
// ConfigurationData
struct ConfigurationData_t2890431313;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// GameInitializer
struct GameInitializer_t2260794205;
// Paddle
struct Paddle_t4140593882;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Func`2<System.Object,System.String>
struct Func_2_t1214474899;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Void
struct Void_t1185182177;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t Ball_Start_m1065569631_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Update_m3128307701_MetadataUsageId;
extern const uint32_t Ball_SetDirection_m2781874913_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1201842172;
extern const uint32_t Block_OnCollisionEnter2D_m1934778995_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* ConfigurationData_t2890431313_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1293266066;
extern const uint32_t ConfigurationData__ctor_m2163337534_MetadataUsageId;
extern const uint32_t ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164_MetadataUsageId;
extern const uint32_t ConfigurationData_get_BallImpulseForce_m3792104910_MetadataUsageId;
extern const uint32_t ConfigurationData__cctor_m3674596483_MetadataUsageId;
extern RuntimeClass* ConfigurationUtils_t1398860445_il2cpp_TypeInfo_var;
extern const uint32_t ConfigurationUtils_Initialize_m2724632422_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const uint32_t Paddle_Start_m1278280637_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern const uint32_t Paddle_FixedUpdate_m2696276257_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisBall_t2206666566_m1977777556_RuntimeMethod_var;
extern const uint32_t Paddle_OnCollisionEnter2D_m1968198353_MetadataUsageId;
extern RuntimeClass* ScreenUtils_t317983799_il2cpp_TypeInfo_var;
extern const uint32_t ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId;
extern const uint32_t ScreenUtils_Initialize_m2443190515_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct ContactPoint2D_t3390240644 ;

struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CONFIGURATIONDATA_T2890431313_H
#define CONFIGURATIONDATA_T2890431313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigurationData
struct  ConfigurationData_t2890431313  : public RuntimeObject
{
public:

public:
};

struct ConfigurationData_t2890431313_StaticFields
{
public:
	// System.Single ConfigurationData::paddleMoveUnitsPerSecond
	float ___paddleMoveUnitsPerSecond_1;
	// System.Single ConfigurationData::ballImpulseForce
	float ___ballImpulseForce_2;

public:
	inline static int32_t get_offset_of_paddleMoveUnitsPerSecond_1() { return static_cast<int32_t>(offsetof(ConfigurationData_t2890431313_StaticFields, ___paddleMoveUnitsPerSecond_1)); }
	inline float get_paddleMoveUnitsPerSecond_1() const { return ___paddleMoveUnitsPerSecond_1; }
	inline float* get_address_of_paddleMoveUnitsPerSecond_1() { return &___paddleMoveUnitsPerSecond_1; }
	inline void set_paddleMoveUnitsPerSecond_1(float value)
	{
		___paddleMoveUnitsPerSecond_1 = value;
	}

	inline static int32_t get_offset_of_ballImpulseForce_2() { return static_cast<int32_t>(offsetof(ConfigurationData_t2890431313_StaticFields, ___ballImpulseForce_2)); }
	inline float get_ballImpulseForce_2() const { return ___ballImpulseForce_2; }
	inline float* get_address_of_ballImpulseForce_2() { return &___ballImpulseForce_2; }
	inline void set_ballImpulseForce_2(float value)
	{
		___ballImpulseForce_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONDATA_T2890431313_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CONFIGURATIONUTILS_T1398860445_H
#define CONFIGURATIONUTILS_T1398860445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigurationUtils
struct  ConfigurationUtils_t1398860445  : public RuntimeObject
{
public:

public:
};

struct ConfigurationUtils_t1398860445_StaticFields
{
public:
	// ConfigurationData ConfigurationUtils::configurationData
	ConfigurationData_t2890431313 * ___configurationData_0;

public:
	inline static int32_t get_offset_of_configurationData_0() { return static_cast<int32_t>(offsetof(ConfigurationUtils_t1398860445_StaticFields, ___configurationData_0)); }
	inline ConfigurationData_t2890431313 * get_configurationData_0() const { return ___configurationData_0; }
	inline ConfigurationData_t2890431313 ** get_address_of_configurationData_0() { return &___configurationData_0; }
	inline void set_configurationData_0(ConfigurationData_t2890431313 * value)
	{
		___configurationData_0 = value;
		Il2CppCodeGenWriteBarrier((&___configurationData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONUTILS_T1398860445_H
#ifndef SCREENUTILS_T317983799_H
#define SCREENUTILS_T317983799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenUtils
struct  ScreenUtils_t317983799  : public RuntimeObject
{
public:

public:
};

struct ScreenUtils_t317983799_StaticFields
{
public:
	// System.Single ScreenUtils::screenLeft
	float ___screenLeft_0;
	// System.Single ScreenUtils::screenRight
	float ___screenRight_1;
	// System.Single ScreenUtils::screenTop
	float ___screenTop_2;
	// System.Single ScreenUtils::screenBottom
	float ___screenBottom_3;

public:
	inline static int32_t get_offset_of_screenLeft_0() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenLeft_0)); }
	inline float get_screenLeft_0() const { return ___screenLeft_0; }
	inline float* get_address_of_screenLeft_0() { return &___screenLeft_0; }
	inline void set_screenLeft_0(float value)
	{
		___screenLeft_0 = value;
	}

	inline static int32_t get_offset_of_screenRight_1() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenRight_1)); }
	inline float get_screenRight_1() const { return ___screenRight_1; }
	inline float* get_address_of_screenRight_1() { return &___screenRight_1; }
	inline void set_screenRight_1(float value)
	{
		___screenRight_1 = value;
	}

	inline static int32_t get_offset_of_screenTop_2() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenTop_2)); }
	inline float get_screenTop_2() const { return ___screenTop_2; }
	inline float* get_address_of_screenTop_2() { return &___screenTop_2; }
	inline void set_screenTop_2(float value)
	{
		___screenTop_2 = value;
	}

	inline static int32_t get_offset_of_screenBottom_3() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenBottom_3)); }
	inline float get_screenBottom_3() const { return ___screenBottom_3; }
	inline float* get_address_of_screenBottom_3() { return &___screenBottom_3; }
	inline void set_screenBottom_3(float value)
	{
		___screenBottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENUTILS_T317983799_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_2;

public:
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}

	inline static int32_t get_offset_of_FalseString_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_2)); }
	inline String_t* get_FalseString_2() const { return ___FalseString_2; }
	inline String_t** get_address_of_FalseString_2() { return &___FalseString_2; }
	inline void set_FalseString_2(String_t* value)
	{
		___FalseString_2 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_1;

public:
	inline static int32_t get_offset_of_categoryForLatin1_1() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_1)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_1() const { return ___categoryForLatin1_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_1() { return &___categoryForLatin1_1; }
	inline void set_categoryForLatin1_1(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_1 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t1214474899 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t2317969963 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t1214474899 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t1214474899 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t1214474899 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t2317969963 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t2317969963 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t2317969963 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_3)); }
	inline TextReader_t283511965 * get_Null_3() const { return ___Null_3; }
	inline TextReader_t283511965 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t283511965 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t1273022909 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_t4116647657* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_t4116647657* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t3187275312 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_6)); }
	inline Encoding_t1523322056 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t1523322056 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t1523322056 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_7)); }
	inline Decoder_t2204182725 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t2204182725 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t2204182725 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_8), value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charBuffer_9)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_9), value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____preamble_10)); }
	inline ByteU5BU5D_t4116647657* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_t4116647657* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((&____preamble_10), value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____asyncReadTask_20)); }
	inline Task_t3187275312 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t3187275312 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t3187275312 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((&____asyncReadTask_20), value);
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_4)); }
	inline StreamReader_t4009935899 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t4009935899 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t4009935899 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((&___Null_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef BALL_T2206666566_H
#define BALL_T2206666566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2206666566  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Ball::rb
	Rigidbody2D_t939494601 * ___rb_2;
	// System.Single Ball::angle
	float ___angle_3;
	// UnityEngine.Vector2 Ball::direction
	Vector2_t2156229523  ___direction_4;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(Ball_t2206666566, ___rb_2)); }
	inline Rigidbody2D_t939494601 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody2D_t939494601 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb_2), value);
	}

	inline static int32_t get_offset_of_angle_3() { return static_cast<int32_t>(offsetof(Ball_t2206666566, ___angle_3)); }
	inline float get_angle_3() const { return ___angle_3; }
	inline float* get_address_of_angle_3() { return &___angle_3; }
	inline void set_angle_3(float value)
	{
		___angle_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Ball_t2206666566, ___direction_4)); }
	inline Vector2_t2156229523  get_direction_4() const { return ___direction_4; }
	inline Vector2_t2156229523 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t2156229523  value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T2206666566_H
#ifndef BLOCK_T1429612866_H
#define BLOCK_T1429612866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Block
struct  Block_t1429612866  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK_T1429612866_H
#ifndef PADDLE_T4140593882_H
#define PADDLE_T4140593882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t4140593882  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Paddle::rb
	Rigidbody2D_t939494601 * ___rb_2;
	// System.Single Paddle::moveX
	float ___moveX_3;
	// UnityEngine.Vector3 Paddle::position
	Vector3_t3722313464  ___position_4;
	// UnityEngine.BoxCollider2D Paddle::boxColl
	BoxCollider2D_t3581341831 * ___boxColl_5;
	// System.Single Paddle::halfWidth
	float ___halfWidth_6;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(Paddle_t4140593882, ___rb_2)); }
	inline Rigidbody2D_t939494601 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody2D_t939494601 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb_2), value);
	}

	inline static int32_t get_offset_of_moveX_3() { return static_cast<int32_t>(offsetof(Paddle_t4140593882, ___moveX_3)); }
	inline float get_moveX_3() const { return ___moveX_3; }
	inline float* get_address_of_moveX_3() { return &___moveX_3; }
	inline void set_moveX_3(float value)
	{
		___moveX_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Paddle_t4140593882, ___position_4)); }
	inline Vector3_t3722313464  get_position_4() const { return ___position_4; }
	inline Vector3_t3722313464 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t3722313464  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_boxColl_5() { return static_cast<int32_t>(offsetof(Paddle_t4140593882, ___boxColl_5)); }
	inline BoxCollider2D_t3581341831 * get_boxColl_5() const { return ___boxColl_5; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxColl_5() { return &___boxColl_5; }
	inline void set_boxColl_5(BoxCollider2D_t3581341831 * value)
	{
		___boxColl_5 = value;
		Il2CppCodeGenWriteBarrier((&___boxColl_5), value);
	}

	inline static int32_t get_offset_of_halfWidth_6() { return static_cast<int32_t>(offsetof(Paddle_t4140593882, ___halfWidth_6)); }
	inline float get_halfWidth_6() const { return ___halfWidth_6; }
	inline float* get_address_of_halfWidth_6() { return &___halfWidth_6; }
	inline void set_halfWidth_6(float value)
	{
		___halfWidth_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDLE_T4140593882_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef GAMEINITIALIZER_T2260794205_H
#define GAMEINITIALIZER_T2260794205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInitializer
struct  GameInitializer_t2260794205  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEINITIALIZER_T2260794205_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Single ConfigurationUtils::get_BallImpulseForce()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationUtils_get_BallImpulseForce_m1616423968 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C" IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" IL2CPP_METHOD_ATTR StreamReader_t4009935899 * File_OpenText_m196858847 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void ConfigurationData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConfigurationData__ctor_m2163337534 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method);
// System.Void ScreenUtils::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ConfigurationUtils::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ConfigurationUtils_Initialize_m2724632422 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  BoxCollider2D_get_size_m3529128736 (BoxCollider2D_t3581341831 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single ConfigurationUtils::get_PaddleMoveUnitsPerSecond()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2637269072 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m3595802076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single Paddle::CalculateClampedX(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Paddle_CalculateClampedX_m1888908951 (Paddle_t4140593882 * __this, float ___x0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m1934912072 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Single ScreenUtils::get_ScreenLeft()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single ScreenUtils::get_ScreenRight()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Ball>()
#define GameObject_GetComponent_TisBall_t2206666566_m1977777556(__this, method) ((  Ball_t2206666566 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Collision2D_get_transform_m2670923831 (Collision2D_t2842956331 * __this, const RuntimeMethod* method);
// System.Void Ball::SetDirection(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Ball_SetDirection_m2781874913 (Ball_t2206666566 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Ball__ctor_m558340171 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern "C" IL2CPP_METHOD_ATTR void Ball_Start_m1065569631 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m1065569631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb_2(L_0);
		__this->set_angle_3((20.0f));
		return;
	}
}
// System.Void Ball::Update()
extern "C" IL2CPP_METHOD_ATTR void Ball_Update_m3128307701 (Ball_t2206666566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m3128307701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_angle_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)L_0))/(float)(180.0f))));
		float L_2 = __this->get_angle_3();
		float L_3 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)L_2))/(float)(180.0f))));
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->set_direction_4(L_4);
		Rigidbody2D_t939494601 * L_5 = __this->get_rb_2();
		Vector2_t2156229523  L_6 = __this->get_direction_4();
		float L_7 = ConfigurationUtils_get_BallImpulseForce_m1616423968(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::SetDirection(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Ball_SetDirection_m2781874913 (Ball_t2206666566 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_SetDirection_m2781874913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody2D_t939494601 * L_0 = __this->get_rb_2();
		Rigidbody2D_t939494601 * L_1 = __this->get_rb_2();
		Vector2_t2156229523  L_2 = Rigidbody2D_get_velocity_m366589732(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_magnitude_m2752892833((&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Block::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Block__ctor_m2599590690 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Block::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void Block_OnCollisionEnter2D_m1934778995 (Block_t1429612866 * __this, Collision2D_t2842956331 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_OnCollisionEnter2D_m1934778995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___coll0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral1201842172, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConfigurationData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConfigurationData__ctor_m2163337534 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData__ctor_m2163337534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t4009935899 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		V_0 = (StreamReader_t4009935899 *)NULL;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			String_t* L_0 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_1 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, _stringLiteral1293266066, /*hidden argument*/NULL);
			StreamReader_t4009935899 * L_2 = File_OpenText_m196858847(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
			V_0 = L_2;
			StreamReader_t4009935899 * L_3 = V_0;
			String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_3);
			V_1 = L_4;
			StreamReader_t4009935899 * L_5 = V_0;
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_5);
			V_2 = L_6;
			String_t* L_7 = V_2;
			CharU5BU5D_t3528271667* L_8 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
			(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			StringU5BU5D_t1281789340* L_9 = String_Split_m3646115398(L_7, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			StringU5BU5D_t1281789340* L_10 = V_3;
			int32_t L_11 = 0;
			String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
			float L_13 = Single_Parse_m364357836(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
			((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_paddleMoveUnitsPerSecond_1(L_13);
			StringU5BU5D_t1281789340* L_14 = V_3;
			int32_t L_15 = 1;
			String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
			float L_17 = Single_Parse_m364357836(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_ballImpulseForce_2(L_17);
			IL2CPP_LEAVE(0x70, FINALLY_0063);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_005c;
			throw e;
		}

CATCH_005c:
		{ // begin catch(System.Exception)
			V_4 = ((Exception_t *)__exception_local);
			IL2CPP_LEAVE(0x70, FINALLY_0063);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			StreamReader_t4009935899 * L_18 = V_0;
			if (!L_18)
			{
				goto IL_006f;
			}
		}

IL_0069:
		{
			StreamReader_t4009935899 * L_19 = V_0;
			VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_19);
		}

IL_006f:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0070:
	{
		return;
	}
}
// System.Single ConfigurationData::get_PaddleMoveUnitsPerSecond()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData_get_PaddleMoveUnitsPerSecond_m2147725164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		float L_0 = ((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->get_paddleMoveUnitsPerSecond_1();
		return L_0;
	}
}
// System.Single ConfigurationData::get_BallImpulseForce()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationData_get_BallImpulseForce_m3792104910 (ConfigurationData_t2890431313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData_get_BallImpulseForce_m3792104910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		float L_0 = ((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->get_ballImpulseForce_2();
		return L_0;
	}
}
// System.Void ConfigurationData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ConfigurationData__cctor_m3674596483 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationData__cctor_m3674596483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_paddleMoveUnitsPerSecond_1((10.0f));
		((ConfigurationData_t2890431313_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationData_t2890431313_il2cpp_TypeInfo_var))->set_ballImpulseForce_2((200.0f));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ConfigurationUtils::get_PaddleMoveUnitsPerSecond()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2637269072 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return (10.0f);
	}
}
// System.Single ConfigurationUtils::get_BallImpulseForce()
extern "C" IL2CPP_METHOD_ATTR float ConfigurationUtils_get_BallImpulseForce_m1616423968 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return (200.0f);
	}
}
// System.Void ConfigurationUtils::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ConfigurationUtils_Initialize_m2724632422 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationUtils_Initialize_m2724632422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationData_t2890431313 * L_0 = (ConfigurationData_t2890431313 *)il2cpp_codegen_object_new(ConfigurationData_t2890431313_il2cpp_TypeInfo_var);
		ConfigurationData__ctor_m2163337534(L_0, /*hidden argument*/NULL);
		((ConfigurationUtils_t1398860445_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_t1398860445_il2cpp_TypeInfo_var))->set_configurationData_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameInitializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameInitializer__ctor_m166599142 (GameInitializer_t2260794205 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameInitializer::Awake()
extern "C" IL2CPP_METHOD_ATTR void GameInitializer_Awake_m2076211790 (GameInitializer_t2260794205 * __this, const RuntimeMethod* method)
{
	{
		ScreenUtils_Initialize_m2443190515(NULL /*static, unused*/, /*hidden argument*/NULL);
		ConfigurationUtils_Initialize_m2724632422(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Paddle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Paddle__ctor_m4042572223 (Paddle_t4140593882 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::Start()
extern "C" IL2CPP_METHOD_ATTR void Paddle_Start_m1278280637 (Paddle_t4140593882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Start_m1278280637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb_2(L_0);
		BoxCollider2D_t3581341831 * L_1 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxColl_5(L_1);
		BoxCollider2D_t3581341831 * L_2 = __this->get_boxColl_5();
		Vector2_t2156229523  L_3 = BoxCollider2D_get_size_m3529128736(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_0();
		__this->set_halfWidth_6(((float)((float)L_4/(float)(4.0f))));
		float L_5 = __this->get_halfWidth_6();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void Paddle_FixedUpdate_m2696276257 (Paddle_t4140593882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_FixedUpdate_m2696276257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		__this->set_moveX_3(L_0);
		float L_1 = __this->get_moveX_3();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_008c;
		}
	}
	{
		Rigidbody2D_t939494601 * L_2 = __this->get_rb_2();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_position_4(L_4);
		Vector3_t3722313464 * L_5 = __this->get_address_of_position_4();
		Vector3_t3722313464 * L_6 = L_5;
		float L_7 = L_6->get_x_1();
		float L_8 = __this->get_moveX_3();
		float L_9 = ConfigurationUtils_get_PaddleMoveUnitsPerSecond_m2637269072(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_6->set_x_1(((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)))));
		Vector3_t3722313464 * L_11 = __this->get_address_of_position_4();
		Vector3_t3722313464 * L_12 = __this->get_address_of_position_4();
		float L_13 = L_12->get_x_1();
		float L_14 = Paddle_CalculateClampedX_m1888908951(__this, L_13, /*hidden argument*/NULL);
		L_11->set_x_1(L_14);
		Rigidbody2D_t939494601 * L_15 = __this->get_rb_2();
		Vector3_t3722313464  L_16 = __this->get_position_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_17 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m1934912072(L_15, L_17, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Single Paddle::CalculateClampedX(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Paddle_CalculateClampedX_m1888908951 (Paddle_t4140593882 * __this, float ___x0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = __this->get_halfWidth_6();
		float L_2 = ScreenUtils_get_ScreenLeft_m4016222789(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) < ((float)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		float L_3 = ___x0;
		float L_4 = __this->get_halfWidth_6();
		float L_5 = ScreenUtils_get_ScreenRight_m555408866(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_3, (float)L_4))) > ((float)L_5))))
		{
			goto IL_0038;
		}
	}

IL_0024:
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_x_1();
		return L_8;
	}

IL_0038:
	{
		float L_9 = ___x0;
		return L_9;
	}
}
// System.Void Paddle::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void Paddle_OnCollisionEnter2D_m1968198353 (Paddle_t4140593882 * __this, Collision2D_t2842956331 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_OnCollisionEnter2D_m1968198353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector2_t2156229523  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Ball_t2206666566 * V_10 = NULL;
	{
		Collision2D_t2842956331 * L_0 = ___coll0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral1201842172, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00c7;
		}
	}
	{
		Collision2D_t2842956331 * L_3 = ___coll0;
		GameObject_t1113636619 * L_4 = Collision2D_get_gameObject_m1443495885(L_3, /*hidden argument*/NULL);
		Ball_t2206666566 * L_5 = GameObject_GetComponent_TisBall_t2206666566_m1977777556(L_4, /*hidden argument*/GameObject_GetComponent_TisBall_t2206666566_m1977777556_RuntimeMethod_var);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_y_2();
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_y_2();
		V_0 = (bool)((((float)L_8) > ((float)((float)il2cpp_codegen_subtract((float)L_11, (float)(0.05f)))))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_x_1();
		Collision2D_t2842956331 * L_16 = ___coll0;
		Transform_t3600365921 * L_17 = Collision2D_get_transform_m2670923831(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (&V_5)->get_x_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_15, (float)L_19));
		float L_20 = V_3;
		float L_21 = __this->get_halfWidth_6();
		V_6 = ((float)((float)L_20/(float)L_21));
		float L_22 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply((float)L_22, (float)(60.0f)));
		float L_23 = V_7;
		V_8 = ((float)il2cpp_codegen_add((float)(1.57079637f), (float)L_23));
		float L_24 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_25 = cosf(L_24);
		float L_26 = V_8;
		float L_27 = sinf(L_26);
		Vector2__ctor_m3970636864((&V_9), L_25, L_27, /*hidden argument*/NULL);
		Collision2D_t2842956331 * L_28 = ___coll0;
		GameObject_t1113636619 * L_29 = Collision2D_get_gameObject_m1443495885(L_28, /*hidden argument*/NULL);
		Ball_t2206666566 * L_30 = GameObject_GetComponent_TisBall_t2206666566_m1977777556(L_29, /*hidden argument*/GameObject_GetComponent_TisBall_t2206666566_m1977777556_RuntimeMethod_var);
		V_10 = L_30;
		Ball_t2206666566 * L_31 = V_10;
		Vector2_t2156229523  L_32 = V_9;
		Ball_SetDirection_m2781874913(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ScreenUtils::get_ScreenLeft()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenLeft_0();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenRight()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenRight_1();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenTop()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenTop_m73875077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenTop_2();
		return L_0;
	}
}
// System.Single ScreenUtils::get_ScreenBottom()
extern "C" IL2CPP_METHOD_ATTR float ScreenUtils_get_ScreenBottom_m666689270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenBottom_3();
		return L_0;
	}
}
// System.Void ScreenUtils::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_Initialize_m2443190515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_z_3();
		V_0 = ((-L_3));
		float L_4 = V_0;
		Vector3__ctor_m3353183577((&V_2), (0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3__ctor_m3353183577((&V_3), (((float)((float)L_5))), (((float)((float)L_6))), L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_2;
		Vector3_t3722313464  L_10 = Camera_ScreenToWorldPoint_m3978588570(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = V_3;
		Vector3_t3722313464  L_13 = Camera_ScreenToWorldPoint_m3978588570(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		float L_14 = (&V_4)->get_x_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenLeft_0(L_14);
		float L_15 = (&V_5)->get_x_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenRight_1(L_15);
		float L_16 = (&V_5)->get_y_2();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenTop_2(L_16);
		float L_17 = (&V_4)->get_y_2();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenBottom_3(L_17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
