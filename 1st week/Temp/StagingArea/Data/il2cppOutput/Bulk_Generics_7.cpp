﻿#include "il2cpp-config.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t3139534710;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t3374499323;
// System.Action`1<System.IAsyncResult>
struct Action_1_t939472046;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.OperationCanceledException
struct OperationCanceledException_t926488448;
// System.Threading.Tasks.TaskExceptionHolder
struct TaskExceptionHolder_t1800584989;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t82022818;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.Delegate
struct Delegate_t1188392813;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.AtomicBoolean
struct AtomicBoolean_t2634115295;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t3398609381;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t2676017125;
// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t2910981738;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>
struct SparseArray_1_t396411150;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t3267548213;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Type
struct Type_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t2713193907;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t3230838485;
// System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>
struct Tuple_4_t280230887;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t10520759;
// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t2598374123;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t2423483305;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t982173797;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t1111334208;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t3723462114;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t214452203;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2703961024;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3068109991;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3197270402;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1514431012;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t362407658;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4059188962;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2756980746;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3283971887;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1557236713;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t682480391;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t832123510;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t614268397;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2404744798;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t4085588227;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<System.Object>
struct U3CU3Ec__DisplayClass35_1_t3690184305;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<System.Threading.Tasks.VoidTaskResult>
struct U3CU3Ec__DisplayClass35_1_t3226666720;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t2384618318;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t3366404161;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3944607041;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Void
struct Void_t1185182177;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_t3596722525;
// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t445487134;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t364382758;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Collections.Generic.List`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo>
struct List_1_t928104815;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t3750997369;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t2108926;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t3833558637;

extern RuntimeClass* OperationCanceledException_t926488448_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadAbortException_t4074510458_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t3187275312_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m2928931602_RuntimeMethod_var;
extern const uint32_t TaskFactory_1_FromAsyncCoreLogic_m385455661_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryCompatibility_t3378813580_il2cpp_TypeInfo_var;
extern RuntimeClass* AtomicBoolean_t2634115295_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TaskFactory_1_FromAsyncImpl_m3898819863_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m528074778_RuntimeMethod_var;
extern String_t* _stringLiteral1969460926;
extern String_t* _stringLiteral153292483;
extern String_t* _stringLiteral3179058573;
extern const uint32_t TaskFactory_1_FromAsyncImpl_m3898819863_MetadataUsageId;
extern const uint32_t TaskFactory_1_FromAsyncCoreLogic_m3891675747_MetadataUsageId;
extern const RuntimeMethod* TaskFactory_1_FromAsyncImpl_m196723106_RuntimeMethod_var;
extern const uint32_t TaskFactory_1_FromAsyncImpl_m196723106_MetadataUsageId;
extern RuntimeClass* ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var;
extern RuntimeClass* IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var;
extern const uint32_t Tuple_2_Equals_m3225610105_MetadataUsageId;
extern RuntimeClass* IEqualityComparer_t1493878338_il2cpp_TypeInfo_var;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_m3652816150_MetadataUsageId;
extern RuntimeClass* LowLevelComparer_t611013387_il2cpp_TypeInfo_var;
extern RuntimeClass* IStructuralComparable_t3450588467_il2cpp_TypeInfo_var;
extern const uint32_t Tuple_2_System_IComparable_CompareTo_m1373145262_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* IComparer_t1540313114_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_m1351464050_RuntimeMethod_var;
extern String_t* _stringLiteral4055290125;
extern String_t* _stringLiteral2432405111;
extern const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m1351464050_MetadataUsageId;
extern const uint32_t Tuple_2_GetHashCode_m2036918928_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m3110436094_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ITupleInternal_t3655233963_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614536;
extern const uint32_t Tuple_2_ToString_m715163863_MetadataUsageId;
extern String_t* _stringLiteral3450517380;
extern const uint32_t Tuple_2_System_ITupleInternal_ToString_m103424758_MetadataUsageId;
extern const uint32_t Tuple_2_Equals_m1782812392_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_m1604241532_MetadataUsageId;
extern const uint32_t Tuple_2_System_IComparable_CompareTo_m2490824222_MetadataUsageId;
extern const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3897890118_RuntimeMethod_var;
extern const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3897890118_MetadataUsageId;
extern const uint32_t Tuple_2_GetHashCode_m2612735482_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m1400802334_MetadataUsageId;
extern const uint32_t Tuple_2_ToString_m2595279462_MetadataUsageId;
extern const uint32_t Tuple_2_System_ITupleInternal_ToString_m3531129415_MetadataUsageId;
extern const uint32_t Tuple_3_Equals_m2987443164_MetadataUsageId;
extern const uint32_t Tuple_3_System_Collections_IStructuralEquatable_Equals_m3742707436_MetadataUsageId;
extern const uint32_t Tuple_3_System_IComparable_CompareTo_m1424558715_MetadataUsageId;
extern const RuntimeMethod* Tuple_3_System_Collections_IStructuralComparable_CompareTo_m2718412939_RuntimeMethod_var;
extern const uint32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m2718412939_MetadataUsageId;
extern const uint32_t Tuple_3_GetHashCode_m659657982_MetadataUsageId;
extern const uint32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m3372596419_MetadataUsageId;
extern const uint32_t Tuple_3_ToString_m464080828_MetadataUsageId;
extern const uint32_t Tuple_3_System_ITupleInternal_ToString_m3664369537_MetadataUsageId;
extern const uint32_t Tuple_4_Equals_m60921435_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_Equals_m1615368747_MetadataUsageId;
extern const uint32_t Tuple_4_System_IComparable_CompareTo_m2230556958_MetadataUsageId;
extern const RuntimeMethod* Tuple_4_System_Collections_IStructuralComparable_CompareTo_m245883596_RuntimeMethod_var;
extern const uint32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m245883596_MetadataUsageId;
extern const uint32_t Tuple_4_GetHashCode_m4200754752_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m3673523563_MetadataUsageId;
extern const uint32_t Tuple_4_ToString_m3507888759_MetadataUsageId;
extern const uint32_t Tuple_4_System_ITupleInternal_ToString_m1199886910_MetadataUsageId;
extern const uint32_t Tuple_4_Equals_m2233486523_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_Equals_m3835351674_MetadataUsageId;
extern const uint32_t Tuple_4_System_IComparable_CompareTo_m1306698847_MetadataUsageId;
extern const RuntimeMethod* Tuple_4_System_Collections_IStructuralComparable_CompareTo_m110849818_RuntimeMethod_var;
extern const uint32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m110849818_MetadataUsageId;
extern const uint32_t Tuple_4_GetHashCode_m3496458865_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2076237339_MetadataUsageId;
extern const uint32_t Tuple_4_ToString_m3336041503_MetadataUsageId;
extern const uint32_t Tuple_4_System_ITupleInternal_ToString_m1635418709_MetadataUsageId;
extern const uint32_t Tuple_4_Equals_m618710271_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_Equals_m3337480863_MetadataUsageId;
extern const uint32_t Tuple_4_System_IComparable_CompareTo_m864434890_MetadataUsageId;
extern const RuntimeMethod* Tuple_4_System_Collections_IStructuralComparable_CompareTo_m991048049_RuntimeMethod_var;
extern const uint32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m991048049_MetadataUsageId;
extern const uint32_t Tuple_4_GetHashCode_m839529646_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m1331059486_MetadataUsageId;
extern const uint32_t Tuple_4_ToString_m2434313778_MetadataUsageId;
extern const uint32_t Tuple_4_System_ITupleInternal_ToString_m1031679431_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t InvokableCall_1__ctor_m337513891_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var;
extern String_t* _stringLiteral1864861238;
extern const uint32_t InvokableCall_1_Invoke_m3497872319_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m854286695_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_1_Invoke_m891112188_RuntimeMethod_var;
extern const uint32_t InvokableCall_1_Invoke_m891112188_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m974734014_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var;
extern const uint32_t InvokableCall_1_Invoke_m4071643321_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m4147324340_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var;
extern const uint32_t InvokableCall_1_Invoke_m4150391468_MetadataUsageId;
extern const uint32_t InvokableCall_2__ctor_m3619012188_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var;
extern const uint32_t InvokableCall_2_Invoke_m1520082677_MetadataUsageId;
extern const uint32_t InvokableCall_3__ctor_m4245235439_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var;
extern const uint32_t InvokableCall_3_Invoke_m3141788616_MetadataUsageId;
extern const uint32_t InvokableCall_4__ctor_m3136187504_MetadataUsageId;
extern const RuntimeMethod* InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var;
extern const uint32_t InvokableCall_4_Invoke_m3371718871_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_1_BeginInvoke_m677813163_MetadataUsageId;
extern RuntimeClass* LoadSceneMode_t3251202195_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId;
extern RuntimeClass* InvokableCall_t832123510_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m4156046467_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1245201994_RuntimeMethod_var;
extern const uint32_t UnityEvent_1_Invoke_m3604335408_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m2734859485_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct DelegateU5BU5D_t1703627840;
struct TypeU5BU5D_t3940880105;


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
#ifndef TUPLE_4_T280230887_H
#define TUPLE_4_T280230887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>
struct  Tuple_4_t280230887  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	int32_t ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	bool ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t280230887, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t280230887, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t280230887, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t280230887, ___m_Item4_3)); }
	inline bool get_m_Item4_3() const { return ___m_Item4_3; }
	inline bool* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(bool value)
	{
		___m_Item4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_4_T280230887_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef TUPLE_4_T10520759_H
#define TUPLE_4_T10520759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct  Tuple_4_t10520759  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t10520759, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t10520759, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t10520759, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t10520759, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_4_T10520759_H
#ifndef TUPLE_4_T2598374123_H
#define TUPLE_4_T2598374123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct  Tuple_4_t2598374123  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	RuntimeObject * ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	RuntimeObject * ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t2598374123, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t2598374123, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t2598374123, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item3_2), value);
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t2598374123, ___m_Item4_3)); }
	inline RuntimeObject * get_m_Item4_3() const { return ___m_Item4_3; }
	inline RuntimeObject ** get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(RuntimeObject * value)
	{
		___m_Item4_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item4_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_4_T2598374123_H
#ifndef U3CU3EC__DISPLAYCLASS35_0_T3276586609_H
#define U3CU3EC__DISPLAYCLASS35_0_T3276586609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0<System.Object>
struct  U3CU3Ec__DisplayClass35_0_t3276586609  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0::invoked
	AtomicBoolean_t2634115295 * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0::CS$<>8__locals1
	U3CU3Ec__DisplayClass35_1_t3690184305 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t3276586609, ___invoked_0)); }
	inline AtomicBoolean_t2634115295 * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_t2634115295 ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_t2634115295 * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((&___invoked_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t3276586609, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass35_1_t3690184305 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass35_1_t3690184305 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass35_1_t3690184305 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS35_0_T3276586609_H
#ifndef U3CU3EC__DISPLAYCLASS35_1_T3690184305_H
#define U3CU3EC__DISPLAYCLASS35_1_T3690184305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<System.Object>
struct  U3CU3Ec__DisplayClass35_1_t3690184305  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::endFunction
	Func_2_t3374499323 * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::endAction
	Action_1_t939472046 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::promise
	Task_1_t190679043 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3690184305, ___endFunction_0)); }
	inline Func_2_t3374499323 * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t3374499323 ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t3374499323 * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((&___endFunction_0), value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3690184305, ___endAction_1)); }
	inline Action_1_t939472046 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_t939472046 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_t939472046 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___endAction_1), value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3690184305, ___promise_2)); }
	inline Task_1_t190679043 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t190679043 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t190679043 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((&___promise_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS35_1_T3690184305_H
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
#ifndef OBJECTEQUALITYCOMPARER_T1147032983_H
#define OBJECTEQUALITYCOMPARER_T1147032983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t1147032983  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t1147032983_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t1147032983 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t1147032983_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t1147032983 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t1147032983 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t1147032983 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T1147032983_H
#ifndef BINARYCOMPATIBILITY_T3378813580_H
#define BINARYCOMPATIBILITY_T3378813580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Versioning.BinaryCompatibility
struct  BinaryCompatibility_t3378813580  : public RuntimeObject
{
public:

public:
};

struct BinaryCompatibility_t3378813580_StaticFields
{
public:
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5
	bool ___TargetsAtLeast_Desktop_V4_5_0;
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5_1
	bool ___TargetsAtLeast_Desktop_V4_5_1_1;

public:
	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_0() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t3378813580_StaticFields, ___TargetsAtLeast_Desktop_V4_5_0)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_0() const { return ___TargetsAtLeast_Desktop_V4_5_0; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_0() { return &___TargetsAtLeast_Desktop_V4_5_0; }
	inline void set_TargetsAtLeast_Desktop_V4_5_0(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_0 = value;
	}

	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_1_1() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t3378813580_StaticFields, ___TargetsAtLeast_Desktop_V4_5_1_1)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_1_1() const { return ___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_1_1() { return &___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline void set_TargetsAtLeast_Desktop_V4_5_1_1(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMPATIBILITY_T3378813580_H
#ifndef LOWLEVELCOMPARER_T611013387_H
#define LOWLEVELCOMPARER_T611013387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t611013387  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t611013387_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t611013387 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t611013387_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t611013387 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t611013387 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t611013387 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T611013387_H
#ifndef TUPLE_2_T3267548213_H
#define TUPLE_2_T3267548213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<System.Object,System.Char>
struct  Tuple_2_t3267548213  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t3267548213, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t3267548213, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T3267548213_H
#ifndef SPARSEARRAY_1_T396411150_H
#define SPARSEARRAY_1_T396411150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>
struct  SparseArray_1_t396411150  : public RuntimeObject
{
public:
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/SparseArray`1::m_array
	ObjectU5BU5D_t2843939325* ___m_array_0;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(SparseArray_1_t396411150, ___m_array_0)); }
	inline ObjectU5BU5D_t2843939325* get_m_array_0() const { return ___m_array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(ObjectU5BU5D_t2843939325* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARSEARRAY_1_T396411150_H
#ifndef U3CU3EC__DISPLAYCLASS35_0_T2813069024_H
#define U3CU3EC__DISPLAYCLASS35_0_T2813069024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0<System.Threading.Tasks.VoidTaskResult>
struct  U3CU3Ec__DisplayClass35_0_t2813069024  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0::invoked
	AtomicBoolean_t2634115295 * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0::CS$<>8__locals1
	U3CU3Ec__DisplayClass35_1_t3226666720 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t2813069024, ___invoked_0)); }
	inline AtomicBoolean_t2634115295 * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_t2634115295 ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_t2634115295 * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((&___invoked_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t2813069024, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass35_1_t3226666720 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass35_1_t3226666720 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass35_1_t3226666720 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS35_0_T2813069024_H
#ifndef U3CU3EC__DISPLAYCLASS35_1_T3226666720_H
#define U3CU3EC__DISPLAYCLASS35_1_T3226666720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1<System.Threading.Tasks.VoidTaskResult>
struct  U3CU3Ec__DisplayClass35_1_t3226666720  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::endFunction
	Func_2_t2910981738 * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::endAction
	Action_1_t939472046 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1::promise
	Task_1_t4022128754 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3226666720, ___endFunction_0)); }
	inline Func_2_t2910981738 * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t2910981738 ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t2910981738 * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((&___endFunction_0), value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3226666720, ___endAction_1)); }
	inline Action_1_t939472046 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_t939472046 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_t939472046 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___endAction_1), value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t3226666720, ___promise_2)); }
	inline Task_1_t4022128754 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t4022128754 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t4022128754 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((&___promise_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS35_1_T3226666720_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef TUPLE_2_T2713193907_H
#define TUPLE_2_T2713193907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t2713193907  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t2713193907, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t2713193907, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T2713193907_H
#ifndef TUPLE_3_T3230838485_H
#define TUPLE_3_T3230838485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`3<System.Object,System.Object,System.Object>
struct  Tuple_3_t3230838485  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_t3230838485, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_t3230838485, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_t3230838485, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item3_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_3_T3230838485_H
#ifndef ATOMICBOOLEAN_T2634115295_H
#define ATOMICBOOLEAN_T2634115295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AtomicBoolean
struct  AtomicBoolean_t2634115295  : public RuntimeObject
{
public:
	// System.Int32 System.Threading.AtomicBoolean::flag
	int32_t ___flag_0;

public:
	inline static int32_t get_offset_of_flag_0() { return static_cast<int32_t>(offsetof(AtomicBoolean_t2634115295, ___flag_0)); }
	inline int32_t get_flag_0() const { return ___flag_0; }
	inline int32_t* get_address_of_flag_0() { return &___flag_0; }
	inline void set_flag_0(int32_t value)
	{
		___flag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATOMICBOOLEAN_T2634115295_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
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
#ifndef TASKSCHEDULER_T1196198384_H
#define TASKSCHEDULER_T1196198384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t1196198384  : public RuntimeObject
{
public:

public:
};

struct TaskScheduler_t1196198384_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t2384618318 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t1196198384 * ___s_defaultTaskScheduler_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t3366404161 * ____unobservedTaskException_2;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_3;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t2384618318 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t2384618318 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t2384618318 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTaskSchedulers_0), value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t1196198384 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t1196198384 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t1196198384 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultTaskScheduler_1), value);
	}

	inline static int32_t get_offset_of__unobservedTaskException_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ____unobservedTaskException_2)); }
	inline EventHandler_1_t3366404161 * get__unobservedTaskException_2() const { return ____unobservedTaskException_2; }
	inline EventHandler_1_t3366404161 ** get_address_of__unobservedTaskException_2() { return &____unobservedTaskException_2; }
	inline void set__unobservedTaskException_2(EventHandler_1_t3366404161 * value)
	{
		____unobservedTaskException_2 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskException_2), value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ____unobservedTaskExceptionLockObject_3)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_3() const { return ____unobservedTaskExceptionLockObject_3; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_3() { return &____unobservedTaskExceptionLockObject_3; }
	inline void set__unobservedTaskExceptionLockObject_3(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_3 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskExceptionLockObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKSCHEDULER_T1196198384_H
#ifndef LIST_1_T4176035766_H
#define LIST_1_T4176035766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_t4176035766  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t3944607041* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____items_0)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__items_0() const { return ____items_0; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t4176035766_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t3944607041* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4176035766_StaticFields, ____emptyArray_4)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__emptyArray_4() const { return ____emptyArray_4; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4176035766_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef UNITYEVENT_2_T614268397_H
#define UNITYEVENT_2_T614268397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t614268397  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t614268397, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T614268397_H
#ifndef UNITYEVENT_1_T3961765668_H
#define UNITYEVENT_1_T3961765668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t3961765668  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3961765668, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3961765668_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef UNITYEVENT_3_T2404744798_H
#define UNITYEVENT_3_T2404744798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t2404744798  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2404744798, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2404744798_H
#ifndef UNITYEVENT_4_T4085588227_H
#define UNITYEVENT_4_T4085588227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t4085588227  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t4085588227, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T4085588227_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef INVOKABLECALL_2_T362407658_H
#define INVOKABLECALL_2_T362407658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t362407658  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t3283971887 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t362407658, ___Delegate_0)); }
	inline UnityAction_2_t3283971887 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t3283971887 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t3283971887 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T362407658_H
#ifndef INVOKABLECALL_1_T3197270402_H
#define INVOKABLECALL_1_T3197270402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t3197270402  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3664942305 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3197270402, ___Delegate_0)); }
	inline UnityAction_1_t3664942305 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3664942305 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3664942305 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3197270402_H
#ifndef INVOKABLECALL_1_T3068109991_H
#define INVOKABLECALL_1_T3068109991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t3068109991  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3535781894 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3068109991, ___Delegate_0)); }
	inline UnityAction_1_t3535781894 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3535781894 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3535781894 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3068109991_H
#ifndef INVOKABLECALL_3_T4059188962_H
#define INVOKABLECALL_3_T4059188962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4059188962  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1557236713 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4059188962, ___Delegate_0)); }
	inline UnityAction_3_t1557236713 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1557236713 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1557236713 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4059188962_H
#ifndef INVOKABLECALL_4_T2756980746_H
#define INVOKABLECALL_4_T2756980746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t2756980746  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_t682480391 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t2756980746, ___Delegate_0)); }
	inline UnityAction_4_t682480391 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_t682480391 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_t682480391 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T2756980746_H
#ifndef INVOKABLECALL_1_T214452203_H
#define INVOKABLECALL_1_T214452203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t214452203  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t682124106 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t214452203, ___Delegate_0)); }
	inline UnityAction_1_t682124106 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t682124106 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t682124106 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T214452203_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef INVOKABLECALL_1_T1514431012_H
#define INVOKABLECALL_1_T1514431012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_t1514431012  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1982102915 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1514431012, ___Delegate_0)); }
	inline UnityAction_1_t1982102915 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1982102915 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1982102915 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1514431012_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef VOIDTASKRESULT_T2616588579_H
#define VOIDTASKRESULT_T2616588579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t2616588579 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t2616588579__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDTASKRESULT_T2616588579_H
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
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_15)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_18)); }
	inline Task_t3187275312 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t3187275312 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef CONTINGENTPROPERTIES_T2170468915_H
#define CONTINGENTPROPERTIES_T2170468915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task/ContingentProperties
struct  ContingentProperties_t2170468915  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Threading.Tasks.Task/ContingentProperties::m_capturedContext
	ExecutionContext_t1748372627 * ___m_capturedContext_0;
	// System.Threading.ManualResetEventSlim modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionEvent
	ManualResetEventSlim_t3596722525 * ___m_completionEvent_1;
	// System.Threading.Tasks.TaskExceptionHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionsHolder
	TaskExceptionHolder_t1800584989 * ___m_exceptionsHolder_2;
	// System.Threading.CancellationToken System.Threading.Tasks.Task/ContingentProperties::m_cancellationToken
	CancellationToken_t784455623  ___m_cancellationToken_3;
	// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> System.Threading.Tasks.Task/ContingentProperties::m_cancellationRegistration
	Shared_1_t445487134 * ___m_cancellationRegistration_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_internalCancellationRequested
	int32_t ___m_internalCancellationRequested_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionCountdown
	int32_t ___m_completionCountdown_6;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionalChildren
	List_1_t364382758 * ___m_exceptionalChildren_7;

public:
	inline static int32_t get_offset_of_m_capturedContext_0() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_capturedContext_0)); }
	inline ExecutionContext_t1748372627 * get_m_capturedContext_0() const { return ___m_capturedContext_0; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_capturedContext_0() { return &___m_capturedContext_0; }
	inline void set_m_capturedContext_0(ExecutionContext_t1748372627 * value)
	{
		___m_capturedContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_capturedContext_0), value);
	}

	inline static int32_t get_offset_of_m_completionEvent_1() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_completionEvent_1)); }
	inline ManualResetEventSlim_t3596722525 * get_m_completionEvent_1() const { return ___m_completionEvent_1; }
	inline ManualResetEventSlim_t3596722525 ** get_address_of_m_completionEvent_1() { return &___m_completionEvent_1; }
	inline void set_m_completionEvent_1(ManualResetEventSlim_t3596722525 * value)
	{
		___m_completionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completionEvent_1), value);
	}

	inline static int32_t get_offset_of_m_exceptionsHolder_2() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_exceptionsHolder_2)); }
	inline TaskExceptionHolder_t1800584989 * get_m_exceptionsHolder_2() const { return ___m_exceptionsHolder_2; }
	inline TaskExceptionHolder_t1800584989 ** get_address_of_m_exceptionsHolder_2() { return &___m_exceptionsHolder_2; }
	inline void set_m_exceptionsHolder_2(TaskExceptionHolder_t1800584989 * value)
	{
		___m_exceptionsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionsHolder_2), value);
	}

	inline static int32_t get_offset_of_m_cancellationToken_3() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_cancellationToken_3)); }
	inline CancellationToken_t784455623  get_m_cancellationToken_3() const { return ___m_cancellationToken_3; }
	inline CancellationToken_t784455623 * get_address_of_m_cancellationToken_3() { return &___m_cancellationToken_3; }
	inline void set_m_cancellationToken_3(CancellationToken_t784455623  value)
	{
		___m_cancellationToken_3 = value;
	}

	inline static int32_t get_offset_of_m_cancellationRegistration_4() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_cancellationRegistration_4)); }
	inline Shared_1_t445487134 * get_m_cancellationRegistration_4() const { return ___m_cancellationRegistration_4; }
	inline Shared_1_t445487134 ** get_address_of_m_cancellationRegistration_4() { return &___m_cancellationRegistration_4; }
	inline void set_m_cancellationRegistration_4(Shared_1_t445487134 * value)
	{
		___m_cancellationRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_cancellationRegistration_4), value);
	}

	inline static int32_t get_offset_of_m_internalCancellationRequested_5() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_internalCancellationRequested_5)); }
	inline int32_t get_m_internalCancellationRequested_5() const { return ___m_internalCancellationRequested_5; }
	inline int32_t* get_address_of_m_internalCancellationRequested_5() { return &___m_internalCancellationRequested_5; }
	inline void set_m_internalCancellationRequested_5(int32_t value)
	{
		___m_internalCancellationRequested_5 = value;
	}

	inline static int32_t get_offset_of_m_completionCountdown_6() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_completionCountdown_6)); }
	inline int32_t get_m_completionCountdown_6() const { return ___m_completionCountdown_6; }
	inline int32_t* get_address_of_m_completionCountdown_6() { return &___m_completionCountdown_6; }
	inline void set_m_completionCountdown_6(int32_t value)
	{
		___m_completionCountdown_6 = value;
	}

	inline static int32_t get_offset_of_m_exceptionalChildren_7() { return static_cast<int32_t>(offsetof(ContingentProperties_t2170468915, ___m_exceptionalChildren_7)); }
	inline List_1_t364382758 * get_m_exceptionalChildren_7() const { return ___m_exceptionalChildren_7; }
	inline List_1_t364382758 ** get_address_of_m_exceptionalChildren_7() { return &___m_exceptionalChildren_7; }
	inline void set_m_exceptionalChildren_7(List_1_t364382758 * value)
	{
		___m_exceptionalChildren_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionalChildren_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINGENTPROPERTIES_T2170468915_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef TASKEXCEPTIONHOLDER_T1800584989_H
#define TASKEXCEPTIONHOLDER_T1800584989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskExceptionHolder
struct  TaskExceptionHolder_t1800584989  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskExceptionHolder::m_task
	Task_t3187275312 * ___m_task_3;
	// System.Collections.Generic.List`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskExceptionHolder::m_faultExceptions
	List_1_t928104815 * ___m_faultExceptions_4;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Tasks.TaskExceptionHolder::m_cancellationException
	ExceptionDispatchInfo_t3750997369 * ___m_cancellationException_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskExceptionHolder::m_isHandled
	bool ___m_isHandled_6;

public:
	inline static int32_t get_offset_of_m_task_3() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989, ___m_task_3)); }
	inline Task_t3187275312 * get_m_task_3() const { return ___m_task_3; }
	inline Task_t3187275312 ** get_address_of_m_task_3() { return &___m_task_3; }
	inline void set_m_task_3(Task_t3187275312 * value)
	{
		___m_task_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_3), value);
	}

	inline static int32_t get_offset_of_m_faultExceptions_4() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989, ___m_faultExceptions_4)); }
	inline List_1_t928104815 * get_m_faultExceptions_4() const { return ___m_faultExceptions_4; }
	inline List_1_t928104815 ** get_address_of_m_faultExceptions_4() { return &___m_faultExceptions_4; }
	inline void set_m_faultExceptions_4(List_1_t928104815 * value)
	{
		___m_faultExceptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_faultExceptions_4), value);
	}

	inline static int32_t get_offset_of_m_cancellationException_5() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989, ___m_cancellationException_5)); }
	inline ExceptionDispatchInfo_t3750997369 * get_m_cancellationException_5() const { return ___m_cancellationException_5; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of_m_cancellationException_5() { return &___m_cancellationException_5; }
	inline void set_m_cancellationException_5(ExceptionDispatchInfo_t3750997369 * value)
	{
		___m_cancellationException_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cancellationException_5), value);
	}

	inline static int32_t get_offset_of_m_isHandled_6() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989, ___m_isHandled_6)); }
	inline bool get_m_isHandled_6() const { return ___m_isHandled_6; }
	inline bool* get_address_of_m_isHandled_6() { return &___m_isHandled_6; }
	inline void set_m_isHandled_6(bool value)
	{
		___m_isHandled_6 = value;
	}
};

struct TaskExceptionHolder_t1800584989_StaticFields
{
public:
	// System.Boolean System.Threading.Tasks.TaskExceptionHolder::s_failFastOnUnobservedException
	bool ___s_failFastOnUnobservedException_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskExceptionHolder::s_domainUnloadStarted
	bool ___s_domainUnloadStarted_1;
	// System.EventHandler modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskExceptionHolder::s_adUnloadEventHandler
	EventHandler_t1348719766 * ___s_adUnloadEventHandler_2;

public:
	inline static int32_t get_offset_of_s_failFastOnUnobservedException_0() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989_StaticFields, ___s_failFastOnUnobservedException_0)); }
	inline bool get_s_failFastOnUnobservedException_0() const { return ___s_failFastOnUnobservedException_0; }
	inline bool* get_address_of_s_failFastOnUnobservedException_0() { return &___s_failFastOnUnobservedException_0; }
	inline void set_s_failFastOnUnobservedException_0(bool value)
	{
		___s_failFastOnUnobservedException_0 = value;
	}

	inline static int32_t get_offset_of_s_domainUnloadStarted_1() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989_StaticFields, ___s_domainUnloadStarted_1)); }
	inline bool get_s_domainUnloadStarted_1() const { return ___s_domainUnloadStarted_1; }
	inline bool* get_address_of_s_domainUnloadStarted_1() { return &___s_domainUnloadStarted_1; }
	inline void set_s_domainUnloadStarted_1(bool value)
	{
		___s_domainUnloadStarted_1 = value;
	}

	inline static int32_t get_offset_of_s_adUnloadEventHandler_2() { return static_cast<int32_t>(offsetof(TaskExceptionHolder_t1800584989_StaticFields, ___s_adUnloadEventHandler_2)); }
	inline EventHandler_t1348719766 * get_s_adUnloadEventHandler_2() const { return ___s_adUnloadEventHandler_2; }
	inline EventHandler_t1348719766 ** get_address_of_s_adUnloadEventHandler_2() { return &___s_adUnloadEventHandler_2; }
	inline void set_s_adUnloadEventHandler_2(EventHandler_t1348719766 * value)
	{
		___s_adUnloadEventHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_adUnloadEventHandler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKEXCEPTIONHOLDER_T1800584989_H
#ifndef THREADABORTEXCEPTION_T4074510458_H
#define THREADABORTEXCEPTION_T4074510458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t4074510458  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T4074510458_H
#ifndef TASKCREATIONOPTIONS_T173757611_H
#define TASKCREATIONOPTIONS_T173757611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t173757611 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t173757611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCREATIONOPTIONS_T173757611_H
#ifndef TASKCONTINUATIONOPTIONS_T875378736_H
#define TASKCONTINUATIONOPTIONS_T875378736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t875378736 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t875378736, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCONTINUATIONOPTIONS_T875378736_H
#ifndef CAUSALITYTRACELEVEL_T2831492932_H
#define CAUSALITYTRACELEVEL_T2831492932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.CausalityTraceLevel
struct  CausalityTraceLevel_t2831492932 
{
public:
	// System.Int32 System.Threading.Tasks.CausalityTraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CausalityTraceLevel_t2831492932, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAUSALITYTRACELEVEL_T2831492932_H
#ifndef ASYNCCAUSALITYSTATUS_T2329008954_H
#define ASYNCCAUSALITYSTATUS_T2329008954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.AsyncCausalityStatus
struct  AsyncCausalityStatus_t2329008954 
{
public:
	// System.Int32 System.Threading.Tasks.AsyncCausalityStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsyncCausalityStatus_t2329008954, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCAUSALITYSTATUS_T2329008954_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef OPERATIONCANCELEDEXCEPTION_T926488448_H
#define OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t926488448  : public SystemException_t176217640
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t784455623  ____cancellationToken_16;

public:
	inline static int32_t get_offset_of__cancellationToken_16() { return static_cast<int32_t>(offsetof(OperationCanceledException_t926488448, ____cancellationToken_16)); }
	inline CancellationToken_t784455623  get__cancellationToken_16() const { return ____cancellationToken_16; }
	inline CancellationToken_t784455623 * get_address_of__cancellationToken_16() { return &____cancellationToken_16; }
	inline void set__cancellationToken_16(CancellationToken_t784455623  value)
	{
		____cancellationToken_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
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
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef CACHEDINVOKABLECALL_1_T982173797_H
#define CACHEDINVOKABLECALL_1_T982173797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t982173797  : public InvokableCall_1_t3068109991
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t982173797, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T982173797_H
#ifndef CACHEDINVOKABLECALL_1_T2423483305_H
#define CACHEDINVOKABLECALL_1_T2423483305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_t2423483305  : public InvokableCall_1_t214452203
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t2423483305, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T2423483305_H
#ifndef CACHEDINVOKABLECALL_1_T1111334208_H
#define CACHEDINVOKABLECALL_1_T1111334208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_t1111334208  : public InvokableCall_1_t3197270402
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t1111334208, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T1111334208_H
#ifndef CACHEDINVOKABLECALL_1_T3723462114_H
#define CACHEDINVOKABLECALL_1_T3723462114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t3723462114  : public InvokableCall_1_t1514431012
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t3723462114, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T3723462114_H
#ifndef TASKFACTORY_1_T3139534710_H
#define TASKFACTORY_1_T3139534710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct  TaskFactory_1_t3139534710  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_t784455623  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t1196198384 * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3139534710, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_t784455623  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_t784455623 * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_t784455623  value)
	{
		___m_defaultCancellationToken_0 = value;
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3139534710, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t1196198384 * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t1196198384 * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultScheduler_1), value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3139534710, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3139534710, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKFACTORY_1_T3139534710_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t426314064 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t426314064 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t2999457153 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t2999457153 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef TASK_1_T190679043_H
#define TASK_1_T190679043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_t190679043  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t190679043, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t190679043_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3139534710 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2108926 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3139534710 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3139534710 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3139534710 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2108926 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2108926 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2108926 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T190679043_H
#ifndef TASKFACTORY_1_T2676017125_H
#define TASKFACTORY_1_T2676017125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskFactory_1_t2676017125  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_t784455623  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t1196198384 * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t2676017125, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_t784455623  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_t784455623 * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_t784455623  value)
	{
		___m_defaultCancellationToken_0 = value;
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t2676017125, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t1196198384 * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t1196198384 * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultScheduler_1), value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t2676017125, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t2676017125, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKFACTORY_1_T2676017125_H
#ifndef TASK_1_T4022128754_H
#define TASK_1_T4022128754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t4022128754  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t2616588579  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4022128754, ___m_result_22)); }
	inline VoidTaskResult_t2616588579  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t2616588579 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t2616588579  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t4022128754_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2676017125 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3833558637 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4022128754_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t2676017125 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t2676017125 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t2676017125 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4022128754_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t3833558637 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t3833558637 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t3833558637 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T4022128754_H
#ifndef FUNC_2_T3374499323_H
#define FUNC_2_T3374499323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.IAsyncResult,System.Object>
struct  Func_2_t3374499323  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3374499323_H
#ifndef FUNC_2_T2910981738_H
#define FUNC_2_T2910981738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct  Func_2_t2910981738  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2910981738_H
#ifndef ACTION_1_T939472046_H
#define ACTION_1_T939472046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.IAsyncResult>
struct  Action_1_t939472046  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T939472046_H
#ifndef FUNC_3_T82022818_H
#define FUNC_3_T82022818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_3_t82022818  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T82022818_H
#ifndef UNITYACTION_1_T682124106_H
#define UNITYACTION_1_T682124106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t682124106  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T682124106_H
#ifndef UNITYACTION_1_T3535781894_H
#define UNITYACTION_1_T3535781894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t3535781894  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3535781894_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef UNITYACTION_2_T3283971887_H
#define UNITYACTION_2_T3283971887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t3283971887  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T3283971887_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNITYACTION_3_T1557236713_H
#define UNITYACTION_3_T1557236713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1557236713  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_3_T1557236713_H
#ifndef UNITYACTION_4_T682480391_H
#define UNITYACTION_4_T682480391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_t682480391  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_4_T682480391_H
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3161192644_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_m2196145582_gshared (Func_3_t3398609381 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckMultiTaskContinuationOptions(System.Threading.Tasks.TaskContinuationOptions)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_CheckMultiTaskContinuationOptions_m4248755655 (RuntimeObject * __this /* static, unused */, int32_t ___continuationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckCreationOptions(System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_CheckCreationOptions_m1813633372 (RuntimeObject * __this /* static, unused */, int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Action`1<System.IAsyncResult>::Invoke(T)
#define Action_1_Invoke_m2928931602(__this, p0, method) ((  void (*) (Action_1_t939472046 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method)
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
extern "C" IL2CPP_METHOD_ATTR CancellationToken_t784455623  OperationCanceledException_get_CancellationToken_m1943835608 (OperationCanceledException_t926488448 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskExceptionHolder::MarkAsHandled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TaskExceptionHolder_MarkAsHandled_m3629939554 (TaskExceptionHolder_t1800584989 * __this, bool ___calledFromFinalizer0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
extern "C" IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_m2335509619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.Task::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Task_get_Id_m119004446 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.Threading.Tasks.AsyncCausalityStatus)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m2246115603 (RuntimeObject * __this /* static, unused */, int32_t ___traceLevel0, int32_t ___taskId1, int32_t ___status2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RemoveFromActiveTasks(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m3338298932 (RuntimeObject * __this /* static, unused */, int32_t ___taskId0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckFromAsyncOptions(System.Threading.Tasks.TaskCreationOptions,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_CheckFromAsyncOptions_m4125018144 (RuntimeObject * __this /* static, unused */, int32_t ___creationOptions0, bool ___hasBeginMethod1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m3071622864 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.String,System.UInt64)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCreation_m3940971853 (RuntimeObject * __this /* static, unused */, int32_t ___traceLevel0, int32_t ___taskId1, String_t* ___operationName2, uint64_t ___relatedContext3, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AddToActiveTasks(System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR bool Task_AddToActiveTasks_m1867860841 (RuntimeObject * __this /* static, unused */, Task_t3187275312 * ___task0, const RuntimeMethod* method);
// System.Void System.Threading.AtomicBoolean::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AtomicBoolean__ctor_m2830875096 (AtomicBoolean_t2634115295 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2)
#define Func_3_Invoke_m528074778(__this, p0, p1, method) ((  RuntimeObject* (*) (Func_3_t82022818 *, AsyncCallback_t3962456242 *, RuntimeObject *, const RuntimeMethod*))Func_3_Invoke_m2196145582_gshared)(__this, p0, p1, method)
// System.Boolean System.Threading.AtomicBoolean::TryRelaxedSet()
extern "C" IL2CPP_METHOD_ATTR bool AtomicBoolean_TryRelaxedSet_m184349447 (AtomicBoolean_t2634115295 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_Format_m1749913990 (RuntimeObject * __this /* static, unused */, String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m2631077112 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m2732473132 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m2815395037 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_t4176035766 * UnityEventBase_PrepareInvoke_m1785382128 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m4156046467(__this, p0, method) ((  BaseInvokableCall_t2703961024 * (*) (List_1_t4176035766 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m1437964737 (InvokableCall_t832123510 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m1245201994(__this, method) ((  int32_t (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m194611712_gshared (TaskFactory_1_t3139534710 * __this, const RuntimeMethod* method)
{
	CancellationToken_t784455623  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t784455623 ));
		CancellationToken_t784455623  L_0 = V_0;
		((  void (*) (TaskFactory_1_t3139534710 *, CancellationToken_t784455623 , int32_t, int32_t, TaskScheduler_t1196198384 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((TaskFactory_1_t3139534710 *)__this, (CancellationToken_t784455623 )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t1196198384 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m1324765840_gshared (TaskFactory_1_t3139534710 * __this, CancellationToken_t784455623  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t1196198384 * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m4248755655(NULL /*static, unused*/, (int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_m1813633372(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_t784455623  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t1196198384 * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncCoreLogic(System.IAsyncResult,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,System.Threading.Tasks.Task`1<TResult>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1_FromAsyncCoreLogic_m385455661_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___iar0, Func_2_t3374499323 * ___endFunction1, Action_1_t939472046 * ___endAction2, Task_1_t190679043 * ___promise3, bool ___requiresSynchronization4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncCoreLogic_m385455661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	OperationCanceledException_t926488448 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t *)NULL;
		V_1 = (OperationCanceledException_t926488448 *)NULL;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				Func_2_t3374499323 * L_0 = ___endFunction1;
				if (!L_0)
				{
					goto IL_0019;
				}
			}

IL_000f:
			{
				Func_2_t3374499323 * L_1 = ___endFunction1;
				RuntimeObject* L_2 = ___iar0;
				RuntimeObject * L_3 = ((  RuntimeObject * (*) (Func_2_t3374499323 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((Func_2_t3374499323 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
				V_2 = (RuntimeObject *)L_3;
				goto IL_0020;
			}

IL_0019:
			{
				Action_1_t939472046 * L_4 = ___endAction2;
				RuntimeObject* L_5 = ___iar0;
				Action_1_Invoke_m2928931602((Action_1_t939472046 *)L_4, (RuntimeObject*)L_5, /*hidden argument*/Action_1_Invoke_m2928931602_RuntimeMethod_var);
			}

IL_0020:
			{
				IL2CPP_LEAVE(0xA5, FINALLY_002b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (OperationCanceledException_t926488448_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0025;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0028;
			throw e;
		}

CATCH_0025:
		{ // begin catch(System.OperationCanceledException)
			V_1 = (OperationCanceledException_t926488448 *)((OperationCanceledException_t926488448 *)__exception_local);
			IL2CPP_LEAVE(0xA5, FINALLY_002b);
		} // end catch (depth: 2)

CATCH_0028:
		{ // begin catch(System.Exception)
			V_0 = (Exception_t *)((Exception_t *)__exception_local);
			IL2CPP_LEAVE(0xA5, FINALLY_002b);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			OperationCanceledException_t926488448 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_003e;
			}
		}

IL_002e:
		{
			Task_1_t190679043 * L_7 = ___promise3;
			OperationCanceledException_t926488448 * L_8 = V_1;
			CancellationToken_t784455623  L_9 = OperationCanceledException_get_CancellationToken_m1943835608((OperationCanceledException_t926488448 *)L_8, /*hidden argument*/NULL);
			OperationCanceledException_t926488448 * L_10 = V_1;
			((  bool (*) (Task_1_t190679043 *, CancellationToken_t784455623 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((Task_1_t190679043 *)L_7, (CancellationToken_t784455623 )L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
			goto IL_00a4;
		}

IL_003e:
		{
			Exception_t * L_11 = V_0;
			if (!L_11)
			{
				goto IL_0069;
			}
		}

IL_0041:
		{
			Task_1_t190679043 * L_12 = ___promise3;
			Exception_t * L_13 = V_0;
			bool L_14 = ((  bool (*) (Task_1_t190679043 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->methodPointer)((Task_1_t190679043 *)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			if (!L_14)
			{
				goto IL_00a4;
			}
		}

IL_004a:
		{
			Exception_t * L_15 = V_0;
			if (!((ThreadAbortException_t4074510458 *)IsInst((RuntimeObject*)L_15, ThreadAbortException_t4074510458_il2cpp_TypeInfo_var)))
			{
				goto IL_00a4;
			}
		}

IL_0052:
		{
			Task_1_t190679043 * L_16 = ___promise3;
			ContingentProperties_t2170468915 * L_17 = (ContingentProperties_t2170468915 *)((Task_t3187275312 *)L_16)->get_m_contingentProperties_15();
			il2cpp_codegen_memory_barrier();
			TaskExceptionHolder_t1800584989 * L_18 = (TaskExceptionHolder_t1800584989 *)L_17->get_m_exceptionsHolder_2();
			il2cpp_codegen_memory_barrier();
			TaskExceptionHolder_MarkAsHandled_m3629939554((TaskExceptionHolder_t1800584989 *)L_18, (bool)0, /*hidden argument*/NULL);
			goto IL_00a4;
		}

IL_0069:
		{
			bool L_19 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_007d;
			}
		}

IL_0070:
		{
			Task_1_t190679043 * L_20 = ___promise3;
			int32_t L_21 = Task_get_Id_m119004446((Task_t3187275312 *)L_20, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m2246115603(NULL /*static, unused*/, (int32_t)0, (int32_t)L_21, (int32_t)1, /*hidden argument*/NULL);
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			bool L_22 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_22)
			{
				goto IL_008f;
			}
		}

IL_0084:
		{
			Task_1_t190679043 * L_23 = ___promise3;
			int32_t L_24 = Task_get_Id_m119004446((Task_t3187275312 *)L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m3338298932(NULL /*static, unused*/, (int32_t)L_24, /*hidden argument*/NULL);
		}

IL_008f:
		{
			bool L_25 = ___requiresSynchronization4;
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0093:
		{
			Task_1_t190679043 * L_26 = ___promise3;
			RuntimeObject * L_27 = V_2;
			((  bool (*) (Task_1_t190679043 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)((Task_1_t190679043 *)L_26, (RuntimeObject *)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
			goto IL_00a4;
		}

IL_009d:
		{
			Task_1_t190679043 * L_28 = ___promise3;
			RuntimeObject * L_29 = V_2;
			((  void (*) (Task_1_t190679043 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)((Task_1_t190679043 *)L_28, (RuntimeObject *)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * TaskFactory_1_FromAsync_m580403283_gshared (TaskFactory_1_t3139534710 * __this, Func_3_t82022818 * ___beginMethod0, Func_2_t3374499323 * ___endMethod1, RuntimeObject * ___state2, const RuntimeMethod* method)
{
	{
		Func_3_t82022818 * L_0 = ___beginMethod0;
		Func_2_t3374499323 * L_1 = ___endMethod1;
		RuntimeObject * L_2 = ___state2;
		int32_t L_3 = (int32_t)__this->get_m_defaultCreationOptions_2();
		Task_1_t190679043 * L_4 = ((  Task_1_t190679043 * (*) (RuntimeObject * /* static, unused */, Func_3_t82022818 *, Func_2_t3374499323 *, Action_1_t939472046 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, (Func_3_t82022818 *)L_0, (Func_2_t3374499323 *)L_1, (Action_1_t939472046 *)NULL, (RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncImpl(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,System.Object,System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * TaskFactory_1_FromAsyncImpl_m3898819863_gshared (RuntimeObject * __this /* static, unused */, Func_3_t82022818 * ___beginMethod0, Func_2_t3374499323 * ___endFunction1, Action_1_t939472046 * ___endAction2, RuntimeObject * ___state3, int32_t ___creationOptions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_m3898819863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass35_1_t3690184305 * V_0 = NULL;
	U3CU3Ec__DisplayClass35_0_t3276586609 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_0 = (U3CU3Ec__DisplayClass35_1_t3690184305 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		((  void (*) (U3CU3Ec__DisplayClass35_1_t3690184305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = (U3CU3Ec__DisplayClass35_1_t3690184305 *)L_0;
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_1 = V_0;
		Func_2_t3374499323 * L_2 = ___endFunction1;
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_3 = V_0;
		Action_1_t939472046 * L_4 = ___endAction2;
		L_3->set_endAction_1(L_4);
		Func_3_t82022818 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, (String_t*)_stringLiteral1969460926, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,TaskFactory_1_FromAsyncImpl_m3898819863_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_7 = V_0;
		Func_2_t3374499323 * L_8 = (Func_2_t3374499323 *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_9 = V_0;
		Action_1_t939472046 * L_10 = (Action_1_t939472046 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_11 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_11, (String_t*)_stringLiteral153292483, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,TaskFactory_1_FromAsyncImpl_m3898819863_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions4;
		TaskFactory_CheckFromAsyncOptions_m4125018144(NULL /*static, unused*/, (int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_13 = V_0;
		RuntimeObject * L_14 = ___state3;
		int32_t L_15 = ___creationOptions4;
		Task_1_t190679043 * L_16 = (Task_1_t190679043 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		((  void (*) (Task_1_t190679043 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_18 = V_0;
		Task_1_t190679043 * L_19 = (Task_1_t190679043 *)L_18->get_promise_2();
		int32_t L_20 = Task_get_Id_m119004446((Task_t3187275312 *)L_19, /*hidden argument*/NULL);
		Func_3_t82022818 * L_21 = ___beginMethod0;
		MethodInfo_t * L_22 = Delegate_get_Method_m3071622864((Delegate_t1188392813 *)L_21, /*hidden argument*/NULL);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m3937257545(NULL /*static, unused*/, (String_t*)_stringLiteral3179058573, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3940971853(NULL /*static, unused*/, (int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_26 = V_0;
		Task_1_t190679043 * L_27 = (Task_1_t190679043 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m1867860841(NULL /*static, unused*/, (Task_t3187275312 *)L_27, /*hidden argument*/NULL);
	}

IL_0095:
	{
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t3378813580_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t3378813580_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t3378813580_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010b;
			}
		}

IL_009d:
		{
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_29 = (U3CU3Ec__DisplayClass35_0_t3276586609 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
			((  void (*) (U3CU3Ec__DisplayClass35_0_t3276586609 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
			V_1 = (U3CU3Ec__DisplayClass35_0_t3276586609 *)L_29;
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_30 = V_1;
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_31 = V_0;
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_32 = V_1;
			AtomicBoolean_t2634115295 * L_33 = (AtomicBoolean_t2634115295 *)il2cpp_codegen_object_new(AtomicBoolean_t2634115295_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m2830875096(L_33, /*hidden argument*/NULL);
			L_32->set_invoked_0(L_33);
			Func_3_t82022818 * L_34 = ___beginMethod0;
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_35 = V_1;
			intptr_t L_36 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14);
			AsyncCallback_t3962456242 * L_37 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m530647953(L_37, (RuntimeObject *)L_35, (intptr_t)L_36, /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state3;
			RuntimeObject* L_39 = Func_3_Invoke_m528074778((Func_3_t82022818 *)L_34, (AsyncCallback_t3962456242 *)L_37, (RuntimeObject *)L_38, /*hidden argument*/Func_3_Invoke_m528074778_RuntimeMethod_var);
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_011f;
			}
		}

IL_00cc:
		{
			RuntimeObject* L_41 = V_2;
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_011f;
			}
		}

IL_00d4:
		{
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_43 = V_1;
			AtomicBoolean_t2634115295 * L_44 = (AtomicBoolean_t2634115295 *)L_43->get_invoked_0();
			bool L_45 = AtomicBoolean_TryRelaxedSet_m184349447((AtomicBoolean_t2634115295 *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_011f;
			}
		}

IL_00e1:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_47 = V_1;
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_48 = (U3CU3Ec__DisplayClass35_1_t3690184305 *)L_47->get_CSU24U3CU3E8__locals1_1();
			Func_2_t3374499323 * L_49 = (Func_2_t3374499323 *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_50 = V_1;
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_51 = (U3CU3Ec__DisplayClass35_1_t3690184305 *)L_50->get_CSU24U3CU3E8__locals1_1();
			Action_1_t939472046 * L_52 = (Action_1_t939472046 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass35_0_t3276586609 * L_53 = V_1;
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_54 = (U3CU3Ec__DisplayClass35_1_t3690184305 *)L_53->get_CSU24U3CU3E8__locals1_1();
			Task_1_t190679043 * L_55 = (Task_1_t190679043 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3374499323 *, Action_1_t939472046 *, Task_1_t190679043 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_46, (Func_2_t3374499323 *)L_49, (Action_1_t939472046 *)L_52, (Task_1_t190679043 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
			goto IL_011f;
		}

IL_010b:
		{
			Func_3_t82022818 * L_56 = ___beginMethod0;
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_57 = V_0;
			intptr_t L_58 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16);
			AsyncCallback_t3962456242 * L_59 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m530647953(L_59, (RuntimeObject *)L_57, (intptr_t)L_58, /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state3;
			Func_3_Invoke_m528074778((Func_3_t82022818 *)L_56, (AsyncCallback_t3962456242 *)L_59, (RuntimeObject *)L_60, /*hidden argument*/Func_3_Invoke_m528074778_RuntimeMethod_var);
		}

IL_011f:
		{
			goto IL_0169;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0121;
		throw e;
	}

CATCH_0121:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_013b;
			}
		}

IL_0129:
		{
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_62 = V_0;
			Task_1_t190679043 * L_63 = (Task_1_t190679043 *)L_62->get_promise_2();
			int32_t L_64 = Task_get_Id_m119004446((Task_t3187275312 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m2246115603(NULL /*static, unused*/, (int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_013b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_65)
			{
				goto IL_0152;
			}
		}

IL_0142:
		{
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_66 = V_0;
			Task_1_t190679043 * L_67 = (Task_1_t190679043 *)L_66->get_promise_2();
			int32_t L_68 = Task_get_Id_m119004446((Task_t3187275312 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m3338298932(NULL /*static, unused*/, (int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0152:
		{
			U3CU3Ec__DisplayClass35_1_t3690184305 * L_69 = V_0;
			Task_1_t190679043 * L_70 = (Task_1_t190679043 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_71 = V_3;
			((  bool (*) (Task_1_t190679043 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)((Task_1_t190679043 *)L_70, (RuntimeObject *)L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local,NULL);
		}
	} // end catch (depth: 1)

IL_0169:
	{
		U3CU3Ec__DisplayClass35_1_t3690184305 * L_72 = V_0;
		Task_1_t190679043 * L_73 = (Task_1_t190679043 *)L_72->get_promise_2();
		return L_73;
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
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m1442916261_gshared (TaskFactory_1_t2676017125 * __this, const RuntimeMethod* method)
{
	CancellationToken_t784455623  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t784455623 ));
		CancellationToken_t784455623  L_0 = V_0;
		((  void (*) (TaskFactory_1_t2676017125 *, CancellationToken_t784455623 , int32_t, int32_t, TaskScheduler_t1196198384 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((TaskFactory_1_t2676017125 *)__this, (CancellationToken_t784455623 )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t1196198384 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m662712310_gshared (TaskFactory_1_t2676017125 * __this, CancellationToken_t784455623  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t1196198384 * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m4248755655(NULL /*static, unused*/, (int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_m1813633372(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_t784455623  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t1196198384 * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncCoreLogic(System.IAsyncResult,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,System.Threading.Tasks.Task`1<TResult>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory_1_FromAsyncCoreLogic_m3891675747_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___iar0, Func_2_t2910981738 * ___endFunction1, Action_1_t939472046 * ___endAction2, Task_1_t4022128754 * ___promise3, bool ___requiresSynchronization4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncCoreLogic_m3891675747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	OperationCanceledException_t926488448 * V_1 = NULL;
	VoidTaskResult_t2616588579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t *)NULL;
		V_1 = (OperationCanceledException_t926488448 *)NULL;
		il2cpp_codegen_initobj((&V_2), sizeof(VoidTaskResult_t2616588579 ));
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				Func_2_t2910981738 * L_0 = ___endFunction1;
				if (!L_0)
				{
					goto IL_0019;
				}
			}

IL_000f:
			{
				Func_2_t2910981738 * L_1 = ___endFunction1;
				RuntimeObject* L_2 = ___iar0;
				VoidTaskResult_t2616588579  L_3 = ((  VoidTaskResult_t2616588579  (*) (Func_2_t2910981738 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((Func_2_t2910981738 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
				V_2 = (VoidTaskResult_t2616588579 )L_3;
				goto IL_0020;
			}

IL_0019:
			{
				Action_1_t939472046 * L_4 = ___endAction2;
				RuntimeObject* L_5 = ___iar0;
				Action_1_Invoke_m2928931602((Action_1_t939472046 *)L_4, (RuntimeObject*)L_5, /*hidden argument*/Action_1_Invoke_m2928931602_RuntimeMethod_var);
			}

IL_0020:
			{
				IL2CPP_LEAVE(0xA5, FINALLY_002b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (OperationCanceledException_t926488448_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0025;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0028;
			throw e;
		}

CATCH_0025:
		{ // begin catch(System.OperationCanceledException)
			V_1 = (OperationCanceledException_t926488448 *)((OperationCanceledException_t926488448 *)__exception_local);
			IL2CPP_LEAVE(0xA5, FINALLY_002b);
		} // end catch (depth: 2)

CATCH_0028:
		{ // begin catch(System.Exception)
			V_0 = (Exception_t *)((Exception_t *)__exception_local);
			IL2CPP_LEAVE(0xA5, FINALLY_002b);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			OperationCanceledException_t926488448 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_003e;
			}
		}

IL_002e:
		{
			Task_1_t4022128754 * L_7 = ___promise3;
			OperationCanceledException_t926488448 * L_8 = V_1;
			CancellationToken_t784455623  L_9 = OperationCanceledException_get_CancellationToken_m1943835608((OperationCanceledException_t926488448 *)L_8, /*hidden argument*/NULL);
			OperationCanceledException_t926488448 * L_10 = V_1;
			((  bool (*) (Task_1_t4022128754 *, CancellationToken_t784455623 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((Task_1_t4022128754 *)L_7, (CancellationToken_t784455623 )L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
			goto IL_00a4;
		}

IL_003e:
		{
			Exception_t * L_11 = V_0;
			if (!L_11)
			{
				goto IL_0069;
			}
		}

IL_0041:
		{
			Task_1_t4022128754 * L_12 = ___promise3;
			Exception_t * L_13 = V_0;
			bool L_14 = ((  bool (*) (Task_1_t4022128754 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->methodPointer)((Task_1_t4022128754 *)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			if (!L_14)
			{
				goto IL_00a4;
			}
		}

IL_004a:
		{
			Exception_t * L_15 = V_0;
			if (!((ThreadAbortException_t4074510458 *)IsInst((RuntimeObject*)L_15, ThreadAbortException_t4074510458_il2cpp_TypeInfo_var)))
			{
				goto IL_00a4;
			}
		}

IL_0052:
		{
			Task_1_t4022128754 * L_16 = ___promise3;
			ContingentProperties_t2170468915 * L_17 = (ContingentProperties_t2170468915 *)((Task_t3187275312 *)L_16)->get_m_contingentProperties_15();
			il2cpp_codegen_memory_barrier();
			TaskExceptionHolder_t1800584989 * L_18 = (TaskExceptionHolder_t1800584989 *)L_17->get_m_exceptionsHolder_2();
			il2cpp_codegen_memory_barrier();
			TaskExceptionHolder_MarkAsHandled_m3629939554((TaskExceptionHolder_t1800584989 *)L_18, (bool)0, /*hidden argument*/NULL);
			goto IL_00a4;
		}

IL_0069:
		{
			bool L_19 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_007d;
			}
		}

IL_0070:
		{
			Task_1_t4022128754 * L_20 = ___promise3;
			int32_t L_21 = Task_get_Id_m119004446((Task_t3187275312 *)L_20, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m2246115603(NULL /*static, unused*/, (int32_t)0, (int32_t)L_21, (int32_t)1, /*hidden argument*/NULL);
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			bool L_22 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_22)
			{
				goto IL_008f;
			}
		}

IL_0084:
		{
			Task_1_t4022128754 * L_23 = ___promise3;
			int32_t L_24 = Task_get_Id_m119004446((Task_t3187275312 *)L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m3338298932(NULL /*static, unused*/, (int32_t)L_24, /*hidden argument*/NULL);
		}

IL_008f:
		{
			bool L_25 = ___requiresSynchronization4;
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0093:
		{
			Task_1_t4022128754 * L_26 = ___promise3;
			VoidTaskResult_t2616588579  L_27 = V_2;
			((  bool (*) (Task_1_t4022128754 *, VoidTaskResult_t2616588579 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)((Task_1_t4022128754 *)L_26, (VoidTaskResult_t2616588579 )L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
			goto IL_00a4;
		}

IL_009d:
		{
			Task_1_t4022128754 * L_28 = ___promise3;
			VoidTaskResult_t2616588579  L_29 = V_2;
			((  void (*) (Task_1_t4022128754 *, VoidTaskResult_t2616588579 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)((Task_1_t4022128754 *)L_28, (VoidTaskResult_t2616588579 )L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
extern "C" IL2CPP_METHOD_ATTR Task_1_t4022128754 * TaskFactory_1_FromAsync_m1452980922_gshared (TaskFactory_1_t2676017125 * __this, Func_3_t82022818 * ___beginMethod0, Func_2_t2910981738 * ___endMethod1, RuntimeObject * ___state2, const RuntimeMethod* method)
{
	{
		Func_3_t82022818 * L_0 = ___beginMethod0;
		Func_2_t2910981738 * L_1 = ___endMethod1;
		RuntimeObject * L_2 = ___state2;
		int32_t L_3 = (int32_t)__this->get_m_defaultCreationOptions_2();
		Task_1_t4022128754 * L_4 = ((  Task_1_t4022128754 * (*) (RuntimeObject * /* static, unused */, Func_3_t82022818 *, Func_2_t2910981738 *, Action_1_t939472046 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, (Func_3_t82022818 *)L_0, (Func_2_t2910981738 *)L_1, (Action_1_t939472046 *)NULL, (RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncImpl(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,System.Object,System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_METHOD_ATTR Task_1_t4022128754 * TaskFactory_1_FromAsyncImpl_m196723106_gshared (RuntimeObject * __this /* static, unused */, Func_3_t82022818 * ___beginMethod0, Func_2_t2910981738 * ___endFunction1, Action_1_t939472046 * ___endAction2, RuntimeObject * ___state3, int32_t ___creationOptions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_m196723106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass35_1_t3226666720 * V_0 = NULL;
	U3CU3Ec__DisplayClass35_0_t2813069024 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VoidTaskResult_t2616588579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_0 = (U3CU3Ec__DisplayClass35_1_t3226666720 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		((  void (*) (U3CU3Ec__DisplayClass35_1_t3226666720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = (U3CU3Ec__DisplayClass35_1_t3226666720 *)L_0;
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_1 = V_0;
		Func_2_t2910981738 * L_2 = ___endFunction1;
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_3 = V_0;
		Action_1_t939472046 * L_4 = ___endAction2;
		L_3->set_endAction_1(L_4);
		Func_3_t82022818 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, (String_t*)_stringLiteral1969460926, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,TaskFactory_1_FromAsyncImpl_m196723106_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_7 = V_0;
		Func_2_t2910981738 * L_8 = (Func_2_t2910981738 *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_9 = V_0;
		Action_1_t939472046 * L_10 = (Action_1_t939472046 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_11 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_11, (String_t*)_stringLiteral153292483, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,TaskFactory_1_FromAsyncImpl_m196723106_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions4;
		TaskFactory_CheckFromAsyncOptions_m4125018144(NULL /*static, unused*/, (int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_13 = V_0;
		RuntimeObject * L_14 = ___state3;
		int32_t L_15 = ___creationOptions4;
		Task_1_t4022128754 * L_16 = (Task_1_t4022128754 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		((  void (*) (Task_1_t4022128754 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_18 = V_0;
		Task_1_t4022128754 * L_19 = (Task_1_t4022128754 *)L_18->get_promise_2();
		int32_t L_20 = Task_get_Id_m119004446((Task_t3187275312 *)L_19, /*hidden argument*/NULL);
		Func_3_t82022818 * L_21 = ___beginMethod0;
		MethodInfo_t * L_22 = Delegate_get_Method_m3071622864((Delegate_t1188392813 *)L_21, /*hidden argument*/NULL);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m3937257545(NULL /*static, unused*/, (String_t*)_stringLiteral3179058573, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3940971853(NULL /*static, unused*/, (int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_26 = V_0;
		Task_1_t4022128754 * L_27 = (Task_1_t4022128754 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m1867860841(NULL /*static, unused*/, (Task_t3187275312 *)L_27, /*hidden argument*/NULL);
	}

IL_0095:
	{
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t3378813580_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t3378813580_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t3378813580_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010b;
			}
		}

IL_009d:
		{
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_29 = (U3CU3Ec__DisplayClass35_0_t2813069024 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
			((  void (*) (U3CU3Ec__DisplayClass35_0_t2813069024 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
			V_1 = (U3CU3Ec__DisplayClass35_0_t2813069024 *)L_29;
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_30 = V_1;
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_31 = V_0;
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_32 = V_1;
			AtomicBoolean_t2634115295 * L_33 = (AtomicBoolean_t2634115295 *)il2cpp_codegen_object_new(AtomicBoolean_t2634115295_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m2830875096(L_33, /*hidden argument*/NULL);
			L_32->set_invoked_0(L_33);
			Func_3_t82022818 * L_34 = ___beginMethod0;
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_35 = V_1;
			intptr_t L_36 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14);
			AsyncCallback_t3962456242 * L_37 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m530647953(L_37, (RuntimeObject *)L_35, (intptr_t)L_36, /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state3;
			RuntimeObject* L_39 = Func_3_Invoke_m528074778((Func_3_t82022818 *)L_34, (AsyncCallback_t3962456242 *)L_37, (RuntimeObject *)L_38, /*hidden argument*/Func_3_Invoke_m528074778_RuntimeMethod_var);
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_011f;
			}
		}

IL_00cc:
		{
			RuntimeObject* L_41 = V_2;
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_011f;
			}
		}

IL_00d4:
		{
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_43 = V_1;
			AtomicBoolean_t2634115295 * L_44 = (AtomicBoolean_t2634115295 *)L_43->get_invoked_0();
			bool L_45 = AtomicBoolean_TryRelaxedSet_m184349447((AtomicBoolean_t2634115295 *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_011f;
			}
		}

IL_00e1:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_47 = V_1;
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_48 = (U3CU3Ec__DisplayClass35_1_t3226666720 *)L_47->get_CSU24U3CU3E8__locals1_1();
			Func_2_t2910981738 * L_49 = (Func_2_t2910981738 *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_50 = V_1;
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_51 = (U3CU3Ec__DisplayClass35_1_t3226666720 *)L_50->get_CSU24U3CU3E8__locals1_1();
			Action_1_t939472046 * L_52 = (Action_1_t939472046 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass35_0_t2813069024 * L_53 = V_1;
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_54 = (U3CU3Ec__DisplayClass35_1_t3226666720 *)L_53->get_CSU24U3CU3E8__locals1_1();
			Task_1_t4022128754 * L_55 = (Task_1_t4022128754 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2910981738 *, Action_1_t939472046 *, Task_1_t4022128754 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_46, (Func_2_t2910981738 *)L_49, (Action_1_t939472046 *)L_52, (Task_1_t4022128754 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
			goto IL_011f;
		}

IL_010b:
		{
			Func_3_t82022818 * L_56 = ___beginMethod0;
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_57 = V_0;
			intptr_t L_58 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16);
			AsyncCallback_t3962456242 * L_59 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m530647953(L_59, (RuntimeObject *)L_57, (intptr_t)L_58, /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state3;
			Func_3_Invoke_m528074778((Func_3_t82022818 *)L_56, (AsyncCallback_t3962456242 *)L_59, (RuntimeObject *)L_60, /*hidden argument*/Func_3_Invoke_m528074778_RuntimeMethod_var);
		}

IL_011f:
		{
			goto IL_0169;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0121;
		throw e;
	}

CATCH_0121:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_m2335509619(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_013b;
			}
		}

IL_0129:
		{
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_62 = V_0;
			Task_1_t4022128754 * L_63 = (Task_1_t4022128754 *)L_62->get_promise_2();
			int32_t L_64 = Task_get_Id_m119004446((Task_t3187275312 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m2246115603(NULL /*static, unused*/, (int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_013b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_65)
			{
				goto IL_0152;
			}
		}

IL_0142:
		{
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_66 = V_0;
			Task_1_t4022128754 * L_67 = (Task_1_t4022128754 *)L_66->get_promise_2();
			int32_t L_68 = Task_get_Id_m119004446((Task_t3187275312 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m3338298932(NULL /*static, unused*/, (int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0152:
		{
			U3CU3Ec__DisplayClass35_1_t3226666720 * L_69 = V_0;
			Task_1_t4022128754 * L_70 = (Task_1_t4022128754 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(VoidTaskResult_t2616588579 ));
			VoidTaskResult_t2616588579  L_71 = V_3;
			((  bool (*) (Task_1_t4022128754 *, VoidTaskResult_t2616588579 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)((Task_1_t4022128754 *)L_70, (VoidTaskResult_t2616588579 )L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local,NULL);
		}
	} // end catch (depth: 1)

IL_0169:
	{
		U3CU3Ec__DisplayClass35_1_t3226666720 * L_72 = V_0;
		Task_1_t4022128754 * L_73 = (Task_1_t4022128754 *)L_72->get_promise_2();
		return L_73;
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
// System.Void System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m1896557888_gshared (SparseArray_1_t396411150 * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialSize0;
		il2cpp_codegen_memory_barrier();
		__this->set_m_array_0(((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0), (uint32_t)L_0)));
		return;
	}
}
// T[] System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* SparseArray_1_get_Current_m1999685199_gshared (SparseArray_1_t396411150 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Int32 System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_m2525290252_gshared (SparseArray_1_t396411150 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t2843939325* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		V_1 = (ObjectU5BU5D_t2843939325*)L_1;
		V_2 = (bool)0;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t2843939325* L_2 = V_1;
			Monitor_Enter_m984175629(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_2, (bool*)(&V_2), /*hidden argument*/NULL);
			V_3 = (int32_t)0;
			goto IL_0083;
		}

IL_0019:
		{
			ObjectU5BU5D_t2843939325* L_3 = V_0;
			int32_t L_4 = V_3;
			int32_t L_5 = L_4;
			RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
			if (L_6)
			{
				goto IL_0039;
			}
		}

IL_0027:
		{
			ObjectU5BU5D_t2843939325* L_7 = V_0;
			int32_t L_8 = V_3;
			RuntimeObject * L_9 = ___e0;
			((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject **, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject **)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
			int32_t L_10 = V_3;
			V_4 = (int32_t)L_10;
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_0039:
		{
			int32_t L_11 = V_3;
			ObjectU5BU5D_t2843939325* L_12 = V_0;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)1))))))
			{
				goto IL_007f;
			}
		}

IL_0041:
		{
			ObjectU5BU5D_t2843939325* L_13 = V_0;
			ObjectU5BU5D_t2843939325* L_14 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			if ((!(((RuntimeObject*)(ObjectU5BU5D_t2843939325*)L_13) == ((RuntimeObject*)(ObjectU5BU5D_t2843939325*)L_14))))
			{
				goto IL_007f;
			}
		}

IL_004c:
		{
			ObjectU5BU5D_t2843939325* L_15 = V_0;
			V_5 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), (int32_t)2))));
			ObjectU5BU5D_t2843939325* L_16 = V_0;
			ObjectU5BU5D_t2843939325* L_17 = V_5;
			int32_t L_18 = V_3;
			Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, (RuntimeArray *)(RuntimeArray *)L_17, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_19 = V_5;
			int32_t L_20 = V_3;
			RuntimeObject * L_21 = ___e0;
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))), (RuntimeObject *)L_21);
			ObjectU5BU5D_t2843939325* L_22 = V_5;
			il2cpp_codegen_memory_barrier();
			__this->set_m_array_0(L_22);
			int32_t L_23 = V_3;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_007f:
		{
			int32_t L_24 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_0083:
		{
			int32_t L_25 = V_3;
			ObjectU5BU5D_t2843939325* L_26 = V_0;
			if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
			{
				goto IL_0019;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x0, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			bool L_27 = V_2;
			if (!L_27)
			{
				goto IL_0097;
			}
		}

IL_0091:
		{
			ObjectU5BU5D_t2843939325* L_28 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_28, /*hidden argument*/NULL);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0098:
	{
		int32_t L_29 = V_4;
		return L_29;
	}
}
// System.Void System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR void SparseArray_1_Remove_m2765326941_gshared (SparseArray_1_t396411150 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		V_1 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t2843939325* L_1 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			V_2 = (int32_t)0;
			goto IL_0054;
		}

IL_0017:
		{
			ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_3 = V_2;
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
			RuntimeObject * L_6 = ___e0;
			if ((!(((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))))
			{
				goto IL_0050;
			}
		}

IL_0032:
		{
			ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = V_2;
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_9 = V_3;
			((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject **, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject **)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}

IL_0050:
		{
			int32_t L_10 = V_2;
			V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0054:
		{
			int32_t L_11 = V_2;
			ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
			{
				goto IL_0017;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			ObjectU5BU5D_t2843939325* L_14 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_14, /*hidden argument*/NULL);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
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
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m1293042150_gshared (Tuple_2_t3267548213 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m1862217893_gshared (Tuple_2_t3267548213 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Char>::.ctor(T1,T2)
extern "C" IL2CPP_METHOD_ATTR void Tuple_2__ctor_m2426004262_gshared (Tuple_2_t3267548213 * __this, RuntimeObject * ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		Il2CppChar L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m3225610105_gshared (Tuple_2_t3267548213 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_m3225610105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m3652816150_gshared (Tuple_2_t3267548213 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_m3652816150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t3267548213 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t3267548213 *)((Tuple_2_t3267548213 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_2_t3267548213 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t3267548213 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		Il2CppChar L_9 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_10);
		Tuple_2_t3267548213 * L_12 = V_0;
		Il2CppChar L_13 = (Il2CppChar)L_12->get_m_Item2_1();
		Il2CppChar L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_14);
		bool L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m1373145262_gshared (Tuple_2_t3267548213 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_m1373145262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m1351464050_gshared (Tuple_2_t3267548213 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_m1351464050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t3267548213 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t3267548213 *)((Tuple_2_t3267548213 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_2_t3267548213 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_2_System_Collections_IStructuralComparable_CompareTo_m1351464050_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t3267548213 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		Il2CppChar L_15 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_16);
		Tuple_2_t3267548213 * L_18 = V_0;
		Il2CppChar L_19 = (Il2CppChar)L_18->get_m_Item2_1();
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_20);
		int32_t L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_17, (RuntimeObject *)L_21);
		return L_22;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m2036918928_gshared (Tuple_2_t3267548213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m2036918928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m3110436094_gshared (Tuple_2_t3267548213 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m3110436094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_5);
		int32_t L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8 = Tuple_CombineHashCodes_m2631077112(NULL /*static, unused*/, (int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m715163863_gshared (Tuple_2_t3267548213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m715163863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m103424758_gshared (Tuple_2_t3267548213 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_m103424758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_2, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_5);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_7, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_8);
		return L_9;
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
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m1385212797_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m959734965_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
extern "C" IL2CPP_METHOD_ATTR void Tuple_2__ctor_m596982955_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m1782812392_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_m1782812392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m1604241532_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_m1604241532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t2713193907 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t2713193907 *)((Tuple_2_t2713193907 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_2_t2713193907 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t2713193907 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t2713193907 * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m2490824222_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_m2490824222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3897890118_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3897890118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t2713193907 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t2713193907 *)((Tuple_2_t2713193907 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_2_t2713193907 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_2_System_Collections_IStructuralComparable_CompareTo_m3897890118_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t2713193907 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t2713193907 * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		return L_18;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m2612735482_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m2612735482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m1400802334_gshared (Tuple_2_t2713193907 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m1400802334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6 = Tuple_CombineHashCodes_m2631077112(NULL /*static, unused*/, (int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m2595279462_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m2595279462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m3531129415_gshared (Tuple_2_t2713193907 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_m3531129415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_2, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_5, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_6);
		return L_7;
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
// T1 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item1_m2559772859_gshared (Tuple_3_t3230838485 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item2_m2325773728_gshared (Tuple_3_t3230838485 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item3_m2474005473_gshared (Tuple_3_t3230838485 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// System.Void System.Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void Tuple_3__ctor_m3774981432_gshared (Tuple_3_t3230838485 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		return;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m2987443164_gshared (Tuple_3_t3230838485 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_Equals_m2987443164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m3742707436_gshared (Tuple_3_t3230838485 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_Equals_m3742707436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t3230838485 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t3230838485 *)((Tuple_3_t3230838485 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_3_t3230838485 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t3230838485 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t3230838485 * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t3230838485 * L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		bool L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		return L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m1424558715_gshared (Tuple_3_t3230838485 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_IComparable_CompareTo_m1424558715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m2718412939_gshared (Tuple_3_t3230838485 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralComparable_CompareTo_m2718412939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t3230838485 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t3230838485 *)((Tuple_3_t3230838485 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_3_t3230838485 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_3_System_Collections_IStructuralComparable_CompareTo_m2718412939_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t3230838485 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t3230838485 * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t3230838485 * L_23 = V_0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		int32_t L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return L_25;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m659657982_gshared (Tuple_3_t3230838485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_GetHashCode_m659657982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m3372596419_gshared (Tuple_3_t3230838485 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m3372596419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		int32_t L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		int32_t L_9 = Tuple_CombineHashCodes_m2732473132(NULL /*static, unused*/, (int32_t)L_2, (int32_t)L_5, (int32_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m464080828_gshared (Tuple_3_t3230838485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_ToString_m464080828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m3664369537_gshared (Tuple_3_t3230838485 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_ITupleInternal_ToString_m3664369537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_2, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_5, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_8, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_9);
		return L_10;
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
// T1 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item1_m4234669382_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item2_m918061395_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_m2611632858_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::get_Item4()
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_get_Item4_m4198184114_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Item4_3();
		return L_0;
	}
}
// System.Void System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::.ctor(T1,T2,T3,T4)
extern "C" IL2CPP_METHOD_ATTR void Tuple_4__ctor_m4179474227_gshared (Tuple_4_t280230887 * __this, int32_t ___item10, int32_t ___item21, int32_t ___item32, bool ___item43, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		int32_t L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		int32_t L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		bool L_3 = ___item43;
		__this->set_m_Item4_3(L_3);
		return;
	}
}
// System.Boolean System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m60921435_gshared (Tuple_4_t280230887 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_Equals_m60921435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m1615368747_gshared (Tuple_4_t280230887 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_Equals_m1615368747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t280230887 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t280230887 *)((Tuple_4_t280230887 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t280230887 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		int32_t L_4 = (int32_t)__this->get_m_Item1_0();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_5);
		Tuple_4_t280230887 * L_7 = V_0;
		int32_t L_8 = (int32_t)L_7->get_m_Item1_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_9);
		bool L_11 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6, (RuntimeObject *)L_10);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_12 = ___comparer1;
		int32_t L_13 = (int32_t)__this->get_m_Item2_1();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_14);
		Tuple_4_t280230887 * L_16 = V_0;
		int32_t L_17 = (int32_t)L_16->get_m_Item2_1();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_18);
		bool L_20 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_15, (RuntimeObject *)L_19);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_21 = ___comparer1;
		int32_t L_22 = (int32_t)__this->get_m_Item3_2();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_23);
		Tuple_4_t280230887 * L_25 = V_0;
		int32_t L_26 = (int32_t)L_25->get_m_Item3_2();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_27);
		bool L_29 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_24, (RuntimeObject *)L_28);
		if (!L_29)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_30 = ___comparer1;
		bool L_31 = (bool)__this->get_m_Item4_3();
		bool L_32 = L_31;
		RuntimeObject * L_33 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_32);
		Tuple_4_t280230887 * L_34 = V_0;
		bool L_35 = (bool)L_34->get_m_Item4_3();
		bool L_36 = L_35;
		RuntimeObject * L_37 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_36);
		bool L_38 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_30, (RuntimeObject *)L_33, (RuntimeObject *)L_37);
		return L_38;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m2230556958_gshared (Tuple_4_t280230887 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_IComparable_CompareTo_m2230556958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m245883596_gshared (Tuple_4_t280230887 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralComparable_CompareTo_m245883596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t280230887 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t280230887 *)((Tuple_4_t280230887 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t280230887 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_4_System_Collections_IStructuralComparable_CompareTo_m245883596_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		int32_t L_8 = (int32_t)__this->get_m_Item1_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_9);
		Tuple_4_t280230887 * L_11 = V_0;
		int32_t L_12 = (int32_t)L_11->get_m_Item1_0();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_13);
		int32_t L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_10, (RuntimeObject *)L_14);
		V_1 = (int32_t)L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___comparer1;
		int32_t L_19 = (int32_t)__this->get_m_Item2_1();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_20);
		Tuple_4_t280230887 * L_22 = V_0;
		int32_t L_23 = (int32_t)L_22->get_m_Item2_1();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_24);
		int32_t L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_21, (RuntimeObject *)L_25);
		V_1 = (int32_t)L_26;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0075:
	{
		RuntimeObject* L_29 = ___comparer1;
		int32_t L_30 = (int32_t)__this->get_m_Item3_2();
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_31);
		Tuple_4_t280230887 * L_33 = V_0;
		int32_t L_34 = (int32_t)L_33->get_m_Item3_2();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_35);
		int32_t L_37 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_29, (RuntimeObject *)L_32, (RuntimeObject *)L_36);
		V_1 = (int32_t)L_37;
		int32_t L_38 = V_1;
		if (!L_38)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_1;
		return L_39;
	}

IL_0097:
	{
		RuntimeObject* L_40 = ___comparer1;
		bool L_41 = (bool)__this->get_m_Item4_3();
		bool L_42 = L_41;
		RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_42);
		Tuple_4_t280230887 * L_44 = V_0;
		bool L_45 = (bool)L_44->get_m_Item4_3();
		bool L_46 = L_45;
		RuntimeObject * L_47 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_46);
		int32_t L_48 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_40, (RuntimeObject *)L_43, (RuntimeObject *)L_47);
		return L_48;
	}
}
// System.Int32 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m4200754752_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_GetHashCode_m4200754752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m3673523563_gshared (Tuple_4_t280230887 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m3673523563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1 = (int32_t)__this->get_m_Item1_0();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_3);
		RuntimeObject* L_5 = ___comparer0;
		int32_t L_6 = (int32_t)__this->get_m_Item2_1();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_7);
		int32_t L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (RuntimeObject *)L_8);
		RuntimeObject* L_10 = ___comparer0;
		int32_t L_11 = (int32_t)__this->get_m_Item3_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_12);
		int32_t L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_13);
		RuntimeObject* L_15 = ___comparer0;
		bool L_16 = (bool)__this->get_m_Item4_3();
		bool L_17 = L_16;
		RuntimeObject * L_18 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_17);
		int32_t L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_15, (RuntimeObject *)L_18);
		int32_t L_20 = Tuple_CombineHashCodes_m2815395037(NULL /*static, unused*/, (int32_t)L_4, (int32_t)L_9, (int32_t)L_14, (int32_t)L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.String System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m3507888759_gshared (Tuple_4_t280230887 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_ToString_m3507888759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m1199886910_gshared (Tuple_4_t280230887 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_ITupleInternal_ToString_m1199886910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		int32_t L_1 = (int32_t)__this->get_m_Item1_0();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_2);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_4, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		int32_t L_6 = (int32_t)__this->get_m_Item2_1();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_7);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_5, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_9, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		int32_t L_11 = (int32_t)__this->get_m_Item3_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_12);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_10, (RuntimeObject *)L_13, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_14, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___sb0;
		bool L_16 = (bool)__this->get_m_Item4_3();
		bool L_17 = L_16;
		RuntimeObject * L_18 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_17);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_15, (RuntimeObject *)L_18, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_19, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_20 = ___sb0;
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_20);
		return L_21;
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
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m1796389507_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m4097298420_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_m3321259469_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_m3612132945_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return L_0;
	}
}
// System.Void System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::.ctor(T1,T2,T3,T4)
extern "C" IL2CPP_METHOD_ATTR void Tuple_4__ctor_m3192627659_gshared (Tuple_4_t10520759 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, int32_t ___item32, int32_t ___item43, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		int32_t L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		int32_t L_3 = ___item43;
		__this->set_m_Item4_3(L_3);
		return;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m2233486523_gshared (Tuple_4_t10520759 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_Equals_m2233486523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m3835351674_gshared (Tuple_4_t10520759 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_Equals_m3835351674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t10520759 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t10520759 *)((Tuple_4_t10520759 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t10520759 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_t10520759 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_t10520759 * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		int32_t L_14 = (int32_t)__this->get_m_Item3_2();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_15);
		Tuple_4_t10520759 * L_17 = V_0;
		int32_t L_18 = (int32_t)L_17->get_m_Item3_2();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_19);
		bool L_21 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_16, (RuntimeObject *)L_20);
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_22 = ___comparer1;
		int32_t L_23 = (int32_t)__this->get_m_Item4_3();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_24);
		Tuple_4_t10520759 * L_26 = V_0;
		int32_t L_27 = (int32_t)L_26->get_m_Item4_3();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_28);
		bool L_30 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_22, (RuntimeObject *)L_25, (RuntimeObject *)L_29);
		return L_30;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m1306698847_gshared (Tuple_4_t10520759 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_IComparable_CompareTo_m1306698847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m110849818_gshared (Tuple_4_t10520759 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralComparable_CompareTo_m110849818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t10520759 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t10520759 *)((Tuple_4_t10520759 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t10520759 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_4_System_Collections_IStructuralComparable_CompareTo_m110849818_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_t10520759 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_t10520759 * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		int32_t L_22 = (int32_t)__this->get_m_Item3_2();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_23);
		Tuple_4_t10520759 * L_25 = V_0;
		int32_t L_26 = (int32_t)L_25->get_m_Item3_2();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_27);
		int32_t L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_24, (RuntimeObject *)L_28);
		V_1 = (int32_t)L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0097:
	{
		RuntimeObject* L_32 = ___comparer1;
		int32_t L_33 = (int32_t)__this->get_m_Item4_3();
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_34);
		Tuple_4_t10520759 * L_36 = V_0;
		int32_t L_37 = (int32_t)L_36->get_m_Item4_3();
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_38);
		int32_t L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_32, (RuntimeObject *)L_35, (RuntimeObject *)L_39);
		return L_40;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m3496458865_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_GetHashCode_m3496458865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2076237339_gshared (Tuple_4_t10520759 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2076237339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		int32_t L_7 = (int32_t)__this->get_m_Item3_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_8);
		int32_t L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_9);
		RuntimeObject* L_11 = ___comparer0;
		int32_t L_12 = (int32_t)__this->get_m_Item4_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_13);
		int32_t L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_11, (RuntimeObject *)L_14);
		int32_t L_16 = Tuple_CombineHashCodes_m2815395037(NULL /*static, unused*/, (int32_t)L_2, (int32_t)L_5, (int32_t)L_10, (int32_t)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m3336041503_gshared (Tuple_4_t10520759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_ToString_m3336041503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m1635418709_gshared (Tuple_4_t10520759 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_ITupleInternal_ToString_m1635418709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_2, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_5, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		int32_t L_7 = (int32_t)__this->get_m_Item3_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_8);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_6, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_10, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		int32_t L_12 = (int32_t)__this->get_m_Item4_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_13);
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_11, (RuntimeObject *)L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_16 = ___sb0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_16);
		return L_17;
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
// T1 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m408946885_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m1496237627_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item3_m2961527995_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item4()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item4_m1153150586_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item4_3();
		return L_0;
	}
}
// System.Void System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
extern "C" IL2CPP_METHOD_ATTR void Tuple_4__ctor_m2128365118_gshared (Tuple_4_t2598374123 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_m_Item4_3(L_3);
		return;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m618710271_gshared (Tuple_4_t2598374123 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_Equals_m618710271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_1 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m3337480863_gshared (Tuple_4_t2598374123 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_Equals_m3337480863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t2598374123 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t2598374123 *)((Tuple_4_t2598374123 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t2598374123 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_t2598374123 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_t2598374123 * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_4_t2598374123 * L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		bool L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_m_Item4_3();
		Tuple_4_t2598374123 * L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20->get_m_Item4_3();
		bool L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		return L_22;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m864434890_gshared (Tuple_4_t2598374123 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_IComparable_CompareTo_m864434890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t611013387_il2cpp_TypeInfo_var);
		LowLevelComparer_t611013387 * L_1 = ((LowLevelComparer_t611013387_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t611013387_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t3450588467_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m991048049_gshared (Tuple_4_t2598374123 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralComparable_CompareTo_m991048049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t2598374123 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_t2598374123 *)((Tuple_4_t2598374123 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		Tuple_4_t2598374123 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m1749913990(NULL /*static, unused*/, (String_t*)_stringLiteral4055290125, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_6, (String_t*)L_5, (String_t*)_stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Tuple_4_System_Collections_IStructuralComparable_CompareTo_m991048049_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_t2598374123 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_t2598374123 * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_4_t2598374123 * L_23 = V_0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		int32_t L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_1 = (int32_t)L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_0097:
	{
		RuntimeObject* L_28 = ___comparer1;
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_m_Item4_3();
		Tuple_4_t2598374123 * L_30 = V_0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30->get_m_Item4_3();
		int32_t L_32 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return L_32;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m839529646_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_GetHashCode_m839529646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t1147032983 * L_0 = ((ObjectEqualityComparer_t1147032983_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t1147032983_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t1532146456_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m1331059486_gshared (Tuple_4_t2598374123 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m1331059486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		int32_t L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_m_Item4_3();
		int32_t L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t1493878338_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		int32_t L_12 = Tuple_CombineHashCodes_m2815395037(NULL /*static, unused*/, (int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_m2434313778_gshared (Tuple_4_t2598374123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_ToString_m2434313778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_1, (String_t*)_stringLiteral3452614536, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_t3655233963_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m1031679431_gshared (Tuple_4_t2598374123 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_ITupleInternal_ToString_m1031679431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_2, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_5, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		StringBuilder_Append_m1965104174((StringBuilder_t *)L_8, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_m_Item4_3();
		StringBuilder_Append_m1640838743((StringBuilder_t *)L_9, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		StringBuilder_Append_m2383614642((StringBuilder_t *)L_11, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_12 = ___sb0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_12);
		return L_13;
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3078689395_gshared (CachedInvokableCall_1_t2423483305 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t214452203 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((InvokableCall_1_t214452203 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m3002667207_gshared (CachedInvokableCall_1_t2423483305 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m812947504_gshared (CachedInvokableCall_1_t2423483305 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m2046334630_gshared (CachedInvokableCall_1_t982173797 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m502907382_gshared (CachedInvokableCall_1_t982173797 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2909479018_gshared (CachedInvokableCall_1_t982173797 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3714231058_gshared (CachedInvokableCall_1_t1111334208 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m931536002_gshared (CachedInvokableCall_1_t1111334208 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m853073645_gshared (CachedInvokableCall_1_t1111334208 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m1997047287_gshared (CachedInvokableCall_1_t3723462114 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t1514431012 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2734252625_gshared (CachedInvokableCall_1_t3723462114 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m1355947625_gshared (CachedInvokableCall_1_t3723462114 * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m337513891_gshared (InvokableCall_1_t214452203 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m337513891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1011133128_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1293546855_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3497872319_gshared (InvokableCall_1_t214452203 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m3497872319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		UnityAction_1_t682124106 * L_5 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t682124106 * L_7 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_7, (bool)((*(bool*)((bool*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3859772291_gshared (InvokableCall_1_t214452203 * __this, bool ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t682124106 * L_2 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_3 = ___args00;
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_001d:
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m854286695_gshared (InvokableCall_1_t3068109991 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m854286695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m3984829522_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1404598405_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m891112188_gshared (InvokableCall_1_t3068109991 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m891112188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_1_Invoke_m891112188_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		UnityAction_1_t3535781894 * L_5 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3535781894 * L_7 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_7, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1665111854_gshared (InvokableCall_1_t3068109991 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3535781894 * L_2 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		int32_t L_3 = ___args00;
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_001d:
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m974734014_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m974734014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1149657958_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1459577645_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4071643321_gshared (InvokableCall_1_t3197270402 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4071643321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		UnityAction_1_t3664942305 * L_5 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1111745191_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3664942305 * L_2 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		RuntimeObject * L_3 = ___args00;
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_001d:
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m4147324340_gshared (InvokableCall_1_t1514431012 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m4147324340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1440777569_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m790146436_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4150391468_gshared (InvokableCall_1_t1514431012 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4150391468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		UnityAction_1_t1982102915 * L_5 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t1982102915 * L_7 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_7, (float)((*(float*)((float*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1920505169_gshared (InvokableCall_1_t1514431012 * __this, float ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t1982102915 * L_2 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		float L_3 = ___args00;
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_001d:
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_m3619012188_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_m3619012188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t3283971887 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_m1520082677_gshared (InvokableCall_2_t362407658 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_m1520082677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		UnityAction_2_t3283971887 * L_8 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t3283971887 * L_10 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((UnityAction_2_t3283971887 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
	}

IL_0050:
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_m4245235439_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_m4245235439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1557236713 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m3141788616_gshared (InvokableCall_3_t4059188962 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m3141788616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		UnityAction_3_t1557236713 * L_11 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1557236713 * L_13 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((UnityAction_3_t1557236713 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_0060:
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_m3136187504_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_m3136187504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_t682480391 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_m3371718871_gshared (InvokableCall_4_t2756980746 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_m3371718871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		UnityAction_4_t682480391 * L_14 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_t682480391 * L_16 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t2843939325* L_23 = ___args0;
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t2843939325* L_26 = ___args0;
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->methodPointer)((UnityAction_4_t682480391 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
	}

IL_0070:
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m483887086_gshared (UnityAction_1_t682124106 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m3721186338_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1872049713_gshared (UnityAction_1_t682124106 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3569411354_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4018737650_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m290165017_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m272661351_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m992932529_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m4173210162_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m4218191642_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m2530432941_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1615818599_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m63817492_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m677813163_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m677813163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m367631613_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m4260941619_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1322091188_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m1292612021_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m3108471759_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1769266175_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(LoadSceneMode_t3251202195_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2179051926_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m2941677221_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1733258791_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2385586247_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3__ctor_m2228523061_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
							else
								GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
							else
								VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
						else
							GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
						else
							VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m1515014307_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m1256921407_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m4196105227_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
							else
								VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
						else
							VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m2207320832_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_m1236619780_gshared (UnityAction_4_t682480391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1397247356_gshared (UnityEvent_1_t3832605257 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		MethodInfo_t * L_5 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_2, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_5;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m617150804_gshared (UnityEvent_1_t3832605257 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3068109991 * L_2 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3604335408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3068109991 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3068109991 *)((InvokableCall_1_t3068109991 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1)));
		InvokableCall_1_t3068109991 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3068109991 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t3068109991 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1)));
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		int32_t L_17 = ___arg00;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		BaseInvokableCall_t2703961024 * L_20 = V_4;
		ObjectU5BU5D_t2843939325* L_21 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_20, (ObjectU5BU5D_t2843939325*)L_21);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_22 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_23 = V_1;
		List_1_t4176035766 * L_24 = V_0;
		int32_t L_25 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_24, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m322741469_gshared (UnityEvent_1_t3961765668 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		MethodInfo_t * L_5 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_2, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_5;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1223269239_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3197270402 * L_2 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m2734859485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3197270402 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3197270402 *)((InvokableCall_1_t3197270402 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1)));
		InvokableCall_1_t3197270402 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3197270402 * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		VirtActionInvoker1< RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t3197270402 *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1)));
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_17 = ___arg00;
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		BaseInvokableCall_t2703961024 * L_18 = V_4;
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_18, (ObjectU5BU5D_t2843939325*)L_19);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_21 = V_1;
		List_1_t4176035766 * L_22 = V_0;
		int32_t L_23 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_22, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m155249342_gshared (UnityEvent_2_t614268397 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2569180594_gshared (UnityEvent_2_t614268397 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)) };
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_7);
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_8;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_2_GetDelegate_m3909669659_gshared (UnityEvent_2_t614268397 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t362407658 * L_2 = (InvokableCall_2_t362407658 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t362407658 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m3891569313_gshared (UnityEvent_3_t2404744798 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1640458315_gshared (UnityEvent_3_t2404744798 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)) };
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_7);
		TypeU5BU5D_t3940880105* L_8 = (TypeU5BU5D_t3940880105*)L_5;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 2)) };
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_9, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_10);
		MethodInfo_t * L_11 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_8, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_11;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_3_GetDelegate_m1156357290_gshared (UnityEvent_3_t2404744798 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4059188962 * L_2 = (InvokableCall_3_t4059188962 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4059188962 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m831487108_gshared (UnityEvent_4_t4085588227 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m3410547086_gshared (UnityEvent_4_t4085588227 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)) };
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_7);
		TypeU5BU5D_t3940880105* L_8 = (TypeU5BU5D_t3940880105*)L_5;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 2)) };
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_9, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_10);
		TypeU5BU5D_t3940880105* L_11 = (TypeU5BU5D_t3940880105*)L_8;
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 3)) };
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_12, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_13);
		MethodInfo_t * L_14 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_11, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_14;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_4_GetDelegate_m3111342790_gshared (UnityEvent_4_t4085588227 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t2756980746 * L_2 = (InvokableCall_4_t2756980746 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t2756980746 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
