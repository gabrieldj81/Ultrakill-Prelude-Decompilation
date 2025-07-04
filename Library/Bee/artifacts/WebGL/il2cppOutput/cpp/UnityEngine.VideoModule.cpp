﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0D1DCFACB6310AA1821892BA557534E78B6AF00 
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Video.Video3DLayout
struct Video3DLayout_t6E17571466249890F3E4CBC4D5C4C3D7261DFA74 
{
	// System.Int32 UnityEngine.Video.Video3DLayout::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoAspectRatio
struct VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47 
{
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoAudioOutputMode
struct VideoAudioOutputMode_tFDC43E947CD8D421DD2FD53A836A8D72F6AED874 
{
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoRenderMode
struct VideoRenderMode_tB7AF1B303098B26EF56A4D3D30D9FB5BA35C96A1 
{
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoSource
struct VideoSource_t1BCC79FEDD081663192AC0AD8A74AE78B5C8E291 
{
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoTimeReference
struct VideoTimeReference_tA2E6847CF38D64289E5AF3669C95F35B8864D351 
{
	// System.Int32 UnityEngine.Video.VideoTimeReference::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoTimeSource
struct VideoTimeSource_t4C874889018CCB1822AB2CC316A52D8846865958 
{
	// System.Int32 UnityEngine.Video.VideoTimeSource::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Video.VideoClipPlayable
struct VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// <Module>

// <Module>

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

// System.Double

// System.Double

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Video.Video3DLayout

// UnityEngine.Video.Video3DLayout

// UnityEngine.Video.VideoAspectRatio

// UnityEngine.Video.VideoAspectRatio

// UnityEngine.Video.VideoAudioOutputMode

// UnityEngine.Video.VideoAudioOutputMode

// UnityEngine.Video.VideoRenderMode

// UnityEngine.Video.VideoRenderMode

// UnityEngine.Video.VideoSource

// UnityEngine.Video.VideoSource

// UnityEngine.Video.VideoTimeReference

// UnityEngine.Video.VideoTimeReference

// UnityEngine.Video.VideoTimeSource

// UnityEngine.Video.VideoTimeSource

// UnityEngine.Video.VideoClip

// UnityEngine.Video.VideoClip

// UnityEngine.Experimental.Video.VideoClipPlayable

// UnityEngine.Experimental.Video.VideoClipPlayable

// UnityEngine.Video.VideoPlayer/ErrorEventHandler

// UnityEngine.Video.VideoPlayer/ErrorEventHandler

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler

// UnityEngine.Video.VideoPlayer/TimeEventHandler

// UnityEngine.Video.VideoPlayer/TimeEventHandler

// UnityEngine.Video.VideoPlayer

// UnityEngine.Video.VideoPlayer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) ;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E_AdjustorThunk (RuntimeObject* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method)
{
	VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPaused()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, float ___1_volume, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t, float);
	static VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)");
	_il2cpp_icall_func(__this, ___0_trackIndex, ___1_volume);
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_mF483B141E9AF0B553FF87B32A0EE54E40BE21EFD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___prepareCompleted_4;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___prepareCompleted_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_mF5F02FE6BBEA70C62108F3FD836E1B378CB9F5E7 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_1 = L_0->___frameReady_11;
		V_0 = (bool)((!(((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_4 = L_3->___frameReady_11;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		int64_t L_6 = ___1_frameIdx;
		FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m090FD00BB12721EB3CEB337E30687D5DE6B1EBD6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___loopPointReached_5;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___loopPointReached_5;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_mBDD186C95E57DD264CD0957FA46D9F65728C67EF (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___started_6;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___started_6;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_m6E6B6353404AF76AB16D1433B8553659B0744DC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___frameDropped_7;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___frameDropped_7;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_m91E59ED70189824AB2C5D0AEB47742130EE98574 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_errorStr, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_1 = L_0->___errorReceived_8;
		V_0 = (bool)((!(((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_4 = L_3->___errorReceived_8;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		String_t* L_6 = ___1_errorStr;
		ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_m62AEB9826ACE95B88CC60220375C1C7EF5EEEE1F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___seekCompleted_9;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___seekCompleted_9;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m743B8421E9538761141364EBDCEBC673BA58D8C6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_1 = L_0->___clockResyncOccurred_10;
		V_0 = (bool)((!(((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_4 = L_3->___clockResyncOccurred_10;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		double L_6 = ___1_seconds;
		TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
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
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_Multicast(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* currentDelegate = reinterpret_cast<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenInst(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, method);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStatic(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, method);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStaticInvoker(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	InvokerActionInvoker1< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_ClosedStaticInvoker(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_Multicast(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* currentDelegate = reinterpret_cast<ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenInst(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_message, method);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStatic(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_message, method);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStaticInvoker(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_message);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_ClosedStaticInvoker(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_message);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m78073CD72C64AAFAF54A01702919A847185F4C58 (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5 (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_Multicast(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* currentDelegate = reinterpret_cast<FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenInst(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_frameIdx, method);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStatic(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_frameIdx, method);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStaticInvoker(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_frameIdx);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_ClosedStaticInvoker(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_frameIdx);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_mD875F736BCA2A2128427AB0546B5081ED3B22D56 (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235 (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_Multicast(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* currentDelegate = reinterpret_cast<TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenInst(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_seconds, method);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStatic(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_seconds, method);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStaticInvoker(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_seconds);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_ClosedStaticInvoker(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_seconds);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_m7BF78A616C8FF71B3A7CA62B1A03446A5C581309 (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
