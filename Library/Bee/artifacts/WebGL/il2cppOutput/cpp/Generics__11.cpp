﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>
struct Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
// System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1;
// System.Collections.Generic.IDictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct IDictionary_2_t7E8E7CA08678AC2AD024C030F222B579D7A7511E;
// System.Collections.Generic.IDictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct IDictionary_2_t911E7C6891A7ADB170F6C818001C87A5D06BAC84;
// System.Collections.Generic.IDictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct IDictionary_2_tFC28CDD6D049617C0609DABD4F8889AE7E75D410;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>
struct IDictionary_2_t084FD781982177C406B56BB27B1B3ECB3F76C367;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>
struct IDictionary_2_t45C204FCDE3C381D7C1F0405B8812494D3E51885;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>
struct IDictionary_2_t650F516B1BA34C89C8FAE7C3B7D0EBF4970EF621;
// System.Collections.Generic.IDictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct IDictionary_2_tF99DB6297B0A6D0F2540D9AB5DE27DC5CAD6B301;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>>
struct IEnumerator_1_t3C8E373F7DD0020F4D8FD00D003791F7B2966676;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>>
struct IEnumerator_1_tC596012C805DC91044EF3163076FDF298AF18632;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>>
struct IEnumerator_1_t16D13278B7705F043E3CDE45DA514F629BBCA5DD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>
struct IEnumerator_1_t2ECE81E5EF3A972F3417B22E70AACC561664F3BE;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct IEnumerator_1_t2DE25C0502538C48EB27BE7209E1CB26B8762D66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>
struct IEnumerator_1_tB4FA0BD6B7EB965C4C6BE1CC788A60397E4260D1;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>>
struct IEnumerator_1_t8A20B9E97C5C8B430E0D2665BCD73989500E0A2B;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.UInt32>
struct KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.UInt32>
struct ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>[]
struct EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>[]
struct EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.UInt32>[]
struct EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018;
// System.Collections.Generic.Dictionary`2/Entry<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>[]
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>[]
struct KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC;
// System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>[]
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724;
struct EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36;
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8;
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5;
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
struct EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6;
struct KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C;
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075;
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF;
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
struct KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>
struct Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.UInt32>
struct KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.UInt32>
struct ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>
struct Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>
struct Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.UInt32>
struct Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	uint32_t ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>
struct KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;
};

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>
struct SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 
{
	// T1 UnityEngine.ProBuilder.SimpleTuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 UnityEngine.ProBuilder.SimpleTuple`2::m_Item2
	int32_t ___m_Item2_1;
};

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>
struct SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 
{
	// T1 UnityEngine.ProBuilder.SimpleTuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 UnityEngine.ProBuilder.SimpleTuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XPlacement
	float ___m_XPlacement_0;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YPlacement
	float ___m_YPlacement_1;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XAdvance
	float ___m_XAdvance_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YAdvance
	float ___m_YAdvance_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>
struct Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>
struct Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.UInt32>
struct Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___value_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.ExceptionArgument
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;
};

// System.ExceptionResource
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;
};

// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	// System.Int32 UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags::value__
	int32_t ___value___2;
};

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphIndex
	uint32_t ___m_GlyphIndex_0;
	// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphValueRecord
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};

// System.Collections.Generic.InsertionBehavior
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FirstAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_SecondAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FeatureLookupFlags
	int32_t ___m_FeatureLookupFlags_2;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Text.RegularExpressions.Regex/CachedCodeEntryKey
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex/CachedCodeEntryKey::_options
	int32_t ____options_0;
	// System.String System.Text.RegularExpressions.Regex/CachedCodeEntryKey::_cultureKey
	String_t* ____cultureKey_1;
	// System.String System.Text.RegularExpressions.Regex/CachedCodeEntryKey::_pattern
	String_t* ____pattern_2;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Regex/CachedCodeEntryKey
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options_0;
	char* ____cultureKey_1;
	char* ____pattern_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Regex/CachedCodeEntryKey
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options_0;
	Il2CppChar* ____cultureKey_1;
	Il2CppChar* ____pattern_2;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
struct Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>
struct EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>

// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt32>

// System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.UInt32>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>

// UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Int32

// System.Int32

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.UInt32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.UInt32>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.ExceptionArgument

// System.ExceptionArgument

// System.ExceptionResource

// System.ExceptionResource

// System.Collections.Generic.InsertionBehavior

// System.Collections.Generic.InsertionBehavior

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Text.RegularExpressions.Regex/CachedCodeEntryKey

// System.Text.RegularExpressions.Regex/CachedCodeEntryKey

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/Entry<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.ArrayTypeMismatchException

// System.ArrayTypeMismatchException

// System.InvalidCastException

// System.InvalidCastException

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>[]
struct EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 m_Items[1];

	inline Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item1_0), (void*)NULL);
	}
	inline Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item1_0), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>[]
struct KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 m_Items[1];

	inline KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item1_0), (void*)NULL);
	}
	inline KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item1_0), (void*)NULL);
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>[]
struct EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB m_Items[1];

	inline Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
	}
	inline Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 m_Items[1];

	inline KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item2_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Item2_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 m_Items[1];

	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 m_Items[1];

	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 m_Items[1];

	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 m_Items[1];

	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 m_Items[1];

	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B m_Items[1];

	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.UInt32>[]
struct EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 m_Items[1];

	inline Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE m_Items[1];

	inline KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>[]
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 m_Items[1];

	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>[]
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 m_Items[1];

	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_gshared_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_gshared_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mCD1965C8999718748303459838699E3582FAC042_gshared (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4_gshared (Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2* __this, Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_gshared_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_gshared_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF3A22AB9A38FD93665A9B13FCE120E471B2B835B_gshared (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6_gshared (Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93* __this, Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_gshared_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_gshared_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46_gshared (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695_gshared (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A* __this, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_gshared_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_gshared_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8_gshared (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, uint32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D_gshared (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD* __this, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_gshared_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_gshared_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC22FB07EE2FDA9C56C5EABCF1AE665AD96D769C9_gshared (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, uint32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3_gshared (Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3* __this, Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2*, const RuntimeMethod*))KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Value()
inline SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method)
{
	return ((  SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 (*) (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2*, const RuntimeMethod*))KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mCD1965C8999718748303459838699E3582FAC042 (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))KeyValuePair_2__ctor_mCD1965C8999718748303459838699E3582FAC042_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4 (Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2* __this, Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2*, Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Value()
inline SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method)
{
	return ((  SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 (*) (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF3A22AB9A38FD93665A9B13FCE120E471B2B835B (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))KeyValuePair_2__ctor_mF3A22AB9A38FD93665A9B13FCE120E471B2B835B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6 (Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93* __this, Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93*, Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, const RuntimeMethod*))Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041*, const RuntimeMethod*))KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Value()
inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method)
{
	return ((  GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E (*) (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46 (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695 (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A* __this, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655*, const RuntimeMethod*))KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8 (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, uint32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655*, uint32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD* __this, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360 (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, uint32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4 (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC22FB07EE2FDA9C56C5EABCF1AE665AD96D769C9 (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, uint32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE*, uint32_t, uint32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mC22FB07EE2FDA9C56C5EABCF1AE665AD96D769C9_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3 (Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3* __this, Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3*, Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, const RuntimeMethod*))Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Key()
inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2 (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Int32 System.Text.RegularExpressions.Regex/CachedCodeEntryKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5681B894E68113FC2A1078576EE4490E096E7DC1_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0BC6665324248405171FC160AD223AB3EBDF5DE4_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA37A0DB914A94C424773804009C252DA03295976_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1173C4BEED4F9BB98B39361CA3B90DE71C778F38_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE1D88B60E98B414CB6C047A16450C3AD4079B1B6_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7F63A0C52EED2345615A17E43177EC3C7D99D6BC_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* G_B2_0 = NULL;
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* L_11 = ((Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_20 = V_1;
		int32_t L_21 = V_2;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_33;
				L_33 = KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBF56EDD333373566C96F1E1602B7E76C10893379_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m7114603A76B62ADCF3826B89C7F207A7EAB0059F_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0F7EF8DDAD06CC6CD37187DC7368F869AC22838F_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35* Dictionary_2_get_Keys_m2B0C40787CE7A37E995E3414B5D924657383E646_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35* L_1 = (KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35*, Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB85094C64603A85BBAA306DA204FAB641192CA35* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F* Dictionary_2_get_Values_m556C490CFF24592610216662FCB12F6A6F21810B_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F* L_1 = (ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F*, Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t178B889218487EDEEE5AB15979940157D34CB14F* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 Dictionary_2_get_Item_mF7140496DEFF7C1C3115771F6406D049CA34BF2C_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662));
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C1A7925B825F53E5A716FD78E20762B62DF90EE_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0EECA40B4E408599AE27E1DD970CDE7A721AD605_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m627059E962337D46258482D0877E1960DA6A16B4_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_1;
		L_1 = KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF649C26C1A8EC9F80FA4033FFF348D2B2E2E27B6_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* L_3;
		L_3 = ((  EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_7;
		L_7 = KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCE0680ADE6245AA99235EDA579F6ECF7E3E0FCF3_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* L_3;
		L_3 = ((  EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_7;
		L_7 = KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m78F2519396F3108B8CA38DD84C9AB1001E5F2AF5_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2AEBB5A83571D4A5254372CBDA94846E6FD7C4C7_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9F51A6032973D4586B127067C17069B175B7B498_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_0 = NULL;
	int32_t V_1 = 0;
	SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_5 = V_0;
		int32_t L_6 = V_1;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* L_15;
		L_15 = ((  EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_16 = V_0;
		int32_t L_17 = V_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* L_24;
		L_24 = ((  EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t5A29CE79661E62E5B4E7EF4C9107A83DC65E3878* L_28 = V_4;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_29 = V_0;
		int32_t L_30 = V_5;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m81D6D6756C9BC6BCAB8D0B596E9987CA9DF5387B_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_17 = V_1;
		int32_t L_18 = V_2;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mCD1965C8999718748303459838699E3582FAC042((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 Dictionary_2_GetEnumerator_m5AEE5C5B6C0C78478ABF020C45499F19865F77F1_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mD349CA43EE704433A7CDEE4160D80B04ED941251_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mAA6CED851ACF96F76003C7638FEA4F2D082D861B_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_14 = (KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*)(KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_15 = V_0;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC8F243872D746D95CAF9214BBF74AD0D8732B6C6_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD15CE0DF0F8522598EF88D3D5785878E86849F40_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_5 = (EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724*)(EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1FA06EFFB3557CFC8EDBD916AE4398851BE39F73_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_31 = V_0;
		int32_t L_32 = V_5;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Item1_0), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_58 = V_0;
		int32_t L_59 = V_5;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___m_Item1_0), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_84 = V_0;
		int32_t L_85 = V_5;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___m_Item1_0), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_123 = V_10;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___m_Item1_0), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3D2909845C89F669A61B41824253B82FDAFACBB2_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_25 = V_3;
		int32_t L_26 = V_4;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_27;
		L_27 = KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE581C1C9F517BD11DC8E64DA3A4A9484D1D7A46C_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7DC89B855DF7E0D957D85BCA4D145C260BA64595_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_3 = (EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724*)(EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_5 = __this->____entries_1;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m976FD27DC28A92F5D552A3786478D8A068D00C59_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_43 = V_4;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662* L_44 = (SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tA6E773C2F252E5D5FAB7460E5C943250A846A6E9* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDFD73FE00B55A2E75BEC28E4B3E0F26728DC89C9_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662* L_3 = ___1_value;
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)L_3)->___m_Item1_0), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6C8A7187826B7F68213D5C7CF7C308E76E400886_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, uint32_t ___0_key, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7346E1B4FACF241E71A08083B120F4D2EC2BABE3_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4575382952A04952F0881154F73BCE5134FD4CC6_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m598B4098982DD37724D2AABA91FFFB3692B6DAC0_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, KeyValuePair_2U5BU5D_tC132849DF23CE43D12AF44F2846F722685B1BFF6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_30 = V_2;
		int32_t L_31 = V_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_49 = V_6;
			int32_t L_50 = V_7;
			uint32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_52 = V_6;
			int32_t L_53 = V_7;
			SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mCD1965C8999718748303459838699E3582FAC042((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52BF2853978A5F93EE9A6207F3416855994EE078_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m68AD5C120CFCD75FA2F65E7D0C60EEDADC060B6B_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m587EA308AEFBE18AC63D50E33679C64B2AA19304_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t52A6D11B72CA016CCF10F931A8155452D9100724* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mC452F17BC8F5B8B693EC2313829C35FAED0D7E7C_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)((SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)(SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m10010967AC5937C02F39005186D49F67332EB7E8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBC88D9560CF4C37B7CF884E9BF49B9CF14F7C0B4_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Int32>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29EF516656E6C3F82E904B8F8D3C4E653545964F_gshared (Dictionary_2_t2F144F04A73C28A236E0B30972A6EC8633C9471F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DA1BC8C67BC7F166CC71B6A20B02CCEF543C5D4((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tD8BBC3E4A5157E6F390C97B62227872968A265C2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF14A2F2B3AC4873F25B84630FB430C06B01A7009_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m68C14CDB8BB27C2C975E7D7628F7B3E8C0F1B07D_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1275A3F089CDD901A21CDCA0E80B1B372A8BEE8_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0E048805556748A4EEB6277088CFC7D8D015F85A_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2078E6D5C4E1FC3C0D60C73692D4767A973D8636_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92953E6A0536ABBEC91D0EF6AB021F6F3A91EE19_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* G_B2_0 = NULL;
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* L_11 = ((Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_20 = V_1;
		int32_t L_21 = V_2;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_33;
				L_33 = KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m09BBCFB81183C1B275CE1CF563DA6F772FA30895_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m5893712D8B34F31D5E91324DF944B8F239B612D8_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0B8FA63CAE5EC06E71F28BCCEBAE0D4ABCC7AA71_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54* Dictionary_2_get_Keys_m695F71A8DB08CFF65C311A386C6CA3CC114ED12F_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54* L_1 = (KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54*, Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8FD41AF49E808EE06236D0909E101F82BF1A8F54* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96* Dictionary_2_get_Values_m89F12FC3272D67B9806211236EA9DDA38FE6EE15_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96* L_1 = (ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96*, Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA7D2256AE681D223BA7BA7686AFEAE9BCC7B9E96* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 Dictionary_2_get_Item_m690C8C9078F5708FEAE61184278E66323D0FC71B_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92));
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7CFA8D4D6BC0C1D8052E44FC47AF462001056138_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m11B213D0F8E0C1CC3A47B25A158DE502CD7C2836_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m119D1A948F46ACBC925C3D6C65B4556C6A07D311_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_1;
		L_1 = KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m946BD65CC05B785E47865E9F3C951CDB9AF7BBB6_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* L_3;
		L_3 = ((  EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_7;
		L_7 = KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7881BE2E8AAC98FB7CCABD415B6CA3050932A649_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* L_3;
		L_3 = ((  EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_7;
		L_7 = KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2FDDAE5C5BF4815CB06198866C084B3881D28E91_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4028EF9E70854EAA6D6230D510C7258A96EB2982_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6D399DA3BDAC698DC4FE4682058D108F4B6E68F1_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_0 = NULL;
	int32_t V_1 = 0;
	SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_5 = V_0;
		int32_t L_6 = V_1;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* L_15;
		L_15 = ((  EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_16 = V_0;
		int32_t L_17 = V_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* L_24;
		L_24 = ((  EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t979DF25E81F4E89215C682EAA0C5BFE44C689BAF* L_28 = V_4;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_29 = V_0;
		int32_t L_30 = V_5;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5E97C878A30A8CA0B38832B8FEC48E640A18B4C9_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_17 = V_1;
		int32_t L_18 = V_2;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF3A22AB9A38FD93665A9B13FCE120E471B2B835B((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 Dictionary_2_GetEnumerator_m1C93960D3605DB8A28D1A221EDFBB9AAEBA36519_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1074B16F5A92FE007F994D35B97EE30776991F25_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m9D58C3FEB8E2A6F6508DE0A8BCF74EB593FE1F7A_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_14 = (KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*)(KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_15 = V_0;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m59D1E69A6C7D91754D1011A5C8E56B0F7B609010_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mFA4B9F4B171CBA4B708C37879E3B28ECFB4DCD2E_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_5 = (EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36*)(EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC72A1A88DEABE8280458C98952E184F13142F649_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_31 = V_0;
		int32_t L_32 = V_5;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_58 = V_0;
		int32_t L_59 = V_5;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_84 = V_0;
		int32_t L_85 = V_5;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_123 = V_10;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___m_Item2_1), (void*)NULL);
		#endif
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m9BBC2F9F606CB04FCE523BCCDF5F9B87C4810C07_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_25 = V_3;
		int32_t L_26 = V_4;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_27;
		L_27 = KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42C3DE26B395123DE69C5390422CB55BB098CAC0_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB139879F87271EEEE8BC0157AF8FB0721998F0F1_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_3 = (EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36*)(EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_5 = __this->____entries_1;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m533D57772F2BAC5498D171BF4421C3EB66C5500A_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_43 = V_4;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92* L_44 = (SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tD1DEF804A7672A54905D39B6E195772F41722FEB* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4C5331826BB461F25F2EAD0BA2E3020B6149644A_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92* L_3 = ___1_value;
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)L_3)->___m_Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)L_3)->___m_Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5A9FB75BE84DC3A43C4A4DA677027730C6FA770D_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, uint32_t ___0_key, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7507836A677A3B1644E2BB946998F99F7CF1D491_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6ED46C35EFC9C142D9D076A64537BF3577FF5441_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m7C86DB76B836FDF1170C4ED0C1047FAB45455B27_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, KeyValuePair_2U5BU5D_tAA225041104E45B2A695F71C8F713F59536D786C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_30 = V_2;
		int32_t L_31 = V_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_49 = V_6;
			int32_t L_50 = V_7;
			uint32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_52 = V_6;
			int32_t L_53 = V_7;
			SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF3A22AB9A38FD93665A9B13FCE120E471B2B835B((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB2A31703CDAEB0593949D25EC88F929620C12023_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mFFDCC1996BDA8A1B2642677DBD2689F27F42F019_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m9E8249508500F9058C312342437453EED4EF05C4_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t87D753B611B2002CD8050FD536E12BB390178A36* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5CF6E6EB978C0CE5E0C57BFEE4058D002E4423D8_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)((SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)(SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m722D3CC6B91DEF5C61604F49E9925362344FF072_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDA8B15CE0B2A68A38DED0CEAB744D39B90BCDD8E_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD7970B2DAFCB6382BF4095BCCC725532D7063D41_gshared (Dictionary_2_tCF029A427DAD1EF310EA1C01F107A23BF9B782F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m76F2878456E18F8B96103AFC8E6E199A34CC40C6((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tC1AE43EBE8AC74E358B09010677BCBE7D61E5F93 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m90329A491EC6677EAD060E1A2B5FA927F740732D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC8D89A9CCA16467D113D719D18AA3C277F013C08_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9A0B72F75DF5CD86DF2389EDE8C839347D503F25_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF56B6C6564179D48F91E595F9689B91DC4E2E191_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF430F074657FA4DBF61B4DBF670C913CA9201AF5_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2282892FA1EA54CCDF1D53C6FEA38B4E4A4C9551_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* G_B2_0 = NULL;
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* L_11 = ((Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_20 = V_1;
		int32_t L_21 = V_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_33;
				L_33 = KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m339F468B952BCCC068DF44E9AAEC0278EE157AD9_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mEFB4A0D96A39D8C5C8221A108C3141E4E242555C_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4557ECACE9B75E789999F3AEA16EB79343DC895D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* Dictionary_2_get_Keys_m320C99AF5B086AE1E65D283DF6DA20238A2AD8C6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_1 = (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* Dictionary_2_get_Values_m683288307B651515751FB86E04C16970682BEB74_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_1 = (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E Dictionary_2_get_Item_mDBA6418F99B15D890F64E29133749516DBF67708_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m584A9F1DCD9BDBD1DBC9A0537D74556EED0768B7_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD03C85BAE7AC766EE09FF58CEB2E7EA465ACB627_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m365017832FF844E4B94463FC2A2C2A13E1C49871_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1;
		L_1 = KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1EB4A7C2FBD22C074A479BF1D9C372E7FAE51453_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_3;
		L_3 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7;
		L_7 = KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8605716247D32B46E0C6AF9B3BD4178E2CE4ABA7_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_3;
		L_3 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7;
		L_7 = KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mADDC1A383A60B3DE6DC7659B2F436F5818B53087_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m01538A1116F2A94F0A884F5E555B115F9F0D2113_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB9F9529109E9205A65FAF3C914B48DE8FF309CCA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_0 = NULL;
	int32_t V_1 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = V_0;
		int32_t L_6 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_15;
		L_15 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_16 = V_0;
		int32_t L_17 = V_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_24;
		L_24 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_28 = V_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_29 = V_0;
		int32_t L_30 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m44D51431BDAA86C2AFCB0556C88B88099D142277_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_17 = V_1;
		int32_t L_18 = V_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A Dictionary_2_GetEnumerator_m3C2F325D23343ACA87F7512E4824A99F0280776E_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5D026638B97D1CEE9AAE95B59D8D1076D6370324_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEE811F9CE40A6EF604E0FEA558C43C0A840CF813_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_14 = (KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*)(KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_15 = V_0;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4FDD2390EB77EC971C27070B5CD217873DABF448_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4FC7E966D08C35F05AE53D759C267433889106D6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)(EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCD1260D485A3D7DAA43854F0F47BB372D0BEEFFF_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_31 = V_0;
		int32_t L_32 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_58 = V_0;
		int32_t L_59 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_84 = V_0;
		int32_t L_85 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_123 = V_10;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m656128CC952A86778483DB72B79AF57D922F325E_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_25 = V_3;
		int32_t L_26 = V_4;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_27;
		L_27 = KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFC20CE9BBB718C958FFA612346570D7AAE5AED8C_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD85DE3A2C6533C15A01BB7BF93F46F35C08D2E0D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_3 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)(EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = __this->____entries_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m465CF1813333E05E5743C1A90689D64E8E68DFCA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_43 = V_4;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_44 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m45061EA2C8BF9DD9DC9DA92DAB968171136507DA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___1_value;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m521A93AECAF0C51DC8964B23A09CB04F0E7EC179_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___0_key, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mBA03F700C319FADCB08B371238B1241FD02CBC21_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA6B9552999D6F2D4172AE56003A0F01F9F58DAF6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBE5456473E55BC8C133F74668701C7839B9236CC_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_30 = V_2;
		int32_t L_31 = V_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_49 = V_6;
			int32_t L_50 = V_7;
			uint32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_52 = V_6;
			int32_t L_53 = V_7;
			GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m81E4A88E187D4D1FBB41909EB67EA2FC9A51D22D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mEE6CA69FEDF16FA1BCE6489C600D4681D225DEE4_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB9DAF592E73E4EF858CC2935AF15974A647EB803_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mC4BC23072C4EC46F0C4CBAA3208934D66E376256_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)((GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1B907289F15E0B5EF0C3F7837DE6CE22FDF3A6B0_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE5E05EB7F35C4433EA7470E178A3FD3993FE056D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA5DD1F175F5E02EF0EC3C722F12AB64B51A6CE7F_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0AB9A68499E6533AAFCCFD40D241EDB672F0EE52_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1A617B0BF5E8A6D010DD77C588D50489744C84B_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m202611971B014F5A3BD37BC6C69CD80ECEACE409_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m472E65A12A19C651BD4318B2A2EA861524582B71_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m10B80ADCAADC1F264BCED66B2ED6A7CED20C55DD_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DA845638AB89B95F6E37A71BBB6345ADA2CD89_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* G_B2_0 = NULL;
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* L_11 = ((Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72795D5EA15FEAE2A46DEEE72C630E6375AEFFAB_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m0DE7448902B8D311F0B9B1191B88E3A09C73F07B_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA3D8D0FBCD42B736F5B977C5E31EFEF1DA9881DC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* Dictionary_2_get_Keys_mAC5988459D1B3F4043FFBCE86C90D82AC60FA6DC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_1 = (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* Dictionary_2_get_Values_m88589DD99A8EA6058E4C0D9AEA2E6D259AA341B5_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_1 = (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mE2803DB0742B756F3A48C91DE1596A518E21D1B9_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9E1111D1C17A6F6CE4911149F06E48B8C864AC61_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9BA81ED1DA118BD3EC9AA95C5C8E45D61978FBED_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAB342263778D968849CCB6B63C0C50F8B5077564_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mFF9DBC9DD15FF825224E60F865DEFF5087952CB1_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE98852B2F39EDBB8FBEEA1D7472756041F68E7F8_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFCB6D718ED8D00722A96C5EF4ECF1ECACA56A490_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m07765640B81B043200CAF5B09513C2292F0B7F5D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2060B7C35D5F7B3D12703628A2D24E23DFA9752C_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_28 = V_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_29 = V_0;
		int32_t L_30 = V_5;
		int32_t L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3DA9D34F0429F15D66C59FAF8319D9306E4A7BF7_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD Dictionary_2_GetEnumerator_m57D9D45F7280F60924A01DA9D4EC3B2592F86DFE_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m487A844716EEE32680CF1A25D2AF83D0DFBB06B0_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mA4A88745704F29781A5A7A0F7EDE1BC1330D187C_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_14 = (KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*)(KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_15 = V_0;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m80CED22BCEE4629D829359BEED9EC697FAFC6FFA_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCAAB85D93451E8BBE06D5B8C01D2500345AAFFEC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)(EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m43E9602C6BB8265B512388F2691B5AD2F98ADDD3_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_58 = V_0;
		int32_t L_59 = V_5;
		int32_t L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_84 = V_0;
		int32_t L_85 = V_5;
		int32_t L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_123 = V_10;
		int32_t L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mFAC8D029EE11C40486F5790D547DBD484355D58F_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD7DD908BDA7B6E005E6C84621687010A420BA0BC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7B26DC8194A57331B1BABB833F5E9F93C488CB0E_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_3 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)(EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = __this->____entries_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF23F35E7E009C3D533255E91A7B938AB813F2B1D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5DB88361689637CCE820B2D6DD707A64DF14270B_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m19318413892C1CF448898EFF0DD336F1639AF5AD_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30A53BAC6E0D822D4760EE772EF990CBBCCE1F37_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1CCB43D96E4DAD66F1C17247326FFF7EF505EF9D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m967C33EB67459213858B04FC515194E509DFE904_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_49 = V_6;
			int32_t L_50 = V_7;
			uint32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_52 = V_6;
			int32_t L_53 = V_7;
			int32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51B68D3ECBE635C050380D9088D4EEF300DE97D0_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14549FF13662935B4C2138DE111BE4AD2C0CBDC1_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mBE30A762511131BA7210D5C6B0744157023E6D26_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m940C5529E6532903D05E4F2E6B2EA755413353DB_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m385C4925336CC26B06BF608FA6002412E26624D5_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m38C21A5BF3FD5F329EAED99888EA777D65F26649_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mFAE0DC057589E507465B1BC56804D0765EC52DCE_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m02AD1784407F445D19B2B4EFCE429C2E8F81B9A1_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE2D8DF4C129EB33F9695465925B905E79288DB16_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2ABCF20C256199B96F4A78D4671D76E70847AD3F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB35F75396A804B4B29D68DE243B95E6589E1672A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* G_B2_0 = NULL;
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* L_11 = ((Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_1;
		int32_t L_21 = V_2;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D9BAECBF69ABEEFF1551820EE5E3899F0D04B3D_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m3A9F2B3527FF7B0FBA2B5313E97BD0CD18E9935C_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* Dictionary_2_get_Keys_mBA659D62B70FCB4BB08F36AE7D22AE17AD15CF7B_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_1 = (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* Dictionary_2_get_Values_mA8EF4E1B3C60A8B026C6CDBB4D0613A16EB0CC28_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_1 = (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m1ABC559AFCB634174C216DFF864168F9D0611B91_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF8CF90FC5CF4EC0850589A09886C4EEA3FF0B0AB_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8FFEB29E1D6E73E67F75B3E2523E3ED89E0A61C9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBA806CA0CD33E392F4C20ABE9D271BD80FC10DE7_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2561EDEA2235BCE5FAED59F4E2E352FDA7C71115_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mEA242D651E1C66041A67248197AB3924BDE83981_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_0 = __this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 Dictionary_2_GetEnumerator_mBDE9E0C0607CC54561E6AC655F880228C9009692_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEA48072BFD12860C0FBE936B0251E11ADF0E3DCA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m7BB3A5F2ED7131F4E8951E10974CB2459D6A04FA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_14 = (KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)(KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_15 = V_0;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_58 = V_0;
		int32_t L_59 = V_5;
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_84 = V_0;
		int32_t L_85 = V_5;
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m484E2156FF4F5AC63805796D85518B32B3853B63_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = __this->____entries_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBE3855923B29F8A7CDB21CF7DD7FCD84AABEB68_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFF6626F04EE1E426ED34B058CFD6F57E6917A98E_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9585BEF8A82FDEB1D0C3937F758E306833FBBDF3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m0161D6596D60771F749EEF6ECCD4D06A950DCFB9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3696B83A2BE6E39671564F4A8B3E041713CEFCB8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = __this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_40 = __this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_47 = V_6;
			int32_t L_48 = V_7;
			uint32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46802644F1FB4FFAEDD356B271CD7142AAC86C96_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6388BB328A163B5C99807765A0E718ABD673138A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mCEC68E6C5BE33449AFF1D3D4E45A4FD75F23B3BD_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m52D17EE60DC51BAB2EE79895D6C10B81C9C0E031_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAE1FA8B12CC95772D17A1602BE41C542E1EA61FF_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9B14368D78A0F4AAADCBDC2A22536726721AEEC6_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB8D7D57BC0CC1A0C8CE90764C8E49FF8072ACD1A_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAADC301CEABB07F090DC405BDB9C860BD8040F93_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m15A034998BC63C7D93E4C51BA7FB081CA619F8AA_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5C3F12C3E7F4D60D618BE26D830A7FE1176B31E6_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C7B042294FC0329A954E72A285D0E6F3938E3E1_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m29FBB941C887D7DE89308ABC925F946E587084E2_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* G_B2_0 = NULL;
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* L_11 = ((Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_20 = V_1;
		int32_t L_21 = V_2;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				uint32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7DD15207D348C78240BC07F71A54EAE1513D3D58_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mB28D82593B751BB9DD11603AC596EC60DEC8AFDF_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBAE4AF0784D312D4BDF72E7A59340FA15AC8D6B4_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A* Dictionary_2_get_Keys_mA1782B42B39331BAFE966A542ADB65C42CA54AF0_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A* L_1 = (KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A*, Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDFD143082B4A4C7E240FB8C233E384807626C92A* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8* Dictionary_2_get_Values_mC45399CE5F49084D841D71549C3DD1F4A02D2B95_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8* L_1 = (ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8*, Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_m321D552BDA1CE1AB20FD6FB9B1F122A6D41BA635_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		uint32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB58F6775A2FFED7B37E58A0C538D93F9A0CD8C1C_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC2139B7218E341AD6993DF6F9A9A0C8EB43144AC_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3F42ED9345E903AFE86187E90B61B950A8B4795D_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		uint32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m6C24D402A14F4E2A2AD0A4C93065E3C73E624BEC_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEC56284C1A3D9D1A322AB05F2EC20ACAC898D854_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE9BB5928625146F1BF376B47F9CA9E38D648EDA2_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m27FB6CDBBFA54394DF3D46FC96B239C50859896C_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m3DC4CF60CC2CF11ABC2B2CE63EFE14D8B4D9BEDF_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_5 = V_0;
		int32_t L_6 = V_1;
		uint32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(uint32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_15;
		L_15 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_16 = V_0;
		int32_t L_17 = V_3;
		uint32_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		uint32_t L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_28 = V_4;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_29 = V_0;
		int32_t L_30 = V_5;
		uint32_t L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		uint32_t L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF994A061E246A259566018E0797B4FF84E13E4FC_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_14 = V_1;
		int32_t L_15 = V_2;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mC22FB07EE2FDA9C56C5EABCF1AE665AD96D769C9((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 Dictionary_2_GetEnumerator_mAA581745688513F9E9E946CD53485763871F8013_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m98CA1512C579E7FDCD6522A0CD714AACE31C15F3_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB87A46BBFB8FA8672653B2E11A6C816C10EAA1E9_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_14 = (KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*)(KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_15 = V_0;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2ECDE19B5D2A49A8BC7F8A3720D28651F2CB484D_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_20 = V_2;
		int32_t L_21 = V_0;
		uint32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_39 = V_2;
		int32_t L_40 = V_0;
		uint32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_65 = V_2;
		int32_t L_66 = V_0;
		uint32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mF709B13B623B302DBADD8FF8B2B61C5EE8922ADE_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_5 = (EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018*)(EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m96FCDE0CB00CDD4FCD3AB7378B28115FA3DD5B93_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_25 = V_0;
		int32_t L_26 = V_5;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_31 = V_0;
		int32_t L_32 = V_5;
		uint32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_52 = V_0;
		int32_t L_53 = V_5;
		uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_58 = V_0;
		int32_t L_59 = V_5;
		uint32_t L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___0_key;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_78 = V_0;
		int32_t L_79 = V_5;
		uint32_t L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_84 = V_0;
		int32_t L_85 = V_5;
		uint32_t L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___0_key;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_121 = V_10;
		uint32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_123 = V_10;
		uint32_t L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m0E50F8F3C13EBEEE6EB323A9194EC11708BDBE12_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_19 = V_3;
		int32_t L_20 = V_4;
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_22 = V_3;
		int32_t L_23 = V_4;
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_25 = V_3;
		int32_t L_26 = V_4;
		uint32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2A8BF453FB39BF2BCF806AEDF2631D297385E4AA_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m19A8C04A4910A5454F1BB54875F031A324F6E1C8_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_3 = (EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018*)(EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_5 = __this->____entries_1;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_17 = V_1;
		int32_t L_18 = V_4;
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m31870CCC5C6D0D321DDEE5ED9A359CBCA1ED3884_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_21 = V_4;
		uint32_t L_22 = L_21->___key_2;
		uint32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_25 = V_4;
		uint32_t L_26 = L_25->___key_2;
		uint32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_43 = V_4;
		uint32_t* L_44 = (uint32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(uint32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8955297C80F95892F3BBC32BCF327CA3CF22B4A7_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t* L_3 = ___1_value;
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(uint32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		uint32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(uint32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m2168C80E16DAF1416EBFEDF78C83BA006FFF396A_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, uint32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB4B1D80B154D07325AC8FAF00C79A590A51D4D67_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mFAB3DD7A69CDDBD768B728042DE1DE33152E3C2D_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mCF7EF3CF5C1750306A04AE6DE14A23EDBEEE9F36_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, KeyValuePair_2U5BU5D_t6673A3A8BC821619C4A3B034C32C268FD8306FDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_25 = V_2;
		int32_t L_26 = V_3;
		uint32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_30 = V_2;
		int32_t L_31 = V_3;
		uint32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		uint32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_49 = V_6;
			int32_t L_50 = V_7;
			uint32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_52 = V_6;
			int32_t L_53 = V_7;
			uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mC22FB07EE2FDA9C56C5EABCF1AE665AD96D769C9((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2563B0EDDB6B74DB5149D74AE45FF614D9CBE95A_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD0E25923358A480C294151B9758A461D0BB8992C_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7F42CE64BBCBB1EB40DEFD975A5C8F18A81AF26E_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5287C96B29C234E552EF60087DC2E24D8072F018* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		uint32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 29), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m9465DC5AF2117436CA138EF07B78AF72D2485BFE_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7AF2684536180D67613DE54F07DF2C8C37C57CC9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mA6C8286DD042CCAD451416B65059FC1E5CB3E85A_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF25299CB6FF2495BE6379D5D7DF7F8472B460C7A_gshared (Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m98176AF404EBEFA797402D8250A3B5214331F2C3((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_t0A16057CBD5D80336A2695C2B05F5E13A07F68A3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3A972FD6D3B419C491615DEAF5727957266B2103_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80A438E817EFD7A63806E2AA6A36765099E76981_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8B0FF306D82A6E5AA52869ECC3CF8267D3F490_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_5;
		L_5 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m81D9E805A91EAE16EAAA2F73AC5A2DAD19377643_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B2_0 = NULL;
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* L_11 = ((Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_1;
		int32_t L_21 = V_2;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_32;
				L_32 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m13A38C223F0BABEECE1B8FCD3D03199345768B91_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mE374BAA1430F5C8FF6B82362984FDC05138BEAC0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer_6;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_2;
		L_2 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_1 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m07A39878AD2C13A3EC348DD0E2F64641E43E0D1A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB65EE0BBB002345A08BAE76881973CA1F6A55FB3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23E94334E94EFA7622F0EC303B8D0CE2235DA010_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB3F3BE11C2E5D75AED5396B2CB10742E6F0800BF_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_9;
		L_9 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m63C07905E27C05BB33617E4BAFD09CD2048B1D9D_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB41AF7C04A1CCE400BA62B99CCC303504102AAE8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_0 = __this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 Dictionary_2_GetEnumerator_m86A96D4E7AF5EB4FC9401A17B71821C524C98403_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE4242487DEA1CA4F9083B7E751F70DECD5A6C5AA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEFD0BDDBCFE15749CD2E0D7AD58E6A7550D6BF74_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_6;
		L_6 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = (KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)(KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_15 = V_0;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_19;
		L_19 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_2;
		int32_t L_21 = V_0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_31;
		L_31 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_38 = V_7;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_39 = V_2;
		int32_t L_40 = V_0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_65 = V_2;
		int32_t L_66 = V_0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_10 = NULL;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_24;
		L_24 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_35 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_44;
		L_44 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_0;
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_47 = V_0;
		int32_t L_48 = V_5;
		int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_51 = V_12;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_52 = V_0;
		int32_t L_53 = V_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_55 = ___0_key;
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_58 = V_0;
		int32_t L_59 = V_5;
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_62 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_65 = V_0;
		int32_t L_66 = V_5;
		int32_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_72 = V_0;
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_73 = V_0;
		int32_t L_74 = V_5;
		int32_t L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_78 = V_0;
		int32_t L_79 = V_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_81 = ___0_key;
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_84 = V_0;
		int32_t L_85 = V_5;
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_88 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_121 = V_10;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_121->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_121->___key_2))->____pattern_2), (void*)NULL);
		#endif
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m30C69800F481DF95A3C2B26672083C4942C7AF6A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 42))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 38)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_19 = V_3;
		int32_t L_20 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_21;
		L_21 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_22 = V_3;
		int32_t L_23 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_24;
		L_24 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 45), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = V_3;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_19 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_20;
		L_20 = ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_21 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = L_21->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_25 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_26 = L_25->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_41 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_42 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m423F15A532C6A9B72D948F03DCF1E8FE95266FDE_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF49067A549741BBB9B9BA690E05B00A9854C7E9F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0BF6AA68A9292D57E071C216236F4569412741AB_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58B657EDC37CB7C4C1FA6E5ECAA49192968290E8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m822016BA854B3523CF33A27E9548ECDE43C85690_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 47)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_3;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_28);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = __this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = __this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_47 = V_6;
			int32_t L_48 = V_7;
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 32));
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 31), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB824CC9AE49B882D511ADFCD217426BFC12FAB38_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m230B767B18EF35F11415F7A727CA1CEC19DA39EC_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m4540BEB04CE0E31DC46A4CF9EA6DDE820B175AC1_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m26BD17B7EEA27EDA57B60C2113C7AE365109523B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22)))));
		}
		try
		{// begin try (depth: 2)
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 29))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 22)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m9BF33360802A4565E45703E76292DEAEB476C8D3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 22))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61E0DFD545EE45B0C2E19B76F54D726B3A55D382_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m560469DDF2DE3816CDFAEC089FE93BF7C0D8324E_gshared_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 KeyValuePair_2_get_Value_m83F5FFAD50736F21F0C0C8EA79EDC6FA6BB45FC8_gshared_inline (KeyValuePair_2_tF5F84E71EF58536DFE0D324E15B9ED4100395BD2* __this, const RuntimeMethod* method) 
{
	{
		SimpleTuple_2_t8AFA710A7A025A3BD22D2627C8B2B5F3187DC662 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m0FDFA14C99714D00B4E49067C6813231BFB27B56_gshared_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 KeyValuePair_2_get_Value_m9EF6CA8B28C0528DEE3F793203FFE6BA884929B9_gshared_inline (KeyValuePair_2_t3029D6F70B44C9FB496F323C37C5A5FF8B69F8F8* __this, const RuntimeMethod* method) 
{
	{
		SimpleTuple_2_tE791ECB8E6CE0D4DFE35557AC14C8493211A4F92 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m74908837FC52D9E5E3427A8DAD37B3C9A7139C54_gshared_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E KeyValuePair_2_get_Value_m8F3097986525897B69C69D1A2E00A88AA50539FD_gshared_inline (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m09F5770EABACFF86F36A6CD8C3BBB0E155F47F9D_gshared_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m1198BD99D534096A158D4654931BF20D3EAB14F2_gshared_inline (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3184CB53F86778A01E4FAD2743D2249EFBC91D6F_gshared_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m9211EE294464EC9D0383B18FBED2C316E5B4F624_gshared_inline (KeyValuePair_2_t5EE249ADC2FC7C38972080E5425B78D0667C19AE* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
