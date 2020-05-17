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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058;
// System.Decimal[]
struct DecimalU5BU5D_t1145110141;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Text.RegularExpressions.RegexOptions[]
struct RegexOptionsU5BU5D_t160358170;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Xml.Schema.RangePositionInfo[]
struct RangePositionInfoU5BU5D_t242328633;
// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry[]
struct XmlSchemaObjectEntryU5BU5D_t1655208330;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590;
// System.Reflection.Assembly
struct Assembly_t;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t861562559;
// System.Func`1<System.Object>
struct Func_1_t2509852811;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_t3889069996;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t3989247807;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Xml.Schema.BitSet
struct BitSet_t1154229585;
// System.Void
struct Void_t1185182177;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t4161250538;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Uri
struct Uri_t100236324;
// System.Xml.IDtdEntityInfo
struct IDtdEntityInfo_t3492232514;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Xml.Schema.SequenceNode
struct SequenceNode_t3837141573;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Reflection.Emit.ILExceptionBlock[]
struct ILExceptionBlockU5BU5D_t2996808915;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t322720759;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2033747345;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// UnityEngine.Object
struct Object_t631007953;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t3010374299;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t4167915811;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t3139534710;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t2108926;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t585560190;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisCustomAttributeTypedArgument_t2723150157_m2041074378_RuntimeMethod_var;
extern String_t* _stringLiteral797640427;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisCustomAttributeTypedArgument_t2723150157_m2041074378_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionBlock_t3961874966_m3018764391_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionBlock_t3961874966_m3018764391_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionInfo_t237856010_m2165621442_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionInfo_t237856010_m2165621442_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisLabelData_t360167391_m180970407_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisLabelData_t360167391_m180970407_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisLabelFixup_t858502054_m361705503_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisLabelFixup_t858502054_m361705503_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisILTokenInfo_t2325775114_m2504809207_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisILTokenInfo_t2325775114_m2504809207_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisLabel_t2281661643_m1835167839_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisLabel_t2281661643_m1835167839_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisMonoResource_t4103430009_m3254626270_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisMonoResource_t4103430009_m3254626270_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisMonoWin32Resource_t1904229483_m2691624008_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisMonoWin32Resource_t1904229483_m2691624008_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisRefEmitPermissionSet_t484390987_m896245899_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisRefEmitPermissionSet_t484390987_m896245899_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisParameterModifier_t1461694466_m707097487_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisParameterModifier_t1461694466_m707097487_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisResourceLocator_t3723970807_m1432084740_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisResourceLocator_t3723970807_m1432084740_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisEphemeron_t1602596362_m2752481302_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisEphemeron_t1602596362_m2752481302_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisGCHandle_t3351438187_m1164941286_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisGCHandle_t3351438187_m1164941286_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisBinaryTypeEnum_t3485436454_m2524012928_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisBinaryTypeEnum_t3485436454_m2524012928_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisInternalPrimitiveTypeE_t4093048977_m3031033319_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisInternalPrimitiveTypeE_t4093048977_m3031033319_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisSByte_t1669577662_m3057015409_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisSByte_t1669577662_m3057015409_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisX509ChainStatus_t133602714_m2017440555_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisX509ChainStatus_t133602714_m2017440555_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisSingle_t1397266774_m70177781_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisSingle_t1397266774_m70177781_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTermInfoStrings_t290279955_m1412835473_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTermInfoStrings_t290279955_m1412835473_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisLowerCaseMapping_t2910317575_m1939279452_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisLowerCaseMapping_t2910317575_m1939279452_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisRegexOptions_t92845595_m4058415748_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisRegexOptions_t92845595_m4058415748_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisCancellationTokenRegistration_t2813424904_m3256868132_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisCancellationTokenRegistration_t2813424904_m3256868132_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTimeSpan_t881159249_m3641977509_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTimeSpan_t881159249_m3641977509_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t2111777359_m1535782717_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t2111777359_m1535782717_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTypeCode_t2987224087_m4252651165_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTypeCode_t2987224087_m4252651165_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUInt16_t2177724958_m170984066_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt16_t2177724958_m170984066_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUInt32_t2560061978_m4042992197_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt32_t2560061978_m4042992197_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUInt64_t4134040092_m367691764_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt64_t4134040092_m367691764_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisMap_t1331044427_m1914648151_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisMap_t1331044427_m1914648151_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisRangePositionInfo_t589968936_m2988414250_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisRangePositionInfo_t589968936_m2988414250_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisSequenceConstructPosContext_t2054380699_m617148699_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisSequenceConstructPosContext_t2054380699_m617148699_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisXmlSchemaObjectEntry_t3344676971_m1539839124_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisXmlSchemaObjectEntry_t3344676971_m1539839124_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisXmlTypeCode_t2623622950_m3393562866_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisXmlTypeCode_t2623622950_m3393562866_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisState_t1890458201_m652646140_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisState_t1890458201_m652646140_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisNamespaceDeclaration_t4162609575_m83553861_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisNamespaceDeclaration_t4162609575_m83553861_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisVirtualAttribute_t3578083907_m2284702182_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisVirtualAttribute_t3578083907_m2284702182_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisParsingState_t1780334922_m3921860095_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisParsingState_t1780334922_m3921860095_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisNamespace_t2218256516_m2182830534_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisNamespace_t2218256516_m2182830534_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisState_t1792539347_m2676812677_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisState_t1792539347_m2676812677_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTagInfo_t3526638417_m869294536_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTagInfo_t3526638417_m869294536_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisXPathResultType_t2828988488_m1937342502_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisXPathResultType_t2828988488_m1937342502_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t1585977831_m1366047841_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t1585977831_m1366047841_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisContactPoint2D_t3390240644_m117260243_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisContactPoint2D_t3390240644_m117260243_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisKeyframe_t4206410242_m786456066_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisKeyframe_t4206410242_m786456066_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisPlayableBinding_t354260709_m3109707054_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisPlayableBinding_t354260709_m3109707054_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisRaycastHit2D_t2279581989_m2320360185_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisRaycastHit2D_t2279581989_m2320360185_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_MetadataUsageId;
extern const uint32_t Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_MetadataUsageId;
extern const uint32_t Marshal_PtrToStructure_TisRuntimeObject_m12685913_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_RuntimeMethod_var;
extern String_t* _stringLiteral2654205466;
extern const uint32_t LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_MetadataUsageId;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m3920941149_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral461028519;
extern const uint32_t Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisByte_t1134296376_m25630657_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisRuntimeObject_m1751379490_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_MetadataUsageId;
extern const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var;
extern String_t* _stringLiteral879148213;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId;
extern RuntimeClass* TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var;
extern const uint32_t TaskToApm_End_TisInt32_t2950945753_m2874764222_MetadataUsageId;
extern const uint32_t TaskToApm_End_TisRuntimeObject_m300046032_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Decimal_t2948259380 ;
struct ILExceptionBlock_t3961874966_marshaled_pinvoke;
struct ILExceptionBlock_t3961874966_marshaled_com;
struct Object_t631007953_marshaled_com;

struct BooleanU5BU5D_t2897418192;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DateTimeU5BU5D_t1184652292;
struct DateTimeOffsetU5BU5D_t3473357058;
struct DecimalU5BU5D_t1145110141;
struct DoubleU5BU5D_t3413330114;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int64U5BU5D_t2559172825;
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057;
struct ObjectU5BU5D_t2843939325;
struct SByteU5BU5D_t2651576203;
struct SingleU5BU5D_t1444911251;
struct RegexOptionsU5BU5D_t160358170;
struct TimeSpanU5BU5D_t4291357516;
struct UInt16U5BU5D_t3326319531;
struct UInt32U5BU5D_t2770800703;
struct UInt64U5BU5D_t1659327989;
struct RangePositionInfoU5BU5D_t242328633;
struct XmlSchemaObjectEntryU5BU5D_t1655208330;
struct OrderBlockU5BU5D_t2389202590;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;


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
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
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
#ifndef EMPTYARRAY_1_T4018820917_H
#define EMPTYARRAY_1_T4018820917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t4018820917  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t4018820917_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t3528271667* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t4018820917_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t3528271667* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t3528271667* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T4018820917_H
#ifndef EMPTYARRAY_1_T3464466611_H
#define EMPTYARRAY_1_T3464466611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_t3464466611  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t3464466611_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t2843939325* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t3464466611_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t2843939325* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t2843939325* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T3464466611_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t3989247807 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___lazyData_3)); }
	inline LazyCAttrData_t3989247807 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t3989247807 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t3989247807 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef LIST_1_T1569362707_H
#define LIST_1_T1569362707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t1569362707  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t2897418192* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____items_0)); }
	inline BooleanU5BU5D_t2897418192* get__items_0() const { return ____items_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(BooleanU5BU5D_t2897418192* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t1569362707_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t2897418192* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1569362707_StaticFields, ____emptyArray_4)); }
	inline BooleanU5BU5D_t2897418192* get__emptyArray_4() const { return ____emptyArray_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(BooleanU5BU5D_t2897418192* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1569362707_H
#ifndef XMLVALUECONVERTER_T585560190_H
#define XMLVALUECONVERTER_T585560190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlValueConverter
struct  XmlValueConverter_t585560190  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALUECONVERTER_T585560190_H
#ifndef VOLATILE_T3391122269_H
#define VOLATILE_T3391122269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Volatile
struct  Volatile_t3391122269  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLATILE_T3391122269_H
#ifndef CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#define CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t4268647790  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef JITHELPERS_T1212693971_H
#define JITHELPERS_T1212693971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t1212693971  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T1212693971_H
#ifndef MARSHAL_T1757017490_H
#define MARSHAL_T1757017490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1757017490  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1757017490_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Boolean System.Runtime.InteropServices.Marshal::SetErrorInfoNotAvailable
	bool ___SetErrorInfoNotAvailable_2;
	// System.Boolean System.Runtime.InteropServices.Marshal::GetErrorInfoNotAvailable
	bool ___GetErrorInfoNotAvailable_3;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___GetErrorInfoNotAvailable_3)); }
	inline bool get_GetErrorInfoNotAvailable_3() const { return ___GetErrorInfoNotAvailable_3; }
	inline bool* get_address_of_GetErrorInfoNotAvailable_3() { return &___GetErrorInfoNotAvailable_3; }
	inline void set_GetErrorInfoNotAvailable_3(bool value)
	{
		___GetErrorInfoNotAvailable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1757017490_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef LAZYINITIALIZER_T767351689_H
#define LAZYINITIALIZER_T767351689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LazyInitializer
struct  LazyInitializer_t767351689  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZYINITIALIZER_T767351689_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_0)); }
	inline ByteU5BU5D_t4116647657* get__items_0() const { return ____items_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ByteU5BU5D_t4116647657* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_t4116647657* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ____emptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get__emptyArray_4() const { return ____emptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef LIST_1_T2869341516_H
#define LIST_1_T2869341516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct  List_1_t2869341516  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t1444911251* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____items_0)); }
	inline SingleU5BU5D_t1444911251* get__items_0() const { return ____items_0; }
	inline SingleU5BU5D_t1444911251** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(SingleU5BU5D_t1444911251* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t2869341516_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t1444911251* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2869341516_StaticFields, ____emptyArray_4)); }
	inline SingleU5BU5D_t1444911251* get__emptyArray_4() const { return ____emptyArray_4; }
	inline SingleU5BU5D_t1444911251** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(SingleU5BU5D_t1444911251* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2869341516_H
#ifndef LIST_1_T2353233991_H
#define LIST_1_T2353233991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TimeSpan>
struct  List_1_t2353233991  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_t4291357516* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____items_0)); }
	inline TimeSpanU5BU5D_t4291357516* get__items_0() const { return ____items_0; }
	inline TimeSpanU5BU5D_t4291357516** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(TimeSpanU5BU5D_t4291357516* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t2353233991_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimeSpanU5BU5D_t4291357516* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2353233991_StaticFields, ____emptyArray_4)); }
	inline TimeSpanU5BU5D_t4291357516* get__emptyArray_4() const { return ____emptyArray_4; }
	inline TimeSpanU5BU5D_t4291357516** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(TimeSpanU5BU5D_t4291357516* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2353233991_H
#ifndef LIST_1_T3649799700_H
#define LIST_1_T3649799700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt16>
struct  List_1_t3649799700  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_t3326319531* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____items_0)); }
	inline UInt16U5BU5D_t3326319531* get__items_0() const { return ____items_0; }
	inline UInt16U5BU5D_t3326319531** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(UInt16U5BU5D_t3326319531* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t3649799700_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt16U5BU5D_t3326319531* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3649799700_StaticFields, ____emptyArray_4)); }
	inline UInt16U5BU5D_t3326319531* get__emptyArray_4() const { return ____emptyArray_4; }
	inline UInt16U5BU5D_t3326319531** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(UInt16U5BU5D_t3326319531* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3649799700_H
#ifndef LIST_1_T4032136720_H
#define LIST_1_T4032136720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_t4032136720  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t2770800703* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____items_0)); }
	inline UInt32U5BU5D_t2770800703* get__items_0() const { return ____items_0; }
	inline UInt32U5BU5D_t2770800703** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(UInt32U5BU5D_t2770800703* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t4032136720_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t2770800703* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4032136720_StaticFields, ____emptyArray_4)); }
	inline UInt32U5BU5D_t2770800703* get__emptyArray_4() const { return ____emptyArray_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(UInt32U5BU5D_t2770800703* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4032136720_H
#ifndef LIST_1_T1311147538_H
#define LIST_1_T1311147538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt64>
struct  List_1_t1311147538  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t1659327989* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____items_0)); }
	inline UInt64U5BU5D_t1659327989* get__items_0() const { return ____items_0; }
	inline UInt64U5BU5D_t1659327989** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(UInt64U5BU5D_t1659327989* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t1311147538_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_t1659327989* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1311147538_StaticFields, ____emptyArray_4)); }
	inline UInt64U5BU5D_t1659327989* get__emptyArray_4() const { return ____emptyArray_4; }
	inline UInt64U5BU5D_t1659327989** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(UInt64U5BU5D_t1659327989* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1311147538_H
#ifndef TASKTOAPM_T1739674311_H
#define TASKTOAPM_T1739674311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToApm
struct  TaskToApm_t1739674311  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOAPM_T1739674311_H
#ifndef TASKWRAPPERASYNCRESULT_T2316075138_H
#define TASKWRAPPERASYNCRESULT_T2316075138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct  TaskWrapperAsyncResult_t2316075138  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t3187275312 * ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_state
	RuntimeObject * ___m_state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_completedSynchronously
	bool ___m_completedSynchronously_2;

public:
	inline static int32_t get_offset_of_Task_0() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___Task_0)); }
	inline Task_t3187275312 * get_Task_0() const { return ___Task_0; }
	inline Task_t3187275312 ** get_address_of_Task_0() { return &___Task_0; }
	inline void set_Task_0(Task_t3187275312 * value)
	{
		___Task_0 = value;
		Il2CppCodeGenWriteBarrier((&___Task_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___m_state_1)); }
	inline RuntimeObject * get_m_state_1() const { return ___m_state_1; }
	inline RuntimeObject ** get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(RuntimeObject * value)
	{
		___m_state_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_state_1), value);
	}

	inline static int32_t get_offset_of_m_completedSynchronously_2() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___m_completedSynchronously_2)); }
	inline bool get_m_completedSynchronously_2() const { return ___m_completedSynchronously_2; }
	inline bool* get_address_of_m_completedSynchronously_2() { return &___m_completedSynchronously_2; }
	inline void set_m_completedSynchronously_2(bool value)
	{
		___m_completedSynchronously_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKWRAPPERASYNCRESULT_T2316075138_H
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
#ifndef LIST_1_T3141652404_H
#define LIST_1_T3141652404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.SByte>
struct  List_1_t3141652404  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t2651576203* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____items_0)); }
	inline SByteU5BU5D_t2651576203* get__items_0() const { return ____items_0; }
	inline SByteU5BU5D_t2651576203** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(SByteU5BU5D_t2651576203* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t3141652404_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SByteU5BU5D_t2651576203* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3141652404_StaticFields, ____emptyArray_4)); }
	inline SByteU5BU5D_t2651576203* get__emptyArray_4() const { return ____emptyArray_4; }
	inline SByteU5BU5D_t2651576203** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(SByteU5BU5D_t2651576203* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3141652404_H
#ifndef LIST_1_T915637231_H
#define LIST_1_T915637231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.DateTime>
struct  List_1_t915637231  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t1184652292* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____items_0)); }
	inline DateTimeU5BU5D_t1184652292* get__items_0() const { return ____items_0; }
	inline DateTimeU5BU5D_t1184652292** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(DateTimeU5BU5D_t1184652292* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t915637231_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeU5BU5D_t1184652292* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t915637231_StaticFields, ____emptyArray_4)); }
	inline DateTimeU5BU5D_t1184652292* get__emptyArray_4() const { return ____emptyArray_4; }
	inline DateTimeU5BU5D_t1184652292** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(DateTimeU5BU5D_t1184652292* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T915637231_H
#ifndef LIST_1_T406394953_H
#define LIST_1_T406394953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.DateTimeOffset>
struct  List_1_t406394953  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeOffsetU5BU5D_t3473357058* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____items_0)); }
	inline DateTimeOffsetU5BU5D_t3473357058* get__items_0() const { return ____items_0; }
	inline DateTimeOffsetU5BU5D_t3473357058** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(DateTimeOffsetU5BU5D_t3473357058* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t406394953_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeOffsetU5BU5D_t3473357058* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t406394953_StaticFields, ____emptyArray_4)); }
	inline DateTimeOffsetU5BU5D_t3473357058* get__emptyArray_4() const { return ____emptyArray_4; }
	inline DateTimeOffsetU5BU5D_t3473357058** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(DateTimeOffsetU5BU5D_t3473357058* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T406394953_H
#ifndef LIST_1_T125366826_H
#define LIST_1_T125366826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Decimal>
struct  List_1_t125366826  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DecimalU5BU5D_t1145110141* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____items_0)); }
	inline DecimalU5BU5D_t1145110141* get__items_0() const { return ____items_0; }
	inline DecimalU5BU5D_t1145110141** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(DecimalU5BU5D_t1145110141* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t125366826_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DecimalU5BU5D_t1145110141* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t125366826_StaticFields, ____emptyArray_4)); }
	inline DecimalU5BU5D_t1145110141* get__emptyArray_4() const { return ____emptyArray_4; }
	inline DecimalU5BU5D_t1145110141** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(DecimalU5BU5D_t1145110141* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T125366826_H
#ifndef LIST_1_T2066740105_H
#define LIST_1_T2066740105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Double>
struct  List_1_t2066740105  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t3413330114* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____items_0)); }
	inline DoubleU5BU5D_t3413330114* get__items_0() const { return ____items_0; }
	inline DoubleU5BU5D_t3413330114** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(DoubleU5BU5D_t3413330114* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t2066740105_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t3413330114* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2066740105_StaticFields, ____emptyArray_4)); }
	inline DoubleU5BU5D_t3413330114* get__emptyArray_4() const { return ____emptyArray_4; }
	inline DoubleU5BU5D_t3413330114** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(DoubleU5BU5D_t3413330114* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2066740105_H
#ifndef LIST_1_T4024895129_H
#define LIST_1_T4024895129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int16>
struct  List_1_t4024895129  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_t3686840178* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____items_0)); }
	inline Int16U5BU5D_t3686840178* get__items_0() const { return ____items_0; }
	inline Int16U5BU5D_t3686840178** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(Int16U5BU5D_t3686840178* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t4024895129_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int16U5BU5D_t3686840178* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4024895129_StaticFields, ____emptyArray_4)); }
	inline Int16U5BU5D_t3686840178* get__emptyArray_4() const { return ____emptyArray_4; }
	inline Int16U5BU5D_t3686840178** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(Int16U5BU5D_t3686840178* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4024895129_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_0)); }
	inline Int32U5BU5D_t385246372* get__items_0() const { return ____items_0; }
	inline Int32U5BU5D_t385246372** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(Int32U5BU5D_t385246372* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_4)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_4() const { return ____emptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T913674750_H
#define LIST_1_T913674750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int64>
struct  List_1_t913674750  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_t2559172825* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____items_0)); }
	inline Int64U5BU5D_t2559172825* get__items_0() const { return ____items_0; }
	inline Int64U5BU5D_t2559172825** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(Int64U5BU5D_t2559172825* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t913674750_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_t2559172825* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t913674750_StaticFields, ____emptyArray_4)); }
	inline Int64U5BU5D_t2559172825* get__emptyArray_4() const { return ____emptyArray_4; }
	inline Int64U5BU5D_t2559172825** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(Int64U5BU5D_t2559172825* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T913674750_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_0)); }
	inline ObjectU5BU5D_t2843939325* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2843939325* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t2843939325* ____emptyArray_4;

public:
	inline static int32_t get_offset_of__emptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ____emptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get__emptyArray_4() const { return ____emptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of__emptyArray_4() { return &____emptyArray_4; }
	inline void set__emptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		____emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
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
#ifndef RANGEPOSITIONINFO_T589968936_H
#define RANGEPOSITIONINFO_T589968936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RangePositionInfo
struct  RangePositionInfo_t589968936 
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.RangePositionInfo::curpos
	BitSet_t1154229585 * ___curpos_0;
	// System.Decimal[] System.Xml.Schema.RangePositionInfo::rangeCounters
	DecimalU5BU5D_t1145110141* ___rangeCounters_1;

public:
	inline static int32_t get_offset_of_curpos_0() { return static_cast<int32_t>(offsetof(RangePositionInfo_t589968936, ___curpos_0)); }
	inline BitSet_t1154229585 * get_curpos_0() const { return ___curpos_0; }
	inline BitSet_t1154229585 ** get_address_of_curpos_0() { return &___curpos_0; }
	inline void set_curpos_0(BitSet_t1154229585 * value)
	{
		___curpos_0 = value;
		Il2CppCodeGenWriteBarrier((&___curpos_0), value);
	}

	inline static int32_t get_offset_of_rangeCounters_1() { return static_cast<int32_t>(offsetof(RangePositionInfo_t589968936, ___rangeCounters_1)); }
	inline DecimalU5BU5D_t1145110141* get_rangeCounters_1() const { return ___rangeCounters_1; }
	inline DecimalU5BU5D_t1145110141** get_address_of_rangeCounters_1() { return &___rangeCounters_1; }
	inline void set_rangeCounters_1(DecimalU5BU5D_t1145110141* value)
	{
		___rangeCounters_1 = value;
		Il2CppCodeGenWriteBarrier((&___rangeCounters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t589968936_marshaled_pinvoke
{
	BitSet_t1154229585 * ___curpos_0;
	Decimal_t2948259380 * ___rangeCounters_1;
};
// Native definition for COM marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t589968936_marshaled_com
{
	BitSet_t1154229585 * ___curpos_0;
	Decimal_t2948259380 * ___rangeCounters_1;
};
#endif // RANGEPOSITIONINFO_T589968936_H
#ifndef LABELFIXUP_T858502054_H
#define LABELFIXUP_T858502054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t858502054 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T858502054_H
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
#ifndef LABELDATA_T360167391_H
#define LABELDATA_T360167391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t360167391 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T360167391_H
#ifndef ILEXCEPTIONBLOCK_T3961874966_H
#define ILEXCEPTIONBLOCK_T3961874966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILExceptionBlock
struct  ILExceptionBlock_t3961874966 
{
public:
	// System.Type System.Reflection.Emit.ILExceptionBlock::extype
	Type_t * ___extype_0;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::type
	int32_t ___type_1;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::start
	int32_t ___start_2;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::len
	int32_t ___len_3;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::filter_offset
	int32_t ___filter_offset_4;

public:
	inline static int32_t get_offset_of_extype_0() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___extype_0)); }
	inline Type_t * get_extype_0() const { return ___extype_0; }
	inline Type_t ** get_address_of_extype_0() { return &___extype_0; }
	inline void set_extype_0(Type_t * value)
	{
		___extype_0 = value;
		Il2CppCodeGenWriteBarrier((&___extype_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___start_2)); }
	inline int32_t get_start_2() const { return ___start_2; }
	inline int32_t* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(int32_t value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
	}

	inline static int32_t get_offset_of_filter_offset_4() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___filter_offset_4)); }
	inline int32_t get_filter_offset_4() const { return ___filter_offset_4; }
	inline int32_t* get_address_of_filter_offset_4() { return &___filter_offset_4; }
	inline void set_filter_offset_4(int32_t value)
	{
		___filter_offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILExceptionBlock
struct ILExceptionBlock_t3961874966_marshaled_pinvoke
{
	Type_t * ___extype_0;
	int32_t ___type_1;
	int32_t ___start_2;
	int32_t ___len_3;
	int32_t ___filter_offset_4;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILExceptionBlock
struct ILExceptionBlock_t3961874966_marshaled_com
{
	Type_t * ___extype_0;
	int32_t ___type_1;
	int32_t ___start_2;
	int32_t ___len_3;
	int32_t ___filter_offset_4;
};
#endif // ILEXCEPTIONBLOCK_T3961874966_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef MAP_T1331044427_H
#define MAP_T1331044427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct  Map_t1331044427 
{
public:
	// System.Char System.Xml.Schema.FacetsChecker/FacetsCompiler/Map::match
	Il2CppChar ___match_0;
	// System.String System.Xml.Schema.FacetsChecker/FacetsCompiler/Map::replacement
	String_t* ___replacement_1;

public:
	inline static int32_t get_offset_of_match_0() { return static_cast<int32_t>(offsetof(Map_t1331044427, ___match_0)); }
	inline Il2CppChar get_match_0() const { return ___match_0; }
	inline Il2CppChar* get_address_of_match_0() { return &___match_0; }
	inline void set_match_0(Il2CppChar value)
	{
		___match_0 = value;
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(Map_t1331044427, ___replacement_1)); }
	inline String_t* get_replacement_1() const { return ___replacement_1; }
	inline String_t** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(String_t* value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct Map_t1331044427_marshaled_pinvoke
{
	uint8_t ___match_0;
	char* ___replacement_1;
};
// Native definition for COM marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct Map_t1331044427_marshaled_com
{
	uint8_t ___match_0;
	Il2CppChar* ___replacement_1;
};
#endif // MAP_T1331044427_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef ILTOKENINFO_T2325775114_H
#define ILTOKENINFO_T2325775114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t2325775114 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T2325775114_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef EPHEMERON_T1602596362_H
#define EPHEMERON_T1602596362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t1602596362 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T1602596362_H
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
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef LABEL_T2281661643_H
#define LABEL_T2281661643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t2281661643 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t2281661643, ___label_0)); }
	inline int32_t get_label_0() const { return ___label_0; }
	inline int32_t* get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(int32_t value)
	{
		___label_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABEL_T2281661643_H
#ifndef SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#define SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t223515617 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t4161250538 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t223515617, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t4161250538 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t4161250538 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t4161250538 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t223515617, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#ifndef MONOWIN32RESOURCE_T1904229483_H
#define MONOWIN32RESOURCE_T1904229483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1904229483 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1904229483_H
#ifndef LOWERCASEMAPPING_T2910317575_H
#define LOWERCASEMAPPING_T2910317575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct  LowerCaseMapping_t2910317575 
{
public:
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMin
	Il2CppChar ____chMin_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMax
	Il2CppChar ____chMax_1;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_lcOp
	int32_t ____lcOp_2;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_data
	int32_t ____data_3;

public:
	inline static int32_t get_offset_of__chMin_0() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t2910317575, ____chMin_0)); }
	inline Il2CppChar get__chMin_0() const { return ____chMin_0; }
	inline Il2CppChar* get_address_of__chMin_0() { return &____chMin_0; }
	inline void set__chMin_0(Il2CppChar value)
	{
		____chMin_0 = value;
	}

	inline static int32_t get_offset_of__chMax_1() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t2910317575, ____chMax_1)); }
	inline Il2CppChar get__chMax_1() const { return ____chMax_1; }
	inline Il2CppChar* get_address_of__chMax_1() { return &____chMax_1; }
	inline void set__chMax_1(Il2CppChar value)
	{
		____chMax_1 = value;
	}

	inline static int32_t get_offset_of__lcOp_2() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t2910317575, ____lcOp_2)); }
	inline int32_t get__lcOp_2() const { return ____lcOp_2; }
	inline int32_t* get_address_of__lcOp_2() { return &____lcOp_2; }
	inline void set__lcOp_2(int32_t value)
	{
		____lcOp_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t2910317575, ____data_3)); }
	inline int32_t get__data_3() const { return ____data_3; }
	inline int32_t* get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(int32_t value)
	{
		____data_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t2910317575_marshaled_pinvoke
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t2910317575_marshaled_com
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};
#endif // LOWERCASEMAPPING_T2910317575_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_t2897418192* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byRef_0)); }
	inline BooleanU5BU5D_t2897418192* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_t2897418192* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((&____byRef_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byRef_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef RESOURCELOCATOR_T3723970807_H
#define RESOURCELOCATOR_T3723970807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t3723970807 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t3723970807, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t3723970807, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3723970807_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3723970807_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T3723970807_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef TASKAWAITER_1_T1450460888_H
#define TASKAWAITER_1_T1450460888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct  TaskAwaiter_1_t1450460888 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t61518632 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1450460888, ___m_task_0)); }
	inline Task_1_t61518632 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t61518632 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t61518632 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1450460888_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef XMLSCHEMAOBJECTENTRY_T3344676971_H
#define XMLSCHEMAOBJECTENTRY_T3344676971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct  XmlSchemaObjectEntry_t3344676971 
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::qname
	XmlQualifiedName_t2760654312 * ___qname_0;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::xso
	XmlSchemaObject_t1315720168 * ___xso_1;

public:
	inline static int32_t get_offset_of_qname_0() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t3344676971, ___qname_0)); }
	inline XmlQualifiedName_t2760654312 * get_qname_0() const { return ___qname_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qname_0() { return &___qname_0; }
	inline void set_qname_0(XmlQualifiedName_t2760654312 * value)
	{
		___qname_0 = value;
		Il2CppCodeGenWriteBarrier((&___qname_0), value);
	}

	inline static int32_t get_offset_of_xso_1() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t3344676971, ___xso_1)); }
	inline XmlSchemaObject_t1315720168 * get_xso_1() const { return ___xso_1; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_xso_1() { return &___xso_1; }
	inline void set_xso_1(XmlSchemaObject_t1315720168 * value)
	{
		___xso_1 = value;
		Il2CppCodeGenWriteBarrier((&___xso_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t3344676971_marshaled_pinvoke
{
	XmlQualifiedName_t2760654312 * ___qname_0;
	XmlSchemaObject_t1315720168 * ___xso_1;
};
// Native definition for COM marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t3344676971_marshaled_com
{
	XmlQualifiedName_t2760654312 * ___qname_0;
	XmlSchemaObject_t1315720168 * ___xso_1;
};
#endif // XMLSCHEMAOBJECTENTRY_T3344676971_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
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
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef TASKAWAITER_1_T1579621299_H
#define TASKAWAITER_1_T1579621299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t1579621299 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t190679043 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1579621299, ___m_task_0)); }
	inline Task_1_t190679043 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t190679043 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t190679043 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1579621299_H
#ifndef NAMESPACE_T2218256516_H
#define NAMESPACE_T2218256516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/Namespace
struct  Namespace_t2218256516 
{
public:
	// System.String System.Xml.XmlTextWriter/Namespace::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlTextWriter/Namespace::ns
	String_t* ___ns_1;
	// System.Boolean System.Xml.XmlTextWriter/Namespace::declared
	bool ___declared_2;
	// System.Int32 System.Xml.XmlTextWriter/Namespace::prevNsIndex
	int32_t ___prevNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}

	inline static int32_t get_offset_of_declared_2() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___declared_2)); }
	inline bool get_declared_2() const { return ___declared_2; }
	inline bool* get_address_of_declared_2() { return &___declared_2; }
	inline void set_declared_2(bool value)
	{
		___declared_2 = value;
	}

	inline static int32_t get_offset_of_prevNsIndex_3() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___prevNsIndex_3)); }
	inline int32_t get_prevNsIndex_3() const { return ___prevNsIndex_3; }
	inline int32_t* get_address_of_prevNsIndex_3() { return &___prevNsIndex_3; }
	inline void set_prevNsIndex_3(int32_t value)
	{
		___prevNsIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t2218256516_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t2218256516_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
#endif // NAMESPACE_T2218256516_H
#ifndef PARSINGSTATE_T1780334922_H
#define PARSINGSTATE_T1780334922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/ParsingState
struct  ParsingState_t1780334922 
{
public:
	// System.Char[] System.Xml.XmlTextReaderImpl/ParsingState::chars
	CharU5BU5D_t3528271667* ___chars_0;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::charPos
	int32_t ___charPos_1;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::charsUsed
	int32_t ___charsUsed_2;
	// System.Text.Encoding System.Xml.XmlTextReaderImpl/ParsingState::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::appendMode
	bool ___appendMode_4;
	// System.IO.Stream System.Xml.XmlTextReaderImpl/ParsingState::stream
	Stream_t1273022909 * ___stream_5;
	// System.Text.Decoder System.Xml.XmlTextReaderImpl/ParsingState::decoder
	Decoder_t2204182725 * ___decoder_6;
	// System.Byte[] System.Xml.XmlTextReaderImpl/ParsingState::bytes
	ByteU5BU5D_t4116647657* ___bytes_7;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::bytePos
	int32_t ___bytePos_8;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::bytesUsed
	int32_t ___bytesUsed_9;
	// System.IO.TextReader System.Xml.XmlTextReaderImpl/ParsingState::textReader
	TextReader_t283511965 * ___textReader_10;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::lineNo
	int32_t ___lineNo_11;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::lineStartPos
	int32_t ___lineStartPos_12;
	// System.String System.Xml.XmlTextReaderImpl/ParsingState::baseUriStr
	String_t* ___baseUriStr_13;
	// System.Uri System.Xml.XmlTextReaderImpl/ParsingState::baseUri
	Uri_t100236324 * ___baseUri_14;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::isEof
	bool ___isEof_15;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::isStreamEof
	bool ___isStreamEof_16;
	// System.Xml.IDtdEntityInfo System.Xml.XmlTextReaderImpl/ParsingState::entity
	RuntimeObject* ___entity_17;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::entityId
	int32_t ___entityId_18;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::eolNormalized
	bool ___eolNormalized_19;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::entityResolvedManually
	bool ___entityResolvedManually_20;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___chars_0)); }
	inline CharU5BU5D_t3528271667* get_chars_0() const { return ___chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(CharU5BU5D_t3528271667* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((&___chars_0), value);
	}

	inline static int32_t get_offset_of_charPos_1() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___charPos_1)); }
	inline int32_t get_charPos_1() const { return ___charPos_1; }
	inline int32_t* get_address_of_charPos_1() { return &___charPos_1; }
	inline void set_charPos_1(int32_t value)
	{
		___charPos_1 = value;
	}

	inline static int32_t get_offset_of_charsUsed_2() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___charsUsed_2)); }
	inline int32_t get_charsUsed_2() const { return ___charsUsed_2; }
	inline int32_t* get_address_of_charsUsed_2() { return &___charsUsed_2; }
	inline void set_charsUsed_2(int32_t value)
	{
		___charsUsed_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_appendMode_4() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___appendMode_4)); }
	inline bool get_appendMode_4() const { return ___appendMode_4; }
	inline bool* get_address_of_appendMode_4() { return &___appendMode_4; }
	inline void set_appendMode_4(bool value)
	{
		___appendMode_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_decoder_6() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___decoder_6)); }
	inline Decoder_t2204182725 * get_decoder_6() const { return ___decoder_6; }
	inline Decoder_t2204182725 ** get_address_of_decoder_6() { return &___decoder_6; }
	inline void set_decoder_6(Decoder_t2204182725 * value)
	{
		___decoder_6 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_6), value);
	}

	inline static int32_t get_offset_of_bytes_7() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytes_7)); }
	inline ByteU5BU5D_t4116647657* get_bytes_7() const { return ___bytes_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_7() { return &___bytes_7; }
	inline void set_bytes_7(ByteU5BU5D_t4116647657* value)
	{
		___bytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_7), value);
	}

	inline static int32_t get_offset_of_bytePos_8() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytePos_8)); }
	inline int32_t get_bytePos_8() const { return ___bytePos_8; }
	inline int32_t* get_address_of_bytePos_8() { return &___bytePos_8; }
	inline void set_bytePos_8(int32_t value)
	{
		___bytePos_8 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_9() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytesUsed_9)); }
	inline int32_t get_bytesUsed_9() const { return ___bytesUsed_9; }
	inline int32_t* get_address_of_bytesUsed_9() { return &___bytesUsed_9; }
	inline void set_bytesUsed_9(int32_t value)
	{
		___bytesUsed_9 = value;
	}

	inline static int32_t get_offset_of_textReader_10() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___textReader_10)); }
	inline TextReader_t283511965 * get_textReader_10() const { return ___textReader_10; }
	inline TextReader_t283511965 ** get_address_of_textReader_10() { return &___textReader_10; }
	inline void set_textReader_10(TextReader_t283511965 * value)
	{
		___textReader_10 = value;
		Il2CppCodeGenWriteBarrier((&___textReader_10), value);
	}

	inline static int32_t get_offset_of_lineNo_11() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___lineNo_11)); }
	inline int32_t get_lineNo_11() const { return ___lineNo_11; }
	inline int32_t* get_address_of_lineNo_11() { return &___lineNo_11; }
	inline void set_lineNo_11(int32_t value)
	{
		___lineNo_11 = value;
	}

	inline static int32_t get_offset_of_lineStartPos_12() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___lineStartPos_12)); }
	inline int32_t get_lineStartPos_12() const { return ___lineStartPos_12; }
	inline int32_t* get_address_of_lineStartPos_12() { return &___lineStartPos_12; }
	inline void set_lineStartPos_12(int32_t value)
	{
		___lineStartPos_12 = value;
	}

	inline static int32_t get_offset_of_baseUriStr_13() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___baseUriStr_13)); }
	inline String_t* get_baseUriStr_13() const { return ___baseUriStr_13; }
	inline String_t** get_address_of_baseUriStr_13() { return &___baseUriStr_13; }
	inline void set_baseUriStr_13(String_t* value)
	{
		___baseUriStr_13 = value;
		Il2CppCodeGenWriteBarrier((&___baseUriStr_13), value);
	}

	inline static int32_t get_offset_of_baseUri_14() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___baseUri_14)); }
	inline Uri_t100236324 * get_baseUri_14() const { return ___baseUri_14; }
	inline Uri_t100236324 ** get_address_of_baseUri_14() { return &___baseUri_14; }
	inline void set_baseUri_14(Uri_t100236324 * value)
	{
		___baseUri_14 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_14), value);
	}

	inline static int32_t get_offset_of_isEof_15() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___isEof_15)); }
	inline bool get_isEof_15() const { return ___isEof_15; }
	inline bool* get_address_of_isEof_15() { return &___isEof_15; }
	inline void set_isEof_15(bool value)
	{
		___isEof_15 = value;
	}

	inline static int32_t get_offset_of_isStreamEof_16() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___isStreamEof_16)); }
	inline bool get_isStreamEof_16() const { return ___isStreamEof_16; }
	inline bool* get_address_of_isStreamEof_16() { return &___isStreamEof_16; }
	inline void set_isStreamEof_16(bool value)
	{
		___isStreamEof_16 = value;
	}

	inline static int32_t get_offset_of_entity_17() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entity_17)); }
	inline RuntimeObject* get_entity_17() const { return ___entity_17; }
	inline RuntimeObject** get_address_of_entity_17() { return &___entity_17; }
	inline void set_entity_17(RuntimeObject* value)
	{
		___entity_17 = value;
		Il2CppCodeGenWriteBarrier((&___entity_17), value);
	}

	inline static int32_t get_offset_of_entityId_18() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entityId_18)); }
	inline int32_t get_entityId_18() const { return ___entityId_18; }
	inline int32_t* get_address_of_entityId_18() { return &___entityId_18; }
	inline void set_entityId_18(int32_t value)
	{
		___entityId_18 = value;
	}

	inline static int32_t get_offset_of_eolNormalized_19() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___eolNormalized_19)); }
	inline bool get_eolNormalized_19() const { return ___eolNormalized_19; }
	inline bool* get_address_of_eolNormalized_19() { return &___eolNormalized_19; }
	inline void set_eolNormalized_19(bool value)
	{
		___eolNormalized_19 = value;
	}

	inline static int32_t get_offset_of_entityResolvedManually_20() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entityResolvedManually_20)); }
	inline bool get_entityResolvedManually_20() const { return ___entityResolvedManually_20; }
	inline bool* get_address_of_entityResolvedManually_20() { return &___entityResolvedManually_20; }
	inline void set_entityResolvedManually_20(bool value)
	{
		___entityResolvedManually_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t1780334922_marshaled_pinvoke
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t1523322056 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t1273022909 * ___stream_5;
	Decoder_t2204182725 * ___decoder_6;
	uint8_t* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t283511965 * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	char* ___baseUriStr_13;
	Uri_t100236324 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
// Native definition for COM marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t1780334922_marshaled_com
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t1523322056 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t1273022909 * ___stream_5;
	Decoder_t2204182725 * ___decoder_6;
	uint8_t* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t283511965 * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	Il2CppChar* ___baseUriStr_13;
	Uri_t100236324 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
#endif // PARSINGSTATE_T1780334922_H
#ifndef VIRTUALATTRIBUTE_T3578083907_H
#define VIRTUALATTRIBUTE_T3578083907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct  VirtualAttribute_t3578083907 
{
public:
	// System.String System.Xml.XmlNodeReaderNavigator/VirtualAttribute::name
	String_t* ___name_0;
	// System.String System.Xml.XmlNodeReaderNavigator/VirtualAttribute::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(VirtualAttribute_t3578083907, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(VirtualAttribute_t3578083907, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct VirtualAttribute_t3578083907_marshaled_pinvoke
{
	char* ___name_0;
	char* ___value_1;
};
// Native definition for COM marshalling of System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct VirtualAttribute_t3578083907_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___value_1;
};
#endif // VIRTUALATTRIBUTE_T3578083907_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_1;

public:
	inline static int32_t get_offset_of_NegativeZero_1() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_1)); }
	inline double get_NegativeZero_1() const { return ___NegativeZero_1; }
	inline double* get_address_of_NegativeZero_1() { return &___NegativeZero_1; }
	inline void set_NegativeZero_1(double value)
	{
		___NegativeZero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_2)); }
	inline DateTime_t3738529785  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t3738529785 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t3738529785  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_3)); }
	inline DateTime_t3738529785  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t3738529785  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef NAMESPACEDECLARATION_T4162609575_H
#define NAMESPACEDECLARATION_T4162609575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct  NamespaceDeclaration_t4162609575 
{
public:
	// System.String System.Xml.XmlNamespaceManager/NamespaceDeclaration::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlNamespaceManager/NamespaceDeclaration::uri
	String_t* ___uri_1;
	// System.Int32 System.Xml.XmlNamespaceManager/NamespaceDeclaration::scopeId
	int32_t ___scopeId_2;
	// System.Int32 System.Xml.XmlNamespaceManager/NamespaceDeclaration::previousNsIndex
	int32_t ___previousNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t4162609575, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t4162609575, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_scopeId_2() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t4162609575, ___scopeId_2)); }
	inline int32_t get_scopeId_2() const { return ___scopeId_2; }
	inline int32_t* get_address_of_scopeId_2() { return &___scopeId_2; }
	inline void set_scopeId_2(int32_t value)
	{
		___scopeId_2 = value;
	}

	inline static int32_t get_offset_of_previousNsIndex_3() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t4162609575, ___previousNsIndex_3)); }
	inline int32_t get_previousNsIndex_3() const { return ___previousNsIndex_3; }
	inline int32_t* get_address_of_previousNsIndex_3() { return &___previousNsIndex_3; }
	inline void set_previousNsIndex_3(int32_t value)
	{
		___previousNsIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct NamespaceDeclaration_t4162609575_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct NamespaceDeclaration_t4162609575_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
#endif // NAMESPACEDECLARATION_T4162609575_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
#define SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct  SequenceConstructPosContext_t2054380699 
{
public:
	// System.Xml.Schema.SequenceNode System.Xml.Schema.SequenceNode/SequenceConstructPosContext::this_
	SequenceNode_t3837141573 * ___this__0;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstpos
	BitSet_t1154229585 * ___firstpos_1;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastpos
	BitSet_t1154229585 * ___lastpos_2;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastposLeft
	BitSet_t1154229585 * ___lastposLeft_3;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstposRight
	BitSet_t1154229585 * ___firstposRight_4;

public:
	inline static int32_t get_offset_of_this__0() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___this__0)); }
	inline SequenceNode_t3837141573 * get_this__0() const { return ___this__0; }
	inline SequenceNode_t3837141573 ** get_address_of_this__0() { return &___this__0; }
	inline void set_this__0(SequenceNode_t3837141573 * value)
	{
		___this__0 = value;
		Il2CppCodeGenWriteBarrier((&___this__0), value);
	}

	inline static int32_t get_offset_of_firstpos_1() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___firstpos_1)); }
	inline BitSet_t1154229585 * get_firstpos_1() const { return ___firstpos_1; }
	inline BitSet_t1154229585 ** get_address_of_firstpos_1() { return &___firstpos_1; }
	inline void set_firstpos_1(BitSet_t1154229585 * value)
	{
		___firstpos_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstpos_1), value);
	}

	inline static int32_t get_offset_of_lastpos_2() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___lastpos_2)); }
	inline BitSet_t1154229585 * get_lastpos_2() const { return ___lastpos_2; }
	inline BitSet_t1154229585 ** get_address_of_lastpos_2() { return &___lastpos_2; }
	inline void set_lastpos_2(BitSet_t1154229585 * value)
	{
		___lastpos_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastpos_2), value);
	}

	inline static int32_t get_offset_of_lastposLeft_3() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___lastposLeft_3)); }
	inline BitSet_t1154229585 * get_lastposLeft_3() const { return ___lastposLeft_3; }
	inline BitSet_t1154229585 ** get_address_of_lastposLeft_3() { return &___lastposLeft_3; }
	inline void set_lastposLeft_3(BitSet_t1154229585 * value)
	{
		___lastposLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___lastposLeft_3), value);
	}

	inline static int32_t get_offset_of_firstposRight_4() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___firstposRight_4)); }
	inline BitSet_t1154229585 * get_firstposRight_4() const { return ___firstposRight_4; }
	inline BitSet_t1154229585 ** get_address_of_firstposRight_4() { return &___firstposRight_4; }
	inline void set_firstposRight_4(BitSet_t1154229585 * value)
	{
		___firstposRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___firstposRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t2054380699_marshaled_pinvoke
{
	SequenceNode_t3837141573 * ___this__0;
	BitSet_t1154229585 * ___firstpos_1;
	BitSet_t1154229585 * ___lastpos_2;
	BitSet_t1154229585 * ___lastposLeft_3;
	BitSet_t1154229585 * ___firstposRight_4;
};
// Native definition for COM marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t2054380699_marshaled_com
{
	SequenceNode_t3837141573 * ___this__0;
	BitSet_t1154229585 * ___firstpos_1;
	BitSet_t1154229585 * ___lastpos_2;
	BitSet_t1154229585 * ___lastposLeft_3;
	BitSet_t1154229585 * ___firstposRight_4;
};
#endif // SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
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
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___1)); }
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
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef BINARYTYPEENUM_T3485436454_H
#define BINARYTYPEENUM_T3485436454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
struct  BinaryTypeEnum_t3485436454 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryTypeEnum_t3485436454, ___value___1)); }
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
#endif // BINARYTYPEENUM_T3485436454_H
#ifndef NAMESPACESTATE_T853084585_H
#define NAMESPACESTATE_T853084585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/NamespaceState
struct  NamespaceState_t853084585 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/NamespaceState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceState_t853084585, ___value___1)); }
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
#endif // NAMESPACESTATE_T853084585_H
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
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
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
#endif // SECURITYACTION_T569814076_H
#ifndef ILEXCEPTIONINFO_T237856010_H
#define ILEXCEPTIONINFO_T237856010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILExceptionInfo
struct  ILExceptionInfo_t237856010 
{
public:
	// System.Reflection.Emit.ILExceptionBlock[] System.Reflection.Emit.ILExceptionInfo::handlers
	ILExceptionBlockU5BU5D_t2996808915* ___handlers_0;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::start
	int32_t ___start_1;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::len
	int32_t ___len_2;
	// System.Reflection.Emit.Label System.Reflection.Emit.ILExceptionInfo::end
	Label_t2281661643  ___end_3;

public:
	inline static int32_t get_offset_of_handlers_0() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___handlers_0)); }
	inline ILExceptionBlockU5BU5D_t2996808915* get_handlers_0() const { return ___handlers_0; }
	inline ILExceptionBlockU5BU5D_t2996808915** get_address_of_handlers_0() { return &___handlers_0; }
	inline void set_handlers_0(ILExceptionBlockU5BU5D_t2996808915* value)
	{
		___handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&___handlers_0), value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___end_3)); }
	inline Label_t2281661643  get_end_3() const { return ___end_3; }
	inline Label_t2281661643 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Label_t2281661643  value)
	{
		___end_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILExceptionInfo
struct ILExceptionInfo_t237856010_marshaled_pinvoke
{
	ILExceptionBlock_t3961874966_marshaled_pinvoke* ___handlers_0;
	int32_t ___start_1;
	int32_t ___len_2;
	Label_t2281661643  ___end_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILExceptionInfo
struct ILExceptionInfo_t237856010_marshaled_com
{
	ILExceptionBlock_t3961874966_marshaled_com* ___handlers_0;
	int32_t ___start_1;
	int32_t ___len_2;
	Label_t2281661643  ___end_3;
};
#endif // ILEXCEPTIONINFO_T237856010_H
#ifndef X509CHAINSTATUSFLAGS_T1026973125_H
#define X509CHAINSTATUSFLAGS_T1026973125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1026973125 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1026973125, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1026973125_H
#ifndef INTERNALPRIMITIVETYPEE_T4093048977_H
#define INTERNALPRIMITIVETYPEE_T4093048977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
struct  InternalPrimitiveTypeE_t4093048977 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalPrimitiveTypeE_t4093048977, ___value___1)); }
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
#endif // INTERNALPRIMITIVETYPEE_T4093048977_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
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
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2806799626 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline Collider2D_t2806799626 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2806799626 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2806799626 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_pinvoke
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_com
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef XPATHRESULTTYPE_T2828988488_H
#define XPATHRESULTTYPE_T2828988488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathResultType
struct  XPathResultType_t2828988488 
{
public:
	// System.Int32 System.Xml.XPath.XPathResultType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathResultType_t2828988488, ___value___1)); }
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
#endif // XPATHRESULTTYPE_T2828988488_H
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
#ifndef STATE_T1792539347_H
#define STATE_T1792539347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/State
struct  State_t1792539347 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t1792539347, ___value___1)); }
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
#endif // STATE_T1792539347_H
#ifndef STATE_T1890458201_H
#define STATE_T1890458201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XsdBuilder/State
struct  State_t1890458201 
{
public:
	// System.Int32 System.Xml.Schema.XsdBuilder/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t1890458201, ___value___1)); }
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
#endif // STATE_T1890458201_H
#ifndef XMLTYPECODE_T2623622950_H
#define XMLTYPECODE_T2623622950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t2623622950 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTypeCode_t2623622950, ___value___1)); }
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
#endif // XMLTYPECODE_T2623622950_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___1)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___1)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___1)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
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
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
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
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___1)); }
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
#endif // XMLSPACE_T3324193251_H
#ifndef TERMINFOSTRINGS_T290279955_H
#define TERMINFOSTRINGS_T290279955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoStrings
struct  TermInfoStrings_t290279955 
{
public:
	// System.Int32 System.TermInfoStrings::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TermInfoStrings_t290279955, ___value___1)); }
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
#endif // TERMINFOSTRINGS_T290279955_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef CANCELLATIONTOKENREGISTRATION_T2813424904_H
#define CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t2813424904 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t322720759 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t322720759 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t322720759 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_callbackInfo_0), value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t223515617  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t223515617 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t223515617  value)
	{
		___m_registrationInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_pinvoke
{
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_com
{
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;
};
#endif // CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
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
#endif // REGEXOPTIONS_T92845595_H
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
#ifndef XMLBASECONVERTER_T885945787_H
#define XMLBASECONVERTER_T885945787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlBaseConverter
struct  XmlBaseConverter_t885945787  : public XmlValueConverter_t585560190
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t2033747345 * ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t * ___clrTypeDefault_2;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___schemaType_0)); }
	inline XmlSchemaType_t2033747345 * get_schemaType_0() const { return ___schemaType_0; }
	inline XmlSchemaType_t2033747345 ** get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(XmlSchemaType_t2033747345 * value)
	{
		___schemaType_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaType_0), value);
	}

	inline static int32_t get_offset_of_typeCode_1() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___typeCode_1)); }
	inline int32_t get_typeCode_1() const { return ___typeCode_1; }
	inline int32_t* get_address_of_typeCode_1() { return &___typeCode_1; }
	inline void set_typeCode_1(int32_t value)
	{
		___typeCode_1 = value;
	}

	inline static int32_t get_offset_of_clrTypeDefault_2() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___clrTypeDefault_2)); }
	inline Type_t * get_clrTypeDefault_2() const { return ___clrTypeDefault_2; }
	inline Type_t ** get_address_of_clrTypeDefault_2() { return &___clrTypeDefault_2; }
	inline void set_clrTypeDefault_2(Type_t * value)
	{
		___clrTypeDefault_2 = value;
		Il2CppCodeGenWriteBarrier((&___clrTypeDefault_2), value);
	}
};

struct XmlBaseConverter_t885945787_StaticFields
{
public:
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t * ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t * ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t * ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t * ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t * ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t * ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t * ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t * ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t * ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t * ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t * ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t * ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t * ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t * ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t * ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t * ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t * ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t * ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t * ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t * ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t * ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t * ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t * ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t * ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t * ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t * ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t * ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t * ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t * ___XPathNavigatorType_31;

public:
	inline static int32_t get_offset_of_ICollectionType_3() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ICollectionType_3)); }
	inline Type_t * get_ICollectionType_3() const { return ___ICollectionType_3; }
	inline Type_t ** get_address_of_ICollectionType_3() { return &___ICollectionType_3; }
	inline void set_ICollectionType_3(Type_t * value)
	{
		___ICollectionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___ICollectionType_3), value);
	}

	inline static int32_t get_offset_of_IEnumerableType_4() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___IEnumerableType_4)); }
	inline Type_t * get_IEnumerableType_4() const { return ___IEnumerableType_4; }
	inline Type_t ** get_address_of_IEnumerableType_4() { return &___IEnumerableType_4; }
	inline void set_IEnumerableType_4(Type_t * value)
	{
		___IEnumerableType_4 = value;
		Il2CppCodeGenWriteBarrier((&___IEnumerableType_4), value);
	}

	inline static int32_t get_offset_of_IListType_5() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___IListType_5)); }
	inline Type_t * get_IListType_5() const { return ___IListType_5; }
	inline Type_t ** get_address_of_IListType_5() { return &___IListType_5; }
	inline void set_IListType_5(Type_t * value)
	{
		___IListType_5 = value;
		Il2CppCodeGenWriteBarrier((&___IListType_5), value);
	}

	inline static int32_t get_offset_of_ObjectArrayType_6() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ObjectArrayType_6)); }
	inline Type_t * get_ObjectArrayType_6() const { return ___ObjectArrayType_6; }
	inline Type_t ** get_address_of_ObjectArrayType_6() { return &___ObjectArrayType_6; }
	inline void set_ObjectArrayType_6(Type_t * value)
	{
		___ObjectArrayType_6 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectArrayType_6), value);
	}

	inline static int32_t get_offset_of_StringArrayType_7() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___StringArrayType_7)); }
	inline Type_t * get_StringArrayType_7() const { return ___StringArrayType_7; }
	inline Type_t ** get_address_of_StringArrayType_7() { return &___StringArrayType_7; }
	inline void set_StringArrayType_7(Type_t * value)
	{
		___StringArrayType_7 = value;
		Il2CppCodeGenWriteBarrier((&___StringArrayType_7), value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueArrayType_8() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlAtomicValueArrayType_8)); }
	inline Type_t * get_XmlAtomicValueArrayType_8() const { return ___XmlAtomicValueArrayType_8; }
	inline Type_t ** get_address_of_XmlAtomicValueArrayType_8() { return &___XmlAtomicValueArrayType_8; }
	inline void set_XmlAtomicValueArrayType_8(Type_t * value)
	{
		___XmlAtomicValueArrayType_8 = value;
		Il2CppCodeGenWriteBarrier((&___XmlAtomicValueArrayType_8), value);
	}

	inline static int32_t get_offset_of_DecimalType_9() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DecimalType_9)); }
	inline Type_t * get_DecimalType_9() const { return ___DecimalType_9; }
	inline Type_t ** get_address_of_DecimalType_9() { return &___DecimalType_9; }
	inline void set_DecimalType_9(Type_t * value)
	{
		___DecimalType_9 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalType_9), value);
	}

	inline static int32_t get_offset_of_Int32Type_10() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int32Type_10)); }
	inline Type_t * get_Int32Type_10() const { return ___Int32Type_10; }
	inline Type_t ** get_address_of_Int32Type_10() { return &___Int32Type_10; }
	inline void set_Int32Type_10(Type_t * value)
	{
		___Int32Type_10 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Type_10), value);
	}

	inline static int32_t get_offset_of_Int64Type_11() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int64Type_11)); }
	inline Type_t * get_Int64Type_11() const { return ___Int64Type_11; }
	inline Type_t ** get_address_of_Int64Type_11() { return &___Int64Type_11; }
	inline void set_Int64Type_11(Type_t * value)
	{
		___Int64Type_11 = value;
		Il2CppCodeGenWriteBarrier((&___Int64Type_11), value);
	}

	inline static int32_t get_offset_of_StringType_12() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___StringType_12)); }
	inline Type_t * get_StringType_12() const { return ___StringType_12; }
	inline Type_t ** get_address_of_StringType_12() { return &___StringType_12; }
	inline void set_StringType_12(Type_t * value)
	{
		___StringType_12 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_12), value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueType_13() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlAtomicValueType_13)); }
	inline Type_t * get_XmlAtomicValueType_13() const { return ___XmlAtomicValueType_13; }
	inline Type_t ** get_address_of_XmlAtomicValueType_13() { return &___XmlAtomicValueType_13; }
	inline void set_XmlAtomicValueType_13(Type_t * value)
	{
		___XmlAtomicValueType_13 = value;
		Il2CppCodeGenWriteBarrier((&___XmlAtomicValueType_13), value);
	}

	inline static int32_t get_offset_of_ObjectType_14() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ObjectType_14)); }
	inline Type_t * get_ObjectType_14() const { return ___ObjectType_14; }
	inline Type_t ** get_address_of_ObjectType_14() { return &___ObjectType_14; }
	inline void set_ObjectType_14(Type_t * value)
	{
		___ObjectType_14 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_14), value);
	}

	inline static int32_t get_offset_of_ByteType_15() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ByteType_15)); }
	inline Type_t * get_ByteType_15() const { return ___ByteType_15; }
	inline Type_t ** get_address_of_ByteType_15() { return &___ByteType_15; }
	inline void set_ByteType_15(Type_t * value)
	{
		___ByteType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ByteType_15), value);
	}

	inline static int32_t get_offset_of_Int16Type_16() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int16Type_16)); }
	inline Type_t * get_Int16Type_16() const { return ___Int16Type_16; }
	inline Type_t ** get_address_of_Int16Type_16() { return &___Int16Type_16; }
	inline void set_Int16Type_16(Type_t * value)
	{
		___Int16Type_16 = value;
		Il2CppCodeGenWriteBarrier((&___Int16Type_16), value);
	}

	inline static int32_t get_offset_of_SByteType_17() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___SByteType_17)); }
	inline Type_t * get_SByteType_17() const { return ___SByteType_17; }
	inline Type_t ** get_address_of_SByteType_17() { return &___SByteType_17; }
	inline void set_SByteType_17(Type_t * value)
	{
		___SByteType_17 = value;
		Il2CppCodeGenWriteBarrier((&___SByteType_17), value);
	}

	inline static int32_t get_offset_of_UInt16Type_18() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt16Type_18)); }
	inline Type_t * get_UInt16Type_18() const { return ___UInt16Type_18; }
	inline Type_t ** get_address_of_UInt16Type_18() { return &___UInt16Type_18; }
	inline void set_UInt16Type_18(Type_t * value)
	{
		___UInt16Type_18 = value;
		Il2CppCodeGenWriteBarrier((&___UInt16Type_18), value);
	}

	inline static int32_t get_offset_of_UInt32Type_19() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt32Type_19)); }
	inline Type_t * get_UInt32Type_19() const { return ___UInt32Type_19; }
	inline Type_t ** get_address_of_UInt32Type_19() { return &___UInt32Type_19; }
	inline void set_UInt32Type_19(Type_t * value)
	{
		___UInt32Type_19 = value;
		Il2CppCodeGenWriteBarrier((&___UInt32Type_19), value);
	}

	inline static int32_t get_offset_of_UInt64Type_20() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt64Type_20)); }
	inline Type_t * get_UInt64Type_20() const { return ___UInt64Type_20; }
	inline Type_t ** get_address_of_UInt64Type_20() { return &___UInt64Type_20; }
	inline void set_UInt64Type_20(Type_t * value)
	{
		___UInt64Type_20 = value;
		Il2CppCodeGenWriteBarrier((&___UInt64Type_20), value);
	}

	inline static int32_t get_offset_of_XPathItemType_21() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XPathItemType_21)); }
	inline Type_t * get_XPathItemType_21() const { return ___XPathItemType_21; }
	inline Type_t ** get_address_of_XPathItemType_21() { return &___XPathItemType_21; }
	inline void set_XPathItemType_21(Type_t * value)
	{
		___XPathItemType_21 = value;
		Il2CppCodeGenWriteBarrier((&___XPathItemType_21), value);
	}

	inline static int32_t get_offset_of_DoubleType_22() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DoubleType_22)); }
	inline Type_t * get_DoubleType_22() const { return ___DoubleType_22; }
	inline Type_t ** get_address_of_DoubleType_22() { return &___DoubleType_22; }
	inline void set_DoubleType_22(Type_t * value)
	{
		___DoubleType_22 = value;
		Il2CppCodeGenWriteBarrier((&___DoubleType_22), value);
	}

	inline static int32_t get_offset_of_SingleType_23() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___SingleType_23)); }
	inline Type_t * get_SingleType_23() const { return ___SingleType_23; }
	inline Type_t ** get_address_of_SingleType_23() { return &___SingleType_23; }
	inline void set_SingleType_23(Type_t * value)
	{
		___SingleType_23 = value;
		Il2CppCodeGenWriteBarrier((&___SingleType_23), value);
	}

	inline static int32_t get_offset_of_DateTimeType_24() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DateTimeType_24)); }
	inline Type_t * get_DateTimeType_24() const { return ___DateTimeType_24; }
	inline Type_t ** get_address_of_DateTimeType_24() { return &___DateTimeType_24; }
	inline void set_DateTimeType_24(Type_t * value)
	{
		___DateTimeType_24 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeType_24), value);
	}

	inline static int32_t get_offset_of_DateTimeOffsetType_25() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DateTimeOffsetType_25)); }
	inline Type_t * get_DateTimeOffsetType_25() const { return ___DateTimeOffsetType_25; }
	inline Type_t ** get_address_of_DateTimeOffsetType_25() { return &___DateTimeOffsetType_25; }
	inline void set_DateTimeOffsetType_25(Type_t * value)
	{
		___DateTimeOffsetType_25 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeOffsetType_25), value);
	}

	inline static int32_t get_offset_of_BooleanType_26() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___BooleanType_26)); }
	inline Type_t * get_BooleanType_26() const { return ___BooleanType_26; }
	inline Type_t ** get_address_of_BooleanType_26() { return &___BooleanType_26; }
	inline void set_BooleanType_26(Type_t * value)
	{
		___BooleanType_26 = value;
		Il2CppCodeGenWriteBarrier((&___BooleanType_26), value);
	}

	inline static int32_t get_offset_of_ByteArrayType_27() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ByteArrayType_27)); }
	inline Type_t * get_ByteArrayType_27() const { return ___ByteArrayType_27; }
	inline Type_t ** get_address_of_ByteArrayType_27() { return &___ByteArrayType_27; }
	inline void set_ByteArrayType_27(Type_t * value)
	{
		___ByteArrayType_27 = value;
		Il2CppCodeGenWriteBarrier((&___ByteArrayType_27), value);
	}

	inline static int32_t get_offset_of_XmlQualifiedNameType_28() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlQualifiedNameType_28)); }
	inline Type_t * get_XmlQualifiedNameType_28() const { return ___XmlQualifiedNameType_28; }
	inline Type_t ** get_address_of_XmlQualifiedNameType_28() { return &___XmlQualifiedNameType_28; }
	inline void set_XmlQualifiedNameType_28(Type_t * value)
	{
		___XmlQualifiedNameType_28 = value;
		Il2CppCodeGenWriteBarrier((&___XmlQualifiedNameType_28), value);
	}

	inline static int32_t get_offset_of_UriType_29() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UriType_29)); }
	inline Type_t * get_UriType_29() const { return ___UriType_29; }
	inline Type_t ** get_address_of_UriType_29() { return &___UriType_29; }
	inline void set_UriType_29(Type_t * value)
	{
		___UriType_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriType_29), value);
	}

	inline static int32_t get_offset_of_TimeSpanType_30() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___TimeSpanType_30)); }
	inline Type_t * get_TimeSpanType_30() const { return ___TimeSpanType_30; }
	inline Type_t ** get_address_of_TimeSpanType_30() { return &___TimeSpanType_30; }
	inline void set_TimeSpanType_30(Type_t * value)
	{
		___TimeSpanType_30 = value;
		Il2CppCodeGenWriteBarrier((&___TimeSpanType_30), value);
	}

	inline static int32_t get_offset_of_XPathNavigatorType_31() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XPathNavigatorType_31)); }
	inline Type_t * get_XPathNavigatorType_31() const { return ___XPathNavigatorType_31; }
	inline Type_t ** get_address_of_XPathNavigatorType_31() { return &___XPathNavigatorType_31; }
	inline void set_XPathNavigatorType_31(Type_t * value)
	{
		___XPathNavigatorType_31 = value;
		Il2CppCodeGenWriteBarrier((&___XPathNavigatorType_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLBASECONVERTER_T885945787_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
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
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856 
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_0;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_8;

public:
	inline static int32_t get_offset_of_HostName_0() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_0)); }
	inline String_t* get_HostName_0() const { return ___HostName_0; }
	inline String_t** get_address_of_HostName_0() { return &___HostName_0; }
	inline void set_HostName_0(String_t* value)
	{
		___HostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_0), value);
	}

	inline static int32_t get_offset_of_DomainName_1() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_1)); }
	inline String_t* get_DomainName_1() const { return ___DomainName_1; }
	inline String_t** get_address_of_DomainName_1() { return &___DomainName_1; }
	inline void set_DomainName_1(String_t* value)
	{
		___DomainName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_1), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}

	inline static int32_t get_offset_of_NodeType_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_4)); }
	inline int32_t get_NodeType_4() const { return ___NodeType_4; }
	inline int32_t* get_address_of_NodeType_4() { return &___NodeType_4; }
	inline void set_NodeType_4(int32_t value)
	{
		___NodeType_4 = value;
	}

	inline static int32_t get_offset_of_ScopeId_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_5)); }
	inline String_t* get_ScopeId_5() const { return ___ScopeId_5; }
	inline String_t** get_address_of_ScopeId_5() { return &___ScopeId_5; }
	inline void set_ScopeId_5(String_t* value)
	{
		___ScopeId_5 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_5), value);
	}

	inline static int32_t get_offset_of_EnableRouting_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_6)); }
	inline uint32_t get_EnableRouting_6() const { return ___EnableRouting_6; }
	inline uint32_t* get_address_of_EnableRouting_6() { return &___EnableRouting_6; }
	inline void set_EnableRouting_6(uint32_t value)
	{
		___EnableRouting_6 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_7)); }
	inline uint32_t get_EnableProxy_7() const { return ___EnableProxy_7; }
	inline uint32_t* get_address_of_EnableProxy_7() { return &___EnableProxy_7; }
	inline void set_EnableProxy_7(uint32_t value)
	{
		___EnableProxy_7 = value;
	}

	inline static int32_t get_offset_of_EnableDns_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_8)); }
	inline uint32_t get_EnableDns_8() const { return ___EnableDns_8; }
	inline uint32_t* get_address_of_EnableDns_8() { return &___EnableDns_8; }
	inline void set_EnableDns_8(uint32_t value)
	{
		___EnableDns_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef TZIFTYPE_T2111777359_H
#define TZIFTYPE_T2111777359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TZifType
struct  TZifType_t2111777359 
{
public:
	// System.TimeSpan System.TimeZoneInfo/TZifType::UtcOffset
	TimeSpan_t881159249  ___UtcOffset_0;
	// System.Boolean System.TimeZoneInfo/TZifType::IsDst
	bool ___IsDst_1;
	// System.Byte System.TimeZoneInfo/TZifType::AbbreviationIndex
	uint8_t ___AbbreviationIndex_2;

public:
	inline static int32_t get_offset_of_UtcOffset_0() { return static_cast<int32_t>(offsetof(TZifType_t2111777359, ___UtcOffset_0)); }
	inline TimeSpan_t881159249  get_UtcOffset_0() const { return ___UtcOffset_0; }
	inline TimeSpan_t881159249 * get_address_of_UtcOffset_0() { return &___UtcOffset_0; }
	inline void set_UtcOffset_0(TimeSpan_t881159249  value)
	{
		___UtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_IsDst_1() { return static_cast<int32_t>(offsetof(TZifType_t2111777359, ___IsDst_1)); }
	inline bool get_IsDst_1() const { return ___IsDst_1; }
	inline bool* get_address_of_IsDst_1() { return &___IsDst_1; }
	inline void set_IsDst_1(bool value)
	{
		___IsDst_1 = value;
	}

	inline static int32_t get_offset_of_AbbreviationIndex_2() { return static_cast<int32_t>(offsetof(TZifType_t2111777359, ___AbbreviationIndex_2)); }
	inline uint8_t get_AbbreviationIndex_2() const { return ___AbbreviationIndex_2; }
	inline uint8_t* get_address_of_AbbreviationIndex_2() { return &___AbbreviationIndex_2; }
	inline void set_AbbreviationIndex_2(uint8_t value)
	{
		___AbbreviationIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TZifType
struct TZifType_t2111777359_marshaled_pinvoke
{
	TimeSpan_t881159249  ___UtcOffset_0;
	int32_t ___IsDst_1;
	uint8_t ___AbbreviationIndex_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TZifType
struct TZifType_t2111777359_marshaled_com
{
	TimeSpan_t881159249  ___UtcOffset_0;
	int32_t ___IsDst_1;
	uint8_t ___AbbreviationIndex_2;
};
#endif // TZIFTYPE_T2111777359_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_0)); }
	inline AlignmentUnion_t208902285  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t208902285  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef TAGINFO_T3526638417_H
#define TAGINFO_T3526638417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/TagInfo
struct  TagInfo_t3526638417 
{
public:
	// System.String System.Xml.XmlTextWriter/TagInfo::name
	String_t* ___name_0;
	// System.String System.Xml.XmlTextWriter/TagInfo::prefix
	String_t* ___prefix_1;
	// System.String System.Xml.XmlTextWriter/TagInfo::defaultNs
	String_t* ___defaultNs_2;
	// System.Xml.XmlTextWriter/NamespaceState System.Xml.XmlTextWriter/TagInfo::defaultNsState
	int32_t ___defaultNsState_3;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/TagInfo::xmlSpace
	int32_t ___xmlSpace_4;
	// System.String System.Xml.XmlTextWriter/TagInfo::xmlLang
	String_t* ___xmlLang_5;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prevNsTop
	int32_t ___prevNsTop_6;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prefixCount
	int32_t ___prefixCount_7;
	// System.Boolean System.Xml.XmlTextWriter/TagInfo::mixed
	bool ___mixed_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_1), value);
	}

	inline static int32_t get_offset_of_defaultNs_2() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___defaultNs_2)); }
	inline String_t* get_defaultNs_2() const { return ___defaultNs_2; }
	inline String_t** get_address_of_defaultNs_2() { return &___defaultNs_2; }
	inline void set_defaultNs_2(String_t* value)
	{
		___defaultNs_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNs_2), value);
	}

	inline static int32_t get_offset_of_defaultNsState_3() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___defaultNsState_3)); }
	inline int32_t get_defaultNsState_3() const { return ___defaultNsState_3; }
	inline int32_t* get_address_of_defaultNsState_3() { return &___defaultNsState_3; }
	inline void set_defaultNsState_3(int32_t value)
	{
		___defaultNsState_3 = value;
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___xmlSpace_4)); }
	inline int32_t get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline int32_t* get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(int32_t value)
	{
		___xmlSpace_4 = value;
	}

	inline static int32_t get_offset_of_xmlLang_5() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___xmlLang_5)); }
	inline String_t* get_xmlLang_5() const { return ___xmlLang_5; }
	inline String_t** get_address_of_xmlLang_5() { return &___xmlLang_5; }
	inline void set_xmlLang_5(String_t* value)
	{
		___xmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_5), value);
	}

	inline static int32_t get_offset_of_prevNsTop_6() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prevNsTop_6)); }
	inline int32_t get_prevNsTop_6() const { return ___prevNsTop_6; }
	inline int32_t* get_address_of_prevNsTop_6() { return &___prevNsTop_6; }
	inline void set_prevNsTop_6(int32_t value)
	{
		___prevNsTop_6 = value;
	}

	inline static int32_t get_offset_of_prefixCount_7() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prefixCount_7)); }
	inline int32_t get_prefixCount_7() const { return ___prefixCount_7; }
	inline int32_t* get_address_of_prefixCount_7() { return &___prefixCount_7; }
	inline void set_prefixCount_7(int32_t value)
	{
		___prefixCount_7 = value;
	}

	inline static int32_t get_offset_of_mixed_8() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___mixed_8)); }
	inline bool get_mixed_8() const { return ___mixed_8; }
	inline bool* get_address_of_mixed_8() { return &___mixed_8; }
	inline void set_mixed_8(bool value)
	{
		___mixed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t3526638417_marshaled_pinvoke
{
	char* ___name_0;
	char* ___prefix_1;
	char* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t3526638417_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
#endif // TAGINFO_T3526638417_H
#ifndef X509CHAINSTATUS_T133602714_H
#define X509CHAINSTATUS_T133602714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t133602714 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T133602714_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_18;

public:
	inline static int32_t get_offset_of_m_actualValue_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_18)); }
	inline RuntimeObject * get_m_actualValue_18() const { return ___m_actualValue_18; }
	inline RuntimeObject ** get_address_of_m_actualValue_18() { return &___m_actualValue_18; }
	inline void set_m_actualValue_18(RuntimeObject * value)
	{
		___m_actualValue_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_18), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_17;

public:
	inline static int32_t get_offset_of__rangeMessage_17() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_17)); }
	inline String_t* get__rangeMessage_17() const { return ____rangeMessage_17; }
	inline String_t** get_address_of__rangeMessage_17() { return &____rangeMessage_17; }
	inline void set__rangeMessage_17(String_t* value)
	{
		____rangeMessage_17 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef MONORESOURCE_T4103430009_H
#define MONORESOURCE_T4103430009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t4103430009 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t1273022909 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
#endif // MONORESOURCE_T4103430009_H
#ifndef TASK_1_T61518632_H
#define TASK_1_T61518632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_t61518632  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t61518632, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t61518632_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3010374299 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t4167915811 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3010374299 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3010374299 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3010374299 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t4167915811 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t4167915811 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t4167915811 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T61518632_H
#ifndef REFEMITPERMISSIONSET_T484390987_H
#define REFEMITPERMISSIONSET_T484390987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t484390987 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T484390987_H
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
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef FUNC_1_T2509852811_H
#define FUNC_1_T2509852811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t2509852811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2509852811_H
#ifndef XMLLISTCONVERTER_T3889069996_H
#define XMLLISTCONVERTER_T3889069996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlListConverter
struct  XmlListConverter_t3889069996  : public XmlBaseConverter_t885945787
{
public:
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_t585560190 * ___atomicConverter_32;

public:
	inline static int32_t get_offset_of_atomicConverter_32() { return static_cast<int32_t>(offsetof(XmlListConverter_t3889069996, ___atomicConverter_32)); }
	inline XmlValueConverter_t585560190 * get_atomicConverter_32() const { return ___atomicConverter_32; }
	inline XmlValueConverter_t585560190 ** get_address_of_atomicConverter_32() { return &___atomicConverter_32; }
	inline void set_atomicConverter_32(XmlValueConverter_t585560190 * value)
	{
		___atomicConverter_32 = value;
		Il2CppCodeGenWriteBarrier((&___atomicConverter_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLISTCONVERTER_T3889069996_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_t3738529785  m_Items[1];

public:
	inline DateTime_t3738529785  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t3738529785  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t3229287507  m_Items[1];

public:
	inline DateTimeOffset_t3229287507  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t3229287507  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_t1145110141  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Decimal_t2948259380  m_Items[1];

public:
	inline Decimal_t2948259380  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_t2948259380 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_t2948259380  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_t2948259380  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_t2948259380 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_t2948259380  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Win32_IP_ADAPTER_ADDRESSES_t3463526328  m_Items[1];

public:
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		m_Items[index] = value;
	}
};
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
// System.SByte[]
struct SByteU5BU5D_t2651576203  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Text.RegularExpressions.RegexOptions[]
struct RegexOptionsU5BU5D_t160358170  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t881159249  m_Items[1];

public:
	inline TimeSpan_t881159249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t881159249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Schema.RangePositionInfo[]
struct RangePositionInfoU5BU5D_t242328633  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RangePositionInfo_t589968936  m_Items[1];

public:
	inline RangePositionInfo_t589968936  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RangePositionInfo_t589968936 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RangePositionInfo_t589968936  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RangePositionInfo_t589968936  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RangePositionInfo_t589968936 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RangePositionInfo_t589968936  value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry[]
struct XmlSchemaObjectEntryU5BU5D_t1655208330  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlSchemaObjectEntry_t3344676971  m_Items[1];

public:
	inline XmlSchemaObjectEntry_t3344676971  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t3344676971 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlSchemaObjectEntry_t3344676971  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XmlSchemaObjectEntry_t3344676971  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t3344676971 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlSchemaObjectEntry_t3344676971  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OrderBlock_t1585977831  m_Items[1];

public:
	inline OrderBlock_t1585977831  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OrderBlock_t1585977831  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};


// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m3496793423_gshared (TaskAwaiter_1_t1450460888 * __this, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m3577040539_gshared (TaskAwaiter_1_t1579621299 * __this, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * CustomAttributeExtensions_GetCustomAttribute_m2805223115 (RuntimeObject * __this /* static, unused */, Assembly_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m771949023 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2063689938 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * Component_GetComponent_m886226392 (Component_t1923634451 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_GetComponent_m1027872079 (GameObject_t1113636619 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.IO.__Error::WrongAsyncResult()
extern "C" IL2CPP_METHOD_ATTR void __Error_WrongAsyncResult_m4181844776 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
#define TaskAwaiter_1_GetResult_m3496793423(__this, method) ((  int32_t (*) (TaskAwaiter_1_t1450460888 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3496793423_gshared)(__this, method)
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
#define TaskAwaiter_1_GetResult_m3577040539(__this, method) ((  RuntimeObject * (*) (TaskAwaiter_1_t1579621299 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3577040539_gshared)(__this, method)
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.CustomAttributeTypedArgument>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  Array_InternalArray__IReadOnlyList_get_Item_TisCustomAttributeTypedArgument_t2723150157_m2041074378_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisCustomAttributeTypedArgument_t2723150157_m2041074378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgument_t2723150157  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisCustomAttributeTypedArgument_t2723150157_m2041074378_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeTypedArgument_t2723150157 *)(&V_0));
		CustomAttributeTypedArgument_t2723150157  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.ILExceptionBlock>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ILExceptionBlock_t3961874966  Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionBlock_t3961874966_m3018764391_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionBlock_t3961874966_m3018764391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILExceptionBlock_t3961874966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionBlock_t3961874966_m3018764391_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILExceptionBlock_t3961874966 *)(&V_0));
		ILExceptionBlock_t3961874966  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.ILExceptionInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ILExceptionInfo_t237856010  Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionInfo_t237856010_m2165621442_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionInfo_t237856010_m2165621442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILExceptionInfo_t237856010  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisILExceptionInfo_t237856010_m2165621442_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILExceptionInfo_t237856010 *)(&V_0));
		ILExceptionInfo_t237856010  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LabelData_t360167391  Array_InternalArray__IReadOnlyList_get_Item_TisLabelData_t360167391_m180970407_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisLabelData_t360167391_m180970407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelData_t360167391  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisLabelData_t360167391_m180970407_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelData_t360167391 *)(&V_0));
		LabelData_t360167391  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LabelFixup_t858502054  Array_InternalArray__IReadOnlyList_get_Item_TisLabelFixup_t858502054_m361705503_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisLabelFixup_t858502054_m361705503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelFixup_t858502054  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisLabelFixup_t858502054_m361705503_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelFixup_t858502054 *)(&V_0));
		LabelFixup_t858502054  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ILTokenInfo_t2325775114  Array_InternalArray__IReadOnlyList_get_Item_TisILTokenInfo_t2325775114_m2504809207_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisILTokenInfo_t2325775114_m2504809207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILTokenInfo_t2325775114  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisILTokenInfo_t2325775114_m2504809207_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILTokenInfo_t2325775114 *)(&V_0));
		ILTokenInfo_t2325775114  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.Label>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Label_t2281661643  Array_InternalArray__IReadOnlyList_get_Item_TisLabel_t2281661643_m1835167839_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisLabel_t2281661643_m1835167839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Label_t2281661643  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisLabel_t2281661643_m1835167839_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Label_t2281661643 *)(&V_0));
		Label_t2281661643  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MonoResource_t4103430009  Array_InternalArray__IReadOnlyList_get_Item_TisMonoResource_t4103430009_m3254626270_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisMonoResource_t4103430009_m3254626270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoResource_t4103430009  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisMonoResource_t4103430009_m3254626270_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoResource_t4103430009 *)(&V_0));
		MonoResource_t4103430009  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.MonoWin32Resource>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MonoWin32Resource_t1904229483  Array_InternalArray__IReadOnlyList_get_Item_TisMonoWin32Resource_t1904229483_m2691624008_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisMonoWin32Resource_t1904229483_m2691624008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoWin32Resource_t1904229483  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisMonoWin32Resource_t1904229483_m2691624008_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoWin32Resource_t1904229483 *)(&V_0));
		MonoWin32Resource_t1904229483  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.Emit.RefEmitPermissionSet>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RefEmitPermissionSet_t484390987  Array_InternalArray__IReadOnlyList_get_Item_TisRefEmitPermissionSet_t484390987_m896245899_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisRefEmitPermissionSet_t484390987_m896245899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RefEmitPermissionSet_t484390987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisRefEmitPermissionSet_t484390987_m896245899_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RefEmitPermissionSet_t484390987 *)(&V_0));
		RefEmitPermissionSet_t484390987  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ParameterModifier_t1461694466  Array_InternalArray__IReadOnlyList_get_Item_TisParameterModifier_t1461694466_m707097487_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisParameterModifier_t1461694466_m707097487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterModifier_t1461694466  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisParameterModifier_t1461694466_m707097487_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParameterModifier_t1461694466 *)(&V_0));
		ParameterModifier_t1461694466  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Resources.ResourceLocator>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ResourceLocator_t3723970807  Array_InternalArray__IReadOnlyList_get_Item_TisResourceLocator_t3723970807_m1432084740_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisResourceLocator_t3723970807_m1432084740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceLocator_t3723970807  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisResourceLocator_t3723970807_m1432084740_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceLocator_t3723970807 *)(&V_0));
		ResourceLocator_t3723970807  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Runtime.CompilerServices.Ephemeron>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Ephemeron_t1602596362  Array_InternalArray__IReadOnlyList_get_Item_TisEphemeron_t1602596362_m2752481302_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisEphemeron_t1602596362_m2752481302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ephemeron_t1602596362  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisEphemeron_t1602596362_m2752481302_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Ephemeron_t1602596362 *)(&V_0));
		Ephemeron_t1602596362  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Runtime.InteropServices.GCHandle>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  Array_InternalArray__IReadOnlyList_get_Item_TisGCHandle_t3351438187_m1164941286_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisGCHandle_t3351438187_m1164941286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisGCHandle_t3351438187_m1164941286_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GCHandle_t3351438187 *)(&V_0));
		GCHandle_t3351438187  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisBinaryTypeEnum_t3485436454_m2524012928_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisBinaryTypeEnum_t3485436454_m2524012928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisBinaryTypeEnum_t3485436454_m2524012928_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisInternalPrimitiveTypeE_t4093048977_m3031033319_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisInternalPrimitiveTypeE_t4093048977_m3031033319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisInternalPrimitiveTypeE_t4093048977_m3031033319_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.SByte>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Array_InternalArray__IReadOnlyList_get_Item_TisSByte_t1669577662_m3057015409_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisSByte_t1669577662_m3057015409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisSByte_t1669577662_m3057015409_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509ChainStatus_t133602714  Array_InternalArray__IReadOnlyList_get_Item_TisX509ChainStatus_t133602714_m2017440555_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisX509ChainStatus_t133602714_m2017440555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainStatus_t133602714  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisX509ChainStatus_t133602714_m2017440555_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (X509ChainStatus_t133602714 *)(&V_0));
		X509ChainStatus_t133602714  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Single>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Array_InternalArray__IReadOnlyList_get_Item_TisSingle_t1397266774_m70177781_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisSingle_t1397266774_m70177781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisSingle_t1397266774_m70177781_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.TermInfoStrings>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisTermInfoStrings_t290279955_m1412835473_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTermInfoStrings_t290279955_m1412835473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisTermInfoStrings_t290279955_m1412835473_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LowerCaseMapping_t2910317575  Array_InternalArray__IReadOnlyList_get_Item_TisLowerCaseMapping_t2910317575_m1939279452_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisLowerCaseMapping_t2910317575_m1939279452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LowerCaseMapping_t2910317575  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisLowerCaseMapping_t2910317575_m1939279452_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LowerCaseMapping_t2910317575 *)(&V_0));
		LowerCaseMapping_t2910317575  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Text.RegularExpressions.RegexOptions>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisRegexOptions_t92845595_m4058415748_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisRegexOptions_t92845595_m4058415748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisRegexOptions_t92845595_m4058415748_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Threading.CancellationTokenRegistration>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  Array_InternalArray__IReadOnlyList_get_Item_TisCancellationTokenRegistration_t2813424904_m3256868132_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisCancellationTokenRegistration_t2813424904_m3256868132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t2813424904  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisCancellationTokenRegistration_t2813424904_m3256868132_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CancellationTokenRegistration_t2813424904 *)(&V_0));
		CancellationTokenRegistration_t2813424904  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.TimeSpan>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Array_InternalArray__IReadOnlyList_get_Item_TisTimeSpan_t881159249_m3641977509_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTimeSpan_t881159249_m3641977509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisTimeSpan_t881159249_m3641977509_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TimeSpan_t881159249 *)(&V_0));
		TimeSpan_t881159249  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.TimeZoneInfo/TZifType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TZifType_t2111777359  Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t2111777359_m1535782717_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t2111777359_m1535782717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TZifType_t2111777359  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t2111777359_m1535782717_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TZifType_t2111777359 *)(&V_0));
		TZifType_t2111777359  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.TypeCode>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisTypeCode_t2987224087_m4252651165_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTypeCode_t2987224087_m4252651165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisTypeCode_t2987224087_m4252651165_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.UInt16>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt16_t2177724958_m170984066_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUInt16_t2177724958_m170984066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisUInt16_t2177724958_m170984066_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.UInt32>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt32_t2560061978_m4042992197_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUInt32_t2560061978_m4042992197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisUInt32_t2560061978_m4042992197_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.UInt64>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Array_InternalArray__IReadOnlyList_get_Item_TisUInt64_t4134040092_m367691764_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUInt64_t4134040092_m367691764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisUInt64_t4134040092_m367691764_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.FacetsChecker/FacetsCompiler/Map>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Map_t1331044427  Array_InternalArray__IReadOnlyList_get_Item_TisMap_t1331044427_m1914648151_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisMap_t1331044427_m1914648151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Map_t1331044427  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisMap_t1331044427_m1914648151_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Map_t1331044427 *)(&V_0));
		Map_t1331044427  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.RangePositionInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RangePositionInfo_t589968936  Array_InternalArray__IReadOnlyList_get_Item_TisRangePositionInfo_t589968936_m2988414250_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisRangePositionInfo_t589968936_m2988414250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RangePositionInfo_t589968936  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisRangePositionInfo_t589968936_m2988414250_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RangePositionInfo_t589968936 *)(&V_0));
		RangePositionInfo_t589968936  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.SequenceNode/SequenceConstructPosContext>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SequenceConstructPosContext_t2054380699  Array_InternalArray__IReadOnlyList_get_Item_TisSequenceConstructPosContext_t2054380699_m617148699_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisSequenceConstructPosContext_t2054380699_m617148699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SequenceConstructPosContext_t2054380699  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisSequenceConstructPosContext_t2054380699_m617148699_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (SequenceConstructPosContext_t2054380699 *)(&V_0));
		SequenceConstructPosContext_t2054380699  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t3344676971  Array_InternalArray__IReadOnlyList_get_Item_TisXmlSchemaObjectEntry_t3344676971_m1539839124_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisXmlSchemaObjectEntry_t3344676971_m1539839124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlSchemaObjectEntry_t3344676971  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisXmlSchemaObjectEntry_t3344676971_m1539839124_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XmlSchemaObjectEntry_t3344676971 *)(&V_0));
		XmlSchemaObjectEntry_t3344676971  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.XmlTypeCode>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisXmlTypeCode_t2623622950_m3393562866_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisXmlTypeCode_t2623622950_m3393562866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisXmlTypeCode_t2623622950_m3393562866_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.Schema.XsdBuilder/State>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisState_t1890458201_m652646140_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisState_t1890458201_m652646140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisState_t1890458201_m652646140_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlNamespaceManager/NamespaceDeclaration>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR NamespaceDeclaration_t4162609575  Array_InternalArray__IReadOnlyList_get_Item_TisNamespaceDeclaration_t4162609575_m83553861_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisNamespaceDeclaration_t4162609575_m83553861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NamespaceDeclaration_t4162609575  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisNamespaceDeclaration_t4162609575_m83553861_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (NamespaceDeclaration_t4162609575 *)(&V_0));
		NamespaceDeclaration_t4162609575  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlNodeReaderNavigator/VirtualAttribute>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR VirtualAttribute_t3578083907  Array_InternalArray__IReadOnlyList_get_Item_TisVirtualAttribute_t3578083907_m2284702182_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisVirtualAttribute_t3578083907_m2284702182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAttribute_t3578083907  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisVirtualAttribute_t3578083907_m2284702182_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VirtualAttribute_t3578083907 *)(&V_0));
		VirtualAttribute_t3578083907  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlTextReaderImpl/ParsingState>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ParsingState_t1780334922  Array_InternalArray__IReadOnlyList_get_Item_TisParsingState_t1780334922_m3921860095_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisParsingState_t1780334922_m3921860095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParsingState_t1780334922  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisParsingState_t1780334922_m3921860095_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParsingState_t1780334922 *)(&V_0));
		ParsingState_t1780334922  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlTextWriter/Namespace>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Namespace_t2218256516  Array_InternalArray__IReadOnlyList_get_Item_TisNamespace_t2218256516_m2182830534_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisNamespace_t2218256516_m2182830534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Namespace_t2218256516  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisNamespace_t2218256516_m2182830534_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Namespace_t2218256516 *)(&V_0));
		Namespace_t2218256516  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlTextWriter/State>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisState_t1792539347_m2676812677_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisState_t1792539347_m2676812677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisState_t1792539347_m2676812677_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XmlTextWriter/TagInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TagInfo_t3526638417  Array_InternalArray__IReadOnlyList_get_Item_TisTagInfo_t3526638417_m869294536_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTagInfo_t3526638417_m869294536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TagInfo_t3526638417  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisTagInfo_t3526638417_m869294536_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TagInfo_t3526638417 *)(&V_0));
		TagInfo_t3526638417  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<System.Xml.XPath.XPathResultType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisXPathResultType_t2828988488_m1937342502_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisXPathResultType_t2828988488_m1937342502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisXPathResultType_t2828988488_m1937342502_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR OrderBlock_t1585977831  Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t1585977831_m1366047841_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t1585977831_m1366047841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t1585977831_m1366047841_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t1585977831 *)(&V_0));
		OrderBlock_t1585977831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.ContactPoint2D>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ContactPoint2D_t3390240644  Array_InternalArray__IReadOnlyList_get_Item_TisContactPoint2D_t3390240644_m117260243_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisContactPoint2D_t3390240644_m117260243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint2D_t3390240644  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisContactPoint2D_t3390240644_m117260243_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint2D_t3390240644 *)(&V_0));
		ContactPoint2D_t3390240644  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Keyframe_t4206410242  Array_InternalArray__IReadOnlyList_get_Item_TisKeyframe_t4206410242_m786456066_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisKeyframe_t4206410242_m786456066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t4206410242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisKeyframe_t4206410242_m786456066_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t4206410242 *)(&V_0));
		Keyframe_t4206410242  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PlayableBinding_t354260709  Array_InternalArray__IReadOnlyList_get_Item_TisPlayableBinding_t354260709_m3109707054_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisPlayableBinding_t354260709_m3109707054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t354260709  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisPlayableBinding_t354260709_m3109707054_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t354260709 *)(&V_0));
		PlayableBinding_t354260709  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHit2D_t2279581989  Array_InternalArray__IReadOnlyList_get_Item_TisRaycastHit2D_t2279581989_m2320360185_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisRaycastHit2D_t2279581989_m2320360185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t2279581989  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisRaycastHit2D_t2279581989_m2320360185_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit2D_t2279581989 *)(&V_0));
		RaycastHit2D_t2279581989  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR HitInfo_t3229609740  Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t3229609740 *)(&V_0));
		HitInfo_t3229609740  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t1354518612 *)(&V_0));
		WorkRequest_t1354518612  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::UnsafeLoad<System.Boolean>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Array_UnsafeLoad_TisBoolean_t97287965_m4116378621_gshared (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		BooleanU5BU5D_t2897418192* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		bool L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Byte>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Array_UnsafeLoad_TisByte_t1134296376_m1784857405_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Char>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Array_UnsafeLoad_TisChar_t3634460470_m3470172794_gshared (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		Il2CppChar L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.DateTime>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Array_UnsafeLoad_TisDateTime_t3738529785_m1778205872_gshared (RuntimeObject * __this /* static, unused */, DateTimeU5BU5D_t1184652292* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DateTimeU5BU5D_t1184652292* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		DateTime_t3738529785  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.DateTimeOffset>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  Array_UnsafeLoad_TisDateTimeOffset_t3229287507_m2817945770_gshared (RuntimeObject * __this /* static, unused */, DateTimeOffsetU5BU5D_t3473357058* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DateTimeOffsetU5BU5D_t3473357058* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		DateTimeOffset_t3229287507  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Decimal>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Array_UnsafeLoad_TisDecimal_t2948259380_m2909934722_gshared (RuntimeObject * __this /* static, unused */, DecimalU5BU5D_t1145110141* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DecimalU5BU5D_t1145110141* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		Decimal_t2948259380  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Double>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Array_UnsafeLoad_TisDouble_t594665363_m2721017048_gshared (RuntimeObject * __this /* static, unused */, DoubleU5BU5D_t3413330114* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DoubleU5BU5D_t3413330114* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		double L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int16>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t Array_UnsafeLoad_TisInt16_t2552820387_m4054917194_gshared (RuntimeObject * __this /* static, unused */, Int16U5BU5D_t3686840178* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int16U5BU5D_t3686840178* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		int16_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32_t2950945753_m3748710844_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int64>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t Array_UnsafeLoad_TisInt64_t3736567304_m253327233_gshared (RuntimeObject * __this /* static, unused */, Int64U5BU5D_t2559172825* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int64U5BU5D_t2559172825* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		int64_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Win32_IP_ADAPTER_ADDRESSES_t3463526328  Array_UnsafeLoad_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m3535701914_gshared (RuntimeObject * __this /* static, unused */, Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		Win32_IP_ADAPTER_ADDRESSES_t3463526328  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Object>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_UnsafeLoad_TisRuntimeObject_m2315037888_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.SByte>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Array_UnsafeLoad_TisSByte_t1669577662_m1148738187_gshared (RuntimeObject * __this /* static, unused */, SByteU5BU5D_t2651576203* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		SByteU5BU5D_t2651576203* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		int8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Single>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Array_UnsafeLoad_TisSingle_t1397266774_m256462809_gshared (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t1444911251* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Text.RegularExpressions.RegexOptions>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisRegexOptions_t92845595_m3371636671_gshared (RuntimeObject * __this /* static, unused */, RegexOptionsU5BU5D_t160358170* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RegexOptionsU5BU5D_t160358170* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.TimeSpan>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Array_UnsafeLoad_TisTimeSpan_t881159249_m4284443576_gshared (RuntimeObject * __this /* static, unused */, TimeSpanU5BU5D_t4291357516* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		TimeSpanU5BU5D_t4291357516* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		TimeSpan_t881159249  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt16>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Array_UnsafeLoad_TisUInt16_t2177724958_m137633933_gshared (RuntimeObject * __this /* static, unused */, UInt16U5BU5D_t3326319531* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt16U5BU5D_t3326319531* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt32>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Array_UnsafeLoad_TisUInt32_t2560061978_m1933780967_gshared (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt32U5BU5D_t2770800703* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt64>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Array_UnsafeLoad_TisUInt64_t4134040092_m601078984_gshared (RuntimeObject * __this /* static, unused */, UInt64U5BU5D_t1659327989* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt64U5BU5D_t1659327989* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		uint64_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Xml.Schema.RangePositionInfo>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RangePositionInfo_t589968936  Array_UnsafeLoad_TisRangePositionInfo_t589968936_m3859971865_gshared (RuntimeObject * __this /* static, unused */, RangePositionInfoU5BU5D_t242328633* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RangePositionInfoU5BU5D_t242328633* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		RangePositionInfo_t589968936  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t3344676971  Array_UnsafeLoad_TisXmlSchemaObjectEntry_t3344676971_m3793754449_gshared (RuntimeObject * __this /* static, unused */, XmlSchemaObjectEntryU5BU5D_t1655208330* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		XmlSchemaObjectEntryU5BU5D_t1655208330* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		XmlSchemaObjectEntry_t3344676971  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.BeforeRenderHelper/OrderBlock>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR OrderBlock_t1585977831  Array_UnsafeLoad_TisOrderBlock_t1585977831_m3469429553_gshared (RuntimeObject * __this /* static, unused */, OrderBlockU5BU5D_t2389202590* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		OrderBlockU5BU5D_t2389202590* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		OrderBlock_t1585977831  L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_gshared (RuntimeObject * __this /* static, unused */, Assembly_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t * L_0 = ___element0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		Attribute_t861562559 * L_3 = CustomAttributeExtensions_GetCustomAttribute_m2805223115(NULL /*static, unused*/, (Assembly_t *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_m33382438_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Net.NetworkInformation.Win32_FIXED_INFO>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Win32_FIXED_INFO_t1299345856  Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((*(Win32_FIXED_INFO_t1299345856 *)((Win32_FIXED_INFO_t1299345856 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Win32_IP_ADAPTER_ADDRESSES_t3463526328  Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((*(Win32_IP_ADAPTER_ADDRESSES_t3463526328 *)((Win32_IP_ADAPTER_ADDRESSES_t3463526328 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Object>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_TisRuntimeObject_m12685913_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisRuntimeObject_m12685913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m2889131792_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___target0, Func_1_t2509852811 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject **)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		return (*(RuntimeObject **)L_2);
	}

IL_0014:
	{
		RuntimeObject ** L_3 = ___target0;
		Func_1_t2509852811 * L_4 = ___valueFactory1;
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject **, Func_1_t2509852811 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject **)L_3, (Func_1_t2509852811 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___target0, Func_1_t2509852811 * ___valueFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t2509852811 * L_0 = ___valueFactory1;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Func_1_t2509852811 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t2509852811 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, (String_t*)_stringLiteral2654205466, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_4 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_8 = ___target0;
		return (*(RuntimeObject **)L_8);
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m3872089505_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		ObjectU5BU5D_t2843939325* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Component_t1923634451 * L_2 = Component_GetComponent_m886226392((Component_t1923634451 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m3920941149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Component_t1923634451 * L_2 = GameObject_GetComponent_m1027872079((GameObject_t1113636619 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_2 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T[] System.Array::Empty<System.Char>()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* Array_Empty_TisChar_t3634460470_m2203016263_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t3528271667* L_0 = ((EmptyArray_1_t4018820917_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t2843939325* L_0 = ((EmptyArray_1_t3464466611_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_FindAll_TisRuntimeObject_m3566631088_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		ObjectU5BU5D_t2843939325* L_5 = ___array0;
		V_2 = (ObjectU5BU5D_t2843939325*)L_5;
		V_3 = (int32_t)0;
		goto IL_0051;
	}

IL_002d:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = (RuntimeObject *)L_9;
		Predicate_1_t3905400288 * L_10 = ___match1;
		RuntimeObject * L_11 = V_4;
		bool L_12 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t3905400288 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)L_14;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		RuntimeObject * L_16 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
	}

IL_004d:
	{
		int32_t L_17 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_18 = V_3;
		ObjectU5BU5D_t2843939325* L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_20 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(&V_1), (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_21 = V_1;
		return L_21;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* CustomAttributeData_UnboxValues_TisRuntimeObject_m160061819_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_t3710464795* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t287865710_m423120871_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3710464795* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)((CustomAttributeNamedArgumentU5BU5D_t3710464795*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t1465843424* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t2723150157_m3477834415_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1465843424* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)((CustomAttributeTypedArgumentU5BU5D_t1465843424*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR BooleanU5BU5D_t2897418192* XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t1569362707 * V_1 = NULL;
	BooleanU5BU5D_t2897418192* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (BooleanU5BU5D_t2897418192*)((BooleanU5BU5D_t2897418192*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		BooleanU5BU5D_t2897418192* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (bool)((*(bool*)((bool*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t1569362707 * L_20 = (List_1_t1569362707 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t1569362707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t1569362707 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t1569362707 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t1569362707 *)L_24, (bool)((*(bool*)((bool*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t1569362707 * L_36 = V_1;
		BooleanU5BU5D_t2897418192* L_37 = ((  BooleanU5BU5D_t2897418192* (*) (List_1_t1569362707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t1569362707 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XmlListConverter_ToArray_TisByte_t1134296376_m25630657_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisByte_t1134296376_m25630657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2606371118 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (ByteU5BU5D_t4116647657*)((ByteU5BU5D_t4116647657*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ByteU5BU5D_t4116647657* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t2606371118 * L_20 = (List_1_t2606371118 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2606371118 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t2606371118 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t2606371118 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2606371118 *)L_24, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2606371118 * L_36 = V_1;
		ByteU5BU5D_t4116647657* L_37 = ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2606371118 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DateTimeU5BU5D_t1184652292* XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t915637231 * V_1 = NULL;
	DateTimeU5BU5D_t1184652292* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (DateTimeU5BU5D_t1184652292*)((DateTimeU5BU5D_t1184652292*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeU5BU5D_t1184652292* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (DateTime_t3738529785 )((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeU5BU5D_t1184652292* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t915637231 * L_20 = (List_1_t915637231 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t915637231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t915637231 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t915637231 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t915637231 *, DateTime_t3738529785 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t915637231 *)L_24, (DateTime_t3738529785 )((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t915637231 * L_36 = V_1;
		DateTimeU5BU5D_t1184652292* L_37 = ((  DateTimeU5BU5D_t1184652292* (*) (List_1_t915637231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t915637231 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t3473357058* XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t406394953 * V_1 = NULL;
	DateTimeOffsetU5BU5D_t3473357058* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (DateTimeOffsetU5BU5D_t3473357058*)((DateTimeOffsetU5BU5D_t3473357058*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_t3473357058* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (DateTimeOffset_t3229287507 )((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_t3473357058* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t406394953 * L_20 = (List_1_t406394953 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t406394953 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t406394953 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t406394953 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t406394953 *, DateTimeOffset_t3229287507 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t406394953 *)L_24, (DateTimeOffset_t3229287507 )((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t406394953 * L_36 = V_1;
		DateTimeOffsetU5BU5D_t3473357058* L_37 = ((  DateTimeOffsetU5BU5D_t3473357058* (*) (List_1_t406394953 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t406394953 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DecimalU5BU5D_t1145110141* XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t125366826 * V_1 = NULL;
	DecimalU5BU5D_t1145110141* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (DecimalU5BU5D_t1145110141*)((DecimalU5BU5D_t1145110141*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_t1145110141* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (Decimal_t2948259380 )((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_t1145110141* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t125366826 * L_20 = (List_1_t125366826 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t125366826 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t125366826 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t125366826 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t125366826 *, Decimal_t2948259380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t125366826 *)L_24, (Decimal_t2948259380 )((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t125366826 * L_36 = V_1;
		DecimalU5BU5D_t1145110141* L_37 = ((  DecimalU5BU5D_t1145110141* (*) (List_1_t125366826 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t125366826 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DoubleU5BU5D_t3413330114* XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2066740105 * V_1 = NULL;
	DoubleU5BU5D_t3413330114* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (DoubleU5BU5D_t3413330114*)((DoubleU5BU5D_t3413330114*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_t3413330114* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (double)((*(double*)((double*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_t3413330114* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t2066740105 * L_20 = (List_1_t2066740105 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2066740105 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2066740105 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t2066740105 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t2066740105 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2066740105 *)L_24, (double)((*(double*)((double*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2066740105 * L_36 = V_1;
		DoubleU5BU5D_t3413330114* L_37 = ((  DoubleU5BU5D_t3413330114* (*) (List_1_t2066740105 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2066740105 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int16U5BU5D_t3686840178* XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t4024895129 * V_1 = NULL;
	Int16U5BU5D_t3686840178* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (Int16U5BU5D_t3686840178*)((Int16U5BU5D_t3686840178*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_t3686840178* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int16_t)((*(int16_t*)((int16_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t4024895129 * L_20 = (List_1_t4024895129 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t4024895129 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t4024895129 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t4024895129 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t4024895129 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t4024895129 *)L_24, (int16_t)((*(int16_t*)((int16_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t4024895129 * L_36 = V_1;
		Int16U5BU5D_t3686840178* L_37 = ((  Int16U5BU5D_t3686840178* (*) (List_1_t4024895129 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t4024895129 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t128053199 * V_1 = NULL;
	Int32U5BU5D_t385246372* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t385246372* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t385246372* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t128053199 * L_20 = (List_1_t128053199 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t128053199 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t128053199 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t128053199 *)L_24, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t128053199 * L_36 = V_1;
		Int32U5BU5D_t385246372* L_37 = ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t128053199 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int64U5BU5D_t2559172825* XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t913674750 * V_1 = NULL;
	Int64U5BU5D_t2559172825* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (Int64U5BU5D_t2559172825*)((Int64U5BU5D_t2559172825*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_t2559172825* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_t2559172825* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t913674750 * L_20 = (List_1_t913674750 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t913674750 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t913674750 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t913674750 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t913674750 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t913674750 *)L_24, (int64_t)((*(int64_t*)((int64_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t913674750 * L_36 = V_1;
		Int64U5BU5D_t2559172825* L_37 = ((  Int64U5BU5D_t2559172825* (*) (List_1_t913674750 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t913674750 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* XmlListConverter_ToArray_TisRuntimeObject_m1751379490_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisRuntimeObject_m1751379490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t257213610 * V_1 = NULL;
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t257213610 * L_20 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t257213610 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t257213610 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_24, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t257213610 * L_36 = V_1;
		ObjectU5BU5D_t2843939325* L_37 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR SByteU5BU5D_t2651576203* XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3141652404 * V_1 = NULL;
	SByteU5BU5D_t2651576203* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (SByteU5BU5D_t2651576203*)((SByteU5BU5D_t2651576203*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t2651576203* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int8_t)((*(int8_t*)((int8_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t2651576203* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t3141652404 * L_20 = (List_1_t3141652404 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t3141652404 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t3141652404 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t3141652404 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t3141652404 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3141652404 *)L_24, (int8_t)((*(int8_t*)((int8_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t3141652404 * L_36 = V_1;
		SByteU5BU5D_t2651576203* L_37 = ((  SByteU5BU5D_t2651576203* (*) (List_1_t3141652404 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3141652404 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2869341516 * V_1 = NULL;
	SingleU5BU5D_t1444911251* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (SingleU5BU5D_t1444911251*)((SingleU5BU5D_t1444911251*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t1444911251* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (float)((*(float*)((float*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t2869341516 * L_20 = (List_1_t2869341516 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2869341516 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2869341516 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t2869341516 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t2869341516 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2869341516 *)L_24, (float)((*(float*)((float*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2869341516 * L_36 = V_1;
		SingleU5BU5D_t1444911251* L_37 = ((  SingleU5BU5D_t1444911251* (*) (List_1_t2869341516 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2869341516 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR TimeSpanU5BU5D_t4291357516* XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2353233991 * V_1 = NULL;
	TimeSpanU5BU5D_t4291357516* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (TimeSpanU5BU5D_t4291357516*)((TimeSpanU5BU5D_t4291357516*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_t4291357516* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (TimeSpan_t881159249 )((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_t4291357516* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t2353233991 * L_20 = (List_1_t2353233991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2353233991 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2353233991 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t2353233991 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t2353233991 *, TimeSpan_t881159249 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2353233991 *)L_24, (TimeSpan_t881159249 )((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2353233991 * L_36 = V_1;
		TimeSpanU5BU5D_t4291357516* L_37 = ((  TimeSpanU5BU5D_t4291357516* (*) (List_1_t2353233991 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2353233991 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt16U5BU5D_t3326319531* XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3649799700 * V_1 = NULL;
	UInt16U5BU5D_t3326319531* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (UInt16U5BU5D_t3326319531*)((UInt16U5BU5D_t3326319531*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_t3326319531* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_t3326319531* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t3649799700 * L_20 = (List_1_t3649799700 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t3649799700 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t3649799700 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t3649799700 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t3649799700 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3649799700 *)L_24, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t3649799700 * L_36 = V_1;
		UInt16U5BU5D_t3326319531* L_37 = ((  UInt16U5BU5D_t3326319531* (*) (List_1_t3649799700 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3649799700 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt32U5BU5D_t2770800703* XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t4032136720 * V_1 = NULL;
	UInt32U5BU5D_t2770800703* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (UInt32U5BU5D_t2770800703*)((UInt32U5BU5D_t2770800703*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t2770800703* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t4032136720 * L_20 = (List_1_t4032136720 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t4032136720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t4032136720 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t4032136720 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t4032136720 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t4032136720 *)L_24, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t4032136720 * L_36 = V_1;
		UInt32U5BU5D_t2770800703* L_37 = ((  UInt32U5BU5D_t2770800703* (*) (List_1_t4032136720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t4032136720 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt64U5BU5D_t1659327989* XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t1311147538 * V_1 = NULL;
	UInt64U5BU5D_t1659327989* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = (UInt64U5BU5D_t1659327989*)((UInt64U5BU5D_t1659327989*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_t1659327989* L_4 = V_2;
		int32_t L_5 = V_3;
		XmlValueConverter_t585560190 * L_6 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_3;
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (int32_t)L_8);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___nsResolver1;
		RuntimeObject * L_13 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_6, (RuntimeObject *)L_9, (Type_t *)L_11, (RuntimeObject*)L_12);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_14 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_t1659327989* L_18 = V_2;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject * L_19 = ___list0;
		List_1_t1311147538 * L_20 = (List_1_t1311147538 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t1311147538 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t1311147538 *)L_20;
		RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_21;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_22 = V_4;
			RuntimeObject * L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			V_5 = (RuntimeObject *)L_23;
			List_1_t1311147538 * L_24 = V_1;
			XmlValueConverter_t585560190 * L_25 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_26 = V_5;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			RuntimeObject* L_29 = ___nsResolver1;
			RuntimeObject * L_30 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_25, (RuntimeObject *)L_26, (Type_t *)L_28, (RuntimeObject*)L_29);
			((  void (*) (List_1_t1311147538 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t1311147538 *)L_24, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_30, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_31 = V_4;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			if (L_32)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_35 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t1311147538 * L_36 = V_1;
		UInt64U5BU5D_t1659327989* L_37 = ((  UInt64U5BU5D_t1659327989* (*) (List_1_t1311147538 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t1311147538 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_37;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Converter_2_t2442480487 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_000e:
	{
		Converter_2_t2442480487 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral879148213, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_001c:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t2442480487 * L_7 = ___converter1;
		ObjectU5BU5D_t2843939325* L_8 = ___array0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		RuntimeObject * L_12 = ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2442480487 *)L_7, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)L_12);
		int32_t L_13 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_14 = V_1;
		ObjectU5BU5D_t2843939325* L_15 = ___array0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = V_0;
		return L_16;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t2950945753_m2874764222_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToApm_End_TisInt32_t2950945753_m2874764222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t61518632 * V_0 = NULL;
	TaskWrapperAsyncResult_t2316075138 * V_1 = NULL;
	TaskAwaiter_1_t1450460888  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_t2316075138 *)((TaskWrapperAsyncResult_t2316075138 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t2316075138 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t2316075138 * L_2 = V_1;
		Task_t3187275312 * L_3 = (Task_t3187275312 *)L_2->get_Task_0();
		V_0 = (Task_1_t61518632 *)((Task_1_t61518632 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_t61518632 *)((Task_1_t61518632 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t61518632 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m4181844776(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_t61518632 * L_6 = V_0;
		TaskAwaiter_1_t1450460888  L_7 = ((  TaskAwaiter_1_t1450460888  (*) (Task_1_t61518632 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_t61518632 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t1450460888 )L_7;
		int32_t L_8 = TaskAwaiter_1_GetResult_m3496793423((TaskAwaiter_1_t1450460888 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_8;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Object>(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskToApm_End_TisRuntimeObject_m300046032_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToApm_End_TisRuntimeObject_m300046032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t190679043 * V_0 = NULL;
	TaskWrapperAsyncResult_t2316075138 * V_1 = NULL;
	TaskAwaiter_1_t1579621299  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_t2316075138 *)((TaskWrapperAsyncResult_t2316075138 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t2316075138 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t2316075138 * L_2 = V_1;
		Task_t3187275312 * L_3 = (Task_t3187275312 *)L_2->get_Task_0();
		V_0 = (Task_1_t190679043 *)((Task_1_t190679043 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_t190679043 *)((Task_1_t190679043 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t190679043 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m4181844776(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_t190679043 * L_6 = V_0;
		TaskAwaiter_1_t1579621299  L_7 = ((  TaskAwaiter_1_t1579621299  (*) (Task_1_t190679043 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_t190679043 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t1579621299 )L_7;
		RuntimeObject * L_8 = TaskAwaiter_1_GetResult_m3577040539((TaskAwaiter_1_t1579621299 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_8;
	}
}
