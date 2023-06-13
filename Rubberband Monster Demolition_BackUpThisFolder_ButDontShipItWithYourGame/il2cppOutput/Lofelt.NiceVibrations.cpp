#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98;
// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B;
// Lofelt.NiceVibrations.HapticSource
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4;
// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49;
// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53;
IL2CPP_EXTERN_C String_t* _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82;
IL2CPP_EXTERN_C String_t* _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF;
IL2CPP_EXTERN_C String_t* _stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19;
IL2CPP_EXTERN_C String_t* _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__22_1_mB0F532C7AAF72B1A953719AB0A2F7B66AED862FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__18_0_m28E1AC9CB310EC79EEB19263EBD22C4B47519220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__18_1_mB8E98191D80847266E34A2B190CC5510B22CE932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__18_2_mFC4C0E6279F82F09A2D476CDE6B0C253BCEEC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CInitU3Eb__0_m9584BF0D61D1D8B7424EFE4623005C636F90248E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDCDD06645718B06856BC7DD0DCF0BC9A71625236 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Lofelt.NiceVibrations.HapticController
struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA  : public RuntimeObject
{
};

struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields
{
	// System.Boolean Lofelt.NiceVibrations.HapticController::lofeltHapticsInitalized
	bool ___lofeltHapticsInitalized_0;
	// System.Timers.Timer Lofelt.NiceVibrations.HapticController::playbackFinishedTimer
	Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* ___playbackFinishedTimer_1;
	// System.Single Lofelt.NiceVibrations.HapticController::clipLoadedDuration
	float ___clipLoadedDuration_2;
	// System.String Lofelt.NiceVibrations.HapticController::previousClipLoadedData
	String_t* ___previousClipLoadedData_3;
	// System.Single Lofelt.NiceVibrations.HapticController::lastSeekTime
	float ___lastSeekTime_4;
	// System.Single Lofelt.NiceVibrations.HapticController::previousAmplitudeMultiplicationValue
	float ___previousAmplitudeMultiplicationValue_5;
	// System.Single Lofelt.NiceVibrations.HapticController::previousFrequencyShift
	float ___previousFrequencyShift_6;
	// System.Boolean Lofelt.NiceVibrations.HapticController::deviceMeetsMinimumRequirements
	bool ___deviceMeetsMinimumRequirements_7;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isLoopingEnabled
	bool ___isLoopingEnabled_8;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isPlaybackLooping
	bool ___isPlaybackLooping_9;
	// System.Boolean Lofelt.NiceVibrations.HapticController::_hapticsEnabled
	bool ____hapticsEnabled_10;
	// System.Single Lofelt.NiceVibrations.HapticController::_hapticLevel
	float ____hapticLevel_11;
	// System.Action Lofelt.NiceVibrations.HapticController::LoadedClipChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___LoadedClipChanged_12;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStarted_13;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStopped_14;
	// System.Action Lofelt.NiceVibrations.HapticController::HapticLevelChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HapticLevelChanged_15;
};

// Lofelt.NiceVibrations.HapticPatterns
struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56  : public RuntimeObject
{
};

struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields
{
	// System.String Lofelt.NiceVibrations.HapticPatterns::emphasisTemplate
	String_t* ___emphasisTemplate_0;
	// System.String Lofelt.NiceVibrations.HapticPatterns::constantTemplate
	String_t* ___constantTemplate_1;
};

// Lofelt.NiceVibrations.LofeltHaptics
struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A  : public RuntimeObject
{
};

struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields
{
	// UnityEngine.AndroidJavaObject Lofelt.NiceVibrations.LofeltHaptics::lofeltHaptics
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___lofeltHaptics_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// Lofelt.NiceVibrations.Utils
struct Utils_t5D311A9F13D8EF984585C602BDD1468D2E0BE5ED  : public RuntimeObject
{
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

// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4  : public RuntimeObject
{
};

struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields
{
	// Lofelt.NiceVibrations.HapticController/<>c Lofelt.NiceVibrations.HapticController/<>c::<>9
	U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback Lofelt.NiceVibrations.HapticController/<>c::<>9__22_1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_1_1;
};

// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49  : public RuntimeObject
{
	// System.Threading.SynchronizationContext Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0::syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___syncContext_0;
};

// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE  : public RuntimeObject
{
};

struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields
{
	// Lofelt.NiceVibrations.HapticSource/<>c Lofelt.NiceVibrations.HapticSource/<>c::<>9
	U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* ___U3CU3E9_0;
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time_1;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::enabled
	bool ___enabled_5;
	// System.Boolean System.Timers.Timer::initializing
	bool ___initializing_6;
	// System.Boolean System.Timers.Timer::delayedEnable
	bool ___delayedEnable_7;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::onIntervalElapsed
	ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___onIntervalElapsed_8;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_9;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::synchronizingObject
	RuntimeObject* ___synchronizingObject_10;
	// System.Boolean System.Timers.Timer::disposed
	bool ___disposed_11;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___timer_12;
	// System.Threading.TimerCallback System.Timers.Timer::callback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback_13;
	// System.Object System.Timers.Timer::cookie
	RuntimeObject* ___cookie_14;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51  : public MulticastDelegate_t
{
};

// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Lofelt.NiceVibrations.HapticClip::data
	String_t* ___data_4;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lofelt.NiceVibrations.HapticReceiver::_hapticLevel
	float ____hapticLevel_4;
	// System.Boolean Lofelt.NiceVibrations.HapticReceiver::_hapticsEnabled
	bool ____hapticsEnabled_5;
};

// Lofelt.NiceVibrations.HapticSource
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Lofelt.NiceVibrations.HapticClip Lofelt.NiceVibrations.HapticSource::clip
	HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip_5;
	// System.Int32 Lofelt.NiceVibrations.HapticSource::priority
	int32_t ___priority_6;
	// System.Single Lofelt.NiceVibrations.HapticSource::seekTime
	float ___seekTime_7;
	// System.Boolean Lofelt.NiceVibrations.HapticSource::_loop
	bool ____loop_8;
	// System.Single Lofelt.NiceVibrations.HapticSource::_amplitudeMultiplication
	float ____amplitudeMultiplication_9;
	// System.Single Lofelt.NiceVibrations.HapticSource::_frequencyShift
	float ____frequencyShift_10;
};

struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields
{
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::loadedHapticSource
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___loadedHapticSource_11;
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::lastPlayedHapticSource
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___lastPlayedHapticSource_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0 (float ___factor0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m85B83764327EBBC968E31D8B01F8621CA909FBC0 (U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___value0, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.Utils::IsVersionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsVersionSupported_m0168931383A70068A579B243DB543A0FFD6D9A9D (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_m50D502D4991FC0ABC171513111C7FF020DE49F3A (String_t* ___data0, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.LofeltHaptics::GetClipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LofeltHaptics_GetClipDuration_mB8FDE5E1C096414648093E33A2AE2DF9A4031DDC (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___factor0, const RuntimeMethod* method) ;
// System.String Lofelt.NiceVibrations.HapticClip::GetData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HapticClip_GetData_m5978B62AE6F348396E26150ADEE0725006F47F85_inline (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F (String_t* ___data0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_Interval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___time0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___shift0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___enabled0, const RuntimeMethod* method) ;
// System.Boolean System.Timers.Timer::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA (float ___shift0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___time0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::InitializeIosController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_InitializeIosController_mBB6B7E851F5AA3F9B61EC01FBB6729138EB73601 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reload_m21BF0302E05793C8181402B04FB931C4D3F679FF (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::ReleaseIosController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_ReleaseIosController_mDBFE4276DD7C6CEB8CB32B40BF0D35DE11A74E92 (const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticController::get_hapticLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticLevel_mFC4AC0C3A3298C09B66AE06069D786083A086B61 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___hasFocus0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticSource::get_amplitudeMultiplication()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_amplitudeMultiplication_mBC6572F360870C71C2E42A23805B6A0060F55EAF_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,T[])
inline void AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___args1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 Lofelt.NiceVibrations.Utils::AndroidSDKVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_AndroidSDKVersion_m613FA5A73E3299EFA1E7694B6763278FA2F188E3 (const RuntimeMethod* method) ;
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
// System.Void Lofelt.NiceVibrations.HapticClip::SetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticClip_SetData_mB8948D9287027C9C2C6F2E5C75EE50C102276858 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	{
		// this.data = data;
		String_t* L_0 = ___data0;
		__this->___data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_4), (void*)L_0);
		// }
		return;
	}
}
// System.String Lofelt.NiceVibrations.HapticClip::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HapticClip_GetData_m5978B62AE6F348396E26150ADEE0725006F47F85 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) 
{
	{
		// return this.data;
		String_t* L_0 = __this->___data_4;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticClip__ctor_mDB818615E9073D26B347B1E56B1F03731EEE47B6 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000c:
	{
		// _hapticsEnabled = value;
		bool L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10 = L_1;
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticController::get_hapticLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticLevel_mFC4AC0C3A3298C09B66AE06069D786083A086B61 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _hapticLevel = value;
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11 = L_0;
		// SetAmplitudeMultiplication(_hapticLevel);
		float L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11;
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(L_1, NULL);
		// HapticLevelChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___HapticLevelChanged_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CInitU3Eb__0_m9584BF0D61D1D8B7424EFE4623005C636F90248E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* V_0 = NULL;
	{
		// if (!lofeltHapticsInitalized)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0;
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* L_1 = (U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3CU3Ec__DisplayClass22_0__ctor_m85B83764327EBBC968E31D8B01F8621CA909FBC0(L_1, NULL);
		V_0 = L_1;
		// lofeltHapticsInitalized = true;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0 = (bool)1;
		// var syncContext = System.Threading.SynchronizationContext.Current;
		U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* L_2 = V_0;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		NullCheck(L_2);
		L_2->___syncContext_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___syncContext_0), (void*)L_3);
		// playbackFinishedTimer.Elapsed += (object obj, System.Timers.ElapsedEventArgs args) =>
		// {
		//     // Timer elapsed events are called from a separate thread, so use
		//     // SynchronizationContext to handle it in the main thread.
		//     syncContext.Post(_ =>
		//     {
		//         HandleFinishedPlayback();
		//     }, null);
		// };
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* L_5 = V_0;
		ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* L_6 = (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51*)il2cpp_codegen_object_new(ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CInitU3Eb__0_m9584BF0D61D1D8B7424EFE4623005C636F90248E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D(L_4, L_6, NULL);
		// if (Utils.IsVersionSupported())
		bool L_7;
		L_7 = Utils_IsVersionSupported_m0168931383A70068A579B243DB543A0FFD6D9A9D(NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// LofeltHaptics.Initialize();
		LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8(NULL);
		// deviceMeetsMinimumRequirements = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_8;
		L_8 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsMinimumRequirements_7 = L_8;
	}

IL_004a:
	{
		// return deviceMeetsMinimumRequirements;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_9 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsMinimumRequirements_7;
		return L_9;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::DeviceMeetsMinimumRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_DeviceMeetsMinimumRequirements_mD129DB033A9AC2199B7447D66BE6E8AB72CA049A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		// return deviceMeetsMinimumRequirements;
		bool L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsMinimumRequirements_7;
		return L_1;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// LofeltHaptics.Load(data);
		String_t* L_1 = ___data0;
		LofeltHaptics_Load_m50D502D4991FC0ABC171513111C7FF020DE49F3A(L_1, NULL);
		// previousClipLoadedData = data;
		String_t* L_2 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3), (void*)L_2);
		// clipLoadedDuration = LofeltHaptics.GetClipDuration();
		float L_3;
		L_3 = LofeltHaptics_GetClipDuration_mB8FDE5E1C096414648093E33A2AE2DF9A4031DDC(NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDuration_2 = L_3;
		// lastSeekTime = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// LofeltHaptics.SetAmplitudeMultiplication(_hapticLevel);
		float L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11;
		LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684(L_4, NULL);
	}

IL_0031:
	{
		// LoadedClipChanged?.Invoke();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip.GetData());
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___clip0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = HapticClip_GetData_m5978B62AE6F348396E26150ADEE0725006F47F85_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// lastSeekTime = 0.0f;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// isPlaybackLooping = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_9 = (bool)0;
		// playbackFinishedTimer.Enabled = false;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_0);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_0, (bool)0, NULL);
		// PlaybackStopped?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStopped_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	{
		// if (!_hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// LofeltHaptics.Play();
		LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7(NULL);
	}

IL_0014:
	{
		// isPlaybackLooping = isLoopingEnabled;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabled_8;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_9 = L_2;
		// PlaybackStarted?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0029;
		}
	}
	{
		goto IL_002e;
	}

IL_0029:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B6_0, NULL);
	}

IL_002e:
	{
		// float remainingPlayDuration = Mathf.Max(clipLoadedDuration - lastSeekTime, 0.0f);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_5 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDuration_2;
		float L_6 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_5, L_6)), (0.0f), NULL);
		V_0 = L_7;
		// if (remainingPlayDuration > 0.0f)
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// playbackFinishedTimer.Interval = remainingPlayDuration * 1000;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_9 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		float L_10 = V_0;
		NullCheck(L_9);
		Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536(L_9, ((double)((float)il2cpp_codegen_multiply(L_10, (1000.0f)))), NULL);
		// playbackFinishedTimer.AutoReset = false;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_11 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_11);
		Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D(L_11, (bool)0, NULL);
		// playbackFinishedTimer.Enabled = !isLoopingEnabled;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_12 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		bool L_13 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabled_8;
		NullCheck(L_12);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_007c:
	{
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m94EADABB22195E52670B54015B577DB2F7071196 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip);
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83(L_0, NULL);
		// Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// LofeltHaptics.Stop();
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
	}

IL_000c:
	{
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// LofeltHaptics.Stop();
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
		// LofeltHaptics.Seek(time);
		float L_1 = ___time0;
		LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E(L_1, NULL);
	}

IL_0012:
	{
		// lastSeekTime = time;
		float L_2 = ___time0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = L_2;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0 (float ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.SetAmplitudeMultiplication(factor);
		float L_1 = ___factor0;
		LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684(L_1, NULL);
	}

IL_000d:
	{
		// previousAmplitudeMultiplicationValue = factor;
		float L_2 = ___factor0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousAmplitudeMultiplicationValue_5 = L_2;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA (float ___shift0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.SetFrequencyShift(shift);
		float L_1 = ___shift0;
		LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318(L_1, NULL);
	}

IL_000d:
	{
		// previousFrequencyShift = shift;
		float L_2 = ___shift0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousFrequencyShift_6 = L_2;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.Loop(enabled);
		bool L_1 = ___enabled0;
		LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B(L_1, NULL);
	}

IL_000d:
	{
		// isLoopingEnabled = enabled;
		bool L_2 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabled_8 = L_2;
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playbackFinishedTimer.Enabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000e:
	{
		// return isPlaybackLooping;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_9;
		return L_2;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reload_m21BF0302E05793C8181402B04FB931C4D3F679FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (previousClipLoadedData != null)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// Load(previousClipLoadedData);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		String_t* L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3;
		HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F(L_1, NULL);
		// Loop(isLoopingEnabled);
		bool L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabled_8;
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA(L_2, NULL);
		// if (previousAmplitudeMultiplicationValue != 1.0f)
		float L_3 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousAmplitudeMultiplicationValue_5;
		if ((((float)L_3) == ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		// SetAmplitudeMultiplication(previousAmplitudeMultiplicationValue);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousAmplitudeMultiplicationValue_5;
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(L_4, NULL);
	}

IL_0031:
	{
		// if (previousFrequencyShift != 0.0f)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_5 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousFrequencyShift_6;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		// SetFrequencyShift(previousFrequencyShift);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_6 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousFrequencyShift_6;
		HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA(L_6, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reset_m56A1A297436721691F696EFD3DB7D0B13FB41EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (previousClipLoadedData != null)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// Seek(0.0f);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64((0.0f), NULL);
		// Stop();
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
		// SetAmplitudeMultiplication(1.0f);
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0((1.0f), NULL);
		// SetFrequencyShift(1.0f);
		HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA((1.0f), NULL);
		// Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// if (hasFocus)
		bool L_1 = ___hasFocus0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// LofeltHaptics.InitializeIosController();
		LofeltHaptics_InitializeIosController_mBB6B7E851F5AA3F9B61EC01FBB6729138EB73601(NULL);
		// Reload();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Reload_m21BF0302E05793C8181402B04FB931C4D3F679FF(NULL);
		return;
	}

IL_0015:
	{
		// Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
		// LofeltHaptics.ReleaseIosController();
		LofeltHaptics_ReleaseIosController_mDBFE4276DD7C6CEB8CB32B40BF0D35DE11A74E92(NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController__cctor_m40C60252FDF3595FE36B626765CC6535F8DE012B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool lofeltHapticsInitalized = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0 = (bool)0;
		// static Timer playbackFinishedTimer = new Timer();
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B*)il2cpp_codegen_object_new(Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0(L_0, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1), (void*)L_0);
		// static float clipLoadedDuration = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDuration_2 = (0.0f);
		// static string previousClipLoadedData = null;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousClipLoadedData_3), (void*)(String_t*)NULL);
		// static float lastSeekTime = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// static float previousAmplitudeMultiplicationValue = 1.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousAmplitudeMultiplicationValue_5 = (1.0f);
		// static float previousFrequencyShift = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___previousFrequencyShift_6 = (0.0f);
		// static bool deviceMeetsMinimumRequirements = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsMinimumRequirements_7 = (bool)0;
		// static bool isLoopingEnabled = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabled_8 = (bool)0;
		// static bool isPlaybackLooping = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_9 = (bool)0;
		// internal static bool _hapticsEnabled = true;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10 = (bool)1;
		// internal static float _hapticLevel = 1.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11 = (1.0f);
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m85B83764327EBBC968E31D8B01F8621CA909FBC0 (U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass22_0::<Init>b__0(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitU3Eb__0_m9584BF0D61D1D8B7424EFE4623005C636F90248E (U3CU3Ec__DisplayClass22_0_tEF05F45F548E76FC51691CB7DA209CD5D6938A49* __this, RuntimeObject* ___obj0, ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__22_1_mB0F532C7AAF72B1A953719AB0A2F7B66AED862FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B2_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B2_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B1_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B1_1 = NULL;
	{
		// syncContext.Post(_ =>
		// {
		//     HandleFinishedPlayback();
		// }, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___syncContext_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_1;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_3 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_4 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__22_1_mB0F532C7AAF72B1A953719AB0A2F7B66AED862FB_RuntimeMethod_var), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = L_4;
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B2_1, G_B2_0, NULL);
		// };
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58DA66EECA7FC11F5017378F195B53629FC6498E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_0 = (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4*)il2cpp_codegen_object_new(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479(L_0, NULL);
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::<Init>b__22_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__22_1_mB0F532C7AAF72B1A953719AB0A2F7B66AED862FB (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }, null);
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
// System.Void Lofelt.NiceVibrations.HapticPatterns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns__cctor_m5BBA1A97FFA4808B41A0ABBBE04029209BDC8C46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// emphasisTemplate = (Resources.Load("nv-emphasis-template") as TextAsset).text;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0), (void*)L_1);
		// constantTemplate = (Resources.Load("nv-constant-template") as TextAsset).text;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_2, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_2, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayEmphasis(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayEmphasis_mADB063BD86C4E57BDABA6E4CBAD7490BF18C58D8 (float ___amplitude0, float ___frequency1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (emphasisTemplate == null)
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_1 = ___amplitude0;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (0.0f), (1.0f), NULL);
		V_0 = L_2;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_3 = ___frequency1;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, (0.0f), (1.0f), NULL);
		V_1 = L_4;
		// String clip = emphasisTemplate
		//     .Replace("{amplitude}", clampedAmplitude.ToString())
		//     .Replace("{frequency}", clampedFrequency.ToString())
		//     .Replace("{duration}", duration.ToString());
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_5 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17, L_6, NULL);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE, L_8, NULL);
		V_2 = (0.100000001f);
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_10, NULL);
		// HapticController.Load(clip);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F(L_11, NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayConstant(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayConstant_m3BA7755FE8E837E0B45A29FAD5D5784D0CC2E4BF (float ___amplitude0, float ___frequency1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (constantTemplate == null)
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_1 = ___amplitude0;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (0.0f), (1.0f), NULL);
		V_0 = L_2;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_3 = ___frequency1;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, (0.0f), (1.0f), NULL);
		// float clampedDuration = Mathf.Max(duration, 0.0f);
		float L_5 = ___duration2;
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_5, (0.0f), NULL);
		V_1 = L_6;
		// String clip = constantTemplate
		//     .Replace("{duration}", clampedDuration.ToString());
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_7 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_8, NULL);
		// HapticController.Load(clip);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F(L_9, NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		// HapticController.SetAmplitudeMultiplication(clampedAmplitude);
		float L_10 = V_0;
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(L_10, NULL);
		// HapticController.SetFrequencyShift(clampedFrequency);
		HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA(L_4, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
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
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnBeforeSerialize_mAC3F0A794D3B3BB97A17630C16DE51AD67DA2320 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hapticLevel = HapticController._hapticLevel;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11;
		__this->____hapticLevel_4 = L_0;
		// _hapticsEnabled = HapticController._hapticsEnabled;
		bool L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10;
		__this->____hapticsEnabled_5 = L_1;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnAfterDeserialize_m10FDB611EB984973EB6A0358D5292351CE06CC62 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController._hapticLevel = _hapticLevel;
		float L_0 = __this->____hapticLevel_4;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11 = L_0;
		// HapticController._hapticsEnabled = _hapticsEnabled;
		bool L_1 = __this->____hapticsEnabled_5;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10 = L_1;
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticReceiver::get_hapticLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticReceiver_get_hapticLevel_mF86948D5FAB92EEED385AF8292A560107D13A923 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.hapticLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline(NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_hapticLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_hapticLevel_m8C4EE93348770D7D18E24F7F40BFCDAB19B10821 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.hapticLevel = value; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_hapticLevel_mFC4AC0C3A3298C09B66AE06069D786083A086B61(L_0, NULL);
		// set { HapticController.hapticLevel = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticReceiver::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticReceiver_get_hapticsEnabled_m5B81D63CED671A10B43781F8785B8F32CD635786 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_hapticsEnabled_m7C35DD37097709CA60A8A6260173C712EC65F295 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.hapticsEnabled = value; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B(L_0, NULL);
		// set { HapticController.hapticsEnabled = value; }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_Start_mC7A9F46B022D38A6256754E433666E4BA59DA06A (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.Init();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnApplicationFocus_m7D6CBD7E855F2DBB1AF9994DF36A16CD46BB9D22 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.ProcessApplicationFocus(hasFocus);
		bool L_0 = ___hasFocus0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07(L_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver__ctor_m44CDE6A5C3CEF92FF8F24700252218F271B3AB9D (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	{
		// private float _hapticLevel = 1.0f;
		__this->____hapticLevel_4 = (1.0f);
		// private bool _hapticsEnabled = true;
		__this->____hapticsEnabled_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _loop; }
		bool L_0 = __this->____loop_8;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_loop_m5A9856EDEDE05D7E78C6B6C17FE98EDBEC8E0D3E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _loop = value; }
		bool L_0 = ___value0;
		__this->____loop_8 = L_0;
		// set { _loop = value; }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_amplitudeMultiplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_amplitudeMultiplication_mBC6572F360870C71C2E42A23805B6A0060F55EAF (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _amplitudeMultiplication; }
		float L_0 = __this->____amplitudeMultiplication_9;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_amplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_amplitudeMultiplication_mA5133CB03287541A99CFE69D9590CA25E7CCCBEA (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _amplitudeMultiplication = value;
		float L_0 = ___value0;
		__this->____amplitudeMultiplication_9 = L_0;
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// HapticController.SetAmplitudeMultiplication(_amplitudeMultiplication * HapticController.hapticLevel);
		float L_2 = __this->____amplitudeMultiplication_9;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline(NULL);
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->____frequencyShift_10;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_frequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_frequencyShift_m0D869341950D6085920988E55EA2FAB5BA70B619 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _frequencyShift = value;
		float L_0 = ___value0;
		__this->____frequencyShift_10 = L_0;
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// HapticController.SetFrequencyShift(_frequencyShift);
		float L_2 = __this->____frequencyShift_10;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA(L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__cctor_m64699115A21D5F953360E19A122FC9D79A7805DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__18_0_m28E1AC9CB310EC79EEB19263EBD22C4B47519220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__18_1_mB8E98191D80847266E34A2B190CC5510B22CE932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__18_2_mFC4C0E6279F82F09A2D476CDE6B0C253BCEEC885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.LoadedClipChanged += () =>
		// {
		//     loadedHapticSource = null;
		// };
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_1 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__18_0_m28E1AC9CB310EC79EEB19263EBD22C4B47519220_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_2, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// HapticController.PlaybackStarted += () =>
		// {
		//     lastPlayedHapticSource = null;
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13;
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_5 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__18_1_mB8E98191D80847266E34A2B190CC5510B22CE932_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_6, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// HapticController.HapticLevelChanged += () =>
		// {
		//     if (loadedHapticSource != null)
		//     {
		//         HapticController.SetAmplitudeMultiplication(
		//             loadedHapticSource.amplitudeMultiplication * HapticController.hapticLevel);
		//     }
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___HapticLevelChanged_15;
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_9 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__18_2_mFC4C0E6279F82F09A2D476CDE6B0C253BCEEC885_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_10, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___HapticLevelChanged_15 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___HapticLevelChanged_15), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Play_mBE8536FBE9D12DBE92814A33C1930C5F9306D2A4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (CanPlay())
		bool L_0;
		L_0 = HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE(__this, NULL);
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		// HapticController.Load(clip.GetData());
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_1 = __this->___clip_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = HapticClip_GetData_m5978B62AE6F348396E26150ADEE0725006F47F85_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_m4BB156B52CE4B80EDF8CAC0EB5FB39202E19249F(L_2, NULL);
		// loadedHapticSource = this;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11), (void*)__this);
		// HapticController.Loop(loop);
		bool L_3;
		L_3 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA(L_3, NULL);
		// if (seekTime != 0.0f && !loop)
		float L_4 = __this->___seekTime_7;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		bool L_5;
		L_5 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		// HapticController.Seek(seekTime);
		float L_6 = __this->___seekTime_7;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64(L_6, NULL);
	}

IL_0049:
	{
		// float finalAmplitudeMultiplication = amplitudeMultiplication * HapticController.hapticLevel;
		float L_7;
		L_7 = HapticSource_get_amplitudeMultiplication_mBC6572F360870C71C2E42A23805B6A0060F55EAF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// if (finalAmplitudeMultiplication != 1.0f)
		float L_9 = V_0;
		if ((((float)L_9) == ((float)(1.0f))))
		{
			goto IL_0064;
		}
	}
	{
		// HapticController.SetAmplitudeMultiplication(finalAmplitudeMultiplication);
		float L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(L_10, NULL);
	}

IL_0064:
	{
		// if (frequencyShift != 0.0f)
		float L_11;
		L_11 = HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline(__this, NULL);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}
	{
		// HapticController.SetFrequencyShift(frequencyShift);
		float L_12;
		L_12 = HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_SetFrequencyShift_m4F6BA75390C91624E2909527C16934408D0D84EA(L_12, NULL);
	}

IL_007c:
	{
		// HapticController.Play();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// lastPlayedHapticSource = this;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12), (void*)__this);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (!HapticController.IsPlaying() ||
		//        (lastPlayedHapticSource != null && priority <= lastPlayedHapticSource.priority));
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_1 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->___priority_6;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_4 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12;
		NullCheck(L_4);
		int32_t L_5 = L_4->___priority_6;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Object.ReferenceEquals(this, loadedHapticSource);
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_0 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11;
		return (bool)((((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)__this) == ((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)L_0))? 1 : 0);
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsLoaded())
		bool L_0;
		L_0 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// HapticController.Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Seek_m112488608ADFCCD47EF2DBE4E4EB28D43E01587E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// this.seekTime = time;
		float L_0 = ___time0;
		__this->___seekTime_7 = L_0;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_OnDisable_m8A98EDED152930790E5B539AD788E5B5381226E7 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HapticController.IsPlaying() && IsLoaded())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// this.Stop();
		HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__ctor_m5F9E6ECB9B30C268948DCE62F8A8CA604C9A6267 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// public int priority = DEFAULT_PRIORITY;
		__this->___priority_6 = ((int32_t)128);
		// float _amplitudeMultiplication = 1.0f;
		__this->____amplitudeMultiplication_9 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6088842D3BFC9959BCAA1DE2CD8CFC0B4983F111 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_0 = (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE*)il2cpp_codegen_object_new(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193(L_0, NULL);
		((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__18_0_m28E1AC9CB310EC79EEB19263EBD22C4B47519220 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadedHapticSource = null;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11 = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		// };
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__18_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__18_1_mB8E98191D80847266E34A2B190CC5510B22CE932 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastPlayedHapticSource = null;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12 = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_12), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		// };
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__18_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__18_2_mFC4C0E6279F82F09A2D476CDE6B0C253BCEEC885 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loadedHapticSource != null)
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_0 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// HapticController.SetAmplitudeMultiplication(
		//     loadedHapticSource.amplitudeMultiplication * HapticController.hapticLevel);
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_2 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_11;
		NullCheck(L_2);
		float L_3;
		L_3 = HapticSource_get_amplitudeMultiplication_mBC6572F360870C71C2E42A23805B6A0060F55EAF_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline(NULL);
		HapticController_SetAmplitudeMultiplication_mFD06071D52996FAD6265005ACDE7BABD07B84FC0(((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
	}

IL_0022:
	{
		// };
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
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (var unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
			V_0 = L_0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003e_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
						if (!L_1)
						{
							goto IL_0047_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
						NullCheck(L_2);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (var context = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity"))
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
					L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
					V_1 = L_4;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0032_2:
						{// begin finally (depth: 3)
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
								if (!L_5)
								{
									goto IL_003b_2;
								}
							}
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
								NullCheck(L_6);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
							}

IL_003b_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// lofeltHaptics = new AndroidJavaObject("com.lofelt.haptics.LofeltHaptics", context);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
						NullCheck(L_8);
						ArrayElementTypeCheck (L_8, L_9);
						(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
						NullCheck(L_10);
						AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19, L_8, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0 = L_10;
						Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0), (void*)L_10);
						// }
						goto IL_003c_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_003c_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004a;
		}
		throw e;
	}

CATCH_004a:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::InitializeIosController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_InitializeIosController_mBB6B7E851F5AA3F9B61EC01FBB6729138EB73601 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Release_m2BC88E4D61DCF47A38B87D8C2D8921846B08BA21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		NullCheck(L_0);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_0, NULL);
		// lofeltHaptics = null;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::ReleaseIosController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_ReleaseIosController_mDBFE4276DD7C6CEB8CB32B40BF0D35DE11A74E92 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return lofeltHaptics.Call<bool>("deviceMeetsMinimumRequirements");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_m50D502D4991FC0ABC171513111C7FF020DE49F3A (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("load", Encoding.UTF8.GetBytes(data));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		NullCheck(L_0);
		AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41(L_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_3, AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE294C2955F62BEEF1AF0C64272E3470C3153EC41_RuntimeMethod_var);
		// }
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.LofeltHaptics::GetClipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LofeltHaptics_GetClipDuration_mB8FDE5E1C096414648093E33A2AE2DF9A4031DDC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return lofeltHaptics.Call<float>("getClipDuration");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1(L_0, _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF, L_1, AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return 0.0f;
		V_0 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("play");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, L_1, NULL);
		// }
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("stop");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, L_1, NULL);
		// }
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("seek", time);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		float L_3 = ___time0;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53, L_2, NULL);
		// }
		goto IL_0027;
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("setAmplitudeMultiplication", factor);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		float L_3 = ___factor0;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954, L_2, NULL);
		// }
		goto IL_0027;
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___shift0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Call("loop", enabled);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___enabled0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, L_2, NULL);
		// }
		goto IL_0027;
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
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
// System.Int32 Lofelt.NiceVibrations.Utils::IOSVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_IOSVersion_mD58C12255B1AAE451B38E031E865BB6FD2CE67FF (const RuntimeMethod* method) 
{
	{
		// int iOSVersion = 0;
		// return iOSVersion;
		return 0;
	}
}
// System.Int32 Lofelt.NiceVibrations.Utils::AndroidSDKVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_AndroidSDKVersion_m613FA5A73E3299EFA1E7694B6763278FA2F188E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// androidVersion = int.Parse(SystemInfo.operatingSystem.Substring(SystemInfo.operatingSystem.IndexOf("-") + 1, 3));
		String_t* L_0;
		L_0 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		String_t* L_1;
		L_1 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, ((int32_t)il2cpp_codegen_add(L_2, 1)), 3, NULL);
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		// return androidVersion;
		return L_4;
	}
}
// System.Boolean Lofelt.NiceVibrations.Utils::IsVersionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsVersionSupported_m0168931383A70068A579B243DB543A0FFD6D9A9D (const RuntimeMethod* method) 
{
	{
		// supported = AndroidSDKVersion() >= minimumSupportedAndroidSDKVersion;
		int32_t L_0;
		L_0 = Utils_AndroidSDKVersion_m613FA5A73E3299EFA1E7694B6763278FA2F188E3(NULL);
		// return supported;
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)26)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HapticClip_GetData_m5978B62AE6F348396E26150ADEE0725006F47F85_inline (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) 
{
	{
		// return this.data;
		String_t* L_0 = __this->___data_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___enabled_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_hapticLevel_m6020B884693435F9517D1E8A8B73B77DADEF82B8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticLevel_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _loop; }
		bool L_0 = __this->____loop_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_amplitudeMultiplication_mBC6572F360870C71C2E42A23805B6A0060F55EAF_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _amplitudeMultiplication; }
		float L_0 = __this->____amplitudeMultiplication_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->____frequencyShift_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
