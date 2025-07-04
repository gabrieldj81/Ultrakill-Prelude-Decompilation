﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>
struct TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.ProBuilder.KdTree.DuplicateNodeError
struct DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4;
// System.Exception
struct Exception_t;
// UnityEngine.ProBuilder.KdTree.Math.FloatMath
struct FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4;
IL2CPP_EXTERN_C const RuntimeMethod* TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2A9C2A017FBA5FACDB71BAA91E084385EB479C81 
{
};

// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>
struct TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA  : public RuntimeObject
{
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.ProBuilder.KdTree.Math.FloatMath
struct FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472  : public TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
struct AddDuplicateBehavior_t2189810CDF717740BBD6AA846F007062D9B3D6F1 
{
	// System.Int32 UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior::value__
	int32_t ___value___2;
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

// UnityEngine.ProBuilder.KdTree.DuplicateNodeError
struct DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4  : public Exception_t
{
};

// <Module>

// <Module>

// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>

// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.ProBuilder.KdTree.Math.FloatMath

// UnityEngine.ProBuilder.KdTree.Math.FloatMath

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior

// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.ProBuilder.KdTree.DuplicateNodeError

// UnityEngine.ProBuilder.KdTree.DuplicateNodeError
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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


// System.Void UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_gshared (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA* __this, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::.ctor()
inline void TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4 (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA*, const RuntimeMethod*))TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_gshared)(__this, method);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ProBuilder.KdTree.DuplicateNodeError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNodeError__ctor_m8D8D65F500D5C59D4B65893B1EC96FD19B2A9AF7 (DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral789F6EB390935724E847FEF78009D7D062260AE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4, NULL);
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
// System.Int32 UnityEngine.ProBuilder.KdTree.Math.FloatMath::Compare(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FloatMath_Compare_m7C257C05C46C30E54D9386E55477F117E4222143 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_b;
		int32_t L_1;
		L_1 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&___0_a), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ProBuilder.KdTree.Math.FloatMath::AreEqual(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatMath_AreEqual_mE57C66C6A7E55F50E5A0FDF707ACFCF7918894DC (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return (bool)((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_MinValue_mAF23F78D3EC9CA8EC8E71B9EA37E803EAF5E14D9 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (-(std::numeric_limits<float>::max)());
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_Zero_mD441F84DD7AF38A937EFBAEA4CAC4C8A96680F32 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (0.0f);
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_NegativeInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_NegativeInfinity_m083E0731CB0E24D1C412EC9177814768465A5443 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (-std::numeric_limits<float>::infinity());
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_PositiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_PositiveInfinity_m4E4516F4842EA2772F5960A3F1D0BA787DC73AE2 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (std::numeric_limits<float>::infinity());
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Add(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Add_mB1E5237E0C236D82848AEC5A5849B2D79AEE5440 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Subtract(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Subtract_mA1DB886FE613CDA53601612D96DA919245723163 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Multiply(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Multiply_m4149E71D41BEBDFFF7A9E630306C8686B8D49616 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::DistanceSquaredBetweenPoints(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_DistanceSquaredBetweenPoints_m483A8B0B756B27B3FA12A23FF1448FAC51FF7D3B (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_a, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(15 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::get_Zero() */, __this);
		V_0 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_a;
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_2 = 0;
		goto IL_0034;
	}

IL_000f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_a;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___1_b;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = VirtualFuncInvoker2< float, float, float >::Invoke(19 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Subtract(T,T) */, __this, L_5, L_9);
		V_3 = L_10;
		float L_11 = V_3;
		float L_12 = V_3;
		float L_13;
		L_13 = VirtualFuncInvoker2< float, float, float >::Invoke(20 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Multiply(T,T) */, __this, L_11, L_12);
		V_4 = L_13;
		float L_14 = V_0;
		float L_15 = V_4;
		float L_16;
		L_16 = VirtualFuncInvoker2< float, float, float >::Invoke(18 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Add(T,T) */, __this, L_14, L_15);
		V_0 = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0034:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000f;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
	}
}
// System.Void UnityEngine.ProBuilder.KdTree.Math.FloatMath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatMath__ctor_mDAFB21A490BF4EF49B26DD79212810D4A6A4B071 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4(__this, TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
