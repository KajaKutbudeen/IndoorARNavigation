#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t9DF74D741578F090EC2B64A9F94C72146C743F50;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6;
// System.Lazy`1<UnityMessageManager>
struct Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D;
// SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE;
// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4;
// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39;
// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD;
// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A;
IL2CPP_EXTERN_C String_t* _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653;
IL2CPP_EXTERN_C String_t* _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35;
IL2CPP_EXTERN_C String_t* _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753;
IL2CPP_EXTERN_C String_t* _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CdataU3Ei__Field_3)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CdataU3Ei__Field_3)); }
	inline RuntimeObject * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline RuntimeObject ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(RuntimeObject * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___entries_1)); }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___keys_7)); }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___values_8)); }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____parent_1)); }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____previous_2)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__previous_2() const { return ____previous_2; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____next_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__next_3() const { return ____next_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7  : public RuntimeObject
{
public:
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___data_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_data_3() const { return ___data_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD  : public RuntimeObject
{
public:
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callBack_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___data_1)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_data_1() const { return ___data_1; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___callBack_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_callBack_2() const { return ___callBack_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4  : public JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_15() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____addingNew_15)); }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * get__addingNew_15() const { return ____addingNew_15; }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB ** get_address_of__addingNew_15() { return &____addingNew_15; }
	inline void set__addingNew_15(AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * value)
	{
		____addingNew_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34  : public JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ____properties_18)); }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields
{
public:
	// System.Lazy`1<T> SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * ___LazyInstance_4;

public:
	inline static int32_t get_offset_of_LazyInstance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields, ___LazyInstance_4)); }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * get_LazyInstance_4() const { return ___LazyInstance_4; }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D ** get_address_of_LazyInstance_4() { return &___LazyInstance_4; }
	inline void set_LazyInstance_4(Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * value)
	{
		___LazyInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LazyInstance_4), (void*)value);
	}
};


// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831  : public SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD
{
public:
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * ___waitCallbackMessageMap_9;

public:
	inline static int32_t get_offset_of_OnMessage_7() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnMessage_7)); }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * get_OnMessage_7() const { return ___OnMessage_7; }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** get_address_of_OnMessage_7() { return &___OnMessage_7; }
	inline void set_OnMessage_7(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * value)
	{
		___OnMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFlutterMessage_8() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnFlutterMessage_8)); }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * get_OnFlutterMessage_8() const { return ___OnFlutterMessage_8; }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** get_address_of_OnFlutterMessage_8() { return &___OnFlutterMessage_8; }
	inline void set_OnFlutterMessage_8(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * value)
	{
		___OnFlutterMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFlutterMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitCallbackMessageMap_9() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___waitCallbackMessageMap_9)); }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * get_waitCallbackMessageMap_9() const { return ___waitCallbackMessageMap_9; }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E ** get_address_of_waitCallbackMessageMap_9() { return &___waitCallbackMessageMap_9; }
	inline void set_waitCallbackMessageMap_9(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * value)
	{
		___waitCallbackMessageMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCallbackMessageMap_9), (void*)value);
	}
};

struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields
{
public:
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_6;

public:
	inline static int32_t get_offset_of_ID_6() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields, ___ID_6)); }
	inline int32_t get_ID_6() const { return ___ID_6; }
	inline int32_t* get_address_of_ID_6() { return &___ID_6; }
	inline void set_ID_6(int32_t value)
	{
		___ID_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m614062F255FD4C4AAB1B1671C7305AAFFC3D8995_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared (U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF * __this, int32_t ___id0, RuntimeObject * ___seq1, RuntimeObject * ___name2, RuntimeObject * ___data3, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingletonMonoBehaviour_1_get_Instance_mCA2757911A1DC05C4D28E5B02BB017A3EB925AC4_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared (SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE * __this, const RuntimeMethod* method);

// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_Parse_mF299554CB71CD959B629CA0D082CE4FDC1308B5D (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0 (JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m614062F255FD4C4AAB1B1671C7305AAFFC3D8995_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *, int32_t, String_t*, String_t*, RuntimeObject *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646 (RuntimeObject * ___o0, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<UnityMessageManager>::get_Instance()
inline UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9 (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_mCA2757911A1DC05C4D28E5B02BB017A3EB925AC4_gshared)(method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m9633E3233FDB0C233A780E1D0E4FE80B54F6F307 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m1041389F5AAB2826FCBE3AC3761C84418570D73E (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mC8F0A09739DCE2973811A80B8DA410D1EF2D9D60 (const RuntimeMethod* method);
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m18BFA755D93D0C6FDB1A644EED39F715AFFDBCA4 (const RuntimeMethod* method);
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m2E36DDF29E2618DEF1B0535F58B0D3C29077ADBB (const RuntimeMethod* method);
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m692EDFD8D13B8BD7AA21322E20110FB41512E88E (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mD664B6B57E739EA02A5B8EDA6019F35B67687A2E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(!0,!1)
inline void Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *, int32_t, String_t*, String_t*, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_m5FA163FB624B64EFD04CA945139108D13B1C6171 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void SingletonMonoBehaviour`1<UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD * __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD *, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared)(__this, method);
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
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_m5FA163FB624B64EFD04CA945139108D13B1C6171 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// JObject m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_1;
		L_1 = JObject_Parse_mF299554CB71CD959B629CA0D082CE4FDC1308B5D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_2 = V_0;
		NullCheck(L_2);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3;
		L_3 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178(L_3, /*hidden argument*/Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_5 = V_0;
		NullCheck(L_5);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_6;
		L_6 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002(L_6, /*hidden argument*/Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_8 = V_0;
		NullCheck(L_8);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_9;
		L_9 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002(L_9, /*hidden argument*/Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_11 = V_0;
		NullCheck(L_11);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_12;
		L_12 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_13 = (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *)il2cpp_codegen_object_new(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32(L_13, L_4, L_7, L_10, L_12, /*hidden argument*/NULL);
		// return handler;
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method)
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->set_seq_1(L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->set_name_2(L_2);
		// this.data = data;
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3 = ___data3;
		__this->set_data_3(L_3);
		// }
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m9EF609A41518571430690AFA490250C054CA5C4B (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->get_id_0();
		String_t* L_1 = __this->get_name_2();
		RuntimeObject * L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * L_3 = (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_4;
		L_4 = JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_5, L_8, /*hidden argument*/NULL);
		// }
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
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m1041389F5AAB2826FCBE3AC3761C84418570D73E (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, /*hidden argument*/NULL);
		// jc.CallStatic("onUnitySceneLoaded", scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		bool L_9;
		L_9 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		bool L_13;
		L_13 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653, L_12, /*hidden argument*/NULL);
		// }
		goto IL_005f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_16, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	} // end catch (depth: 1)

IL_005f:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m692EDFD8D13B8BD7AA21322E20110FB41512E88E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, /*hidden argument*/NULL);
		// jc.CallStatic("onUnityMessage", message);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_2, /*hidden argument*/NULL);
		// }
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mC8F0A09739DCE2973811A80B8DA410D1EF2D9D60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// var jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// var overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("showMainActivity");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m18BFA755D93D0C6FDB1A644EED39F715AFFDBCA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("unloadPlayer");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m2E36DDF29E2618DEF1B0535F58B0D3C29077ADBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("quitPlayer");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_m31453D518E0E54753A5581B23A7ABEFD6165C537 (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mD664B6B57E739EA02A5B8EDA6019F35B67687A2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->set_ID_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		return L_1;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m7F72EFB7A6934E92EE91211BE100AAFAC60F1EF8 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_mFBE226643D6E84B5D7931C507A60D9C965B8E2B0 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m739FF9E4E00FCB9BC32CB2D7892444941B0601AC (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_m6407A819093B1AFEF9270B4453A3E479124326A5 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m366A7C3E50AE07BA45A2A49FE9382E9AA838F54B (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m9633E3233FDB0C233A780E1D0E4FE80B54F6F307(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m1041389F5AAB2826FCBE3AC3761C84418570D73E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m247203DD3FC1D1995A57C0302A6E23E594A927D2 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_mC8F0A09739DCE2973811A80B8DA410D1EF2D9D60(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m37214FA2AE636F567825DB030434D31C80223593 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_m18BFA755D93D0C6FDB1A644EED39F715AFFDBCA4(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m08F6EEDA9F59BB793055A6101DD1ACD62F18F49F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m2E36DDF29E2618DEF1B0535F58B0D3C29077ADBB(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m692EDFD8D13B8BD7AA21322E20110FB41512E88E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m72DFFAE91711298BB40833DC9C92B0D3BD778C65 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mD664B6B57E739EA02A5B8EDA6019F35B67687A2E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_1 = ___message0;
		NullCheck(L_1);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = L_1->get_callBack_2();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_3 = __this->get_waitCallbackMessageMap_9();
		int32_t L_4 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_7 = ___message0;
		NullCheck(L_7);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = L_7->get_callBack_2();
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_11 = ___message0;
		NullCheck(L_11);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_12 = L_11->get_data_1();
		U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * L_13 = (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F(L_13, G_B5_1, G_B5_0, L_10, L_12, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_14;
		L_14 = JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mB022006DD53A537C38372F271DF8B7C9E119E5C9_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m4D0F43F8D328F97496576D9930AAB3686E6A8558 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// if (OnMessage != null)
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = __this->get_OnMessage_7();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m1A5DC207EFB4A24E9571BDA6EBD3D8E3AFBB576F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * V_0 = NULL;
	UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * V_1 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___message0 = L_3;
		// }
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_5;
		L_5 = MessageHandler_Deserialize_m5FA163FB624B64EFD04CA945139108D13B1C6171(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_seq_1();
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_9 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_id_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5(L_9, L_11, (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_13 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_id_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67(L_13, L_15, /*hidden argument*/Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		// if (m.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_17 = V_1;
		NullCheck(L_17);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_18 = L_17->get_callBack_2();
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_19 = V_1;
		NullCheck(L_19);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_20 = L_19->get_callBack_2();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9(L_21, /*hidden argument*/MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		NullCheck(L_20);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_20, L_22, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
	}

IL_007b:
	{
		// return;
		return;
	}

IL_007c:
	{
		// if (OnFlutterMessage != null)
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_23 = __this->get_OnFlutterMessage_8();
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnFlutterMessage(handler);
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_24 = __this->get_OnFlutterMessage_8();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_25 = V_0;
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m03CBB4E08C8BA079E07D430AD377D38400DB82BF (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_0 = (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *)il2cpp_codegen_object_new(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147(L_0, /*hidden argument*/Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		__this->set_waitCallbackMessageMap_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m698E5F0CEBB7AC7D167DD8510E46C02ECE0F3B87 (const RuntimeMethod* method)
{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mABBBB0720CEC9ADB6560700A2EE640194D040EF8 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m5FD705274B59AF179AE22FF30A248A4A24B4BECA (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m8EB1088C4795F088A729524E99334E63ED48E6B7 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m27BFC33CA6935FF169ED735C704019CD4DF0E8C1 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m6F3C7C037B912D8BD1CB2FAB6CF0E8D8CB3825BA (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE67B6A56FC2D25FC6BAE72DF3DDA9A01260DF3D2 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
