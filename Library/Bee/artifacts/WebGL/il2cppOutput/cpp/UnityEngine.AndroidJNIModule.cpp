﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
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

// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9959D6967BF0405610B0041D446B892A631997;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral127155DB5E5A9BE62DE47A1029D153D3625B3D06;
IL2CPP_EXTERN_C String_t* _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral202CA4DAEA660693DEF70762203498B061B399AA;
IL2CPP_EXTERN_C String_t* _stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C;
IL2CPP_EXTERN_C String_t* _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B;
IL2CPP_EXTERN_C String_t* _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32;
IL2CPP_EXTERN_C String_t* _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF;
IL2CPP_EXTERN_C String_t* _stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88;
IL2CPP_EXTERN_C String_t* _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
IL2CPP_EXTERN_C String_t* _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185;
IL2CPP_EXTERN_C String_t* _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845;
IL2CPP_EXTERN_C String_t* _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156;
IL2CPP_EXTERN_C String_t* _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05;
IL2CPP_EXTERN_C String_t* _stringLiteral7B099BB94CC0052FF2CBFC5C1BA25A116C36B87C;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1;
IL2CPP_EXTERN_C String_t* _stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8AAC20E5D53C1C388E8C041E599C16DDD947F38C;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
IL2CPP_EXTERN_C String_t* _stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552;
IL2CPP_EXTERN_C String_t* _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D;
IL2CPP_EXTERN_C String_t* _stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904;
IL2CPP_EXTERN_C String_t* _stringLiteralCE42F595933CDB601C52327F32C83017C908C430;
IL2CPP_EXTERN_C String_t* _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E;
IL2CPP_EXTERN_C String_t* _stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE8FE1BF738214730B2CD0936CFF2E177313C385;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_CreateJNIArgArray_mFB22FA0559B96CAA29D2A63EA56EF62F0280AA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E;
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72288DCFA45FEA57618C4D622E6CC0D7F3747E3F 
{
};

// UnityEngine.AndroidJNI
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJNIHelper
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};

// UnityEngine.AndroidJNISafe
struct AndroidJNISafe_t8F403436E87D77E436B1E426920A105A4E05BEBA  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.AndroidReflection
struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// UnityEngine.Android.Common
struct Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	// System.Boolean UnityEngine.GlobalJavaObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr UnityEngine.GlobalJavaObjectRef::m_jobject
	intptr_t ___m_jobject_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_18;
};

// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___mRunnable_4;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
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

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// <Module>

// <Module>

// UnityEngine.AndroidJNI

// UnityEngine.AndroidJNI

// UnityEngine.AndroidJNIHelper

// UnityEngine.AndroidJNIHelper

// UnityEngine.AndroidJNISafe

// UnityEngine.AndroidJNISafe

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// UnityEngine.AndroidReflection
struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidReflection::s_ReflectionHelperClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_ReflectionHelperClass_0;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetConstructorID
	intptr_t ___s_ReflectionHelperGetConstructorID_1;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetMethodID
	intptr_t ___s_ReflectionHelperGetMethodID_2;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldID
	intptr_t ___s_ReflectionHelperGetFieldID_3;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldSignature
	intptr_t ___s_ReflectionHelperGetFieldSignature_4;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperNewProxyInstance
	intptr_t ___s_ReflectionHelperNewProxyInstance_5;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperCeateInvocationError
	intptr_t ___s_ReflectionHelperCeateInvocationError_6;
	// System.IntPtr UnityEngine.AndroidReflection::s_FieldGetDeclaringClass
	intptr_t ___s_FieldGetDeclaringClass_7;
};

// UnityEngine.AndroidReflection

// System.Reflection.Binder

// System.Reflection.Binder

// UnityEngine.Android.Common
struct Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields
{
	// UnityEngine.AndroidJavaObject UnityEngine.Android.Common::m_Activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_Activity_0;
};

// UnityEngine.Android.Common

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.GlobalJavaObjectRef

// UnityEngine.GlobalJavaObjectRef

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.jvalue

// UnityEngine.jvalue

// UnityEngine.AndroidJavaException

// UnityEngine.AndroidJavaException

// UnityEngine.AndroidJavaRunnableProxy

// UnityEngine.AndroidJavaRunnableProxy

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

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

// UnityEngine.AndroidJavaRunnable

// UnityEngine.AndroidJavaRunnable

// System.Reflection.TargetInvocationException

// System.Reflection.TargetInvocationException
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

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
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* m_Items[1];

	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AndroidJavaProxy[]
struct AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* m_Items[1];

	inline AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Exception::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0 (intptr_t ___0_globalref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A (intptr_t ___0_globalref, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94 (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::CreateInvocationError(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_CreateInvocationError_m20254A88DCE4AEE011AAC3D42B94DC7B588AB20F (Exception_t* ___0_ex, bool ___1_methodNotFound, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB (intptr_t ___0_obj1, intptr_t ___1_obj2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m558318BA8E7A0A7526E48FF7218876FB987F397B (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40 (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m9DF3572307421E944B3A95DC82EF90CEF1774DA2 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536 (intptr_t ___0_obj, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A (String_t* ___0_chars, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7 (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF (intptr_t ___0_player, intptr_t ___1_delegateHandle, intptr_t ___2_interfaze, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_runnable, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0 (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213 (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
inline int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
inline int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
inline Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043 (int32_t ___0_size, intptr_t ___1_clazz, intptr_t ___2_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2 (intptr_t ___0_array, int32_t ___1_index, intptr_t ___2_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0 (intptr_t ___0_javaClass, String_t* ___1_signature, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B (intptr_t ___0_refMethod, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetFieldClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27 (intptr_t ___0_field, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidReflection::GetFieldSignature(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259 (intptr_t ___0_field, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184 (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95 (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.Android.Common::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Common_GetActivity_m33E672D97C605F07C4EE5F927F4C8D21F8D4F2B7 (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___0_fieldName, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36 (intptr_t ___0_player, intptr_t ___1_delegateHandle, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___2_proxy, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* _AndroidJNIHelper_CreateJNIArgArray_mFB22FA0559B96CAA29D2A63EA56EF62F0280AA39 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m3920D9869CEC7D9898B83ADC4457509D94897473 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC (String_t* ___0_chars, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___0_message, String_t* ___1_javaStackTrace, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B (String_t* ___0_chars, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43 (intptr_t ___0_refMethod, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_arrayClass, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB (intptr_t ___0_array, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
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
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* currentDelegate = reinterpret_cast<AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenInst(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStatic(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStaticInvoker(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_ClosedStaticInvoker(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast;
}
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___0_message, String_t* ___1_javaStackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___1_javaStackTrace;
		__this->___mJavaStackTrace_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mJavaStackTrace_18), (void*)L_1);
		return;
	}
}
// System.String UnityEngine.AndroidJavaException::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJavaException_get_StackTrace_m28AC922BCC16051CCBA4C7E5F69698264AA7CC27 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___mJavaStackTrace_18;
		String_t* L_1;
		L_1 = Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
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
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B2_0 = NULL;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B1_0 = NULL;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B3_1 = NULL;
	{
		__this->___m_disposed_0 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_jobject;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		intptr_t L_3 = ___0_jobject;
		intptr_t L_4;
		L_4 = AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0025:
	{
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		G_B3_1->___m_jobject_1 = G_B3_0;
		return;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Finalize_m2EE89F98A391773F885A4A312FD4BD134E0D46D8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = ___0_obj;
		intptr_t L_1 = L_0->___m_jobject_1;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_disposed_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0036;
	}

IL_000d:
	{
		__this->___m_disposed_0 = (bool)1;
		intptr_t L_2 = __this->___m_jobject_1;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_6 = __this->___m_jobject_1;
		AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0(L_6, NULL);
	}

IL_0036:
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
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_runnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B, NULL);
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_runnable;
		__this->___mRunnable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRunnable_4), (void*)L_0);
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
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_javaInterface;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, L_0, NULL);
		AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_javaInterface, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___proxyObject_1 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ___0_javaInterface;
		__this->___javaInterface_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___javaInterface_0), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy_Finalize_m6E4C294F2117D7A07E82A315081C9239AFA217E8 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = __this->___proxyObject_1;
			AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A(L_0, NULL);
			goto IL_0018;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	Exception_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	MethodInfo_t* V_10 = NULL;
	bool V_11 = false;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_12 = NULL;
	int32_t V_13 = 0;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_14 = NULL;
	int32_t V_15 = 0;
	MethodInfo_t* V_16 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_29 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_30 = NULL;
	Exception_t* V_31 = NULL;
	int32_t V_32 = 0;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Type_t* G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_3 = NULL;
	Type_t* G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_3 = NULL;
	Type_t* G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_3 = NULL;
	Type_t* G_B48_0 = NULL;
	int32_t G_B48_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B53_0 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		V_1 = ((int32_t)60);
		V_2 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_3 = L_1;
		V_7 = 0;
		goto IL_0047;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		int32_t L_3 = V_7;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_8 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = V_3;
		int32_t L_8 = V_7;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (Type_t*)NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0040;
	}

IL_0031:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = V_3;
		int32_t L_11 = V_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___1_args;
		int32_t L_13 = V_7;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		ArrayElementTypeCheck (L_10, L_16);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (Type_t*)L_16);
	}

IL_0040:
	{
		int32_t L_17 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = ___1_args;
		V_9 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_9;
		if (L_20)
		{
			goto IL_0016;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			V_10 = (MethodInfo_t*)NULL;
			int32_t L_21 = V_2;
			V_11 = (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
			bool L_22 = V_11;
			if (!L_22)
			{
				goto IL_017e_1;
			}
		}
		{
			Type_t* L_23;
			L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
			int32_t L_24 = V_1;
			MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_25;
			L_25 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(95 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_23, L_24);
			V_12 = L_25;
			V_13 = 0;
			MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_26 = V_12;
			V_14 = L_26;
			V_15 = 0;
			goto IL_014f_1;
		}

IL_0085_1:
		{
			MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_27 = V_14;
			int32_t L_28 = V_15;
			int32_t L_29 = L_28;
			MethodInfo_t* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
			V_16 = L_30;
			String_t* L_31 = ___0_methodName;
			MethodInfo_t* L_32 = V_16;
			String_t* L_33;
			L_33 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			bool L_34;
			L_34 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_31, L_33, NULL);
			V_19 = L_34;
			bool L_35 = V_19;
			if (!L_35)
			{
				goto IL_00a5_1;
			}
		}
		{
			goto IL_0149_1;
		}

IL_00a5_1:
		{
			MethodInfo_t* L_36 = V_16;
			ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_37;
			L_37 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_36);
			V_17 = L_37;
			ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_38 = V_17;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = ___1_args;
			V_20 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_40 = V_20;
			if (!L_40)
			{
				goto IL_00c5_1;
			}
		}
		{
			goto IL_0149_1;
		}

IL_00c5_1:
		{
			V_18 = (bool)1;
			V_21 = 0;
			goto IL_0123_1;
		}

IL_00cd_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = V_3;
			int32_t L_42 = V_21;
			int32_t L_43 = L_42;
			Type_t* L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
			V_22 = (bool)((((RuntimeObject*)(Type_t*)L_44) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_45 = V_22;
			if (!L_45)
			{
				goto IL_00fa_1;
			}
		}
		{
			ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_46 = V_17;
			int32_t L_47 = V_21;
			int32_t L_48 = L_47;
			ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
			Type_t* L_50;
			L_50 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_49);
			bool L_51;
			L_51 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_50, NULL);
			V_23 = L_51;
			bool L_52 = V_23;
			if (!L_52)
			{
				goto IL_00f7_1;
			}
		}
		{
			V_18 = (bool)0;
			goto IL_0131_1;
		}

IL_00f7_1:
		{
			goto IL_011c_1;
		}

IL_00fa_1:
		{
			ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_53 = V_17;
			int32_t L_54 = V_21;
			int32_t L_55 = L_54;
			ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
			Type_t* L_57;
			L_57 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_56);
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_58 = V_3;
			int32_t L_59 = V_21;
			int32_t L_60 = L_59;
			Type_t* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
			bool L_62;
			L_62 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_57, L_61);
			V_24 = (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
			bool L_63 = V_24;
			if (!L_63)
			{
				goto IL_011c_1;
			}
		}
		{
			V_18 = (bool)0;
			goto IL_0131_1;
		}

IL_011c_1:
		{
			int32_t L_64 = V_21;
			V_21 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		}

IL_0123_1:
		{
			int32_t L_65 = V_21;
			ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_66 = V_17;
			V_25 = (bool)((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))? 1 : 0);
			bool L_67 = V_25;
			if (L_67)
			{
				goto IL_00cd_1;
			}
		}

IL_0131_1:
		{
			bool L_68 = V_18;
			V_26 = (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
			bool L_69 = V_26;
			if (!L_69)
			{
				goto IL_013e_1;
			}
		}
		{
			goto IL_0149_1;
		}

IL_013e_1:
		{
			int32_t L_70 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add(L_70, 1));
			MethodInfo_t* L_71 = V_16;
			V_10 = L_71;
		}

IL_0149_1:
		{
			int32_t L_72 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		}

IL_014f_1:
		{
			int32_t L_73 = V_15;
			MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_74 = V_14;
			if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_75 = V_13;
			V_27 = (bool)((((int32_t)L_75) > ((int32_t)1))? 1 : 0);
			bool L_76 = V_27;
			if (!L_76)
			{
				goto IL_017b_1;
			}
		}
		{
			String_t* L_77 = ___0_methodName;
			String_t* L_78;
			L_78 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B099BB94CC0052FF2CBFC5C1BA25A116C36B87C)), L_77, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AAC20E5D53C1C388E8C041E599C16DDD947F38C)), NULL);
			Exception_t* L_79 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_79, L_78, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var)));
		}

IL_017b_1:
		{
			goto IL_0190_1;
		}

IL_017e_1:
		{
			Type_t* L_80;
			L_80 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
			String_t* L_81 = ___0_methodName;
			int32_t L_82 = V_1;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_83 = V_3;
			MethodInfo_t* L_84;
			L_84 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_80, L_81, L_82, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_83, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
			V_10 = L_84;
		}

IL_0190_1:
		{
			MethodInfo_t* L_85 = V_10;
			V_28 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_85) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_86 = V_28;
			if (!L_86)
			{
				goto IL_01b0_1;
			}
		}
		{
			MethodInfo_t* L_87 = V_10;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_88 = ___1_args;
			RuntimeObject* L_89;
			L_89 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_87, __this, L_88, NULL);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90;
			L_90 = _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0(L_89, NULL);
			V_29 = L_90;
			goto IL_02f2;
		}

IL_01b0_1:
		{
			goto IL_01ca;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b3;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c1;
		}
		throw e;
	}

CATCH_01b3:
	{// begin catch(System.Reflection.TargetInvocationException)
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_91 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*));;
		V_30 = L_91;
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_92 = V_30;
		Exception_t* L_93;
		L_93 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_92, NULL);
		V_0 = L_93;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01ca;
	}// end catch (depth: 1)

CATCH_01c1:
	{// begin catch(System.Exception)
		Exception_t* L_94 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_31 = L_94;
		Exception_t* L_95 = V_31;
		V_0 = L_95;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01ca;
	}// end catch (depth: 1)

IL_01ca:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = ___1_args;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)));
		V_4 = L_97;
		V_32 = 0;
		goto IL_0208;
	}

IL_01d9:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_98 = V_3;
		int32_t L_99 = V_32;
		int32_t L_100 = L_99;
		Type_t* L_101 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		V_33 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_102 = V_33;
		if (!L_102)
		{
			goto IL_01f3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_4;
		int32_t L_104 = V_32;
		ArrayElementTypeCheck (L_103, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104), (String_t*)_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		goto IL_0201;
	}

IL_01f3:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = V_4;
		int32_t L_106 = V_32;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_107 = V_3;
		int32_t L_108 = V_32;
		int32_t L_109 = L_108;
		Type_t* L_110 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		String_t* L_111;
		L_111 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_110);
		ArrayElementTypeCheck (L_105, L_111);
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_106), (String_t*)L_111);
	}

IL_0201:
	{
		int32_t L_112 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0208:
	{
		int32_t L_113 = V_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_114 = V_4;
		V_34 = (bool)((((int32_t)L_113) < ((int32_t)((int32_t)(((RuntimeArray*)L_114)->max_length))))? 1 : 0);
		bool L_115 = V_34;
		if (L_115)
		{
			goto IL_01d9;
		}
	}
	{
		Exception_t* L_116 = V_0;
		V_35 = (bool)((!(((RuntimeObject*)(Exception_t*)L_116) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_117 = V_35;
		if (!L_117)
		{
			goto IL_0272;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		Type_t* L_120;
		L_120 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_121 = L_120;
		G_B44_0 = L_121;
		G_B44_1 = 0;
		G_B44_2 = L_119;
		G_B44_3 = L_119;
		if (L_121)
		{
			G_B45_0 = L_121;
			G_B45_1 = 0;
			G_B45_2 = L_119;
			G_B45_3 = L_119;
			goto IL_0235;
		}
	}
	{
		G_B46_0 = ((String_t*)(NULL));
		G_B46_1 = G_B44_1;
		G_B46_2 = G_B44_2;
		G_B46_3 = G_B44_3;
		goto IL_023a;
	}

IL_0235:
	{
		String_t* L_122;
		L_122 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B45_0);
		G_B46_0 = L_122;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_023a:
	{
		ArrayElementTypeCheck (G_B46_2, G_B46_0);
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = G_B46_3;
		ArrayElementTypeCheck (L_123, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = L_123;
		String_t* L_125 = ___0_methodName;
		ArrayElementTypeCheck (L_124, L_125);
		(L_124)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_125);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_126 = L_124;
		ArrayElementTypeCheck (L_126, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		(L_126)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_127 = L_126;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_128 = V_4;
		String_t* L_129;
		L_129 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB)), L_128, NULL);
		ArrayElementTypeCheck (L_127, L_129);
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_129);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_130 = L_127;
		ArrayElementTypeCheck (L_130, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		String_t* L_131;
		L_131 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_130, NULL);
		Exception_t* L_132 = V_0;
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_133 = (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)));
		TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94(L_133, L_131, L_132, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_133, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var)));
	}

IL_0272:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_135 = L_134;
		ArrayElementTypeCheck (L_135, _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_136 = L_135;
		Type_t* L_137;
		L_137 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_138 = L_137;
		G_B48_0 = L_138;
		G_B48_1 = 1;
		G_B48_2 = L_136;
		G_B48_3 = L_136;
		if (L_138)
		{
			G_B49_0 = L_138;
			G_B49_1 = 1;
			G_B49_2 = L_136;
			G_B49_3 = L_136;
			goto IL_028f;
		}
	}
	{
		G_B50_0 = ((String_t*)(NULL));
		G_B50_1 = G_B48_1;
		G_B50_2 = G_B48_2;
		G_B50_3 = G_B48_3;
		goto IL_0294;
	}

IL_028f:
	{
		String_t* L_139;
		L_139 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B49_0);
		G_B50_0 = L_139;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0294:
	{
		ArrayElementTypeCheck (G_B50_2, G_B50_0);
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_140 = G_B50_3;
		ArrayElementTypeCheck (L_140, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_140)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_141 = L_140;
		String_t* L_142 = ___0_methodName;
		ArrayElementTypeCheck (L_141, L_142);
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_142);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_143 = L_141;
		ArrayElementTypeCheck (L_143, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_143)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_144 = L_143;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = V_4;
		String_t* L_146;
		L_146 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_145, NULL);
		ArrayElementTypeCheck (L_144, L_146);
		(L_144)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_146);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = L_144;
		ArrayElementTypeCheck (L_147, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_147)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_148;
		L_148 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_147, NULL);
		Exception_t* L_149 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_149, L_148, NULL);
		V_5 = L_149;
		Exception_t* L_150 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_151;
		L_151 = AndroidReflection_CreateInvocationError_m20254A88DCE4AEE011AAC3D42B94DC7B588AB20F(L_150, (bool)1, NULL);
		V_6 = L_151;
		intptr_t L_152 = V_6;
		intptr_t L_153 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_154;
		L_154 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_152, L_153, NULL);
		if (L_154)
		{
			goto IL_02ed;
		}
	}
	{
		intptr_t L_155 = V_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_156 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_156, L_155, NULL);
		G_B53_0 = L_156;
		goto IL_02ee;
	}

IL_02ed:
	{
		G_B53_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
	}

IL_02ee:
	{
		V_29 = G_B53_0;
		goto IL_02f2;
	}

IL_02f2:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_157 = V_29;
		return L_157;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_mCAE9C5E669AD50DE372494E12224FF1F31A43F1D (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___1_javaArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_0 = ___1_javaArgs;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_4 = ___1_javaArgs;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731(L_7, NULL);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_12, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_14 = ___1_javaArgs;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0040;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_19 = ___1_javaArgs;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_22, NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0046:
	{
		int32_t L_24 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_25 = ___1_javaArgs;
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_27 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
		L_29 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[]) */, __this, L_27, L_28);
		V_5 = L_29;
		goto IL_005e;
	}

IL_005e:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_5;
		return L_30;
	}
}
// System.Boolean UnityEngine.AndroidJavaProxy::equals(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaProxy_equals_mC390139E035408E858940EB523D45ED3C8377110 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_3;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		intptr_t L_4 = __this->___proxyObject_1;
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB(L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Int32 UnityEngine.AndroidJavaProxy::hashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaProxy_hashCode_m7991233D3D6D5F994E7BC59C3CB65DBBEDF8CA93 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		intptr_t L_2;
		L_2 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		intptr_t L_5 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_HashCodeMethodID_3;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
		int32_t L_7;
		L_7 = AndroidJNISafe_CallStaticIntMethod_m558318BA8E7A0A7526E48FF7218876FB987F397B(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.String UnityEngine.AndroidJavaProxy::toString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJavaProxy_toString_mF77EEDD3BB413F1273D9970BFB0D7C388366B256 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE8FE1BF738214730B2CD0936CFF2E177313C385);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* G_B2_0 = NULL;
	AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		G_B1_0 = __this;
		if (__this)
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000e;
	}

IL_0009:
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_0;
	}

IL_000e:
	{
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteralDE8FE1BF738214730B2CD0936CFF2E177313C385, NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		intptr_t L_1 = __this->___proxyObject_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_5 = __this->___proxyObject_1;
		intptr_t L_6;
		L_6 = AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65(L_5, NULL);
		V_0 = L_6;
		intptr_t L_7 = V_0;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_7, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		intptr_t L_11 = __this->___proxyObject_1;
		AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D(L_11, NULL);
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___proxyObject_1 = L_12;
	}

IL_0050:
	{
	}

IL_0051:
	{
		intptr_t L_13 = V_0;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_15;
		L_15 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_13, L_14, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		intptr_t L_17;
		L_17 = AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F(__this, NULL);
		V_0 = L_17;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA(L_18, NULL);
		__this->___proxyObject_1 = L_19;
	}

IL_0075:
	{
		intptr_t L_20 = V_0;
		V_4 = L_20;
		goto IL_007a;
	}

IL_007a:
	{
		intptr_t L_21 = V_4;
		return L_21;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__cctor_m44B4074B6A6D8193D86E65DB4C165C2371615D63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2), (void*)L_1);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2;
		intptr_t L_3;
		L_3 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_2, NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_3, _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B, _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82, (bool)1, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_HashCodeMethodID_3 = L_4;
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
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___0_className;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___enableDebugPrints_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0016;
	}

IL_000f:
	{
		String_t* L_2 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		String_t* L_0 = ___0_className;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___1_args = L_4;
	}

IL_0023:
	{
		String_t* L_5 = ___0_className;
		String_t* L_6;
		L_6 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_5, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_7;
		L_7 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_6, NULL);
		V_0 = L_7;
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_9, L_8, NULL);
		__this->___m_jclass_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_9);
		intptr_t L_10 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_12;
		L_12 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_14 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_13, L_14, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = __this->___m_jclass_2;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___1_args;
			intptr_t L_18;
			L_18 = AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40(L_16, L_17, NULL);
			V_3 = L_18;
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_19 = __this->___m_jclass_2;
			intptr_t L_20;
			L_20 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_19, NULL);
			intptr_t L_21 = V_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_1;
			intptr_t L_23;
			L_23 = AndroidJNISafe_NewObject_m9DF3572307421E944B3A95DC82EF90CEF1774DA2(L_20, L_21, L_22, NULL);
			V_4 = L_23;
			intptr_t L_24 = V_4;
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_25, L_24, NULL);
			__this->___m_jobject_1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_25);
			intptr_t L_26 = V_4;
			AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_26, NULL);
			goto IL_0097;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___0_jobject;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_5 = ___0_jobject;
		intptr_t L_6;
		L_6 = AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3(L_5, NULL);
		V_0 = L_6;
		intptr_t L_7 = ___0_jobject;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_8, L_7, NULL);
		__this->___m_jobject_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_8);
		intptr_t L_9 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_10, L_9, NULL);
		__this->___m_jclass_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_10);
		intptr_t L_11 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_11, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Finalize_m87374EE46B27BE3559CACED8A1B62475200AB5AA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m87886676A84FA079C0FE45E6C31D790D764652BE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		V_0 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = __this->___m_jobject_1;
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_2, NULL);
		__this->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0023:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jclass_2;
		V_1 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = __this->___m_jclass_2;
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_5, NULL);
		__this->___m_jclass_2 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0045:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				intptr_t L_0 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ___0_jobject;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				intptr_t L_0 = ___0_jclass;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ___0_jclass;
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = __this->___m_jobject_1;
		intptr_t L_2;
		L_2 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___0_className;
		AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_className;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		String_t* L_2 = ___0_className;
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_4;
		L_4 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_6 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_6, L_5, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_6);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
		intptr_t L_7 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_7, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___0_jclass;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_5 = ___0_jclass;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_6 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_6, L_5, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_6);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
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
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___0_t;
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___0_t;
		Type_t* L_1 = ___1_from;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_clazz;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_3 = V_0;
			String_t* L_4 = ___1_methodName;
			String_t* L_5 = ___2_signature;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7 (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_clazz;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_3 = V_0;
			String_t* L_4 = ___1_methodName;
			String_t* L_5 = ___2_signature;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				intptr_t L_2 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
			intptr_t L_4 = ___0_jclass;
			((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			String_t* L_6 = ___1_signature;
			intptr_t L_7;
			L_7 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_6, NULL);
			((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_7;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_9;
			L_9 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_8, NULL);
			intptr_t L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_0;
			intptr_t L_12;
			L_12 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_9, L_10, L_11, NULL);
			V_1 = L_12;
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		intptr_t L_13 = V_1;
		return L_13;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				intptr_t L_2 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				intptr_t L_4 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			intptr_t L_6 = ___0_jclass;
			((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			String_t* L_8 = ___1_methodName;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_8, NULL);
			((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			String_t* L_11 = ___2_signature;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_11, NULL);
			((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			bool L_14 = ___3_isStatic;
			((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				intptr_t L_2 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				intptr_t L_4 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			intptr_t L_6 = ___0_jclass;
			((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			String_t* L_8 = ___1_fieldName;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_8, NULL);
			((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			String_t* L_11 = ___2_signature;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_11, NULL);
			((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			bool L_14 = ___3_isStatic;
			((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetFieldClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27 (intptr_t ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_field;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7;
		intptr_t L_2;
		L_2 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_0, L_1, (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)NULL, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidReflection::GetFieldSignature(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259 (intptr_t ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		intptr_t L_2 = ___0_field;
		((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		intptr_t L_5 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
		String_t* L_7;
		L_7 = AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF (intptr_t ___0_player, intptr_t ___1_delegateHandle, intptr_t ___2_interfaze, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		intptr_t L_2 = ___0_player;
		((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___1_delegateHandle), NULL);
		((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___j_5 = L_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
		intptr_t L_6 = ___2_interfaze;
		((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_6;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_7 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_8;
		L_8 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_7, NULL);
		intptr_t L_9 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
		intptr_t L_11;
		L_11 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_004d;
	}

IL_004d:
	{
		intptr_t L_12 = V_1;
		return L_12;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::CreateInvocationError(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_CreateInvocationError_m20254A88DCE4AEE011AAC3D42B94DC7B588AB20F (Exception_t* ___0_ex, bool ___1_methodNotFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		Exception_t* L_2 = ___0_ex;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_2, NULL);
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_3, NULL);
		V_1 = L_4;
		int64_t L_5;
		L_5 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___j_5 = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
		bool L_7 = ___1_methodNotFound;
		((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___z_0 = L_7;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_9;
		L_9 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_8, NULL);
		intptr_t L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperCeateInvocationError_6;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_0;
		intptr_t L_12;
		L_12 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_9, L_10, L_11, NULL);
		V_2 = L_12;
		goto IL_004c;
	}

IL_004c:
	{
		intptr_t L_13 = V_2;
		return L_13;
	}
}
// System.Void UnityEngine.AndroidReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection__cctor_m59365F63F057115EA8FBCB0AFBAF94012DAAC622 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral127155DB5E5A9BE62DE47A1029D153D3625B3D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202CA4DAEA660693DEF70762203498B061B399AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29533AC1D363321ECFB96B50441B9418763D4176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997CC228CD49CB51A21F3301055CBEE380042055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE42F595933CDB601C52327F32C83017C908C430);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0), (void*)L_1);
		intptr_t L_2;
		L_2 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198, _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1 = L_2;
		intptr_t L_3;
		L_3 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552, _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2 = L_3;
		intptr_t L_4;
		L_4 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F, _stringLiteralCE42F595933CDB601C52327F32C83017C908C430, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3 = L_4;
		intptr_t L_5;
		L_5 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055, _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4 = L_5;
		intptr_t L_6;
		L_6 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05, _stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5 = L_6;
		intptr_t L_7;
		L_7 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral202CA4DAEA660693DEF70762203498B061B399AA, _stringLiteral127155DB5E5A9BE62DE47A1029D153D3625B3D06, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperCeateInvocationError_6 = L_7;
		intptr_t L_8;
		L_8 = AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7(_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9, _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176, _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7 = L_8;
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
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36 (intptr_t ___0_player, intptr_t ___1_delegateHandle, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___2_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_player;
		intptr_t L_1 = ___1_delegateHandle;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_2 = ___2_proxy;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = L_2->___javaInterface_0;
		intptr_t L_4;
		L_4 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF(L_0, L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_jrunnable;
		AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* L_1 = (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1*)il2cpp_codegen_object_new(AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3(L_1, L_0, NULL);
		intptr_t L_2;
		L_2 = AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_InvokeJavaProxyMethod_mCA9BD35B5AE99B6DFABBFE9968DD1EBE931F70C2 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, intptr_t ___1_jmethodName, intptr_t ___2_jargs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	bool V_7 = false;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B5_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B7_2 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			V_0 = 0;
			intptr_t L_0 = ___2_jargs;
			intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			bool L_2;
			L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_001c_1;
			}
		}
		{
			intptr_t L_4 = ___2_jargs;
			int32_t L_5;
			L_5 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_4, NULL);
			V_0 = L_5;
		}

IL_001c_1:
		{
			int32_t L_6 = V_0;
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_7 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_6);
			V_1 = L_7;
			V_3 = 0;
			goto IL_0051_1;
		}

IL_0027_1:
		{
			intptr_t L_8 = ___2_jargs;
			int32_t L_9 = V_3;
			intptr_t L_10;
			L_10 = AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0(L_8, L_9, NULL);
			V_4 = L_10;
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_11 = V_1;
			int32_t L_12 = V_3;
			intptr_t L_13 = V_4;
			intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			bool L_15;
			L_15 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_13, L_14, NULL);
			G_B5_0 = L_12;
			G_B5_1 = L_11;
			if (L_15)
			{
				G_B6_0 = L_12;
				G_B6_1 = L_11;
				goto IL_0044_1;
			}
		}
		{
			G_B7_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			goto IL_004b_1;
		}

IL_0044_1:
		{
			intptr_t L_16 = V_4;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_17, L_16, NULL);
			G_B7_0 = L_17;
			G_B7_1 = G_B6_0;
			G_B7_2 = G_B6_1;
		}

IL_004b_1:
		{
			ArrayElementTypeCheck (G_B7_2, G_B7_0);
			(G_B7_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B7_1), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)G_B7_0);
			int32_t L_18 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		}

IL_0051_1:
		{
			int32_t L_19 = V_3;
			int32_t L_20 = V_0;
			V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
			bool L_21 = V_5;
			if (L_21)
			{
				goto IL_0027_1;
			}
		}
		{
			AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_22 = ___0_proxy;
			intptr_t L_23 = ___1_jmethodName;
			String_t* L_24;
			L_24 = AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C(L_23, NULL);
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_25 = V_1;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
			L_26 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* >::Invoke(5 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[]) */, L_22, L_24, L_25);
			V_6 = L_26;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_008f_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = V_6;
						if (!L_27)
						{
							goto IL_009b_1;
						}
					}
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = V_6;
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_28);
					}

IL_009b_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_6;
					V_7 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_30 = V_7;
					if (!L_30)
					{
						goto IL_007f_2;
					}
				}
				{
					intptr_t L_31 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					V_8 = L_31;
					goto IL_00ab;
				}

IL_007f_2:
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = V_6;
					intptr_t L_33;
					L_33 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_32, NULL);
					intptr_t L_34;
					L_34 = AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65(L_33, NULL);
					V_8 = L_34;
					goto IL_00ab;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009c;
		}
		throw e;
	}

CATCH_009c:
	{// begin catch(System.Exception)
		Exception_t* L_35 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_35;
		Exception_t* L_36 = V_9;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var)));
		intptr_t L_37;
		L_37 = AndroidReflection_CreateInvocationError_m20254A88DCE4AEE011AAC3D42B94DC7B588AB20F(L_36, (bool)0, NULL);
		V_8 = L_37;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ab;
	}// end catch (depth: 1)

IL_00ab:
	{
		intptr_t L_38 = V_8;
		return L_38;
	}
}
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* _AndroidJNIHelper_CreateJNIArgArray_mFB22FA0559B96CAA29D2A63EA56EF62F0280AA39 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_22 = NULL;
	Type_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	String_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_2 = L_3;
		V_3 = 0;
		goto IL_030b;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_2;
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		RuntimeObject* L_8 = V_4;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
		int32_t L_11 = V_1;
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___l_8 = L_12;
		goto IL_0302;
	}

IL_0041:
	{
		RuntimeObject* L_13 = V_4;
		Type_t* L_14;
		L_14 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_14, NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_01c5;
		}
	}
	{
		RuntimeObject* L_17 = V_4;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_19 = V_0;
		int32_t L_20 = V_1;
		RuntimeObject* L_21 = V_4;
		((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___i_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_21, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_007f:
	{
		RuntimeObject* L_22 = V_4;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00a7;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_24 = V_0;
		int32_t L_25 = V_1;
		RuntimeObject* L_26 = V_4;
		((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___z_0 = ((*(bool*)((bool*)(bool*)UnBox(L_26, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_00a7:
	{
		RuntimeObject* L_27 = V_4;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_27, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614, NULL);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_29 = V_0;
		int32_t L_30 = V_1;
		RuntimeObject* L_31 = V_4;
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___b_1 = ((int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_31, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_00dd:
	{
		RuntimeObject* L_32 = V_4;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_32, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_0105;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_34 = V_0;
		int32_t L_35 = V_1;
		RuntimeObject* L_36 = V_4;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___b_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_36, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0105:
	{
		RuntimeObject* L_37 = V_4;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_37, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_11;
		if (!L_38)
		{
			goto IL_012d;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_39 = V_0;
		int32_t L_40 = V_1;
		RuntimeObject* L_41 = V_4;
		((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___s_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_41, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_012d:
	{
		RuntimeObject* L_42 = V_4;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_42, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_44 = V_0;
		int32_t L_45 = V_1;
		RuntimeObject* L_46 = V_4;
		((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___j_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_46, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0152:
	{
		RuntimeObject* L_47 = V_4;
		V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_47, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0177;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_49 = V_0;
		int32_t L_50 = V_1;
		RuntimeObject* L_51 = V_4;
		((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___f_6 = ((*(float*)((float*)(float*)UnBox(L_51, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0177:
	{
		RuntimeObject* L_52 = V_4;
		V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_52, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_53 = V_14;
		if (!L_53)
		{
			goto IL_019c;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_54 = V_0;
		int32_t L_55 = V_1;
		RuntimeObject* L_56 = V_4;
		((L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_55)))->___d_7 = ((*(double*)((double*)(double*)UnBox(L_56, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_019c:
	{
		RuntimeObject* L_57 = V_4;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_57, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_58 = V_15;
		if (!L_58)
		{
			goto IL_01bf;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_59 = V_0;
		int32_t L_60 = V_1;
		RuntimeObject* L_61 = V_4;
		((L_59)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_60)))->___c_2 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_61, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
	}

IL_01bf:
	{
		goto IL_0302;
	}

IL_01c5:
	{
		RuntimeObject* L_62 = V_4;
		V_16 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_62, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_16;
		if (!L_63)
		{
			goto IL_01f4;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_0;
		int32_t L_65 = V_1;
		RuntimeObject* L_66 = V_4;
		intptr_t L_67;
		L_67 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(((String_t*)CastclassSealed((RuntimeObject*)L_66, String_t_il2cpp_TypeInfo_var)), NULL);
		((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___l_8 = L_67;
		goto IL_0302;
	}

IL_01f4:
	{
		RuntimeObject* L_68 = V_4;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_68, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_69 = V_17;
		if (!L_69)
		{
			goto IL_0223;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_70 = V_0;
		int32_t L_71 = V_1;
		RuntimeObject* L_72 = V_4;
		intptr_t L_73;
		L_73 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_72, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___l_8 = L_73;
		goto IL_0302;
	}

IL_0223:
	{
		RuntimeObject* L_74 = V_4;
		V_18 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_74, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_75 = V_18;
		if (!L_75)
		{
			goto IL_0252;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_76 = V_0;
		int32_t L_77 = V_1;
		RuntimeObject* L_78 = V_4;
		intptr_t L_79;
		L_79 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_78, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)), NULL);
		((L_76)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_77)))->___l_8 = L_79;
		goto IL_0302;
	}

IL_0252:
	{
		RuntimeObject* L_80 = V_4;
		V_19 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_80, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_81 = V_19;
		if (!L_81)
		{
			goto IL_0281;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_82 = V_0;
		int32_t L_83 = V_1;
		RuntimeObject* L_84 = V_4;
		intptr_t L_85;
		L_85 = _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213(((RuntimeArray*)CastclassClass((RuntimeObject*)L_84, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_83)))->___l_8 = L_85;
		goto IL_0302;
	}

IL_0281:
	{
		RuntimeObject* L_86 = V_4;
		V_20 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_86, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_87 = V_20;
		if (!L_87)
		{
			goto IL_02ad;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_88 = V_0;
		int32_t L_89 = V_1;
		RuntimeObject* L_90 = V_4;
		intptr_t L_91;
		L_91 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_90, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		((L_88)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_89)))->___l_8 = L_91;
		goto IL_0302;
	}

IL_02ad:
	{
		RuntimeObject* L_92 = V_4;
		V_21 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_92, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_93 = V_21;
		if (!L_93)
		{
			goto IL_02d9;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_94 = V_0;
		int32_t L_95 = V_1;
		RuntimeObject* L_96 = V_4;
		intptr_t L_97;
		L_97 = AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_96, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_95)))->___l_8 = L_97;
		goto IL_0302;
	}

IL_02d9:
	{
		RuntimeObject* L_98 = V_4;
		Type_t* L_99;
		L_99 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_98, NULL);
		Type_t* L_100 = L_99;
		G_B36_0 = L_100;
		G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_100)
		{
			G_B37_0 = L_100;
			G_B37_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02ed;
		}
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		goto IL_02f2;
	}

IL_02ed:
	{
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B37_0);
		G_B38_0 = L_101;
		G_B38_1 = G_B37_1;
	}

IL_02f2:
	{
		String_t* L_102;
		L_102 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B38_1, G_B38_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_103 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_103, L_102, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_CreateJNIArgArray_mFB22FA0559B96CAA29D2A63EA56EF62F0280AA39_RuntimeMethod_var)));
	}

IL_0302:
	{
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_030b:
	{
		int32_t L_106 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = V_2;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_108 = V_0;
		V_22 = L_108;
		goto IL_0319;
	}

IL_0319:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_109 = V_22;
		return L_109;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeArray* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		V_6 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_7 = NULL;
		goto IL_021e;
	}

IL_0013:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035, NULL);
		V_0 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_obj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_11;
		L_11 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_9, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_10, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_3 = L_11;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ___0_obj;
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		int32_t L_16;
		L_16 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_12, _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1, L_14, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_4 = L_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_19;
		L_19 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_17, _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2, L_18, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_21 = V_3;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_24 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_5 = (RuntimeArray*)L_25;
		goto IL_0188;
	}

IL_00a5:
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490, L_26, NULL);
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_29 = V_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_30 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_5 = (RuntimeArray*)L_30;
		goto IL_0188;
	}

IL_00c4:
	{
		String_t* L_31 = V_3;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, L_31, NULL);
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_34 = V_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_5 = (RuntimeArray*)L_35;
		goto IL_0188;
	}

IL_00e3:
	{
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, L_36, NULL);
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_39 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_5 = (RuntimeArray*)L_40;
		goto IL_0188;
	}

IL_0102:
	{
		String_t* L_41 = V_3;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, L_41, NULL);
		V_13 = L_42;
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_44 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_45 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_5 = (RuntimeArray*)L_45;
		goto IL_0188;
	}

IL_011e:
	{
		String_t* L_46 = V_3;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, L_46, NULL);
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_49 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_5 = (RuntimeArray*)L_50;
		goto IL_0188;
	}

IL_013a:
	{
		String_t* L_51 = V_3;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, L_51, NULL);
		V_15 = L_52;
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_54 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_5 = (RuntimeArray*)L_55;
		goto IL_0188;
	}

IL_0156:
	{
		String_t* L_56 = V_3;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, L_56, NULL);
		V_16 = L_57;
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_59 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_5 = (RuntimeArray*)L_60;
		goto IL_0188;
	}

IL_0172:
	{
		String_t* L_61 = V_3;
		String_t* L_62;
		L_62 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B)), L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_63 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A_RuntimeMethod_var)));
	}

IL_0188:
	{
		goto IL_01cc;
	}

IL_018b:
	{
		String_t* L_64 = V_3;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_64, NULL);
		V_17 = L_65;
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_67 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_67);
		V_5 = (RuntimeArray*)L_68;
		goto IL_01cc;
	}

IL_01a7:
	{
		String_t* L_69 = V_3;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_69, NULL);
		V_18 = L_70;
		bool L_71 = V_18;
		if (!L_71)
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_72 = V_4;
		AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E* L_73 = (AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)SZArrayNew(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_5 = (RuntimeArray*)L_73;
		goto IL_01cc;
	}

IL_01c3:
	{
		int32_t L_74 = V_4;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_75 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_74);
		V_5 = (RuntimeArray*)L_75;
	}

IL_01cc:
	{
		V_19 = 0;
		goto IL_0205;
	}

IL_01d1:
	{
		RuntimeArray* L_76 = V_5;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_77 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_78;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = ___0_obj;
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_79;
		int32_t L_82 = V_19;
		int32_t L_83 = L_82;
		RuntimeObject* L_84 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_83);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_84);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85;
		L_85 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_77, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_81, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		RuntimeObject* L_86;
		L_86 = _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731(L_85, NULL);
		int32_t L_87 = V_19;
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_76, L_86, L_87, NULL);
		int32_t L_88 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0205:
	{
		int32_t L_89 = V_19;
		int32_t L_90 = V_4;
		V_20 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_20;
		if (L_91)
		{
			goto IL_01d1;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_92 = V_0;
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_92, NULL);
		RuntimeArray* L_93 = V_5;
		V_7 = L_93;
		goto IL_021e;
	}

IL_021e:
	{
		RuntimeObject* L_94 = V_7;
		return L_94;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = NULL;
		goto IL_020d;
	}

IL_0010:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_obj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0202:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_2;
					if (!L_5)
					{
						goto IL_020c;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_020c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				String_t* L_9;
				L_9 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_7, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_8, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_3 = L_9;
				String_t* L_10 = V_3;
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_10, NULL);
				V_4 = L_11;
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_0062_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				int32_t L_15;
				L_15 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_13, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_14, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				int32_t L_16 = L_15;
				RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
				V_1 = L_17;
				goto IL_020d;
			}

IL_0062_1:
			{
				String_t* L_18 = V_3;
				bool L_19;
				L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_18, NULL);
				V_5 = L_19;
				bool L_20 = V_5;
				if (!L_20)
				{
					goto IL_008f_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				bool L_23;
				L_23 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_21, _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66, L_22, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				bool L_24 = L_23;
				RuntimeObject* L_25 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_24);
				V_1 = L_25;
				goto IL_020d;
			}

IL_008f_1:
			{
				String_t* L_26 = V_3;
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_26, NULL);
				V_6 = L_27;
				bool L_28 = V_6;
				if (!L_28)
				{
					goto IL_00bc_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				int8_t L_31;
				L_31 = AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B(L_29, _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E, L_30, AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
				int8_t L_32 = L_31;
				RuntimeObject* L_33 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_32);
				V_1 = L_33;
				goto IL_020d;
			}

IL_00bc_1:
			{
				String_t* L_34 = V_3;
				bool L_35;
				L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_34, NULL);
				V_7 = L_35;
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_00e9_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				int16_t L_39;
				L_39 = AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345(L_37, _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC, L_38, AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
				int16_t L_40 = L_39;
				RuntimeObject* L_41 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_40);
				V_1 = L_41;
				goto IL_020d;
			}

IL_00e9_1:
			{
				String_t* L_42 = V_3;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_42, NULL);
				V_8 = L_43;
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_0116_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				int64_t L_47;
				L_47 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_45, _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68, L_46, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
				int64_t L_48 = L_47;
				RuntimeObject* L_49 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_48);
				V_1 = L_49;
				goto IL_020d;
			}

IL_0116_1:
			{
				String_t* L_50 = V_3;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_50, NULL);
				V_9 = L_51;
				bool L_52 = V_9;
				if (!L_52)
				{
					goto IL_0143_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				float L_55;
				L_55 = AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1(L_53, _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293, L_54, AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
				float L_56 = L_55;
				RuntimeObject* L_57 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_56);
				V_1 = L_57;
				goto IL_020d;
			}

IL_0143_1:
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_58, NULL);
				V_10 = L_59;
				bool L_60 = V_10;
				if (!L_60)
				{
					goto IL_0170_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				double L_63;
				L_63 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_61, _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C, L_62, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
				double L_64 = L_63;
				RuntimeObject* L_65 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_64);
				V_1 = L_65;
				goto IL_020d;
			}

IL_0170_1:
			{
				String_t* L_66 = V_3;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_66, NULL);
				V_11 = L_67;
				bool L_68 = V_11;
				if (!L_68)
				{
					goto IL_019a_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				Il2CppChar L_71;
				L_71 = AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C(L_69, _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3, L_70, AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
				Il2CppChar L_72 = L_71;
				RuntimeObject* L_73 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_72);
				V_1 = L_73;
				goto IL_020d;
			}

IL_019a_1:
			{
				String_t* L_74 = V_3;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_74, NULL);
				V_12 = L_75;
				bool L_76 = V_12;
				if (!L_76)
				{
					goto IL_01bf_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				String_t* L_79;
				L_79 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_77, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_78, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_1 = L_79;
				goto IL_020d;
			}

IL_01bf_1:
			{
				String_t* L_80 = V_3;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_80, NULL);
				V_13 = L_81;
				bool L_82 = V_13;
				if (!L_82)
				{
					goto IL_01de_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = ___0_obj;
				intptr_t L_84;
				L_84 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_83, NULL);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_85 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_85, L_84, NULL);
				V_1 = L_85;
				goto IL_020d;
			}

IL_01de_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_86 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				bool L_88;
				L_88 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_86, _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983, L_87, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				V_14 = L_88;
				bool L_89 = V_14;
				if (!L_89)
				{
					goto IL_01fe_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = ___0_obj;
				RuntimeObject* L_91;
				L_91 = _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A(L_90, NULL);
				V_1 = L_91;
				goto IL_020d;
			}

IL_01fe_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92 = ___0_obj;
				V_1 = L_92;
				goto IL_020d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_020d:
	{
		RuntimeObject* L_93 = V_1;
		return L_93;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Type_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Type_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0310;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_obj;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0213;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___0_obj;
		int32_t L_11 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_13, _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_9, NULL);
		V_1 = L_13;
		goto IL_0310;
	}

IL_0054:
	{
		RuntimeObject* L_14 = ___0_obj;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		RuntimeObject* L_18 = ___0_obj;
		bool L_19 = ((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_21, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_17, NULL);
		V_1 = L_21;
		goto IL_0310;
	}

IL_0087:
	{
		RuntimeObject* L_22 = ___0_obj;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		RuntimeObject* L_26 = ___0_obj;
		int8_t L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_26, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_28 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_29, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_25, NULL);
		V_1 = L_29;
		goto IL_0310;
	}

IL_00ba:
	{
		RuntimeObject* L_30 = ___0_obj;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_30, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		RuntimeObject* L_34 = ___0_obj;
		int8_t L_35 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_36 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_35);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_37, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_33, NULL);
		V_1 = L_37;
		goto IL_0310;
	}

IL_00ed:
	{
		RuntimeObject* L_38 = ___0_obj;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_38, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		RuntimeObject* L_42 = ___0_obj;
		int16_t L_43 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_42, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		RuntimeObject* L_44 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_43);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_45, _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_41, NULL);
		V_1 = L_45;
		goto IL_0310;
	}

IL_0120:
	{
		RuntimeObject* L_46 = ___0_obj;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_46, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0153;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
		RuntimeObject* L_50 = ___0_obj;
		int64_t L_51 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_50, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		RuntimeObject* L_52 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_51);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_52);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_53, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_49, NULL);
		V_1 = L_53;
		goto IL_0310;
	}

IL_0153:
	{
		RuntimeObject* L_54 = ___0_obj;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_54, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_55 = V_9;
		if (!L_55)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		RuntimeObject* L_58 = ___0_obj;
		float L_59 = ((*(float*)((float*)(float*)UnBox(L_58, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_60 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_59);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_60);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_61, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_57, NULL);
		V_1 = L_61;
		goto IL_0310;
	}

IL_0186:
	{
		RuntimeObject* L_62 = ___0_obj;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_62, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_01b9;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		RuntimeObject* L_66 = ___0_obj;
		double L_67 = ((*(double*)((double*)(double*)UnBox(L_66, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		RuntimeObject* L_68 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_67);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_69, _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_65, NULL);
		V_1 = L_69;
		goto IL_0310;
	}

IL_01b9:
	{
		RuntimeObject* L_70 = ___0_obj;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_70, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_01ec;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
		RuntimeObject* L_74 = ___0_obj;
		Il2CppChar L_75 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_74, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
		RuntimeObject* L_76 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_75);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_76);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_77, _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_73, NULL);
		V_1 = L_77;
		goto IL_0310;
	}

IL_01ec:
	{
		RuntimeObject* L_78 = ___0_obj;
		Type_t* L_79;
		L_79 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_78, NULL);
		Type_t* L_80 = L_79;
		G_B22_0 = L_80;
		G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_80)
		{
			G_B23_0 = L_80;
			G_B23_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_01fe;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_0203;
	}

IL_01fe:
	{
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B23_0);
		G_B24_0 = L_81;
		G_B24_1 = G_B23_1;
	}

IL_0203:
	{
		String_t* L_82;
		L_82 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B24_1, G_B24_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_83 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_83, L_82, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var)));
	}

IL_0213:
	{
		RuntimeObject* L_84 = ___0_obj;
		V_12 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0242;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_86;
		RuntimeObject* L_88 = ___0_obj;
		ArrayElementTypeCheck (L_87, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_89 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_89, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_87, NULL);
		V_1 = L_89;
		goto IL_0310;
	}

IL_0242:
	{
		RuntimeObject* L_90 = ___0_obj;
		V_13 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_90, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_0268;
		}
	}
	{
		RuntimeObject* L_92 = ___0_obj;
		intptr_t L_93;
		L_93 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_94, L_93, NULL);
		V_1 = L_94;
		goto IL_0310;
	}

IL_0268:
	{
		RuntimeObject* L_95 = ___0_obj;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_95, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_96 = V_14;
		if (!L_96)
		{
			goto IL_0284;
		}
	}
	{
		RuntimeObject* L_97 = ___0_obj;
		V_1 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_97, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		goto IL_0310;
	}

IL_0284:
	{
		RuntimeObject* L_98 = ___0_obj;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_98, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_99 = V_15;
		if (!L_99)
		{
			goto IL_02a7;
		}
	}
	{
		RuntimeObject* L_100 = ___0_obj;
		intptr_t L_101;
		L_101 = _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213(((RuntimeArray*)CastclassClass((RuntimeObject*)L_100, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_102;
		L_102 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_101, NULL);
		V_1 = L_102;
		goto IL_0310;
	}

IL_02a7:
	{
		RuntimeObject* L_103 = ___0_obj;
		V_16 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_103, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_16;
		if (!L_104)
		{
			goto IL_02c5;
		}
	}
	{
		RuntimeObject* L_105 = ___0_obj;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_106;
		L_106 = AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_106;
		goto IL_0310;
	}

IL_02c5:
	{
		RuntimeObject* L_107 = ___0_obj;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_107, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_108 = V_17;
		if (!L_108)
		{
			goto IL_02e8;
		}
	}
	{
		RuntimeObject* L_109 = ___0_obj;
		intptr_t L_110;
		L_110 = AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_109, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_111;
		L_111 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_110, NULL);
		V_1 = L_111;
		goto IL_0310;
	}

IL_02e8:
	{
		RuntimeObject* L_112 = ___0_obj;
		Type_t* L_113;
		L_113 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_112, NULL);
		Type_t* L_114 = L_113;
		G_B38_0 = L_114;
		G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_114)
		{
			G_B39_0 = L_114;
			G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02fb;
		}
	}
	{
		G_B40_0 = ((String_t*)(NULL));
		G_B40_1 = G_B38_1;
		goto IL_0300;
	}

IL_02fb:
	{
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B39_0);
		G_B40_0 = L_115;
		G_B40_1 = G_B39_1;
	}

IL_0300:
	{
		String_t* L_116;
		L_116 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_117 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_117, L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var)));
	}

IL_0310:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = V_1;
		return L_118;
	}
}
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m3920D9869CEC7D9898B83ADC4457509D94897473 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		V_0 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0054;
	}

IL_000a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		RuntimeObject* L_5 = V_3;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_6 = V_3;
		if (((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_6, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_7 = V_3;
		if (((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_7, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_8 = V_3;
		G_B6_0 = ((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_8, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 1;
	}

IL_0033:
	{
		V_4 = (bool)G_B6_0;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = ___1_jniArgs;
		int32_t L_11 = V_0;
		intptr_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___l_8;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_12, NULL);
	}

IL_004b:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213 (RuntimeArray* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_13 = NULL;
	int32_t V_14 = 0;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_21 = NULL;
	int32_t V_22 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_23 = NULL;
	intptr_t V_24;
	memset((&V_24), 0, sizeof(V_24));
	intptr_t V_25;
	memset((&V_25), 0, sizeof(V_25));
	intptr_t V_26;
	memset((&V_26), 0, sizeof(V_26));
	int32_t V_27 = 0;
	bool V_28 = false;
	intptr_t V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E* V_34 = NULL;
	int32_t V_35 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_36 = NULL;
	intptr_t V_37;
	memset((&V_37), 0, sizeof(V_37));
	intptr_t V_38;
	memset((&V_38), 0, sizeof(V_38));
	intptr_t V_39;
	memset((&V_39), 0, sizeof(V_39));
	int32_t V_40 = 0;
	bool V_41 = false;
	intptr_t V_42;
	memset((&V_42), 0, sizeof(V_42));
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	int32_t G_B33_0 = 0;
	int32_t G_B48_0 = 0;
	Type_t* G_B57_0 = NULL;
	String_t* G_B57_1 = NULL;
	Type_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	String_t* G_B58_0 = NULL;
	String_t* G_B58_1 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_016f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeArray* L_10 = ___0_array;
		intptr_t L_11;
		L_11 = AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB(((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_11;
		goto IL_0417;
	}

IL_003d:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeArray* L_16 = ___0_array;
		intptr_t L_17;
		L_17 = AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A(((BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)Castclass((RuntimeObject*)L_16, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_17;
		goto IL_0417;
	}

IL_0061:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3, NULL);
		RuntimeArray* L_22 = ___0_array;
		intptr_t L_23;
		L_23 = AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_22, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_23;
		goto IL_0417;
	}

IL_0091:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		RuntimeArray* L_28 = ___0_array;
		intptr_t L_29;
		L_29 = AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C(((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_28, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_29;
		goto IL_0417;
	}

IL_00b5:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeArray* L_34 = ___0_array;
		intptr_t L_35;
		L_35 = AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED(((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)Castclass((RuntimeObject*)L_34, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_35;
		goto IL_0417;
	}

IL_00d9:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeArray* L_40 = ___0_array;
		intptr_t L_41;
		L_41 = AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C(((Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)Castclass((RuntimeObject*)L_40, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_41;
		goto IL_0417;
	}

IL_00fd:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		RuntimeArray* L_46 = ___0_array;
		intptr_t L_47;
		L_47 = AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732(((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_46, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_47;
		goto IL_0417;
	}

IL_0121:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeArray* L_52 = ___0_array;
		intptr_t L_53;
		L_53 = AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1(((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)Castclass((RuntimeObject*)L_52, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_53;
		goto IL_0417;
	}

IL_0145:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		RuntimeArray* L_58 = ___0_array;
		intptr_t L_59;
		L_59 = AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12(((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)Castclass((RuntimeObject*)L_58, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_59;
		goto IL_0417;
	}

IL_0169:
	{
		goto IL_040f;
	}

IL_016f:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01f9;
		}
	}
	{
		RuntimeArray* L_64 = ___0_array;
		V_13 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_64, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		RuntimeArray* L_65 = ___0_array;
		int32_t L_66;
		L_66 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_65, 0, NULL);
		V_14 = L_66;
		intptr_t L_67;
		L_67 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185, NULL);
		V_15 = L_67;
		int32_t L_68 = V_14;
		intptr_t L_69 = V_15;
		intptr_t L_70 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_71;
		L_71 = AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043(L_68, L_69, L_70, NULL);
		V_16 = L_71;
		V_17 = 0;
		goto IL_01dd;
	}

IL_01b5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_13;
		int32_t L_73 = V_17;
		int32_t L_74 = L_73;
		String_t* L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		intptr_t L_76;
		L_76 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_75, NULL);
		V_18 = L_76;
		intptr_t L_77 = V_16;
		int32_t L_78 = V_17;
		intptr_t L_79 = V_18;
		AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2(L_77, L_78, L_79, NULL);
		intptr_t L_80 = V_18;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_80, NULL);
		int32_t L_81 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01dd:
	{
		int32_t L_82 = V_17;
		int32_t L_83 = V_14;
		V_19 = (bool)((((int32_t)L_82) < ((int32_t)L_83))? 1 : 0);
		bool L_84 = V_19;
		if (L_84)
		{
			goto IL_01b5;
		}
	}
	{
		intptr_t L_85 = V_15;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_85, NULL);
		intptr_t L_86 = V_16;
		V_3 = L_86;
		goto IL_0417;
	}

IL_01f9:
	{
		Type_t* L_87 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		V_20 = (bool)((((RuntimeObject*)(Type_t*)L_87) == ((RuntimeObject*)(Type_t*)L_89))? 1 : 0);
		bool L_90 = V_20;
		if (!L_90)
		{
			goto IL_02f0;
		}
	}
	{
		RuntimeArray* L_91 = ___0_array;
		V_21 = ((AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)Castclass((RuntimeObject*)L_91, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var));
		RuntimeArray* L_92 = ___0_array;
		int32_t L_93;
		L_93 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_92, 0, NULL);
		V_22 = L_93;
		int32_t L_94 = V_22;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_95 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_94);
		V_23 = L_95;
		intptr_t L_96;
		L_96 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E, NULL);
		V_24 = L_96;
		intptr_t L_97 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_25 = L_97;
		V_27 = 0;
		goto IL_02c6;
	}

IL_0245:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = V_21;
		int32_t L_99 = V_27;
		int32_t L_100 = L_99;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_101 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		V_28 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_102 = V_28;
		if (!L_102)
		{
			goto IL_02b3;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_103 = V_23;
		int32_t L_104 = V_27;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_105 = V_21;
		int32_t L_106 = V_27;
		int32_t L_107 = L_106;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_108 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		intptr_t L_109;
		L_109 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_108, NULL);
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104), (intptr_t)L_109);
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_110 = V_21;
		int32_t L_111 = V_27;
		int32_t L_112 = L_111;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_113 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		intptr_t L_114;
		L_114 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_113, NULL);
		V_29 = L_114;
		intptr_t L_115 = V_25;
		intptr_t L_116 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_117;
		L_117 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_115, L_116, NULL);
		V_30 = L_117;
		bool L_118 = V_30;
		if (!L_118)
		{
			goto IL_028a;
		}
	}
	{
		intptr_t L_119 = V_29;
		V_25 = L_119;
		goto IL_02b0;
	}

IL_028a:
	{
		intptr_t L_120 = V_25;
		intptr_t L_121 = V_24;
		bool L_122;
		L_122 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_120, L_121, NULL);
		if (!L_122)
		{
			goto IL_02a3;
		}
	}
	{
		intptr_t L_123 = V_25;
		intptr_t L_124 = V_29;
		bool L_125;
		L_125 = AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB(L_123, L_124, NULL);
		G_B33_0 = ((((int32_t)L_125) == ((int32_t)0))? 1 : 0);
		goto IL_02a4;
	}

IL_02a3:
	{
		G_B33_0 = 0;
	}

IL_02a4:
	{
		V_31 = (bool)G_B33_0;
		bool L_126 = V_31;
		if (!L_126)
		{
			goto IL_02b0;
		}
	}
	{
		intptr_t L_127 = V_24;
		V_25 = L_127;
	}

IL_02b0:
	{
		goto IL_02bf;
	}

IL_02b3:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_128 = V_23;
		int32_t L_129 = V_27;
		intptr_t L_130 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_129), (intptr_t)L_130);
	}

IL_02bf:
	{
		int32_t L_131 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_131, 1));
	}

IL_02c6:
	{
		int32_t L_132 = V_27;
		int32_t L_133 = V_22;
		V_32 = (bool)((((int32_t)L_132) < ((int32_t)L_133))? 1 : 0);
		bool L_134 = V_32;
		if (L_134)
		{
			goto IL_0245;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_135 = V_23;
		intptr_t L_136 = V_25;
		intptr_t L_137;
		L_137 = AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F(L_135, L_136, NULL);
		V_26 = L_137;
		intptr_t L_138 = V_24;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_138, NULL);
		intptr_t L_139 = V_26;
		V_3 = L_139;
		goto IL_0417;
	}

IL_02f0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		Type_t* L_142 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_141, L_142, NULL);
		V_33 = L_143;
		bool L_144 = V_33;
		if (!L_144)
		{
			goto IL_03ec;
		}
	}
	{
		RuntimeArray* L_145 = ___0_array;
		V_34 = ((AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E*)Castclass((RuntimeObject*)L_145, AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E_il2cpp_TypeInfo_var));
		RuntimeArray* L_146 = ___0_array;
		int32_t L_147;
		L_147 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_146, 0, NULL);
		V_35 = L_147;
		int32_t L_148 = V_35;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_149 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_148);
		V_36 = L_149;
		intptr_t L_150;
		L_150 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E, NULL);
		V_37 = L_150;
		intptr_t L_151 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_38 = L_151;
		V_40 = 0;
		goto IL_03c5;
	}

IL_033f:
	{
		AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E* L_152 = V_34;
		int32_t L_153 = V_40;
		int32_t L_154 = L_153;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_155 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		V_41 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)L_155) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_156 = V_41;
		if (!L_156)
		{
			goto IL_03b2;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_157 = V_36;
		int32_t L_158 = V_40;
		AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E* L_159 = V_34;
		int32_t L_160 = V_40;
		int32_t L_161 = L_160;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_162 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		intptr_t L_163;
		L_163 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(L_162, NULL);
		(L_157)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158), (intptr_t)L_163);
		AndroidJavaProxyU5BU5D_tBFB42844DE08989EA61BC170AFFD4D529C8D7C4E* L_164 = V_34;
		int32_t L_165 = V_40;
		int32_t L_166 = L_165;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_167 = (L_164)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_166));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_168 = L_167->___javaInterface_0;
		intptr_t L_169;
		L_169 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_168, NULL);
		V_42 = L_169;
		intptr_t L_170 = V_38;
		intptr_t L_171 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_172;
		L_172 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_170, L_171, NULL);
		V_43 = L_172;
		bool L_173 = V_43;
		if (!L_173)
		{
			goto IL_0389;
		}
	}
	{
		intptr_t L_174 = V_42;
		V_38 = L_174;
		goto IL_03af;
	}

IL_0389:
	{
		intptr_t L_175 = V_38;
		intptr_t L_176 = V_37;
		bool L_177;
		L_177 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_175, L_176, NULL);
		if (!L_177)
		{
			goto IL_03a2;
		}
	}
	{
		intptr_t L_178 = V_38;
		intptr_t L_179 = V_42;
		bool L_180;
		L_180 = AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB(L_178, L_179, NULL);
		G_B48_0 = ((((int32_t)L_180) == ((int32_t)0))? 1 : 0);
		goto IL_03a3;
	}

IL_03a2:
	{
		G_B48_0 = 0;
	}

IL_03a3:
	{
		V_44 = (bool)G_B48_0;
		bool L_181 = V_44;
		if (!L_181)
		{
			goto IL_03af;
		}
	}
	{
		intptr_t L_182 = V_37;
		V_38 = L_182;
	}

IL_03af:
	{
		goto IL_03be;
	}

IL_03b2:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_183 = V_36;
		int32_t L_184 = V_40;
		intptr_t L_185 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_184), (intptr_t)L_185);
	}

IL_03be:
	{
		int32_t L_186 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_03c5:
	{
		int32_t L_187 = V_40;
		int32_t L_188 = V_35;
		V_45 = (bool)((((int32_t)L_187) < ((int32_t)L_188))? 1 : 0);
		bool L_189 = V_45;
		if (L_189)
		{
			goto IL_033f;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_190 = V_36;
		intptr_t L_191 = V_38;
		intptr_t L_192;
		L_192 = AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F(L_190, L_191, NULL);
		V_39 = L_192;
		intptr_t L_193 = V_37;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_193, NULL);
		intptr_t L_194 = V_39;
		V_3 = L_194;
		goto IL_0417;
	}

IL_03ec:
	{
		Type_t* L_195 = V_0;
		Type_t* L_196 = L_195;
		G_B56_0 = L_196;
		G_B56_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
		if (L_196)
		{
			G_B57_0 = L_196;
			G_B57_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
			goto IL_03fa;
		}
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_1;
		goto IL_03ff;
	}

IL_03fa:
	{
		String_t* L_197;
		L_197 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B57_0);
		G_B58_0 = L_197;
		G_B58_1 = G_B57_1;
	}

IL_03ff:
	{
		String_t* L_198;
		L_198 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B58_1, G_B58_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_199 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_199, L_198, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_199, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213_RuntimeMethod_var)));
	}

IL_040f:
	{
		intptr_t L_200 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_3 = L_200;
		goto IL_0417;
	}

IL_0417:
	{
		intptr_t L_201 = V_3;
		return L_201;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		String_t* L_2;
		L_2 = _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7(L_1, NULL);
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				intptr_t L_1 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				intptr_t L_2 = ___0_jclass;
				String_t* L_3 = ___1_signature;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_4;
				L_4 = AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3(L_2, L_3, NULL);
				V_0 = L_4;
				intptr_t L_5 = V_0;
				intptr_t L_6;
				L_6 = AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B(L_5, NULL);
				V_1 = L_6;
				goto IL_0049;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0019_1;
				}
				throw e;
			}

CATCH_0019_1:
			{// begin catch(System.Exception)
				{
					Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_7;
					intptr_t L_8 = ___0_jclass;
					String_t* L_9 = ___1_signature;
					intptr_t L_10;
					L_10 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE)), L_9, NULL);
					V_3 = L_10;
					intptr_t L_11 = V_3;
					intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var))))->___Zero_1;
					bool L_13;
					L_13 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_11, L_12, NULL);
					V_4 = L_13;
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_003d_1;
					}
				}
				{
					intptr_t L_15 = V_3;
					V_1 = L_15;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_0049;
				}

IL_003d_1:
				{
					Exception_t* L_16 = V_2;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		intptr_t L_17 = V_1;
		return L_17;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184 (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				intptr_t L_1 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				intptr_t L_2 = ___0_jclass;
				String_t* L_3 = ___1_methodName;
				String_t* L_4 = ___2_signature;
				bool L_5 = ___3_isStatic;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_6;
				L_6 = AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA(L_2, L_3, L_4, L_5, NULL);
				V_0 = L_6;
				intptr_t L_7 = V_0;
				intptr_t L_8;
				L_8 = AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B(L_7, NULL);
				V_1 = L_8;
				goto IL_0048;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001b_1;
				}
				throw e;
			}

CATCH_001b_1:
			{// begin catch(System.Exception)
				{
					Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_9;
					intptr_t L_10 = ___0_jclass;
					String_t* L_11 = ___1_methodName;
					String_t* L_12 = ___2_signature;
					bool L_13 = ___3_isStatic;
					intptr_t L_14;
					L_14 = _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F(L_10, L_11, L_12, L_13, NULL);
					V_3 = L_14;
					intptr_t L_15 = V_3;
					intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var))))->___Zero_1;
					bool L_17;
					L_17 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_15, L_16, NULL);
					V_4 = L_17;
					bool L_18 = V_4;
					if (!L_18)
					{
						goto IL_003c_1;
					}
				}
				{
					intptr_t L_19 = V_3;
					V_1 = L_19;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_0048;
				}

IL_003c_1:
				{
					Exception_t* L_20 = V_2;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		intptr_t L_21 = V_1;
		return L_21;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
	}
	try
	{// begin try (depth: 1)
		{
			bool L_0 = ___3_isStatic;
			if (L_0)
			{
				goto IL_000f_1;
			}
		}
		{
			intptr_t L_1 = ___0_jclass;
			String_t* L_2 = ___1_methodName;
			String_t* L_3 = ___2_signature;
			intptr_t L_4;
			L_4 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_1, L_2, L_3, NULL);
			G_B4_0 = L_4;
			goto IL_0017_1;
		}

IL_000f_1:
		{
			intptr_t L_5 = ___0_jclass;
			String_t* L_6 = ___1_methodName;
			String_t* L_7 = ___2_signature;
			intptr_t L_8;
			L_8 = AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8(L_5, L_6, L_7, NULL);
			G_B4_0 = L_8;
		}

IL_0017_1:
		{
			V_0 = G_B4_0;
			goto IL_0027;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		intptr_t L_11 = V_0;
		return L_11;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95 (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		V_1 = (Exception_t*)NULL;
		int32_t L_1;
		L_1 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)10), NULL);
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_2 = ___0_jclass;
			String_t* L_3 = ___1_fieldName;
			String_t* L_4 = ___2_signature;
			bool L_5 = ___3_isStatic;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_6;
			L_6 = AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F(L_2, L_3, L_4, L_5, NULL);
			V_2 = L_6;
			bool L_7 = ___3_isStatic;
			V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_002c_1;
			}
		}
		{
			intptr_t L_9 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_10;
			L_10 = AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27(L_9, NULL);
			___0_jclass = L_10;
		}

IL_002c_1:
		{
			intptr_t L_11 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259(L_11, NULL);
			___2_signature = L_12;
			goto IL_0040;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Exception)
		Exception_t* L_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_13;
		Exception_t* L_14 = V_4;
		V_1 = L_14;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(L_15, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_17 = ___3_isStatic;
				if (L_17)
				{
					goto IL_004f_1;
				}
			}
			{
				intptr_t L_18 = ___0_jclass;
				String_t* L_19 = ___1_fieldName;
				String_t* L_20 = ___2_signature;
				intptr_t L_21;
				L_21 = AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D(L_18, L_19, L_20, NULL);
				G_B9_0 = L_21;
				goto IL_0057_1;
			}

IL_004f_1:
			{
				intptr_t L_22 = ___0_jclass;
				String_t* L_23 = ___1_fieldName;
				String_t* L_24 = ___2_signature;
				intptr_t L_25;
				L_25 = AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482(L_22, L_23, L_24, NULL);
				G_B9_0 = L_25;
			}

IL_0057_1:
			{
				V_0 = G_B9_0;
				intptr_t L_26 = V_0;
				intptr_t L_27 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_28;
				L_28 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_26, L_27, NULL);
				V_5 = L_28;
				bool L_29 = V_5;
				if (!L_29)
				{
					goto IL_0088_1;
				}
			}
			{
				Exception_t* L_30 = V_1;
				V_6 = (bool)((!(((RuntimeObject*)(Exception_t*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_31 = V_6;
				if (!L_31)
				{
					goto IL_0076_1;
				}
			}
			{
				Exception_t* L_32 = V_1;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var)));
			}

IL_0076_1:
			{
				String_t* L_33 = ___1_fieldName;
				String_t* L_34 = ___2_signature;
				String_t* L_35;
				L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32)), L_33, L_34, NULL);
				Exception_t* L_36 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_36, L_35, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var)));
			}

IL_0088_1:
			{
				intptr_t L_37 = V_0;
				V_7 = L_37;
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		intptr_t L_38 = V_7;
		return L_38;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_20 = NULL;
	bool V_21 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_22 = NULL;
	bool V_23 = false;
	StringBuilder_t* V_24 = NULL;
	bool V_25 = false;
	Type_t* G_B5_0 = NULL;
	int32_t G_B36_0 = 0;
	String_t* G_B56_0 = NULL;
	Type_t* G_B59_0 = NULL;
	int32_t G_B59_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B59_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B59_3 = NULL;
	Type_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	String_t* G_B60_0 = NULL;
	int32_t G_B60_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B60_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B60_3 = NULL;
	int32_t G_B62_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B62_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B62_2 = NULL;
	int32_t G_B61_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B61_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B61_2 = NULL;
	String_t* G_B63_0 = NULL;
	int32_t G_B63_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B63_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B63_3 = NULL;
	int32_t G_B65_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B65_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B65_2 = NULL;
	int32_t G_B64_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B64_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B64_2 = NULL;
	String_t* G_B66_0 = NULL;
	int32_t G_B66_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B66_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B66_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_03b5;
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (((Type_t*)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		G_B5_0 = L_4;
		goto IL_002a;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ___0_obj;
		G_B5_0 = ((Type_t*)CastclassClass((RuntimeObject*)L_5, Type_t_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		V_0 = G_B5_0;
		Type_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_9, L_11);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		V_2 = _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
		goto IL_03b5;
	}

IL_005a:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_14, L_16);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		V_2 = _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
		goto IL_03b5;
	}

IL_007b:
	{
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_19, L_21);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E, NULL);
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_03b5;
	}

IL_00a8:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_24, L_26);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_03b5;
	}

IL_00c9:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_29, L_31);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ea;
		}
	}
	{
		V_2 = _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
		goto IL_03b5;
	}

IL_00ea:
	{
		Type_t* L_34 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_34, L_36);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_010b;
		}
	}
	{
		V_2 = _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
		goto IL_03b5;
	}

IL_010b:
	{
		Type_t* L_39 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_39, L_41);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_012c;
		}
	}
	{
		V_2 = _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
		goto IL_03b5;
	}

IL_012c:
	{
		Type_t* L_44 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_44, L_46);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_014d;
		}
	}
	{
		V_2 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		goto IL_03b5;
	}

IL_014d:
	{
		Type_t* L_49 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_49, L_51);
		V_12 = L_52;
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		V_2 = _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
		goto IL_03b5;
	}

IL_016e:
	{
		goto IL_03ad;
	}

IL_0174:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_54, L_56);
		V_13 = L_57;
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_0196;
		}
	}
	{
		V_2 = _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
		goto IL_03b5;
	}

IL_0196:
	{
		RuntimeObject* L_59 = ___0_obj;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_59, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_14;
		if (!L_60)
		{
			goto IL_01f2;
		}
	}
	{
		RuntimeObject* L_61 = ___0_obj;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_62 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___javaInterface_0;
		intptr_t L_63;
		L_63 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_62, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_64, L_63, NULL);
		V_15 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e5:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65 = V_15;
					if (!L_65)
					{
						goto IL_01f1;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_66 = V_15;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_66);
				}

IL_01f1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = V_15;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
			String_t* L_69;
			L_69 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_67, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_68, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_70;
			L_70 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_69, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_70;
			goto IL_03b5;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f2:
	{
		RuntimeObject* L_71 = ___0_obj;
		Type_t* L_72 = V_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_71) == ((RuntimeObject*)(Type_t*)L_72))))
		{
			goto IL_0208;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
		Type_t* L_75 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_74, L_75, NULL);
		G_B36_0 = ((int32_t)(L_76));
		goto IL_0209;
	}

IL_0208:
	{
		G_B36_0 = 0;
	}

IL_0209:
	{
		V_16 = (bool)G_B36_0;
		bool L_77 = V_16;
		if (!L_77)
		{
			goto IL_021b;
		}
	}
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_03b5;
	}

IL_021b:
	{
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_78, L_80);
		V_17 = L_81;
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_023d;
		}
	}
	{
		V_2 = _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
		goto IL_03b5;
	}

IL_023d:
	{
		Type_t* L_83 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		bool L_86;
		L_86 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_83, L_85);
		V_18 = L_86;
		bool L_87 = V_18;
		if (!L_87)
		{
			goto IL_025f;
		}
	}
	{
		V_2 = _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
		goto IL_03b5;
	}

IL_025f:
	{
		Type_t* L_88 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		bool L_91;
		L_91 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_88, L_90);
		V_19 = L_91;
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject* L_93 = ___0_obj;
		Type_t* L_94 = V_0;
		V_21 = (bool)((((RuntimeObject*)(RuntimeObject*)L_93) == ((RuntimeObject*)(Type_t*)L_94))? 1 : 0);
		bool L_95 = V_21;
		if (!L_95)
		{
			goto IL_028c;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_03b5;
	}

IL_028c:
	{
		RuntimeObject* L_96 = ___0_obj;
		V_20 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_96, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_97 = V_20;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99;
		L_99 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_97, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_98, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_22 = L_99;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02d0:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_100 = V_22;
					if (!L_100)
					{
						goto IL_02dc;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_101 = V_22;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_101);
				}

IL_02dc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_102 = V_22;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
			String_t* L_104;
			L_104 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_102, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_103, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_105;
			L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_104, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_105;
			goto IL_03b5;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		Type_t* L_108 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_107, L_108, NULL);
		V_23 = L_109;
		bool L_110 = V_23;
		if (!L_110)
		{
			goto IL_0351;
		}
	}
	{
		Type_t* L_111 = V_0;
		int32_t L_112;
		L_112 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Type::GetArrayRank() */, L_111);
		V_25 = (bool)((((int32_t)((((int32_t)L_112) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_113 = V_25;
		if (!L_113)
		{
			goto IL_0312;
		}
	}
	{
		Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F9959D6967BF0405610B0041D446B892A631997)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var)));
	}

IL_0312:
	{
		StringBuilder_t* L_115 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_115, NULL);
		V_24 = L_115;
		StringBuilder_t* L_116 = V_24;
		StringBuilder_t* L_117;
		L_117 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_116, ((int32_t)91), NULL);
		StringBuilder_t* L_118 = V_24;
		Type_t* L_119 = V_0;
		Type_t* L_120;
		L_120 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_119);
		String_t* L_121;
		L_121 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_120, NULL);
		StringBuilder_t* L_122;
		L_122 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_118, L_121, NULL);
		StringBuilder_t* L_123 = V_24;
		int32_t L_124;
		L_124 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_123, NULL);
		if ((((int32_t)L_124) > ((int32_t)1)))
		{
			goto IL_0347;
		}
	}
	{
		G_B56_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_034e;
	}

IL_0347:
	{
		StringBuilder_t* L_125 = V_24;
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_125);
		G_B56_0 = L_126;
	}

IL_034e:
	{
		V_2 = G_B56_0;
		goto IL_03b5;
	}

IL_0351:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_127 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_128 = L_127;
		ArrayElementTypeCheck (L_128, _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = L_128;
		Type_t* L_130 = V_0;
		Type_t* L_131 = L_130;
		G_B58_0 = L_131;
		G_B58_1 = 1;
		G_B58_2 = L_129;
		G_B58_3 = L_129;
		if (L_131)
		{
			G_B59_0 = L_131;
			G_B59_1 = 1;
			G_B59_2 = L_129;
			G_B59_3 = L_129;
			goto IL_036a;
		}
	}
	{
		G_B60_0 = ((String_t*)(NULL));
		G_B60_1 = G_B58_1;
		G_B60_2 = G_B58_2;
		G_B60_3 = G_B58_3;
		goto IL_036f;
	}

IL_036a:
	{
		String_t* L_132;
		L_132 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B59_0);
		G_B60_0 = L_132;
		G_B60_1 = G_B59_1;
		G_B60_2 = G_B59_2;
		G_B60_3 = G_B59_3;
	}

IL_036f:
	{
		ArrayElementTypeCheck (G_B60_2, G_B60_0);
		(G_B60_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B60_1), (String_t*)G_B60_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_133 = G_B60_3;
		ArrayElementTypeCheck (L_133, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = L_133;
		RuntimeObject* L_135 = ___0_obj;
		G_B61_0 = 3;
		G_B61_1 = L_134;
		G_B61_2 = L_134;
		if (L_135)
		{
			G_B62_0 = 3;
			G_B62_1 = L_134;
			G_B62_2 = L_134;
			goto IL_0380;
		}
	}
	{
		G_B63_0 = ((String_t*)(NULL));
		G_B63_1 = G_B61_0;
		G_B63_2 = G_B61_1;
		G_B63_3 = G_B61_2;
		goto IL_0386;
	}

IL_0380:
	{
		RuntimeObject* L_136 = ___0_obj;
		String_t* L_137;
		L_137 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_136);
		G_B63_0 = L_137;
		G_B63_1 = G_B62_0;
		G_B63_2 = G_B62_1;
		G_B63_3 = G_B62_2;
	}

IL_0386:
	{
		ArrayElementTypeCheck (G_B63_2, G_B63_0);
		(G_B63_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B63_1), (String_t*)G_B63_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = G_B63_3;
		ArrayElementTypeCheck (L_138, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		(L_138)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_139 = L_138;
		Type_t* L_140 = V_0;
		RuntimeObject* L_141 = ___0_obj;
		G_B64_0 = 5;
		G_B64_1 = L_139;
		G_B64_2 = L_139;
		if ((((RuntimeObject*)(Type_t*)L_140) == ((RuntimeObject*)(RuntimeObject*)L_141)))
		{
			G_B65_0 = 5;
			G_B65_1 = L_139;
			G_B65_2 = L_139;
			goto IL_039c;
		}
	}
	{
		G_B66_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D));
		G_B66_1 = G_B64_0;
		G_B66_2 = G_B64_1;
		G_B66_3 = G_B64_2;
		goto IL_03a1;
	}

IL_039c:
	{
		G_B66_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D));
		G_B66_1 = G_B65_0;
		G_B66_2 = G_B65_1;
		G_B66_3 = G_B65_2;
	}

IL_03a1:
	{
		ArrayElementTypeCheck (G_B66_2, G_B66_0);
		(G_B66_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B66_1), (String_t*)G_B66_0);
		String_t* L_142;
		L_142 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B66_3, NULL);
		Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var)));
	}

IL_03ad:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_03b5;
	}

IL_03b5:
	{
		String_t* L_144 = V_2;
		return L_144;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08, NULL);
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_4 = L_18;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_19 = V_4;
		return L_19;
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
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0 (intptr_t ___0_javaClass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_signature;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_methodName;
		String_t* L_2 = ___2_signature;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_fieldName;
		String_t* L_2 = ___2_signature;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_jrunnable;
		intptr_t L_1;
		L_1 = _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_0 = ___0_proxy;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_0, NULL);
		V_0 = L_1;
	}
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = Common_GetActivity_m33E672D97C605F07C4EE5F927F4C8D21F8D4F2B7(NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_2, _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		intptr_t L_4;
		L_4 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = V_0;
		intptr_t L_6;
		L_6 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_5, NULL);
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_7 = ___0_proxy;
		intptr_t L_8;
		L_8 = _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36(L_4, L_6, L_7, NULL);
		V_1 = L_8;
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Object)
		RuntimeObject* L_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0038:
	{
		intptr_t L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = _AndroidJNIHelper_CreateJNIArgArray_mFB22FA0559B96CAA29D2A63EA56EF62F0280AA39(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = ___1_jniArgs;
		_AndroidJNIHelper_DeleteJNIArgArray_m3920D9869CEC7D9898B83ADC4457509D94897473(L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40 (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
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
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn) (String_t*);
	static AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FindClass(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43 (intptr_t ___0_refMethod, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn) (intptr_t);
	static AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_refMethod);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn) ();
	static AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionOccurred()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn) ();
	static AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionClear()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn) (int32_t);
	static AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_capacity);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn) (intptr_t);
	static AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_ptr);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn) (intptr_t);
	static AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn) (intptr_t);
	static AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn) (intptr_t);
	static AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn) (intptr_t);
	static AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn) (intptr_t);
	static AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn) (intptr_t);
	static AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
// System.Boolean UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB (intptr_t ___0_obj1, intptr_t ___1_obj2, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn) (intptr_t, intptr_t);
	static AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_obj1, ___1_obj2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn) (intptr_t);
	static AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B (String_t* ___0_chars, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_chars;
		intptr_t L_1;
		L_1 = AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC (String_t* ___0_chars, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn) (String_t*);
	static AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewStringFromStr(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_chars);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C (intptr_t ___0_str, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn) (intptr_t);
	static AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_str);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn) (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*);
	static AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*);
	static AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToByteArray(System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8_ftn) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*);
	static AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B_ftn) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*);
	static AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToCharArray(System.Char[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246_ftn) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*);
	static AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToShortArray(System.Int16[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208_ftn) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*);
	static AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToIntArray(System.Int32[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92_ftn) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*);
	static AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToLongArray(System.Int64[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B_ftn) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*);
	static AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToFloatArray(System.Single[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E_ftn) (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*);
	static AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_arrayClass, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944_ftn) (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, intptr_t);
	static AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_arrayClass);
	return icallRetVal;
}
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn) (intptr_t);
	static AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)");
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn) (intptr_t);
	static AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)");
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn) (intptr_t);
	static AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)");
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn) (intptr_t);
	static AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)");
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn) (intptr_t);
	static AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)");
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn) (intptr_t);
	static AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)");
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn) (intptr_t);
	static AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)");
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn) (intptr_t);
	static AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)");
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn) (intptr_t);
	static AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)");
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn) (intptr_t);
	static AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043 (int32_t ___0_size, intptr_t ___1_clazz, intptr_t ___2_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn) (int32_t, intptr_t, intptr_t);
	static AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_size, ___1_clazz, ___2_obj);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn) (intptr_t, int32_t);
	static AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_index);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2 (intptr_t ___0_array, int32_t ___1_index, intptr_t ___2_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn) (intptr_t, int32_t, intptr_t);
	static AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___0_array, ___1_index, ___2_obj);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00af;
		}
	}
	{
		AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		intptr_t L_5;
		L_5 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C)), NULL);
		V_2 = L_5;
		intptr_t L_6;
		L_6 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E)), NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				intptr_t L_7 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_7, NULL);
				intptr_t L_8 = V_2;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_8, NULL);
				intptr_t L_9 = V_3;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_9, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_10 = V_2;
			intptr_t L_11;
			L_11 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56)), NULL);
			V_4 = L_11;
			intptr_t L_12 = V_3;
			intptr_t L_13;
			L_13 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB)), NULL);
			V_5 = L_13;
			intptr_t L_14 = V_0;
			intptr_t L_15 = V_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_16 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)0);
			String_t* L_17;
			L_17 = AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C(L_14, L_15, L_16, NULL);
			V_6 = L_17;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)1);
			V_7 = L_18;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_19 = V_7;
			intptr_t L_20 = V_0;
			((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_20;
			intptr_t L_21 = V_3;
			intptr_t L_22 = V_5;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_23 = V_7;
			String_t* L_24;
			L_24 = AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB(L_21, L_22, L_23, NULL);
			V_8 = L_24;
			String_t* L_25 = V_6;
			String_t* L_26 = V_8;
			AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_27 = (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)));
			AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541(L_27, L_25, L_26, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC_RuntimeMethod_var)));
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0 (intptr_t ___0_globalref, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_globalref;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_4 = ___0_globalref;
		AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D(L_4, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A (intptr_t ___0_globalref, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_globalref;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_4 = ___0_globalref;
		AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D(L_4, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_localref;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_4 = ___0_localref;
		AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_4, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A (String_t* ___0_chars, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = ___0_chars;
			intptr_t L_1;
			L_1 = AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_str;
			String_t* L_1;
			L_1 = AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_ptr;
			intptr_t L_1;
			L_1 = AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536 (intptr_t ___0_obj, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B (intptr_t ___0_refMethod, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_refMethod;
			intptr_t L_1;
			L_1 = AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B (String_t* ___0_name, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = ___0_name;
			intptr_t L_1;
			L_1 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m9DF3572307421E944B3A95DC82EF90CEF1774DA2 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_NewObject_mF026198FBA1D5E69719DEB52F41E9FDB8B7F93A4(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			intptr_t L_2;
			L_2 = AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			String_t* L_2;
			L_2 = AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.AndroidJNISafe::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AndroidJNISafe::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			double L_2;
			L_2 = AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.AndroidJNISafe::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			float L_2;
			L_2 = AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int64_t L_2;
			L_2 = AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int16_t L_2;
			L_2 = AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int8_t L_2;
			L_2 = AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			bool L_2;
			L_2 = AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int32_t L_2;
			L_2 = AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_CallStaticObjectMethod_m5D0C02761602E6ED1AE4FAD90B7762A6376A35D5(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			String_t* L_3;
			L_3 = AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_m12390A6D01F33879740A94195E445D7B3D4CD652 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallStaticCharMethod_mCC7C287BA2CD34A0526577D194237277F9708353(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m0510A1F18E0ED9CE8CFA82C6B2A56DCD89814247 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			double L_3;
			L_3 = AndroidJNI_CallStaticDoubleMethod_m052484ED56097C439FA22A89CA0FE393BBFFD305(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m46EE9FEEEFCF68FA1A014C2E417454BA55206945 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			float L_3;
			L_3 = AndroidJNI_CallStaticFloatMethod_m19DBC375D9E707CA40BE8D997C84F553EF71040A(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mE3487C989E9D5EFA0FB2356408B7FF40E61DBD12 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int64_t L_3;
			L_3 = AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m47EFDF3473E6C4D6F61956725E6595A0B919589D (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int16_t L_3;
			L_3 = AndroidJNI_CallStaticShortMethod_m10E61636B448E36034CD6DE902A286B0257C7586(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m68A45FE3EEE495648B36902B51ECDB76385EE736 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int8_t L_3;
			L_3 = AndroidJNI_CallStaticSByteMethod_mA2BA2E72F9CF73A04E15420CDCCFD7CFD809E0DA(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_mA65977CB0FC4E3759938FCBD7BA43330317E8A3D (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			bool L_3;
			L_3 = AndroidJNI_CallStaticBooleanMethod_m6D035B0525AF900D6BF3F91C174C093FE2531453(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m558318BA8E7A0A7526E48FF7218876FB987F397B (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int32_t L_3;
			L_3 = AndroidJNI_CallStaticIntMethod_m7AA48D4603F398E99E45DF3E057BB58FB6D374FC(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			String_t* L_2;
			L_2 = AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.AndroidJNISafe::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AndroidJNISafe::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			double L_2;
			L_2 = AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.AndroidJNISafe::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			float L_2;
			L_2 = AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int64_t L_2;
			L_2 = AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int16_t L_2;
			L_2 = AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int8_t L_2;
			L_2 = AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			bool L_2;
			L_2 = AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int32_t L_2;
			L_2 = AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_CallObjectMethod_m21944B19534CA3EB8885BE3F1057E6A72AAC4355(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			String_t* L_3;
			L_3 = AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallCharMethod_m560F0E113CA6E4F4A73BDAF93D53DADDA8D2047B(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			float L_3;
			L_3 = AndroidJNI_CallFloatMethod_mF94056CFCC7E045F7B350D2D3285335482A2AE8E(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int64_t L_3;
			L_3 = AndroidJNI_CallLongMethod_mDE82FA5F26CBE0E0F8251D3A7698D376524E1A4B(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int16_t L_3;
			L_3 = AndroidJNI_CallShortMethod_mC3C11BD9E32604C41710756104D5A8AFCFA792E4(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int8_t L_3;
			L_3 = AndroidJNI_CallSByteMethod_mA98E61BB8186A06CBF4A175E29E2F0F194FB8507(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			bool L_3;
			L_3 = AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
			int32_t L_3;
			L_3 = AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
			L_1 = AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		return L_2;
	}
}
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1;
			L_1 = AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = V_0;
		return L_2;
	}
}
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
			L_1 = AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		return L_2;
	}
}
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
			L_1 = AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		return L_2;
	}
}
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
			L_1 = AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
			L_1 = AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
			L_1 = AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
			L_1 = AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = V_0;
		return L_2;
	}
}
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
			L_1 = AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_type, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
			intptr_t L_1 = ___1_type;
			intptr_t L_2;
			L_2 = AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0 (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			int32_t L_1 = ___1_index;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___0_array;
			int32_t L_1;
			L_1 = AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
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
// UnityEngine.AndroidJavaObject UnityEngine.Android.Common::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Common_GetActivity_m33E672D97C605F07C4EE5F927F4C8D21F8D4F2B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields*)il2cpp_codegen_static_fields_for(Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_0 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields*)il2cpp_codegen_static_fields_for(Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_1 = L_2;
		goto IL_0047;
	}

IL_0015:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_2;
					if (!L_4)
					{
						goto IL_003e;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = V_2;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
			L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_6, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields*)il2cpp_codegen_static_fields_for(Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var))->___m_Activity_0 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&((Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields*)il2cpp_codegen_static_fields_for(Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var))->___m_Activity_0), (void*)L_7);
			goto IL_003f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_StaticFields*)il2cpp_codegen_static_fields_for(Common_t51E4AE20BD019FEDEDF36F2A8806B872D4278913_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_1 = L_8;
		goto IL_0047;
	}

IL_0047:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
