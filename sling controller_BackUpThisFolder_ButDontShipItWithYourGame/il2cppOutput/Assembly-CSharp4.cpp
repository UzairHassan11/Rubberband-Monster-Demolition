#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<com.adjust.sdk.AdjustAttribution>
struct Action_1_t83467CFE2946B43E2165628FC88E344E881C620C;
// System.Action`1<com.adjust.sdk.AdjustEventFailure>
struct Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B;
// System.Action`1<com.adjust.sdk.AdjustEventSuccess>
struct Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1;
// System.Action`1<com.adjust.sdk.AdjustSessionFailure>
struct Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B;
// System.Action`1<com.adjust.sdk.AdjustSessionSuccess>
struct Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`3<System.Int32,System.String,System.Boolean>
struct Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode>
struct Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode>
struct List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// com.adjust.sdk.Adjust
struct Adjust_t91A005D35DB28A1F88C4270A08F84DEA93864A96;
// com.adjust.sdk.AdjustAdRevenue
struct AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451;
// com.adjust.sdk.AdjustAppStoreSubscription
struct AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094;
// com.adjust.sdk.AdjustAttribution
struct AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C;
// com.adjust.sdk.AdjustConfig
struct AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49;
// com.adjust.sdk.AdjustEvent
struct AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D;
// com.adjust.sdk.AdjustEventFailure
struct AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26;
// com.adjust.sdk.AdjustEventSuccess
struct AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA;
// com.adjust.sdk.AdjustPlayStoreSubscription
struct AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974;
// com.adjust.sdk.AdjustSessionFailure
struct AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23;
// com.adjust.sdk.AdjustSessionSuccess
struct AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87;
// com.adjust.sdk.AdjustThirdPartySharing
struct AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6;
// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663;
// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B;
// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412;
// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// com.adjust.sdk.AdjustAndroid/AttributionChangeListener
struct AttributionChangeListener_t0B8C6D1DBF499C6634879A716BC3AE153527E04B;
// com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener
struct DeferredDeeplinkListener_tA916B993050D1BEB933F0B0D1803DB56ADD897F3;
// com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener
struct DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C;
// com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener
struct EventTrackingFailedListener_t6236AFA914021CB80116982BE82693AA0BF9ECD9;
// com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener
struct EventTrackingSucceededListener_tFC976FD5B32EEC7DDA71D1414A7BF334A873588B;
// com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener
struct SessionTrackingFailedListener_t122CA3302C546C66232D03803D6CB66763F43C5D;
// com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener
struct SessionTrackingSucceededListener_t3A3F5AC668F534AFEA81060AC794AB0C6B2770DC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F;
IL2CPP_EXTERN_C String_t* _stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664;
IL2CPP_EXTERN_C String_t* _stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289;
IL2CPP_EXTERN_C String_t* _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5F43CCA7BC62E5344586F1514671283BF08D56;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
IL2CPP_EXTERN_C String_t* _stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F;
IL2CPP_EXTERN_C String_t* _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098;
IL2CPP_EXTERN_C String_t* _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C;
IL2CPP_EXTERN_C String_t* _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
IL2CPP_EXTERN_C String_t* _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0;
IL2CPP_EXTERN_C String_t* _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral329603FEDACDD148BC36259A8671AA1249E63727;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral49A51D679EA63E20F61F434AA7CCB6CBE993C9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4F130946577022936EE02472C36D257149CEBE97;
IL2CPP_EXTERN_C String_t* _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
IL2CPP_EXTERN_C String_t* _stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
IL2CPP_EXTERN_C String_t* _stringLiteral5E154F62FCC545B47A369DE74D8C37FB61D363A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
IL2CPP_EXTERN_C String_t* _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
IL2CPP_EXTERN_C String_t* _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE;
IL2CPP_EXTERN_C String_t* _stringLiteral79129E77C99D9B997190424687919AB33976D848;
IL2CPP_EXTERN_C String_t* _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7A7D5AAB9FDFB33B64981E65BE1383F01672A45F;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD4F2CFEB1F344425CBDF9D59697BBD8D71BD91;
IL2CPP_EXTERN_C String_t* _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBB72F6FDBFB660A966F952D120A6BFAD8E9F87;
IL2CPP_EXTERN_C String_t* _stringLiteral830861A7BE146B54573618AB59D51536353969C4;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
IL2CPP_EXTERN_C String_t* _stringLiteral8B324FCBD0A58C910F684A8AD8C8A9604A01AE5D;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral942D5AF222C530757EB868EF023A5D2B55904966;
IL2CPP_EXTERN_C String_t* _stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4;
IL2CPP_EXTERN_C String_t* _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD521726EC368F034B818450ADBFE7F1C1F2CA6;
IL2CPP_EXTERN_C String_t* _stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC60DDE1532572C618EA4F6F432BB526B5B9B4A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA26D86D0E64FF78541F33B12225DBE76288D4B29;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC4311199EC87CA867BFCE8571CC7DEAC17DEAB5E;
IL2CPP_EXTERN_C String_t* _stringLiteralC43E0CCD01A21C195C6263308AD01341DB602D90;
IL2CPP_EXTERN_C String_t* _stringLiteralC522D9BE6953F40949F1AFC0B3D12955C92496FE;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
IL2CPP_EXTERN_C String_t* _stringLiteralCC34F9FF89A932DFFF6B1FC21F2F76D2F95E44E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
IL2CPP_EXTERN_C String_t* _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
IL2CPP_EXTERN_C String_t* _stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76;
IL2CPP_EXTERN_C String_t* _stringLiteralD04120809FE37B546EDED3593411D7403EA54521;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
IL2CPP_EXTERN_C String_t* _stringLiteralD54A09108942F808A62787449EB450CAD3626323;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
IL2CPP_EXTERN_C String_t* _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
IL2CPP_EXTERN_C String_t* _stringLiteralD67674C9A919D64A0E15E937E72F73AEB09D6787;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE2125008434118F883C13DC3E9E546986B6C92FE;
IL2CPP_EXTERN_C String_t* _stringLiteralE9CB7E2903576395C85EB9DC660D0B7900C29151;
IL2CPP_EXTERN_C String_t* _stringLiteralEAAC6B2415F27BD1BFA4D768FD15E58882F44928;
IL2CPP_EXTERN_C String_t* _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
IL2CPP_EXTERN_C String_t* _stringLiteralEF744A66AF516009BB5D37D24EAE75061B97108D;
IL2CPP_EXTERN_C String_t* _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
IL2CPP_EXTERN_C String_t* _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m758B42FEC23E776E2124A982ABAF1EE30586F2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
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
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// com.adjust.sdk.AdjustAndroid
struct AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016  : public RuntimeObject
{
};

struct AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_StaticFields
{
	// System.Boolean com.adjust.sdk.AdjustAndroid::launchDeferredDeeplink
	bool ___launchDeferredDeeplink_1;
	// UnityEngine.AndroidJavaClass com.adjust.sdk.AdjustAndroid::ajcAdjust
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___ajcAdjust_2;
	// UnityEngine.AndroidJavaObject com.adjust.sdk.AdjustAndroid::ajoCurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ajoCurrentActivity_3;
	// com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener com.adjust.sdk.AdjustAndroid::onDeferredDeeplinkListener
	DeferredDeeplinkListener_tA916B993050D1BEB933F0B0D1803DB56ADD897F3* ___onDeferredDeeplinkListener_4;
	// com.adjust.sdk.AdjustAndroid/AttributionChangeListener com.adjust.sdk.AdjustAndroid::onAttributionChangedListener
	AttributionChangeListener_t0B8C6D1DBF499C6634879A716BC3AE153527E04B* ___onAttributionChangedListener_5;
	// com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener com.adjust.sdk.AdjustAndroid::onEventTrackingFailedListener
	EventTrackingFailedListener_t6236AFA914021CB80116982BE82693AA0BF9ECD9* ___onEventTrackingFailedListener_6;
	// com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener com.adjust.sdk.AdjustAndroid::onEventTrackingSucceededListener
	EventTrackingSucceededListener_tFC976FD5B32EEC7DDA71D1414A7BF334A873588B* ___onEventTrackingSucceededListener_7;
	// com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener com.adjust.sdk.AdjustAndroid::onSessionTrackingFailedListener
	SessionTrackingFailedListener_t122CA3302C546C66232D03803D6CB66763F43C5D* ___onSessionTrackingFailedListener_8;
	// com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener com.adjust.sdk.AdjustAndroid::onSessionTrackingSucceededListener
	SessionTrackingSucceededListener_t3A3F5AC668F534AFEA81060AC794AB0C6B2770DC* ___onSessionTrackingSucceededListener_9;
};

// com.adjust.sdk.AdjustAppStoreSubscription
struct AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::price
	String_t* ___price_0;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::currency
	String_t* ___currency_1;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::transactionId
	String_t* ___transactionId_2;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::receipt
	String_t* ___receipt_3;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::billingStore
	String_t* ___billingStore_4;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::transactionDate
	String_t* ___transactionDate_5;
	// System.String com.adjust.sdk.AdjustAppStoreSubscription::salesRegion
	String_t* ___salesRegion_6;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustAppStoreSubscription::partnerList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___partnerList_7;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustAppStoreSubscription::callbackList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___callbackList_8;
};

// com.adjust.sdk.AdjustEnvironmentExtension
struct AdjustEnvironmentExtension_t8E6514C79573850773262F1EB871A977C8348ADD  : public RuntimeObject
{
};

// com.adjust.sdk.AdjustEventFailure
struct AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustEventFailure::<Adid>k__BackingField
	String_t* ___U3CAdidU3Ek__BackingField_0;
	// System.String com.adjust.sdk.AdjustEventFailure::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String com.adjust.sdk.AdjustEventFailure::<Timestamp>k__BackingField
	String_t* ___U3CTimestampU3Ek__BackingField_2;
	// System.String com.adjust.sdk.AdjustEventFailure::<EventToken>k__BackingField
	String_t* ___U3CEventTokenU3Ek__BackingField_3;
	// System.String com.adjust.sdk.AdjustEventFailure::<CallbackId>k__BackingField
	String_t* ___U3CCallbackIdU3Ek__BackingField_4;
	// System.Boolean com.adjust.sdk.AdjustEventFailure::<WillRetry>k__BackingField
	bool ___U3CWillRetryU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventFailure::<JsonResponse>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CJsonResponseU3Ek__BackingField_6;
};

// com.adjust.sdk.AdjustEventSuccess
struct AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustEventSuccess::<Adid>k__BackingField
	String_t* ___U3CAdidU3Ek__BackingField_0;
	// System.String com.adjust.sdk.AdjustEventSuccess::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String com.adjust.sdk.AdjustEventSuccess::<Timestamp>k__BackingField
	String_t* ___U3CTimestampU3Ek__BackingField_2;
	// System.String com.adjust.sdk.AdjustEventSuccess::<EventToken>k__BackingField
	String_t* ___U3CEventTokenU3Ek__BackingField_3;
	// System.String com.adjust.sdk.AdjustEventSuccess::<CallbackId>k__BackingField
	String_t* ___U3CCallbackIdU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventSuccess::<JsonResponse>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CJsonResponseU3Ek__BackingField_5;
};

// com.adjust.sdk.AdjustLogLevelExtension
struct AdjustLogLevelExtension_t378EE74DCE70339124378475ED56D2ADB042B398  : public RuntimeObject
{
};

// com.adjust.sdk.AdjustPlayStoreSubscription
struct AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::price
	String_t* ___price_0;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::currency
	String_t* ___currency_1;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::sku
	String_t* ___sku_2;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::orderId
	String_t* ___orderId_3;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::signature
	String_t* ___signature_4;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::purchaseToken
	String_t* ___purchaseToken_5;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::billingStore
	String_t* ___billingStore_6;
	// System.String com.adjust.sdk.AdjustPlayStoreSubscription::purchaseTime
	String_t* ___purchaseTime_7;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustPlayStoreSubscription::partnerList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___partnerList_8;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustPlayStoreSubscription::callbackList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___callbackList_9;
};

// com.adjust.sdk.AdjustSessionFailure
struct AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustSessionFailure::<Adid>k__BackingField
	String_t* ___U3CAdidU3Ek__BackingField_0;
	// System.String com.adjust.sdk.AdjustSessionFailure::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String com.adjust.sdk.AdjustSessionFailure::<Timestamp>k__BackingField
	String_t* ___U3CTimestampU3Ek__BackingField_2;
	// System.Boolean com.adjust.sdk.AdjustSessionFailure::<WillRetry>k__BackingField
	bool ___U3CWillRetryU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionFailure::<JsonResponse>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CJsonResponseU3Ek__BackingField_4;
};

// com.adjust.sdk.AdjustSessionSuccess
struct AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustSessionSuccess::<Adid>k__BackingField
	String_t* ___U3CAdidU3Ek__BackingField_0;
	// System.String com.adjust.sdk.AdjustSessionSuccess::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String com.adjust.sdk.AdjustSessionSuccess::<Timestamp>k__BackingField
	String_t* ___U3CTimestampU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionSuccess::<JsonResponse>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CJsonResponseU3Ek__BackingField_3;
};

// com.adjust.sdk.AdjustUrlStrategyExtension
struct AdjustUrlStrategyExtension_tECD39955BB10EF1D04968E4A26C04BB154353386  : public RuntimeObject
{
};

// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A  : public RuntimeObject
{
};

struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields
{
	// System.String com.adjust.sdk.AdjustUtils::KeyAdid
	String_t* ___KeyAdid_0;
	// System.String com.adjust.sdk.AdjustUtils::KeyMessage
	String_t* ___KeyMessage_1;
	// System.String com.adjust.sdk.AdjustUtils::KeyNetwork
	String_t* ___KeyNetwork_2;
	// System.String com.adjust.sdk.AdjustUtils::KeyAdgroup
	String_t* ___KeyAdgroup_3;
	// System.String com.adjust.sdk.AdjustUtils::KeyCampaign
	String_t* ___KeyCampaign_4;
	// System.String com.adjust.sdk.AdjustUtils::KeyCreative
	String_t* ___KeyCreative_5;
	// System.String com.adjust.sdk.AdjustUtils::KeyWillRetry
	String_t* ___KeyWillRetry_6;
	// System.String com.adjust.sdk.AdjustUtils::KeyTimestamp
	String_t* ___KeyTimestamp_7;
	// System.String com.adjust.sdk.AdjustUtils::KeyCallbackId
	String_t* ___KeyCallbackId_8;
	// System.String com.adjust.sdk.AdjustUtils::KeyEventToken
	String_t* ___KeyEventToken_9;
	// System.String com.adjust.sdk.AdjustUtils::KeyClickLabel
	String_t* ___KeyClickLabel_10;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerName
	String_t* ___KeyTrackerName_11;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerToken
	String_t* ___KeyTrackerToken_12;
	// System.String com.adjust.sdk.AdjustUtils::KeyJsonResponse
	String_t* ___KeyJsonResponse_13;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostType
	String_t* ___KeyCostType_14;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostAmount
	String_t* ___KeyCostAmount_15;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostCurrency
	String_t* ___KeyCostCurrency_16;
	// System.String com.adjust.sdk.AdjustUtils::KeyFbInstallReferrer
	String_t* ___KeyFbInstallReferrer_17;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadConversionValue
	String_t* ___KeySkadConversionValue_18;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadCoarseValue
	String_t* ___KeySkadCoarseValue_19;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadLockWindow
	String_t* ___KeySkadLockWindow_20;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBaseUrl
	String_t* ___KeyTestOptionsBaseUrl_21;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprUrl
	String_t* ___KeyTestOptionsGdprUrl_22;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubscriptionUrl
	String_t* ___KeyTestOptionsSubscriptionUrl_23;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsExtraPath
	String_t* ___KeyTestOptionsExtraPath_24;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBasePath
	String_t* ___KeyTestOptionsBasePath_25;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprPath
	String_t* ___KeyTestOptionsGdprPath_26;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsDeleteState
	String_t* ___KeyTestOptionsDeleteState_27;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsUseTestConnectionOptions
	String_t* ___KeyTestOptionsUseTestConnectionOptions_28;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerIntervalInMilliseconds
	String_t* ___KeyTestOptionsTimerIntervalInMilliseconds_29;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerStartInMilliseconds
	String_t* ___KeyTestOptionsTimerStartInMilliseconds_30;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSessionIntervalInMilliseconds_31;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubsessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTeardown
	String_t* ___KeyTestOptionsTeardown_33;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsNoBackoffWait
	String_t* ___KeyTestOptionsNoBackoffWait_34;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsiAdFrameworkEnabled
	String_t* ___KeyTestOptionsiAdFrameworkEnabled_35;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsAdServicesFrameworkEnabled
	String_t* ___KeyTestOptionsAdServicesFrameworkEnabled_36;
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

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>
struct KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>
struct Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode> com.adjust.sdk.JSONArray::m_List
	List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA* ___m_List_0;
};

// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode> com.adjust.sdk.JSONClass::m_Dict
	Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7* ___m_Dict_0;
};

// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.String com.adjust.sdk.JSONData::m_Data
	String_t* ___m_Data_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888_0;
};

// com.adjust.sdk.AdjustAdRevenue
struct AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustAdRevenue::source
	String_t* ___source_0;
	// System.Nullable`1<System.Double> com.adjust.sdk.AdjustAdRevenue::revenue
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___revenue_1;
	// System.String com.adjust.sdk.AdjustAdRevenue::currency
	String_t* ___currency_2;
	// System.Nullable`1<System.Int32> com.adjust.sdk.AdjustAdRevenue::adImpressionsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___adImpressionsCount_3;
	// System.String com.adjust.sdk.AdjustAdRevenue::adRevenueNetwork
	String_t* ___adRevenueNetwork_4;
	// System.String com.adjust.sdk.AdjustAdRevenue::adRevenueUnit
	String_t* ___adRevenueUnit_5;
	// System.String com.adjust.sdk.AdjustAdRevenue::adRevenuePlacement
	String_t* ___adRevenuePlacement_6;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustAdRevenue::partnerList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___partnerList_7;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustAdRevenue::callbackList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___callbackList_8;
};

// com.adjust.sdk.AdjustAttribution
struct AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustAttribution::<adid>k__BackingField
	String_t* ___U3CadidU3Ek__BackingField_0;
	// System.String com.adjust.sdk.AdjustAttribution::<network>k__BackingField
	String_t* ___U3CnetworkU3Ek__BackingField_1;
	// System.String com.adjust.sdk.AdjustAttribution::<adgroup>k__BackingField
	String_t* ___U3CadgroupU3Ek__BackingField_2;
	// System.String com.adjust.sdk.AdjustAttribution::<campaign>k__BackingField
	String_t* ___U3CcampaignU3Ek__BackingField_3;
	// System.String com.adjust.sdk.AdjustAttribution::<creative>k__BackingField
	String_t* ___U3CcreativeU3Ek__BackingField_4;
	// System.String com.adjust.sdk.AdjustAttribution::<clickLabel>k__BackingField
	String_t* ___U3CclickLabelU3Ek__BackingField_5;
	// System.String com.adjust.sdk.AdjustAttribution::<trackerName>k__BackingField
	String_t* ___U3CtrackerNameU3Ek__BackingField_6;
	// System.String com.adjust.sdk.AdjustAttribution::<trackerToken>k__BackingField
	String_t* ___U3CtrackerTokenU3Ek__BackingField_7;
	// System.String com.adjust.sdk.AdjustAttribution::<costType>k__BackingField
	String_t* ___U3CcostTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Double> com.adjust.sdk.AdjustAttribution::<costAmount>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CcostAmountU3Ek__BackingField_9;
	// System.String com.adjust.sdk.AdjustAttribution::<costCurrency>k__BackingField
	String_t* ___U3CcostCurrencyU3Ek__BackingField_10;
	// System.String com.adjust.sdk.AdjustAttribution::<fbInstallReferrer>k__BackingField
	String_t* ___U3CfbInstallReferrerU3Ek__BackingField_11;
};

// com.adjust.sdk.AdjustConfig
struct AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustConfig::appToken
	String_t* ___appToken_14;
	// System.String com.adjust.sdk.AdjustConfig::sceneName
	String_t* ___sceneName_15;
	// System.String com.adjust.sdk.AdjustConfig::userAgent
	String_t* ___userAgent_16;
	// System.String com.adjust.sdk.AdjustConfig::defaultTracker
	String_t* ___defaultTracker_17;
	// System.String com.adjust.sdk.AdjustConfig::externalDeviceId
	String_t* ___externalDeviceId_18;
	// System.String com.adjust.sdk.AdjustConfig::urlStrategy
	String_t* ___urlStrategy_19;
	// System.Nullable`1<System.Int64> com.adjust.sdk.AdjustConfig::info1
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___info1_20;
	// System.Nullable`1<System.Int64> com.adjust.sdk.AdjustConfig::info2
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___info2_21;
	// System.Nullable`1<System.Int64> com.adjust.sdk.AdjustConfig::info3
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___info3_22;
	// System.Nullable`1<System.Int64> com.adjust.sdk.AdjustConfig::info4
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___info4_23;
	// System.Nullable`1<System.Int64> com.adjust.sdk.AdjustConfig::secretId
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___secretId_24;
	// System.Nullable`1<System.Double> com.adjust.sdk.AdjustConfig::delayStart
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___delayStart_25;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::isDeviceKnown
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isDeviceKnown_26;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::sendInBackground
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___sendInBackground_27;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::eventBufferingEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___eventBufferingEnabled_28;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::coppaCompliantEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___coppaCompliantEnabled_29;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::playStoreKidsAppEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___playStoreKidsAppEnabled_30;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::allowSuppressLogLevel
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___allowSuppressLogLevel_31;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::needsCost
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___needsCost_32;
	// System.Boolean com.adjust.sdk.AdjustConfig::launchDeferredDeeplink
	bool ___launchDeferredDeeplink_33;
	// System.Nullable`1<com.adjust.sdk.AdjustLogLevel> com.adjust.sdk.AdjustConfig::logLevel
	Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 ___logLevel_34;
	// com.adjust.sdk.AdjustEnvironment com.adjust.sdk.AdjustConfig::environment
	int32_t ___environment_35;
	// System.Action`1<System.String> com.adjust.sdk.AdjustConfig::deferredDeeplinkDelegate
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deferredDeeplinkDelegate_36;
	// System.Action`1<com.adjust.sdk.AdjustEventSuccess> com.adjust.sdk.AdjustConfig::eventSuccessDelegate
	Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* ___eventSuccessDelegate_37;
	// System.Action`1<com.adjust.sdk.AdjustEventFailure> com.adjust.sdk.AdjustConfig::eventFailureDelegate
	Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* ___eventFailureDelegate_38;
	// System.Action`1<com.adjust.sdk.AdjustSessionSuccess> com.adjust.sdk.AdjustConfig::sessionSuccessDelegate
	Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* ___sessionSuccessDelegate_39;
	// System.Action`1<com.adjust.sdk.AdjustSessionFailure> com.adjust.sdk.AdjustConfig::sessionFailureDelegate
	Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* ___sessionFailureDelegate_40;
	// System.Action`1<com.adjust.sdk.AdjustAttribution> com.adjust.sdk.AdjustConfig::attributionChangedDelegate
	Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* ___attributionChangedDelegate_41;
	// System.Action`1<System.Int32> com.adjust.sdk.AdjustConfig::conversionValueUpdatedDelegate
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___conversionValueUpdatedDelegate_42;
	// System.Action`3<System.Int32,System.String,System.Boolean> com.adjust.sdk.AdjustConfig::skad4ConversionValueUpdatedDelegate
	Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010* ___skad4ConversionValueUpdatedDelegate_43;
	// System.String com.adjust.sdk.AdjustConfig::processName
	String_t* ___processName_44;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::readImei
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___readImei_45;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::preinstallTrackingEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___preinstallTrackingEnabled_46;
	// System.String com.adjust.sdk.AdjustConfig::preinstallFilePath
	String_t* ___preinstallFilePath_47;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::allowiAdInfoReading
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___allowiAdInfoReading_48;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::allowAdServicesInfoReading
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___allowAdServicesInfoReading_49;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::allowIdfaReading
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___allowIdfaReading_50;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::skAdNetworkHandling
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___skAdNetworkHandling_51;
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustConfig::linkMeEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___linkMeEnabled_52;
	// System.Action`1<System.String> com.adjust.sdk.AdjustConfig::logDelegate
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___logDelegate_53;
};

// com.adjust.sdk.AdjustEvent
struct AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D  : public RuntimeObject
{
	// System.String com.adjust.sdk.AdjustEvent::currency
	String_t* ___currency_0;
	// System.String com.adjust.sdk.AdjustEvent::eventToken
	String_t* ___eventToken_1;
	// System.String com.adjust.sdk.AdjustEvent::callbackId
	String_t* ___callbackId_2;
	// System.String com.adjust.sdk.AdjustEvent::transactionId
	String_t* ___transactionId_3;
	// System.Nullable`1<System.Double> com.adjust.sdk.AdjustEvent::revenue
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___revenue_4;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustEvent::partnerList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___partnerList_5;
	// System.Collections.Generic.List`1<System.String> com.adjust.sdk.AdjustEvent::callbackList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___callbackList_6;
	// System.String com.adjust.sdk.AdjustEvent::receipt
	String_t* ___receipt_7;
	// System.Boolean com.adjust.sdk.AdjustEvent::isReceiptSet
	bool ___isReceiptSet_8;
};

// com.adjust.sdk.AdjustThirdPartySharing
struct AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6  : public RuntimeObject
{
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustThirdPartySharing::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> com.adjust.sdk.AdjustThirdPartySharing::granularOptions
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___granularOptions_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> com.adjust.sdk.AdjustThirdPartySharing::partnerSharingSettings
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___partnerSharingSettings_2;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// com.adjust.sdk.AdjustAndroid/AttributionChangeListener
struct AttributionChangeListener_t0B8C6D1DBF499C6634879A716BC3AE153527E04B  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<com.adjust.sdk.AdjustAttribution> com.adjust.sdk.AdjustAndroid/AttributionChangeListener::callback
	Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* ___callback_4;
};

// com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener
struct DeferredDeeplinkListener_tA916B993050D1BEB933F0B0D1803DB56ADD897F3  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<System.String> com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_4;
};

// com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener
struct DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<System.String> com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener::onPlayAdIdReadCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlayAdIdReadCallback_4;
};

// com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener
struct EventTrackingFailedListener_t6236AFA914021CB80116982BE82693AA0BF9ECD9  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<com.adjust.sdk.AdjustEventFailure> com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener::callback
	Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* ___callback_4;
};

// com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener
struct EventTrackingSucceededListener_tFC976FD5B32EEC7DDA71D1414A7BF334A873588B  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<com.adjust.sdk.AdjustEventSuccess> com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener::callback
	Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* ___callback_4;
};

// com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener
struct SessionTrackingFailedListener_t122CA3302C546C66232D03803D6CB66763F43C5D  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<com.adjust.sdk.AdjustSessionFailure> com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener::callback
	Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* ___callback_4;
};

// com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener
struct SessionTrackingSucceededListener_t3A3F5AC668F534AFEA81060AC794AB0C6B2770DC  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<com.adjust.sdk.AdjustSessionSuccess> com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener::callback
	Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* ___callback_4;
};

// System.Action`1<com.adjust.sdk.AdjustAttribution>
struct Action_1_t83467CFE2946B43E2165628FC88E344E881C620C  : public MulticastDelegate_t
{
};

// System.Action`1<com.adjust.sdk.AdjustEventFailure>
struct Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B  : public MulticastDelegate_t
{
};

// System.Action`1<com.adjust.sdk.AdjustEventSuccess>
struct Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1  : public MulticastDelegate_t
{
};

// System.Action`1<com.adjust.sdk.AdjustSessionFailure>
struct Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B  : public MulticastDelegate_t
{
};

// System.Action`1<com.adjust.sdk.AdjustSessionSuccess>
struct Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.String,System.Boolean>
struct Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// com.adjust.sdk.Adjust
struct Adjust_t91A005D35DB28A1F88C4270A08F84DEA93864A96  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean com.adjust.sdk.Adjust::startManually
	bool ___startManually_7;
	// System.String com.adjust.sdk.Adjust::appToken
	String_t* ___appToken_8;
	// com.adjust.sdk.AdjustEnvironment com.adjust.sdk.Adjust::environment
	int32_t ___environment_9;
	// com.adjust.sdk.AdjustLogLevel com.adjust.sdk.Adjust::logLevel
	int32_t ___logLevel_10;
	// System.Boolean com.adjust.sdk.Adjust::eventBuffering
	bool ___eventBuffering_11;
	// System.Boolean com.adjust.sdk.Adjust::sendInBackground
	bool ___sendInBackground_12;
	// System.Boolean com.adjust.sdk.Adjust::launchDeferredDeeplink
	bool ___launchDeferredDeeplink_13;
	// System.Boolean com.adjust.sdk.Adjust::needsCost
	bool ___needsCost_14;
	// System.Boolean com.adjust.sdk.Adjust::coppaCompliant
	bool ___coppaCompliant_15;
	// System.Boolean com.adjust.sdk.Adjust::linkMe
	bool ___linkMe_16;
	// System.String com.adjust.sdk.Adjust::defaultTracker
	String_t* ___defaultTracker_17;
	// com.adjust.sdk.AdjustUrlStrategy com.adjust.sdk.Adjust::urlStrategy
	int32_t ___urlStrategy_18;
	// System.Double com.adjust.sdk.Adjust::startDelay
	double ___startDelay_19;
	// System.Int64 com.adjust.sdk.Adjust::secretId
	int64_t ___secretId_20;
	// System.Int64 com.adjust.sdk.Adjust::info1
	int64_t ___info1_21;
	// System.Int64 com.adjust.sdk.Adjust::info2
	int64_t ___info2_22;
	// System.Int64 com.adjust.sdk.Adjust::info3
	int64_t ___info3_23;
	// System.Int64 com.adjust.sdk.Adjust::info4
	int64_t ___info4_24;
	// System.Boolean com.adjust.sdk.Adjust::preinstallTracking
	bool ___preinstallTracking_25;
	// System.String com.adjust.sdk.Adjust::preinstallFilePath
	String_t* ___preinstallFilePath_26;
	// System.Boolean com.adjust.sdk.Adjust::playStoreKidsApp
	bool ___playStoreKidsApp_27;
	// System.Boolean com.adjust.sdk.Adjust::iadInfoReading
	bool ___iadInfoReading_28;
	// System.Boolean com.adjust.sdk.Adjust::adServicesInfoReading
	bool ___adServicesInfoReading_29;
	// System.Boolean com.adjust.sdk.Adjust::idfaInfoReading
	bool ___idfaInfoReading_30;
	// System.Boolean com.adjust.sdk.Adjust::skAdNetworkHandling
	bool ___skAdNetworkHandling_31;
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


// FieldType UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Boolean>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, RuntimeObject* ___val1, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution__ctor_m36B38620BB1475A4ACE1EDB1CCA466AB2F754307 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.String>(System.String)
inline String_t* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_trackerName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_trackerToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_network(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_campaign(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_adgroup(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_creative(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_clickLabel(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_adid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_costType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Void com.adjust.sdk.AdjustAttribution::set_costAmount(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___value0, method);
}
// System.Void com.adjust.sdk.AdjustAttribution::set_costCurrency(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAttribution::set_fbInstallReferrer(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<com.adjust.sdk.AdjustAttribution>::Invoke(T)
inline void Action_1_Invoke_m19F5C2FCEDAF544F9CA8919E78C830EE1F0B4D46_inline (Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* __this, AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t83467CFE2946B43E2165628FC88E344E881C620C*, AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void com.adjust.sdk.AdjustEventSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess__ctor_m8E95350D1027E90E42E4A890D5D8F6C683C1388C (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Adid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Timestamp(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_EventToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_CallbackId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_BuildJsonResponseFromString_mB45093E3AE421B1E1C210318F2081EB7016C065C (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) ;
// System.Void System.Action`1<com.adjust.sdk.AdjustEventSuccess>::Invoke(T)
inline void Action_1_Invoke_mF62BCEC9DCD64C40821FE03ADEC2E222A89284EB_inline (Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* __this, AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1*, AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void com.adjust.sdk.AdjustEventFailure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure__ctor_m528922562AC18ADE49AC59EFECDF9DDDF06D9827 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::set_Adid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Boolean>(System.String)
inline bool AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_gshared)(__this, ___fieldName0, method);
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_WillRetry(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::set_Timestamp(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::set_EventToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::set_CallbackId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventFailure::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_BuildJsonResponseFromString_mFC779A74C66E513EC19EF86F780AE363B25A828A (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) ;
// System.Void System.Action`1<com.adjust.sdk.AdjustEventFailure>::Invoke(T)
inline void Action_1_Invoke_m70436F814175E450B896367B05771F98512F9B8E_inline (Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* __this, AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B*, AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess__ctor_m5D4F0E9806EDCE8130DE98471E7ECA654B744F9A (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Adid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Timestamp(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionSuccess::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_BuildJsonResponseFromString_m2CA7E40EDAD331AE6DEDF385D364682D7AC8ACCE (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) ;
// System.Void System.Action`1<com.adjust.sdk.AdjustSessionSuccess>::Invoke(T)
inline void Action_1_Invoke_mF093B67EE0517B8DEDE41CBECD2FB7A5E390CFD5_inline (Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* __this, AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE*, AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void com.adjust.sdk.AdjustSessionFailure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure__ctor_m55084005614B14B05358BFC8D8093D0E1BA5D577 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Adid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::set_WillRetry(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Timestamp(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_BuildJsonResponseFromString_m2D4F30200FC6361CACC4417A512F8E14FF9C38A6 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) ;
// System.Void System.Action`1<com.adjust.sdk.AdjustSessionFailure>::Invoke(T)
inline void Action_1_Invoke_mE2F1EB1C255C43E7C8671D5680B428D566B8F198_inline (Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* __this, AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B*, AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener::onGoogleAdIdRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdsReadListener_onGoogleAdIdRead_m82DB269D37125FB1A6A3667454CF5B408AC179DD (DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C* __this, String_t* ___playAdId0, const RuntimeMethod* method) ;
// System.Boolean com.adjust.sdk.Adjust::IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Application::add_deepLinkActivated(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_deepLinkActivated_m65DB6854F5FA8DA9842618D0DF5F6F293161081D (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_absoluteURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_absoluteURL_m7B3AC06DEEC40D224CF33271EC046368A9EC8FAD (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.Adjust::appWillOpenUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::.ctor(System.String,com.adjust.sdk.AdjustEnvironment,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig__ctor_m96C4907B142108F8818BEBC52EDC03D90B5C6EA7 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___appToken0, int32_t ___environment1, bool ___allowSuppressLogLevel2, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setLogLevel(com.adjust.sdk.AdjustLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLogLevel_mDA93163BE7A5E536C670CCDC0CCF7C93B9B3E54F (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, int32_t ___logLevel0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setSendInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setSendInBackground_m039AABBAF2DB300CE62F8CBF78DA3A5E36604317 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___sendInBackground0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setEventBufferingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setEventBufferingEnabled_mBB81E8C7A41ABCA6326F518EE53905C327B1F982 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___eventBufferingEnabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setLaunchDeferredDeeplink(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setLaunchDeferredDeeplink_m8D6806307929E8E3AE2F01CE3C08BF96DDCD526F_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___launchDeferredDeeplink0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setDefaultTracker(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setDefaultTracker_mA67C3195A19A5E9AA2B5AF9E071336CA9E1AB724_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___defaultTracker0, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUrlStrategyExtension::ToLowerCaseString(com.adjust.sdk.AdjustUrlStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUrlStrategyExtension_ToLowerCaseString_mC501B171FABC8E81E217A019B01F9D079D4DC7A0 (int32_t ___strategy0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setUrlStrategy(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setUrlStrategy_m43C184E9915977FC7955F22A086111B7836E2263_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___urlStrategy0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setAppSecret(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAppSecret_mCF9AAAE31F6A695F806709B8599E319706BE15DE (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, int64_t ___secretId0, int64_t ___info11, int64_t ___info22, int64_t ___info33, int64_t ___info44, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setDelayStart(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setDelayStart_m5E3583922F84F6E2B9988052D54ABECE6113B0B6 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, double ___delayStart0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setNeedsCost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setNeedsCost_m27ACE0EB3E57AECBD640B2A1B4510BCFBE8553DD (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___needsCost0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setPreinstallTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setPreinstallTrackingEnabled_m50FF6E90421C467AAB8D1668E426E2F2F5B15BDA (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___preinstallTrackingEnabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setPreinstallFilePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setPreinstallFilePath_mF70F4E2F50F2E73E7EAF1DEAB6351F6AB6EB728A_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___preinstallFilePath0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setAllowiAdInfoReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowiAdInfoReading_mBCAE2AC7ED0E99E915648114A3424E985EFE469C (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowiAdInfoReading0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setAllowAdServicesInfoReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowAdServicesInfoReading_m232716609D173872EF41FD5837A9D0133419C4C1 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowAdServicesInfoReading0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setAllowIdfaReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowIdfaReading_m439C9CAB2FDE23F534F838B3BEAC30B917E483CA (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowIdfaReading0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setCoppaCompliantEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setCoppaCompliantEnabled_m43149C9F256F85E6149011100CEC777326B818DF (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___coppaCompliantEnabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setPlayStoreKidsAppEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setPlayStoreKidsAppEnabled_m6786F76DFEE24836BA51A2FA1B798FB2AEA86484 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___playStoreKidsAppEnabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::setLinkMeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLinkMeEnabled_mC3B85AB4A602F3BB59B8B4B7FA973D9F2B8EB55E (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___linkMeEnabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustConfig::deactivateSKAdNetworkHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_deactivateSKAdNetworkHandling_m9E3A12F2125AE97AF898E7AC49DBCE9085D93B9E (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.Adjust::start(com.adjust.sdk.AdjustConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_start_mF24352A04B12F9A3D5314851E1F476DD4BCBF0E3 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* ___adjustConfig0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::OnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_OnPause_mEAB3D744D7FA078BE7ABB84342EEA9FCAE7A32B5 (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::OnResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_OnResume_m6E0115176F1BF8238B46D009A2DEC66D1DDA1C97 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::Start(com.adjust.sdk.AdjustConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_Start_m1D39F038C9A56C36B88B6D1145B9F69E01C7E7C7 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* ___adjustConfig0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackEvent(com.adjust.sdk.AdjustEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackEvent_m1ACD3DE44F09700192A24C5A326E73E76673C9F2 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* ___adjustEvent0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SetEnabled_m804BC54C758D85422C2D408FAFBF0D53B746423C (bool ___enabled0, const RuntimeMethod* method) ;
// System.Boolean com.adjust.sdk.AdjustAndroid::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustAndroid_IsEnabled_m0F99D443225B532431D92E5BDDC011DFDC7AD3DF (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SetOfflineMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SetOfflineMode_mAB3976F1FF8690D22BFF4A6ADEAAE8C47524B7A7 (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SetDeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SetDeviceToken_mF30818E7C4F0F5DD856C9E35394E9FB9ADD87E20 (String_t* ___deviceToken0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::GdprForgetMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_GdprForgetMe_mD1AECB214CA8BFB9783A5E3F70F5E80914F08437 (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::DisableThirdPartySharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_DisableThirdPartySharing_m55E805701C85CBBA00F7580AAE75967EA31D9061 (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::AppWillOpenUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_AppWillOpenUrl_mE323FAC42F2AE9B649BFA44CC7EC253361733AD7 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SendFirstPackages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SendFirstPackages_mC6C37B30223758423D5557CF2FA8674801D326CC (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::AddSessionPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_AddSessionPartnerParameter_mFAB6A72387CDDE7C9212D10D49CF488FB26185E6 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::AddSessionCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_AddSessionCallbackParameter_m3886354DCD87FDCFFAFA69A19C4E97E59D31C824 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::RemoveSessionPartnerParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_RemoveSessionPartnerParameter_mE310C1452E7AA2779CEA5B6C8B70410104D87966 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::RemoveSessionCallbackParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_RemoveSessionCallbackParameter_m7D835C9CD309FAB5C5F48ECC068EFD813B90B349 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::ResetSessionPartnerParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_ResetSessionPartnerParameters_m85FA68D4FA76A036E67BDA3371169BEFBAD46CC1 (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::ResetSessionCallbackParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_ResetSessionCallbackParameters_m2319AAC0995822B275A8A731F88866F960BCF09A (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackAdRevenue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackAdRevenue_mE1FF768B0E1885910BEF4C4CB0316852B0774881 (String_t* ___source0, String_t* ___payload1, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackAdRevenue(com.adjust.sdk.AdjustAdRevenue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackAdRevenue_m17E49555E6663E2C1FDB7723ED2ACF8AF7BB2523 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* ___adRevenue0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackPlayStoreSubscription(com.adjust.sdk.AdjustPlayStoreSubscription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackPlayStoreSubscription_m0D0FD86FD0258755FB8555589C707BE28406B7BE (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* ___subscription0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackThirdPartySharing(com.adjust.sdk.AdjustThirdPartySharing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackThirdPartySharing_m2F3BB31D3B60EE3D70D07494921949F090837613 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* ___thirdPartySharing0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::TrackMeasurementConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_TrackMeasurementConsent_m9A2C735602AB9605791360DC02AFDC569CEC7672 (bool ___measurementConsent0, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustAndroid::GetAdid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAndroid_GetAdid_m0525482D8E3F1167CD14B2A12D2E2D7E9FBD8AA5 (const RuntimeMethod* method) ;
// com.adjust.sdk.AdjustAttribution com.adjust.sdk.AdjustAndroid::GetAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* AdjustAndroid_GetAttribution_mD7681342B5DDF0B2A2C9BCE18327E583189CAF9B (const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustAndroid::GetSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAndroid_GetSdkVersion_m543983FDFEFD66BB6CCA9C9B5FD60799547CDA3E (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SetReferrer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SetReferrer_m595DF146979F63B8867E574DC6FCB4F4B9695DB0 (String_t* ___referrer0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::GetGoogleAdId(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_GetGoogleAdId_mDA64F7291B15B14F9B91E8812282463A73A02A40 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDeviceIdsRead0, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustAndroid::GetAmazonAdId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAndroid_GetAmazonAdId_m7B737E67E9B95631CDBD4436109243F1AD78C5DA (const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustAndroid::SetTestOptions(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAndroid_SetTestOptions_m320168C98A3232EE9383FAC4A22BD11193367CC1 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___testOptions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// com.adjust.sdk.JSONNode com.adjust.sdk.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Boolean com.adjust.sdk.JSONNode::op_Equality(com.adjust.sdk.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::GetJsonString(com.adjust.sdk.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___node0, String_t* ___key1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m4566961BEFC86A927E00D2843F98EE83162EF2AB (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::TryGetValue(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, String_t* ___key1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::.ctor(T)
inline void Nullable_1__ctor_m758B42FEC23E776E2124A982ABAF1EE30586F2B4 (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___value0, method);
}
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Boolean com.adjust.sdk.JSONNode::op_Inequality(com.adjust.sdk.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventFailure::get_JsonResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___jsonObject0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___output1, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC (String_t* ___value0, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dictionary0, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustEventSuccess::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventSuccess::get_JsonResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionFailure::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionFailure::get_JsonResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) ;
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionSuccess::get_JsonResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Item(TKey)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_Value()
inline int32_t Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6 (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void com.adjust.sdk.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void com.adjust.sdk.JSONData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5 (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* __this, String_t* ___aData0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.IEnumerator com.adjust.sdk.JSONClass::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Value()
inline JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, String_t* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___s0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.adjust.sdk.AdjustAndroid/AttributionChangeListener::.ctor(System.Action`1<com.adjust.sdk.AdjustAttribution>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributionChangeListener__ctor_mA6205D1D3A3CBA8F7FD10B413B0FD68FFFA548B8 (AttributionChangeListener_t0B8C6D1DBF499C6634879A716BC3AE153527E04B* __this, Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF744A66AF516009BB5D37D24EAE75061B97108D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AttributionChangeListener(Action<AdjustAttribution> pCallback) : base("com.adjust.sdk.OnAttributionChangedListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralEF744A66AF516009BB5D37D24EAE75061B97108D, NULL);
		// this.callback = pCallback;
		Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/AttributionChangeListener::onAttributionChanged(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributionChangeListener_onAttributionChanged_m8EEEC19136B64A9315CCB266EF17028994504EB8 (AttributionChangeListener_t0B8C6D1DBF499C6634879A716BC3AE153527E04B* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___attribution0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B4_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B5_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B7_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B8_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B10_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B11_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B13_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B14_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B16_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B17_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B19_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B18_0 = NULL;
	String_t* G_B20_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B20_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B22_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B21_0 = NULL;
	String_t* G_B23_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B23_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B25_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B24_0 = NULL;
	String_t* G_B26_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B26_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B28_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B27_0 = NULL;
	String_t* G_B29_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B29_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B32_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B37_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B36_0 = NULL;
	String_t* G_B38_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B38_1 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B40_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B39_0 = NULL;
	String_t* G_B41_0 = NULL;
	AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* G_B41_1 = NULL;
	{
		// if (callback == null)
		Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// AdjustAttribution adjustAttribution = new AdjustAttribution();
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_1 = (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C*)il2cpp_codegen_object_new(AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AdjustAttribution__ctor_m36B38620BB1475A4ACE1EDB1CCA466AB2F754307(L_1, NULL);
		V_0 = L_1;
		// adjustAttribution.trackerName = attribution.Get<string>(AdjustUtils.KeyTrackerName) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyTrackerName);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_2 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_3, L_4, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B3_0 = L_2;
		if (L_6)
		{
			G_B4_0 = L_2;
			goto IL_0034;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_7, L_8, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0035:
	{
		NullCheck(G_B5_1);
		AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876_inline(G_B5_1, G_B5_0, NULL);
		// adjustAttribution.trackerToken = attribution.Get<string>(AdjustUtils.KeyTrackerToken) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyTrackerToken);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_10 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_12 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_11, L_12, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B6_0 = L_10;
		if (L_14)
		{
			G_B7_0 = L_10;
			goto IL_005f;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_16 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_15, L_16, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B8_0 = L_17;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F_inline(G_B8_1, G_B8_0, NULL);
		// adjustAttribution.network = attribution.Get<string>(AdjustUtils.KeyNetwork) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyNetwork);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_18 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_20 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_19, L_20, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B9_0 = L_18;
		if (L_22)
		{
			G_B10_0 = L_18;
			goto IL_008a;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_24 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_23, L_24, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B11_0 = L_25;
		G_B11_1 = G_B9_0;
		goto IL_008b;
	}

IL_008a:
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B10_0;
	}

IL_008b:
	{
		NullCheck(G_B11_1);
		AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20_inline(G_B11_1, G_B11_0, NULL);
		// adjustAttribution.campaign = attribution.Get<string>(AdjustUtils.KeyCampaign) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyCampaign);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_26 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_28 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_27, L_28, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B12_0 = L_26;
		if (L_30)
		{
			G_B13_0 = L_26;
			goto IL_00b5;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_32 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4;
		NullCheck(L_31);
		String_t* L_33;
		L_33 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_31, L_32, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B14_0 = L_33;
		G_B14_1 = G_B12_0;
		goto IL_00b6;
	}

IL_00b5:
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B13_0;
	}

IL_00b6:
	{
		NullCheck(G_B14_1);
		AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9_inline(G_B14_1, G_B14_0, NULL);
		// adjustAttribution.adgroup = attribution.Get<string>(AdjustUtils.KeyAdgroup) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyAdgroup);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_34 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_36 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3;
		NullCheck(L_35);
		String_t* L_37;
		L_37 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_35, L_36, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B15_0 = L_34;
		if (L_38)
		{
			G_B16_0 = L_34;
			goto IL_00e0;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_40 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3;
		NullCheck(L_39);
		String_t* L_41;
		L_41 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_39, L_40, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B17_0 = L_41;
		G_B17_1 = G_B15_0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B16_0;
	}

IL_00e1:
	{
		NullCheck(G_B17_1);
		AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB_inline(G_B17_1, G_B17_0, NULL);
		// adjustAttribution.creative = attribution.Get<string>(AdjustUtils.KeyCreative) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyCreative);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_42 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_43 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_44 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5;
		NullCheck(L_43);
		String_t* L_45;
		L_45 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_43, L_44, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B18_0 = L_42;
		if (L_46)
		{
			G_B19_0 = L_42;
			goto IL_010b;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_47 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_48 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5;
		NullCheck(L_47);
		String_t* L_49;
		L_49 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_47, L_48, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B20_0 = L_49;
		G_B20_1 = G_B18_0;
		goto IL_010c;
	}

IL_010b:
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B19_0;
	}

IL_010c:
	{
		NullCheck(G_B20_1);
		AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183_inline(G_B20_1, G_B20_0, NULL);
		// adjustAttribution.clickLabel = attribution.Get<string>(AdjustUtils.KeyClickLabel) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyClickLabel);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_50 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_51 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_52 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10;
		NullCheck(L_51);
		String_t* L_53;
		L_53 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_51, L_52, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B21_0 = L_50;
		if (L_54)
		{
			G_B22_0 = L_50;
			goto IL_0136;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_55 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_56 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10;
		NullCheck(L_55);
		String_t* L_57;
		L_57 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_55, L_56, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B23_0 = L_57;
		G_B23_1 = G_B21_0;
		goto IL_0137;
	}

IL_0136:
	{
		G_B23_0 = ((String_t*)(NULL));
		G_B23_1 = G_B22_0;
	}

IL_0137:
	{
		NullCheck(G_B23_1);
		AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE_inline(G_B23_1, G_B23_0, NULL);
		// adjustAttribution.adid = attribution.Get<string>(AdjustUtils.KeyAdid) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyAdid);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_58 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_59 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_60 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_59);
		String_t* L_61;
		L_61 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_59, L_60, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_62;
		L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B24_0 = L_58;
		if (L_62)
		{
			G_B25_0 = L_58;
			goto IL_0161;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_63 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_64 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_63);
		String_t* L_65;
		L_65 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_63, L_64, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B26_0 = L_65;
		G_B26_1 = G_B24_0;
		goto IL_0162;
	}

IL_0161:
	{
		G_B26_0 = ((String_t*)(NULL));
		G_B26_1 = G_B25_0;
	}

IL_0162:
	{
		NullCheck(G_B26_1);
		AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6_inline(G_B26_1, G_B26_0, NULL);
		// adjustAttribution.costType = attribution.Get<string>(AdjustUtils.KeyCostType) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyCostType);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_66 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_68 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14;
		NullCheck(L_67);
		String_t* L_69;
		L_69 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_67, L_68, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B27_0 = L_66;
		if (L_70)
		{
			G_B28_0 = L_66;
			goto IL_018c;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_71 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_72 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14;
		NullCheck(L_71);
		String_t* L_73;
		L_73 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_71, L_72, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B29_0 = L_73;
		G_B29_1 = G_B27_0;
		goto IL_018d;
	}

IL_018c:
	{
		G_B29_0 = ((String_t*)(NULL));
		G_B29_1 = G_B28_0;
	}

IL_018d:
	{
		NullCheck(G_B29_1);
		AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0_inline(G_B29_1, G_B29_0, NULL);
		// AndroidJavaObject ajoCostAmount = attribution.Get<AndroidJavaObject>(AdjustUtils.KeyCostAmount) == null ?
		//     null : attribution.Get<AndroidJavaObject>(AdjustUtils.KeyCostAmount);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_74 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_75 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15;
		NullCheck(L_74);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_76;
		L_76 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_74, L_75, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		if (!L_76)
		{
			goto IL_01ac;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_78 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15;
		NullCheck(L_77);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_79;
		L_79 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_77, L_78, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		G_B32_0 = L_79;
		goto IL_01ad;
	}

IL_01ac:
	{
		G_B32_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
	}

IL_01ad:
	{
		V_1 = G_B32_0;
		// if (ajoCostAmount == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = V_1;
		if (L_80)
		{
			goto IL_01c2;
		}
	}
	{
		// adjustAttribution.costAmount = null;
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_81 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_82 = V_2;
		NullCheck(L_81);
		AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline(L_81, L_82, NULL);
		goto IL_01df;
	}

IL_01c2:
	{
		// double costAmount = ajoCostAmount.Call<double>("doubleValue");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84;
		L_84 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_83);
		double L_85;
		L_85 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_83, _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C, L_84, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		V_3 = L_85;
		// adjustAttribution.costAmount = costAmount;
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_86 = V_0;
		double L_87 = V_3;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_88), L_87, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		NullCheck(L_86);
		AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline(L_86, L_88, NULL);
	}

IL_01df:
	{
		// adjustAttribution.costCurrency = attribution.Get<string>(AdjustUtils.KeyCostCurrency) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyCostCurrency);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_89 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_91 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16;
		NullCheck(L_90);
		String_t* L_92;
		L_92 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_90, L_91, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B36_0 = L_89;
		if (L_93)
		{
			G_B37_0 = L_89;
			goto IL_0204;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_95 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16;
		NullCheck(L_94);
		String_t* L_96;
		L_96 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_94, L_95, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B38_0 = L_96;
		G_B38_1 = G_B36_0;
		goto IL_0205;
	}

IL_0204:
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B37_0;
	}

IL_0205:
	{
		NullCheck(G_B38_1);
		AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51_inline(G_B38_1, G_B38_0, NULL);
		// adjustAttribution.fbInstallReferrer = attribution.Get<string>(AdjustUtils.KeyFbInstallReferrer) == "" ?
		//     null : attribution.Get<string>(AdjustUtils.KeyFbInstallReferrer);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_97 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_98 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_99 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17;
		NullCheck(L_98);
		String_t* L_100;
		L_100 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_98, L_99, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B39_0 = L_97;
		if (L_101)
		{
			G_B40_0 = L_97;
			goto IL_022f;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_102 = ___attribution0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_103 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17;
		NullCheck(L_102);
		String_t* L_104;
		L_104 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_102, L_103, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B41_0 = L_104;
		G_B41_1 = G_B39_0;
		goto IL_0230;
	}

IL_022f:
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B40_0;
	}

IL_0230:
	{
		NullCheck(G_B41_1);
		AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D_inline(G_B41_1, G_B41_0, NULL);
		// callback(adjustAttribution);
		Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* L_105 = __this->___callback_4;
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_106 = V_0;
		NullCheck(L_105);
		Action_1_Invoke_m19F5C2FCEDAF544F9CA8919E78C830EE1F0B4D46_inline(L_105, L_106, NULL);
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
// System.Void com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener::.ctor(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeferredDeeplinkListener__ctor_m9AFF50C9019C550FE14B914675EE675B36EE0582 (DeferredDeeplinkListener_tA916B993050D1BEB933F0B0D1803DB56ADD897F3* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2125008434118F883C13DC3E9E546986B6C92FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DeferredDeeplinkListener(Action<string> pCallback) : base("com.adjust.sdk.OnDeeplinkResponseListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralE2125008434118F883C13DC3E9E546986B6C92FE, NULL);
		// this.callback = pCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean com.adjust.sdk.AdjustAndroid/DeferredDeeplinkListener::launchReceivedDeeplink(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeferredDeeplinkListener_launchReceivedDeeplink_mE6D35176E2C2AADC10C881FF8F3927AB528C5F3B (DeferredDeeplinkListener_tA916B993050D1BEB933F0B0D1803DB56ADD897F3* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___deeplink0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (callback == null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return launchDeferredDeeplink;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		bool L_1 = ((AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_StaticFields*)il2cpp_codegen_static_fields_for(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var))->___launchDeferredDeeplink_1;
		return L_1;
	}

IL_000e:
	{
		// string deeplinkURL = deeplink.Call<string>("toString");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___deeplink0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_4;
		// callback(deeplinkURL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = __this->___callback_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_5, L_6, NULL);
		// return launchDeferredDeeplink;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		bool L_7 = ((AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_StaticFields*)il2cpp_codegen_static_fields_for(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var))->___launchDeferredDeeplink_1;
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
// System.Void com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener::.ctor(System.Action`1<com.adjust.sdk.AdjustEventSuccess>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrackingSucceededListener__ctor_m2A4ED2670A9A651245F8D5E344BDBFB5B3E3D43D (EventTrackingSucceededListener_tFC976FD5B32EEC7DDA71D1414A7BF334A873588B* __this, Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA26D86D0E64FF78541F33B12225DBE76288D4B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EventTrackingSucceededListener(Action<AdjustEventSuccess> pCallback) : base("com.adjust.sdk.OnEventTrackingSucceededListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralA26D86D0E64FF78541F33B12225DBE76288D4B29, NULL);
		// this.callback = pCallback;
		Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/EventTrackingSucceededListener::onFinishedEventTrackingSucceeded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrackingSucceededListener_onFinishedEventTrackingSucceeded_m202DFEA1323BD584F04E02C0A8323870A1959460 (EventTrackingSucceededListener_tFC976FD5B32EEC7DDA71D1414A7BF334A873588B* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___eventSuccessData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B6_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B7_1 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B9_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B10_1 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B12_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B13_1 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B15_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B16_1 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B18_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B17_0 = NULL;
	String_t* G_B19_0 = NULL;
	AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* G_B19_1 = NULL;
	{
		// if (callback == null)
		Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (eventSuccessData == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___eventSuccessData0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// AdjustEventSuccess adjustEventSuccess = new AdjustEventSuccess();
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_2 = (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA*)il2cpp_codegen_object_new(AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdjustEventSuccess__ctor_m8E95350D1027E90E42E4A890D5D8F6C683C1388C(L_2, NULL);
		V_0 = L_2;
		// adjustEventSuccess.Adid = eventSuccessData.Get<string>(AdjustUtils.KeyAdid) == "" ?
		//     null : eventSuccessData.Get<string>(AdjustUtils.KeyAdid);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_3 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_4, L_5, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_3;
		if (L_7)
		{
			G_B6_0 = L_3;
			goto IL_0038;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_9 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_8, L_9, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD_inline(G_B7_1, G_B7_0, NULL);
		// adjustEventSuccess.Message = eventSuccessData.Get<string>(AdjustUtils.KeyMessage) == "" ?
		//     null : eventSuccessData.Get<string>(AdjustUtils.KeyMessage);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_11 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_12, L_13, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B8_0 = L_11;
		if (L_15)
		{
			G_B9_0 = L_11;
			goto IL_0063;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_16, L_17, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_0064:
	{
		NullCheck(G_B10_1);
		AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F_inline(G_B10_1, G_B10_0, NULL);
		// adjustEventSuccess.Timestamp = eventSuccessData.Get<string>(AdjustUtils.KeyTimestamp) == "" ?
		//     null : eventSuccessData.Get<string>(AdjustUtils.KeyTimestamp);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_19 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_21 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_20, L_21, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B11_0 = L_19;
		if (L_23)
		{
			G_B12_0 = L_19;
			goto IL_008e;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_25 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_24, L_25, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B13_0 = L_26;
		G_B13_1 = G_B11_0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B12_0;
	}

IL_008f:
	{
		NullCheck(G_B13_1);
		AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B_inline(G_B13_1, G_B13_0, NULL);
		// adjustEventSuccess.EventToken = eventSuccessData.Get<string>(AdjustUtils.KeyEventToken) == "" ?
		//     null : eventSuccessData.Get<string>(AdjustUtils.KeyEventToken);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_27 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_29 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_28, L_29, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B14_0 = L_27;
		if (L_31)
		{
			G_B15_0 = L_27;
			goto IL_00b9;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_33 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		NullCheck(L_32);
		String_t* L_34;
		L_34 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_32, L_33, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B16_0 = L_34;
		G_B16_1 = G_B14_0;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00ba:
	{
		NullCheck(G_B16_1);
		AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64_inline(G_B16_1, G_B16_0, NULL);
		// adjustEventSuccess.CallbackId = eventSuccessData.Get<string>(AdjustUtils.KeyCallbackId) == "" ?
		//     null : eventSuccessData.Get<string>(AdjustUtils.KeyCallbackId);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_35 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_37 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_36, L_37, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B17_0 = L_35;
		if (L_39)
		{
			G_B18_0 = L_35;
			goto IL_00e4;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_41 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		NullCheck(L_40);
		String_t* L_42;
		L_42 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_40, L_41, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B19_0 = L_42;
		G_B19_1 = G_B17_0;
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B18_0;
	}

IL_00e5:
	{
		NullCheck(G_B19_1);
		AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9_inline(G_B19_1, G_B19_0, NULL);
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaObject ajoJsonResponse = eventSuccessData.Get<AndroidJavaObject>(AdjustUtils.KeyJsonResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_43 = ___eventSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_44 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_43);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45;
		L_45 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_43, L_44, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		// string jsonResponseString = ajoJsonResponse.Call<string>("toString");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46;
		L_46 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_45);
		String_t* L_47;
		L_47 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_45, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_46, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_47;
		// adjustEventSuccess.BuildJsonResponseFromString(jsonResponseString);
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_48 = V_0;
		String_t* L_49 = V_1;
		NullCheck(L_48);
		AdjustEventSuccess_BuildJsonResponseFromString_mB45093E3AE421B1E1C210318F2081EB7016C065C(L_48, L_49, NULL);
		// }
		goto IL_0111;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010e;
		}
		throw e;
	}

CATCH_010e:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0111;
	}// end catch (depth: 1)

IL_0111:
	{
		// callback(adjustEventSuccess);
		Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* L_50 = __this->___callback_4;
		AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* L_51 = V_0;
		NullCheck(L_50);
		Action_1_Invoke_mF62BCEC9DCD64C40821FE03ADEC2E222A89284EB_inline(L_50, L_51, NULL);
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
// System.Void com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener::.ctor(System.Action`1<com.adjust.sdk.AdjustEventFailure>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrackingFailedListener__ctor_m7D5E6FA8F17AAC33B50DFC25A1ACA5183FCE6545 (EventTrackingFailedListener_t6236AFA914021CB80116982BE82693AA0BF9ECD9* __this, Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral942D5AF222C530757EB868EF023A5D2B55904966);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EventTrackingFailedListener(Action<AdjustEventFailure> pCallback) : base("com.adjust.sdk.OnEventTrackingFailedListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral942D5AF222C530757EB868EF023A5D2B55904966, NULL);
		// this.callback = pCallback;
		Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/EventTrackingFailedListener::onFinishedEventTrackingFailed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrackingFailedListener_onFinishedEventTrackingFailed_m4FB36E7E27EF57535C67940BC6F148293CF366C0 (EventTrackingFailedListener_t6236AFA914021CB80116982BE82693AA0BF9ECD9* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___eventFailureData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B6_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B7_1 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B9_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B10_1 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B12_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B13_1 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B15_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B16_1 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B18_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B17_0 = NULL;
	String_t* G_B19_0 = NULL;
	AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* G_B19_1 = NULL;
	{
		// if (callback == null)
		Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (eventFailureData == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___eventFailureData0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// AdjustEventFailure adjustEventFailure = new AdjustEventFailure();
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_2 = (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26*)il2cpp_codegen_object_new(AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdjustEventFailure__ctor_m528922562AC18ADE49AC59EFECDF9DDDF06D9827(L_2, NULL);
		V_0 = L_2;
		// adjustEventFailure.Adid = eventFailureData.Get<string>(AdjustUtils.KeyAdid) == "" ?
		//     null : eventFailureData.Get<string>(AdjustUtils.KeyAdid);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_3 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_4, L_5, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_3;
		if (L_7)
		{
			G_B6_0 = L_3;
			goto IL_0038;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_9 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_8, L_9, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC_inline(G_B7_1, G_B7_0, NULL);
		// adjustEventFailure.Message = eventFailureData.Get<string>(AdjustUtils.KeyMessage) == "" ?
		//     null : eventFailureData.Get<string>(AdjustUtils.KeyMessage);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_11 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_12, L_13, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B8_0 = L_11;
		if (L_15)
		{
			G_B9_0 = L_11;
			goto IL_0063;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_16, L_17, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_0064:
	{
		NullCheck(G_B10_1);
		AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472_inline(G_B10_1, G_B10_0, NULL);
		// adjustEventFailure.WillRetry = eventFailureData.Get<bool>(AdjustUtils.KeyWillRetry);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_19 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_21 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		NullCheck(L_20);
		bool L_22;
		L_22 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_20, L_21, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		NullCheck(L_19);
		AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9_inline(L_19, L_22, NULL);
		// adjustEventFailure.Timestamp = eventFailureData.Get<string>(AdjustUtils.KeyTimestamp) == "" ?
		//     null : eventFailureData.Get<string>(AdjustUtils.KeyTimestamp);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_23 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___eventFailureData0;
		String_t* L_25 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_24, L_25, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B11_0 = L_23;
		if (L_27)
		{
			G_B12_0 = L_23;
			goto IL_009f;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_29 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_28, L_29, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B13_0 = L_30;
		G_B13_1 = G_B11_0;
		goto IL_00a0;
	}

IL_009f:
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B12_0;
	}

IL_00a0:
	{
		NullCheck(G_B13_1);
		AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F_inline(G_B13_1, G_B13_0, NULL);
		// adjustEventFailure.EventToken = eventFailureData.Get<string>(AdjustUtils.KeyEventToken) == "" ?
		//     null : eventFailureData.Get<string>(AdjustUtils.KeyEventToken);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_31 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_33 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		NullCheck(L_32);
		String_t* L_34;
		L_34 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_32, L_33, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B14_0 = L_31;
		if (L_35)
		{
			G_B15_0 = L_31;
			goto IL_00ca;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_37 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_36, L_37, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B16_0 = L_38;
		G_B16_1 = G_B14_0;
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00cb:
	{
		NullCheck(G_B16_1);
		AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E_inline(G_B16_1, G_B16_0, NULL);
		// adjustEventFailure.CallbackId = eventFailureData.Get<string>(AdjustUtils.KeyCallbackId) == "" ?
		//     null : eventFailureData.Get<string>(AdjustUtils.KeyCallbackId);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_39 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_41 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		NullCheck(L_40);
		String_t* L_42;
		L_42 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_40, L_41, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B17_0 = L_39;
		if (L_43)
		{
			G_B18_0 = L_39;
			goto IL_00f5;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_45 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		NullCheck(L_44);
		String_t* L_46;
		L_46 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_44, L_45, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B19_0 = L_46;
		G_B19_1 = G_B17_0;
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B18_0;
	}

IL_00f6:
	{
		NullCheck(G_B19_1);
		AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD_inline(G_B19_1, G_B19_0, NULL);
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaObject ajoJsonResponse = eventFailureData.Get<AndroidJavaObject>(AdjustUtils.KeyJsonResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_47 = ___eventFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_48 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_47);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_49;
		L_49 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_47, L_48, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		// string jsonResponseString = ajoJsonResponse.Call<string>("toString");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50;
		L_50 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_49);
		String_t* L_51;
		L_51 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_49, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_50, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_51;
		// adjustEventFailure.BuildJsonResponseFromString(jsonResponseString);
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_52 = V_0;
		String_t* L_53 = V_1;
		NullCheck(L_52);
		AdjustEventFailure_BuildJsonResponseFromString_mFC779A74C66E513EC19EF86F780AE363B25A828A(L_52, L_53, NULL);
		// }
		goto IL_0122;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011f;
		}
		throw e;
	}

CATCH_011f:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0122;
	}// end catch (depth: 1)

IL_0122:
	{
		// callback(adjustEventFailure);
		Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* L_54 = __this->___callback_4;
		AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* L_55 = V_0;
		NullCheck(L_54);
		Action_1_Invoke_m70436F814175E450B896367B05771F98512F9B8E_inline(L_54, L_55, NULL);
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
// System.Void com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener::.ctor(System.Action`1<com.adjust.sdk.AdjustSessionSuccess>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTrackingSucceededListener__ctor_mD524E8A2ACB053F1100FC8BD428D97E256EEAAF1 (SessionTrackingSucceededListener_t3A3F5AC668F534AFEA81060AC794AB0C6B2770DC* __this, Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9CB7E2903576395C85EB9DC660D0B7900C29151);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SessionTrackingSucceededListener(Action<AdjustSessionSuccess> pCallback) : base("com.adjust.sdk.OnSessionTrackingSucceededListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralE9CB7E2903576395C85EB9DC660D0B7900C29151, NULL);
		// this.callback = pCallback;
		Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/SessionTrackingSucceededListener::onFinishedSessionTrackingSucceeded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTrackingSucceededListener_onFinishedSessionTrackingSucceeded_m641A6B81E4C67260BB84A35FC9803D11AA33102A (SessionTrackingSucceededListener_t3A3F5AC668F534AFEA81060AC794AB0C6B2770DC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sessionSuccessData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B6_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B7_1 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B9_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B10_1 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B12_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* G_B13_1 = NULL;
	{
		// if (callback == null)
		Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (sessionSuccessData == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___sessionSuccessData0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// AdjustSessionSuccess adjustSessionSuccess = new AdjustSessionSuccess();
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_2 = (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87*)il2cpp_codegen_object_new(AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdjustSessionSuccess__ctor_m5D4F0E9806EDCE8130DE98471E7ECA654B744F9A(L_2, NULL);
		V_0 = L_2;
		// adjustSessionSuccess.Adid = sessionSuccessData.Get<string>(AdjustUtils.KeyAdid) == "" ?
		//     null : sessionSuccessData.Get<string>(AdjustUtils.KeyAdid);
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_3 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_4, L_5, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_3;
		if (L_7)
		{
			G_B6_0 = L_3;
			goto IL_0038;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_9 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_8, L_9, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573_inline(G_B7_1, G_B7_0, NULL);
		// adjustSessionSuccess.Message = sessionSuccessData.Get<string>(AdjustUtils.KeyMessage) == "" ?
		//     null : sessionSuccessData.Get<string>(AdjustUtils.KeyMessage);
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_11 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_12, L_13, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B8_0 = L_11;
		if (L_15)
		{
			G_B9_0 = L_11;
			goto IL_0063;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_16, L_17, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_0064:
	{
		NullCheck(G_B10_1);
		AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99_inline(G_B10_1, G_B10_0, NULL);
		// adjustSessionSuccess.Timestamp = sessionSuccessData.Get<string>(AdjustUtils.KeyTimestamp) == "" ?
		//     null : sessionSuccessData.Get<string>(AdjustUtils.KeyTimestamp);
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_19 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_21 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_20, L_21, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B11_0 = L_19;
		if (L_23)
		{
			G_B12_0 = L_19;
			goto IL_008e;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_25 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_24, L_25, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B13_0 = L_26;
		G_B13_1 = G_B11_0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B12_0;
	}

IL_008f:
	{
		NullCheck(G_B13_1);
		AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA_inline(G_B13_1, G_B13_0, NULL);
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaObject ajoJsonResponse = sessionSuccessData.Get<AndroidJavaObject>(AdjustUtils.KeyJsonResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = ___sessionSuccessData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_28 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_27);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
		L_29 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_27, L_28, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		// string jsonResponseString = ajoJsonResponse.Call<string>("toString");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30;
		L_30 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_31;
		L_31 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_29, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_30, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_31;
		// adjustSessionSuccess.BuildJsonResponseFromString(jsonResponseString);
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_32 = V_0;
		String_t* L_33 = V_1;
		NullCheck(L_32);
		AdjustSessionSuccess_BuildJsonResponseFromString_m2CA7E40EDAD331AE6DEDF385D364682D7AC8ACCE(L_32, L_33, NULL);
		// }
		goto IL_00bb;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b8;
		}
		throw e;
	}

CATCH_00b8:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bb;
	}// end catch (depth: 1)

IL_00bb:
	{
		// callback(adjustSessionSuccess);
		Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* L_34 = __this->___callback_4;
		AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* L_35 = V_0;
		NullCheck(L_34);
		Action_1_Invoke_mF093B67EE0517B8DEDE41CBECD2FB7A5E390CFD5_inline(L_34, L_35, NULL);
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
// System.Void com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener::.ctor(System.Action`1<com.adjust.sdk.AdjustSessionFailure>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTrackingFailedListener__ctor_mEC4AC95C995754842BC483D6D7AA0381A508BA6B (SessionTrackingFailedListener_t122CA3302C546C66232D03803D6CB66763F43C5D* __this, Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A51D679EA63E20F61F434AA7CCB6CBE993C9CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SessionTrackingFailedListener(Action<AdjustSessionFailure> pCallback) : base("com.adjust.sdk.OnSessionTrackingFailedListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral49A51D679EA63E20F61F434AA7CCB6CBE993C9CC, NULL);
		// this.callback = pCallback;
		Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* L_0 = ___pCallback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/SessionTrackingFailedListener::onFinishedSessionTrackingFailed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTrackingFailedListener_onFinishedSessionTrackingFailed_m2494A8E23D515011E6014DEB2630F9F3A88F8D69 (SessionTrackingFailedListener_t122CA3302C546C66232D03803D6CB66763F43C5D* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sessionFailureData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B6_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B7_1 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B9_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B10_1 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B12_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* G_B13_1 = NULL;
	{
		// if (callback == null)
		Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* L_0 = __this->___callback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (sessionFailureData == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___sessionFailureData0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// AdjustSessionFailure adjustSessionFailure = new AdjustSessionFailure();
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_2 = (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23*)il2cpp_codegen_object_new(AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdjustSessionFailure__ctor_m55084005614B14B05358BFC8D8093D0E1BA5D577(L_2, NULL);
		V_0 = L_2;
		// adjustSessionFailure.Adid = sessionFailureData.Get<string>(AdjustUtils.KeyAdid) == "" ?
		//     null : sessionFailureData.Get<string>(AdjustUtils.KeyAdid);
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_3 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_4, L_5, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_3;
		if (L_7)
		{
			G_B6_0 = L_3;
			goto IL_0038;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_9 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_8, L_9, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7_inline(G_B7_1, G_B7_0, NULL);
		// adjustSessionFailure.Message = sessionFailureData.Get<string>(AdjustUtils.KeyMessage) == "" ?
		//     null : sessionFailureData.Get<string>(AdjustUtils.KeyMessage);
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_11 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_12, L_13, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B8_0 = L_11;
		if (L_15)
		{
			G_B9_0 = L_11;
			goto IL_0063;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_16, L_17, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_0064:
	{
		NullCheck(G_B10_1);
		AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835_inline(G_B10_1, G_B10_0, NULL);
		// adjustSessionFailure.WillRetry = sessionFailureData.Get<bool>(AdjustUtils.KeyWillRetry);
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_19 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_21 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		NullCheck(L_20);
		bool L_22;
		L_22 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_20, L_21, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		NullCheck(L_19);
		AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF_inline(L_19, L_22, NULL);
		// adjustSessionFailure.Timestamp = sessionFailureData.Get<string>(AdjustUtils.KeyTimestamp) == "" ?
		//     null : sessionFailureData.Get<string>(AdjustUtils.KeyTimestamp);
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_23 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ___sessionFailureData0;
		String_t* L_25 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_24, L_25, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B11_0 = L_23;
		if (L_27)
		{
			G_B12_0 = L_23;
			goto IL_009f;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_29 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_28, L_29, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		G_B13_0 = L_30;
		G_B13_1 = G_B11_0;
		goto IL_00a0;
	}

IL_009f:
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B12_0;
	}

IL_00a0:
	{
		NullCheck(G_B13_1);
		AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E_inline(G_B13_1, G_B13_0, NULL);
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaObject ajoJsonResponse = sessionFailureData.Get<AndroidJavaObject>(AdjustUtils.KeyJsonResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = ___sessionFailureData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_32 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_31);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33;
		L_33 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_31, L_32, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		// string jsonResponseString = ajoJsonResponse.Call<string>("toString");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34;
		L_34 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_35;
		L_35 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_33, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_34, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_35;
		// adjustSessionFailure.BuildJsonResponseFromString(jsonResponseString);
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_36 = V_0;
		String_t* L_37 = V_1;
		NullCheck(L_36);
		AdjustSessionFailure_BuildJsonResponseFromString_m2D4F30200FC6361CACC4417A512F8E14FF9C38A6(L_36, L_37, NULL);
		// }
		goto IL_00cc;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cc;
	}// end catch (depth: 1)

IL_00cc:
	{
		// callback(adjustSessionFailure);
		Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* L_38 = __this->___callback_4;
		AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* L_39 = V_0;
		NullCheck(L_38);
		Action_1_Invoke_mE2F1EB1C255C43E7C8671D5680B428D566B8F198_inline(L_38, L_39, NULL);
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
// System.Void com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener::.ctor(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdsReadListener__ctor_mDF6EF7D21335FCB0B244E975C68B5A7CC8F1E39D (DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___pCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC60DDE1532572C618EA4F6F432BB526B5B9B4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DeviceIdsReadListener(Action<string> pCallback) : base("com.adjust.sdk.OnDeviceIdsRead")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral9EC60DDE1532572C618EA4F6F432BB526B5B9B4A, NULL);
		// this.onPlayAdIdReadCallback = pCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___pCallback0;
		__this->___onPlayAdIdReadCallback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlayAdIdReadCallback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener::onGoogleAdIdRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdsReadListener_onGoogleAdIdRead_m82DB269D37125FB1A6A3667454CF5B408AC179DD (DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C* __this, String_t* ___playAdId0, const RuntimeMethod* method) 
{
	{
		// if (onPlayAdIdReadCallback == null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onPlayAdIdReadCallback_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.onPlayAdIdReadCallback(playAdId);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___onPlayAdIdReadCallback_4;
		String_t* L_2 = ___playAdId0;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAndroid/DeviceIdsReadListener::onGoogleAdIdRead(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdsReadListener_onGoogleAdIdRead_m46B72AE61C8F5B9408B0FA1374F0D34557C6D16A (DeviceIdsReadListener_t12950C9ED92EC62C5F47A5C06230AE558D8A509C* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ajoAdId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (ajoAdId == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___ajoAdId0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// string adId = null;
		V_0 = (String_t*)NULL;
		// this.onGoogleAdIdRead(adId);
		String_t* L_1 = V_0;
		DeviceIdsReadListener_onGoogleAdIdRead_m82DB269D37125FB1A6A3667454CF5B408AC179DD(__this, L_1, NULL);
		// return;
		return;
	}

IL_000d:
	{
		// this.onGoogleAdIdRead(ajoAdId.Call<string>("toString"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___ajoAdId0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		DeviceIdsReadListener_onGoogleAdIdRead_m82DB269D37125FB1A6A3667454CF5B408AC179DD(__this, L_4, NULL);
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
// System.Void com.adjust.sdk.Adjust::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Awake_m1B0E9298029BFF09C771F77DF8181CADFCB63BA8 (Adjust_t91A005D35DB28A1F88C4270A08F84DEA93864A96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* V_0 = NULL;
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// DontDestroyOnLoad(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// Application.deepLinkActivated += Adjust.appWillOpenUrl;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_3, NULL, (intptr_t)((void*)Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7_RuntimeMethod_var), NULL);
		Application_add_deepLinkActivated_m65DB6854F5FA8DA9842618D0DF5F6F293161081D(L_3, NULL);
		// if (!string.IsNullOrEmpty(Application.absoluteURL))
		String_t* L_4;
		L_4 = Application_get_absoluteURL_m7B3AC06DEEC40D224CF33271EC046368A9EC8FAD(NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		// Adjust.appWillOpenUrl(Application.absoluteURL);
		String_t* L_6;
		L_6 = Application_get_absoluteURL_m7B3AC06DEEC40D224CF33271EC046368A9EC8FAD(NULL);
		Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7(L_6, NULL);
	}

IL_003f:
	{
		// if (!this.startManually)
		bool L_7 = __this->___startManually_7;
		if (L_7)
		{
			goto IL_0162;
		}
	}
	{
		// AdjustConfig adjustConfig = new AdjustConfig(this.appToken, this.environment, (this.logLevel == AdjustLogLevel.Suppress));
		String_t* L_8 = __this->___appToken_8;
		int32_t L_9 = __this->___environment_9;
		int32_t L_10 = __this->___logLevel_10;
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_11 = (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49*)il2cpp_codegen_object_new(AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AdjustConfig__ctor_m96C4907B142108F8818BEBC52EDC03D90B5C6EA7(L_11, L_8, L_9, (bool)((((int32_t)L_10) == ((int32_t)7))? 1 : 0), NULL);
		V_0 = L_11;
		// adjustConfig.setLogLevel(this.logLevel);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_12 = V_0;
		int32_t L_13 = __this->___logLevel_10;
		NullCheck(L_12);
		AdjustConfig_setLogLevel_mDA93163BE7A5E536C670CCDC0CCF7C93B9B3E54F(L_12, L_13, NULL);
		// adjustConfig.setSendInBackground(this.sendInBackground);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_14 = V_0;
		bool L_15 = __this->___sendInBackground_12;
		NullCheck(L_14);
		AdjustConfig_setSendInBackground_m039AABBAF2DB300CE62F8CBF78DA3A5E36604317(L_14, L_15, NULL);
		// adjustConfig.setEventBufferingEnabled(this.eventBuffering);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_16 = V_0;
		bool L_17 = __this->___eventBuffering_11;
		NullCheck(L_16);
		AdjustConfig_setEventBufferingEnabled_mBB81E8C7A41ABCA6326F518EE53905C327B1F982(L_16, L_17, NULL);
		// adjustConfig.setLaunchDeferredDeeplink(this.launchDeferredDeeplink);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_18 = V_0;
		bool L_19 = __this->___launchDeferredDeeplink_13;
		NullCheck(L_18);
		AdjustConfig_setLaunchDeferredDeeplink_m8D6806307929E8E3AE2F01CE3C08BF96DDCD526F_inline(L_18, L_19, NULL);
		// adjustConfig.setDefaultTracker(this.defaultTracker);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_20 = V_0;
		String_t* L_21 = __this->___defaultTracker_17;
		NullCheck(L_20);
		AdjustConfig_setDefaultTracker_mA67C3195A19A5E9AA2B5AF9E071336CA9E1AB724_inline(L_20, L_21, NULL);
		// adjustConfig.setUrlStrategy(this.urlStrategy.ToLowerCaseString());
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_22 = V_0;
		int32_t L_23 = __this->___urlStrategy_18;
		String_t* L_24;
		L_24 = AdjustUrlStrategyExtension_ToLowerCaseString_mC501B171FABC8E81E217A019B01F9D079D4DC7A0(L_23, NULL);
		NullCheck(L_22);
		AdjustConfig_setUrlStrategy_m43C184E9915977FC7955F22A086111B7836E2263_inline(L_22, L_24, NULL);
		// adjustConfig.setAppSecret(this.secretId, this.info1, this.info2, this.info3, this.info4);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_25 = V_0;
		int64_t L_26 = __this->___secretId_20;
		int64_t L_27 = __this->___info1_21;
		int64_t L_28 = __this->___info2_22;
		int64_t L_29 = __this->___info3_23;
		int64_t L_30 = __this->___info4_24;
		NullCheck(L_25);
		AdjustConfig_setAppSecret_mCF9AAAE31F6A695F806709B8599E319706BE15DE(L_25, L_26, L_27, L_28, L_29, L_30, NULL);
		// adjustConfig.setDelayStart(this.startDelay);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_31 = V_0;
		double L_32 = __this->___startDelay_19;
		NullCheck(L_31);
		AdjustConfig_setDelayStart_m5E3583922F84F6E2B9988052D54ABECE6113B0B6(L_31, L_32, NULL);
		// adjustConfig.setNeedsCost(this.needsCost);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_33 = V_0;
		bool L_34 = __this->___needsCost_14;
		NullCheck(L_33);
		AdjustConfig_setNeedsCost_m27ACE0EB3E57AECBD640B2A1B4510BCFBE8553DD(L_33, L_34, NULL);
		// adjustConfig.setPreinstallTrackingEnabled(this.preinstallTracking);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_35 = V_0;
		bool L_36 = __this->___preinstallTracking_25;
		NullCheck(L_35);
		AdjustConfig_setPreinstallTrackingEnabled_m50FF6E90421C467AAB8D1668E426E2F2F5B15BDA(L_35, L_36, NULL);
		// adjustConfig.setPreinstallFilePath(this.preinstallFilePath);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_37 = V_0;
		String_t* L_38 = __this->___preinstallFilePath_26;
		NullCheck(L_37);
		AdjustConfig_setPreinstallFilePath_mF70F4E2F50F2E73E7EAF1DEAB6351F6AB6EB728A_inline(L_37, L_38, NULL);
		// adjustConfig.setAllowiAdInfoReading(this.iadInfoReading);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_39 = V_0;
		bool L_40 = __this->___iadInfoReading_28;
		NullCheck(L_39);
		AdjustConfig_setAllowiAdInfoReading_mBCAE2AC7ED0E99E915648114A3424E985EFE469C(L_39, L_40, NULL);
		// adjustConfig.setAllowAdServicesInfoReading(this.adServicesInfoReading);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_41 = V_0;
		bool L_42 = __this->___adServicesInfoReading_29;
		NullCheck(L_41);
		AdjustConfig_setAllowAdServicesInfoReading_m232716609D173872EF41FD5837A9D0133419C4C1(L_41, L_42, NULL);
		// adjustConfig.setAllowIdfaReading(this.idfaInfoReading);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_43 = V_0;
		bool L_44 = __this->___idfaInfoReading_30;
		NullCheck(L_43);
		AdjustConfig_setAllowIdfaReading_m439C9CAB2FDE23F534F838B3BEAC30B917E483CA(L_43, L_44, NULL);
		// adjustConfig.setCoppaCompliantEnabled(this.coppaCompliant);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_45 = V_0;
		bool L_46 = __this->___coppaCompliant_15;
		NullCheck(L_45);
		AdjustConfig_setCoppaCompliantEnabled_m43149C9F256F85E6149011100CEC777326B818DF(L_45, L_46, NULL);
		// adjustConfig.setPlayStoreKidsAppEnabled(this.playStoreKidsApp);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_47 = V_0;
		bool L_48 = __this->___playStoreKidsApp_27;
		NullCheck(L_47);
		AdjustConfig_setPlayStoreKidsAppEnabled_m6786F76DFEE24836BA51A2FA1B798FB2AEA86484(L_47, L_48, NULL);
		// adjustConfig.setLinkMeEnabled(this.linkMe);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_49 = V_0;
		bool L_50 = __this->___linkMe_16;
		NullCheck(L_49);
		AdjustConfig_setLinkMeEnabled_mC3B85AB4A602F3BB59B8B4B7FA973D9F2B8EB55E(L_49, L_50, NULL);
		// if (!skAdNetworkHandling)
		bool L_51 = __this->___skAdNetworkHandling_31;
		if (L_51)
		{
			goto IL_015c;
		}
	}
	{
		// adjustConfig.deactivateSKAdNetworkHandling();
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_52 = V_0;
		NullCheck(L_52);
		AdjustConfig_deactivateSKAdNetworkHandling_m9E3A12F2125AE97AF898E7AC49DBCE9085D93B9E(L_52, NULL);
	}

IL_015c:
	{
		// Adjust.start(adjustConfig);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_53 = V_0;
		Adjust_start_mF24352A04B12F9A3D5314851E1F476DD4BCBF0E3(L_53, NULL);
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_OnApplicationPause_m3ADC342D8050B80840CB85B003EBCF689C8E4012 (Adjust_t91A005D35DB28A1F88C4270A08F84DEA93864A96* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// if (pauseStatus)
		bool L_1 = ___pauseStatus0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// AdjustAndroid.OnPause();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_OnPause_mEAB3D744D7FA078BE7ABB84342EEA9FCAE7A32B5(NULL);
		return;
	}

IL_0011:
	{
		// AdjustAndroid.OnResume();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_OnResume_m6E0115176F1BF8238B46D009A2DEC66D1DDA1C97(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::start(com.adjust.sdk.AdjustConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_start_mF24352A04B12F9A3D5314851E1F476DD4BCBF0E3 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* ___adjustConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAC6B2415F27BD1BFA4D768FD15E58882F44928);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// if (adjustConfig == null)
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_1 = ___adjustConfig0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Debug.Log("[Adjust]: Missing config to start.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEAAC6B2415F27BD1BFA4D768FD15E58882F44928, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// AdjustAndroid.Start(adjustConfig);
		AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* L_2 = ___adjustConfig0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_Start_m1D39F038C9A56C36B88B6D1145B9F69E01C7E7C7(L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackEvent(com.adjust.sdk.AdjustEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackEvent_m788CBA9B9C606FE179B1582368C6A8A171425E36 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* ___adjustEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC522D9BE6953F40949F1AFC0B3D12955C92496FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// if (adjustEvent == null)
		AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* L_1 = ___adjustEvent0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Debug.Log("[Adjust]: Missing event to track.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC522D9BE6953F40949F1AFC0B3D12955C92496FE, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// AdjustAndroid.TrackEvent(adjustEvent);
		AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* L_2 = ___adjustEvent0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackEvent_m1ACD3DE44F09700192A24C5A326E73E76673C9F2(L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::setEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_setEnabled_mEF3633C6A6BBC4F91FCDB4F934A281DDE96712F1 (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SetEnabled(enabled);
		bool L_1 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SetEnabled_m804BC54C758D85422C2D408FAFBF0D53B746423C(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean com.adjust.sdk.Adjust::isEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Adjust_isEnabled_m254951D8A14448BE51FD7527AC80CC3950E6EE4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// return AdjustAndroid.IsEnabled();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AdjustAndroid_IsEnabled_m0F99D443225B532431D92E5BDDC011DFDC7AD3DF(NULL);
		return L_1;
	}
}
// System.Void com.adjust.sdk.Adjust::setOfflineMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_setOfflineMode_mDA3666A20F780FFDD8BCC07F9DB4D3215823C360 (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SetOfflineMode(enabled);
		bool L_1 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SetOfflineMode_mAB3976F1FF8690D22BFF4A6ADEAAE8C47524B7A7(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::setDeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_setDeviceToken_mC1407160399AC998FF11E556CBFA3B38950B67A8 (String_t* ___deviceToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SetDeviceToken(deviceToken);
		String_t* L_1 = ___deviceToken0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SetDeviceToken_mF30818E7C4F0F5DD856C9E35394E9FB9ADD87E20(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::gdprForgetMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_gdprForgetMe_m7A0CFD6A9B4137418F35E5AA201B6410737359C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.GdprForgetMe();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_GdprForgetMe_mD1AECB214CA8BFB9783A5E3F70F5E80914F08437(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::disableThirdPartySharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_disableThirdPartySharing_m302224B75CA744974396F66A08AA1FE587873BE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.DisableThirdPartySharing();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_DisableThirdPartySharing_m55E805701C85CBBA00F7580AAE75967EA31D9061(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::appWillOpenUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_appWillOpenUrl_m1E13932CE37598AA3C42C4509D2323491569A6F7 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.AppWillOpenUrl(url);
		String_t* L_1 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_AppWillOpenUrl_mE323FAC42F2AE9B649BFA44CC7EC253361733AD7(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::sendFirstPackages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_sendFirstPackages_mCFE8665FB15B08EC04CB5BCF14C2923E5189883F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SendFirstPackages();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SendFirstPackages_mC6C37B30223758423D5557CF2FA8674801D326CC(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::addSessionPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_addSessionPartnerParameter_m4AC3D2786FFF94A176E93DEBF049FCC6BB71B3E6 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.AddSessionPartnerParameter(key, value);
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_AddSessionPartnerParameter_mFAB6A72387CDDE7C9212D10D49CF488FB26185E6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::addSessionCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_addSessionCallbackParameter_mCCA2594D1EAADD151C56F4537823EBBFE3EA645F (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.AddSessionCallbackParameter(key, value);
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_AddSessionCallbackParameter_m3886354DCD87FDCFFAFA69A19C4E97E59D31C824(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::removeSessionPartnerParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_removeSessionPartnerParameter_mA50E1FF8D276CA300DFBC2D8C52E1C60194BD98C (String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.RemoveSessionPartnerParameter(key);
		String_t* L_1 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_RemoveSessionPartnerParameter_mE310C1452E7AA2779CEA5B6C8B70410104D87966(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::removeSessionCallbackParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_removeSessionCallbackParameter_m9D480CA9958869ACA6205BCA9CE84D235B4E45B1 (String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.RemoveSessionCallbackParameter(key);
		String_t* L_1 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_RemoveSessionCallbackParameter_m7D835C9CD309FAB5C5F48ECC068EFD813B90B349(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::resetSessionPartnerParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_resetSessionPartnerParameters_m788D347452CE9472C4B4BFCB581272C33A903459 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.ResetSessionPartnerParameters();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_ResetSessionPartnerParameters_m85FA68D4FA76A036E67BDA3371169BEFBAD46CC1(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::resetSessionCallbackParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_resetSessionCallbackParameters_m092D40CDF59B8BE4FB165BB105F914E67E61D7B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.ResetSessionCallbackParameters();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_ResetSessionCallbackParameters_m2319AAC0995822B275A8A731F88866F960BCF09A(NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackAdRevenue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackAdRevenue_mE7017F85963C48E260AE4A390B6E03C1365CEC8F (String_t* ___source0, String_t* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.TrackAdRevenue(source, payload);
		String_t* L_1 = ___source0;
		String_t* L_2 = ___payload1;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackAdRevenue_mE1FF768B0E1885910BEF4C4CB0316852B0774881(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackAdRevenue(com.adjust.sdk.AdjustAdRevenue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackAdRevenue_m7F1739F079028F6AFA4F42629B803A152F0BB9AE (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* ___adRevenue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.TrackAdRevenue(adRevenue);
		AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* L_1 = ___adRevenue0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackAdRevenue_m17E49555E6663E2C1FDB7723ED2ACF8AF7BB2523(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackAppStoreSubscription(com.adjust.sdk.AdjustAppStoreSubscription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackAppStoreSubscription_m3BE586B120A00A43CD00D754363EE0548488EB5B (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* ___subscription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC43E0CCD01A21C195C6263308AD01341DB602D90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: App Store subscription tracking is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC43E0CCD01A21C195C6263308AD01341DB602D90, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackPlayStoreSubscription(com.adjust.sdk.AdjustPlayStoreSubscription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackPlayStoreSubscription_mB28584B6B95978DD627EF386DE383E258A55C394 (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* ___subscription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.TrackPlayStoreSubscription(subscription);
		AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* L_1 = ___subscription0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackPlayStoreSubscription_m0D0FD86FD0258755FB8555589C707BE28406B7BE(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackThirdPartySharing(com.adjust.sdk.AdjustThirdPartySharing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackThirdPartySharing_mDBB4F949AA7D3532188DB67890C38CF006E5C3AE (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* ___thirdPartySharing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.TrackThirdPartySharing(thirdPartySharing);
		AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* L_1 = ___thirdPartySharing0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackThirdPartySharing_m2F3BB31D3B60EE3D70D07494921949F090837613(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::trackMeasurementConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_trackMeasurementConsent_m28091C4476B42F91B98E2864860109C8B2FF7F3C (bool ___measurementConsent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.TrackMeasurementConsent(measurementConsent);
		bool L_1 = ___measurementConsent0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_TrackMeasurementConsent_m9A2C735602AB9605791360DC02AFDC569CEC7672(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::requestTrackingAuthorizationWithCompletionHandler(System.Action`1<System.Int32>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_requestTrackingAuthorizationWithCompletionHandler_m0F4258A1D04183560AE8A0DB926BD1DD063330D2 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___statusCallback0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD04120809FE37B546EDED3593411D7403EA54521);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: Requesting tracking authorization is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD04120809FE37B546EDED3593411D7403EA54521, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::updateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_updateConversionValue_mB83B123737964C3CDD68E5B94588575C973EEADF (int32_t ___conversionValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::updateConversionValue(System.Int32,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_updateConversionValue_m22B9DD112274E04D0CE5267196B8FC850FF32BF0 (int32_t ___conversionValue0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___completionCallback1, String_t* ___sceneName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::updateConversionValue(System.Int32,System.String,System.Boolean,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_updateConversionValue_m7619FC95F34018A0C8B115B114417776FB016C2A (int32_t ___conversionValue0, String_t* ___coarseValue1, bool ___lockWindow2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___completionCallback3, String_t* ___sceneName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral086313A800EBC6A96ABA9F3F9B1504202C52F289, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::checkForNewAttStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_checkForNewAttStatus_mE8CA001423E1EFFB7D610102747D76F5B2DE02AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5F43CCA7BC62E5344586F1514671283BF08D56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// Debug.Log("[Adjust]: Checking for new ATT status is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0E5F43CCA7BC62E5344586F1514671283BF08D56, NULL);
		// }
		return;
	}
}
// System.Int32 com.adjust.sdk.Adjust::getAppTrackingAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Adjust_getAppTrackingAuthorizationStatus_m2CD6E53C3C56055BEF58BCA99C30417FE4231006 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E154F62FCC545B47A369DE74D8C37FB61D363A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// Debug.Log("[Adjust]: Error! App tracking authorization status is only supported for iOS platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5E154F62FCC545B47A369DE74D8C37FB61D363A9, NULL);
		// return -1;
		return (-1);
	}
}
// System.String com.adjust.sdk.Adjust::getAdid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getAdid_m2285DFA62339E5ED400D271E8E661FD0174600A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// return AdjustAndroid.GetAdid();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = AdjustAndroid_GetAdid_m0525482D8E3F1167CD14B2A12D2E2D7E9FBD8AA5(NULL);
		return L_2;
	}
}
// com.adjust.sdk.AdjustAttribution com.adjust.sdk.Adjust::getAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* Adjust_getAttribution_m3B7BBB4900BDCC0B92D6A103FE178D9E808F2188 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C*)NULL;
	}

IL_0009:
	{
		// return AdjustAndroid.GetAttribution();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* L_1;
		L_1 = AdjustAndroid_GetAttribution_mD7681342B5DDF0B2A2C9BCE18327E583189CAF9B(NULL);
		return L_1;
	}
}
// System.String com.adjust.sdk.Adjust::getWinAdid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getWinAdid_m528B95DD3250ED9D5BCAB2B58C3B8CD7F6B940F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD67674C9A919D64A0E15E937E72F73AEB09D6787);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// Debug.Log("[Adjust]: Error! Windows Advertising ID is not available on Android platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD67674C9A919D64A0E15E937E72F73AEB09D6787, NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.String com.adjust.sdk.Adjust::getIdfa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getIdfa_mB068686DAF448330241C2367A2767891EADA60CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral329603FEDACDD148BC36259A8671AA1249E63727);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// Debug.Log("[Adjust]: Error! IDFA is not available on Android platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral329603FEDACDD148BC36259A8671AA1249E63727, NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.String com.adjust.sdk.Adjust::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getSdkVersion_m8F7D96C6A76363F65E34D362C4912D3D5DA34E7D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// return AdjustAndroid.GetSdkVersion();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = AdjustAndroid_GetSdkVersion_m543983FDFEFD66BB6CCA9C9B5FD60799547CDA3E(NULL);
		return L_2;
	}
}
// System.Void com.adjust.sdk.Adjust::setReferrer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_setReferrer_m223FB53F552416333FC5B55D1E6F3D5DD5F9270B (String_t* ___referrer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SetReferrer(referrer);
		String_t* L_1 = ___referrer0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SetReferrer_m595DF146979F63B8867E574DC6FCB4F4B9695DB0(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::getGoogleAdId(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_getGoogleAdId_m9F83C2BEA8B17987BC6BD492C1593444D427CB06 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDeviceIdsRead0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.GetGoogleAdId(onDeviceIdsRead);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___onDeviceIdsRead0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_GetGoogleAdId_mDA64F7291B15B14F9B91E8812282463A73A02A40(L_1, NULL);
		// }
		return;
	}
}
// System.String com.adjust.sdk.Adjust::getAmazonAdId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getAmazonAdId_mCF6657242C0F74B3D50BD6C412C91311CFE96688 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// return AdjustAndroid.GetAmazonAdId();
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = AdjustAndroid_GetAmazonAdId_m7B737E67E9B95631CDBD4436109243F1AD78C5DA(NULL);
		return L_2;
	}
}
// System.String com.adjust.sdk.Adjust::getLastDeeplink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Adjust_getLastDeeplink_mF3BC9E789AEB1C8FB8C54BEDF98F3D04049D2D66 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC34F9FF89A932DFFF6B1FC21F2F76D2F95E44E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000d:
	{
		// Debug.Log("[Adjust]: Error! Last deeplink getter is not available on Android platform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCC34F9FF89A932DFFF6B1FC21F2F76D2F95E44E2, NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.Boolean com.adjust.sdk.Adjust::IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void com.adjust.sdk.Adjust::SetTestOptions(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_SetTestOptions_m5313B20E29B0029F24CF33ECE44DC008CDD6F360 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___testOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEditor())
		bool L_0;
		L_0 = Adjust_IsEditor_m01CB66E062E93F971F53080A97634DFA78C2A184(NULL);
		if (!L_0)
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
		// AdjustAndroid.SetTestOptions(testOptions);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___testOptions0;
		il2cpp_codegen_runtime_class_init_inline(AdjustAndroid_t828216DA4A4060A864C544105B2240B5AC9E4016_il2cpp_TypeInfo_var);
		AdjustAndroid_SetTestOptions_m320168C98A3232EE9383FAC4A22BD11193367CC1(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.Adjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust__ctor_m3303F268C76843435B868BB9D9E307FBD20A8F0B (Adjust_t91A005D35DB28A1F88C4270A08F84DEA93864A96* __this, const RuntimeMethod* method) 
{
	{
		// public bool startManually = true;
		__this->___startManually_7 = (bool)1;
		// public AdjustLogLevel logLevel = AdjustLogLevel.Info;
		__this->___logLevel_10 = 3;
		// public bool launchDeferredDeeplink = true;
		__this->___launchDeferredDeeplink_13 = (bool)1;
		// public bool iadInfoReading = true;
		__this->___iadInfoReading_28 = (bool)1;
		// public bool adServicesInfoReading = true;
		__this->___adServicesInfoReading_29 = (bool)1;
		// public bool idfaInfoReading = true;
		__this->___idfaInfoReading_30 = (bool)1;
		// public bool skAdNetworkHandling = true;
		__this->___skAdNetworkHandling_31 = (bool)1;
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
// System.Void com.adjust.sdk.AdjustAdRevenue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue__ctor_m4C94C4313766148F6D9DC7451483B6EC847EEFB8 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___source0, const RuntimeMethod* method) 
{
	{
		// public AdjustAdRevenue(string source)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.source = source;
		String_t* L_0 = ___source0;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::setRevenue(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_setRevenue_mB37B06AC7FE6C0D6FF8BF3DEDD7C5E2A58E3E3A7 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, double ___amount0, String_t* ___currency1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.revenue = amount;
		double L_0 = ___amount0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		__this->___revenue_1 = L_1;
		// this.currency = currency;
		String_t* L_2 = ___currency1;
		__this->___currency_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currency_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::setAdImpressionsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_setAdImpressionsCount_m3181A0D66506FA4D9971B18CC8E3DDB921EB1115 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, int32_t ___adImpressionsCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.adImpressionsCount = adImpressionsCount;
		int32_t L_0 = ___adImpressionsCount0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___adImpressionsCount_3 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::setAdRevenueNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_setAdRevenueNetwork_m500036ED01D100B35A12B3DD99AA9E754EA72B25 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___adRevenueNetwork0, const RuntimeMethod* method) 
{
	{
		// this.adRevenueNetwork = adRevenueNetwork;
		String_t* L_0 = ___adRevenueNetwork0;
		__this->___adRevenueNetwork_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adRevenueNetwork_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::setAdRevenueUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_setAdRevenueUnit_mF46B42441260BED2E68D98661A8D90D4F202C856 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___adRevenueUnit0, const RuntimeMethod* method) 
{
	{
		// this.adRevenueUnit = adRevenueUnit;
		String_t* L_0 = ___adRevenueUnit0;
		__this->___adRevenueUnit_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adRevenueUnit_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::setAdRevenuePlacement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_setAdRevenuePlacement_m1C1843A4ED920DDBAD223DFCD78131655804CC0B (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___adRevenuePlacement0, const RuntimeMethod* method) 
{
	{
		// this.adRevenuePlacement = adRevenuePlacement;
		String_t* L_0 = ___adRevenuePlacement0;
		__this->___adRevenuePlacement_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adRevenuePlacement_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::addCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_addCallbackParameter_m2B3A25714F44C6FBA06C09FB6ABD9F703EC9335C (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___callbackList_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// callbackList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___callbackList_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackList_8), (void*)L_1);
	}

IL_0013:
	{
		// callbackList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___callbackList_8;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// callbackList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___callbackList_8;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAdRevenue::addPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAdRevenue_addPartnerParameter_mAF18DE2CE37C15D2179C77ADF244D1AB260D32D3 (AdjustAdRevenue_tCB7B74B0E9F647B3A3199F89EF570C4996EBE451* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (partnerList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___partnerList_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// partnerList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___partnerList_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerList_7), (void*)L_1);
	}

IL_0013:
	{
		// partnerList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___partnerList_7;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___partnerList_7;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
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
// System.Void com.adjust.sdk.AdjustAppStoreSubscription::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAppStoreSubscription__ctor_m0D3482433734BA539F0A09252DE3659D21FD1536 (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* __this, String_t* ___price0, String_t* ___currency1, String_t* ___transactionId2, String_t* ___receipt3, const RuntimeMethod* method) 
{
	{
		// public AdjustAppStoreSubscription(string price, string currency, string transactionId, string receipt)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.price = price;
		String_t* L_0 = ___price0;
		__this->___price_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___price_0), (void*)L_0);
		// this.currency = currency;
		String_t* L_1 = ___currency1;
		__this->___currency_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currency_1), (void*)L_1);
		// this.transactionId = transactionId;
		String_t* L_2 = ___transactionId2;
		__this->___transactionId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transactionId_2), (void*)L_2);
		// this.receipt = receipt;
		String_t* L_3 = ___receipt3;
		__this->___receipt_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receipt_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAppStoreSubscription::setTransactionDate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAppStoreSubscription_setTransactionDate_mD1BA71DA15248006C26B22602D1BF4A83B0ACC0C (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* __this, String_t* ___transactionDate0, const RuntimeMethod* method) 
{
	{
		// this.transactionDate = transactionDate;
		String_t* L_0 = ___transactionDate0;
		__this->___transactionDate_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transactionDate_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAppStoreSubscription::setSalesRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAppStoreSubscription_setSalesRegion_m0E1646795FA1466592F7E7A7D14B04EC02D6E39B (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* __this, String_t* ___salesRegion0, const RuntimeMethod* method) 
{
	{
		// this.salesRegion = salesRegion;
		String_t* L_0 = ___salesRegion0;
		__this->___salesRegion_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___salesRegion_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAppStoreSubscription::addCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAppStoreSubscription_addCallbackParameter_mD67B08D11C9DCD410CB8966744F3962905E8AA70 (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___callbackList_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// callbackList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___callbackList_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackList_8), (void*)L_1);
	}

IL_0013:
	{
		// callbackList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___callbackList_8;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// callbackList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___callbackList_8;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAppStoreSubscription::addPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAppStoreSubscription_addPartnerParameter_m6B639A50999BE4CC82D58CCCE7D1F50536D62019 (AdjustAppStoreSubscription_t07B2DB346F95326648F7905E795A63D92BE56094* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (partnerList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___partnerList_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// partnerList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___partnerList_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerList_7), (void*)L_1);
	}

IL_0013:
	{
		// partnerList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___partnerList_7;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___partnerList_7;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
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
// System.String com.adjust.sdk.AdjustAttribution::get_adid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_adid_m7FEE4DDFADFF7764690922FE17064A8475DCC159 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string adid { get; set; }
		String_t* L_0 = __this->___U3CadidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_adid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CadidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CadidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_network()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_network_m8430B735848CDEF80E9054A358E1147FBD19AEE3 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string network { get; set; }
		String_t* L_0 = __this->___U3CnetworkU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_network(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string network { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnetworkU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnetworkU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_adgroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_adgroup_m15DAB5440B779D12C1BD8BCF9C47B20F14692416 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string adgroup { get; set; }
		String_t* L_0 = __this->___U3CadgroupU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_adgroup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string adgroup { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CadgroupU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CadgroupU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_campaign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_campaign_mB839E1C4DD4EC624B6C46E9444F1A9D868EA0750 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string campaign { get; set; }
		String_t* L_0 = __this->___U3CcampaignU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_campaign(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string campaign { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcampaignU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcampaignU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_creative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_creative_mC15C380B618E220C2143920CCB88EBAF8A864B36 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string creative { get; set; }
		String_t* L_0 = __this->___U3CcreativeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_creative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string creative { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcreativeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcreativeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_clickLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_clickLabel_m45D150F891EF508E44F219A4CBE768A05BCA866D (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string clickLabel { get; set; }
		String_t* L_0 = __this->___U3CclickLabelU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_clickLabel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string clickLabel { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CclickLabelU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclickLabelU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_trackerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_trackerName_mEA8576F240393B289A3C0CC66F9D7F2E965EEB52 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string trackerName { get; set; }
		String_t* L_0 = __this->___U3CtrackerNameU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_trackerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string trackerName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtrackerNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackerNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_trackerToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_trackerToken_mB2CB9686A8CC7243A6C4391F4728F1BA8197F64A (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string trackerToken { get; set; }
		String_t* L_0 = __this->___U3CtrackerTokenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_trackerToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string trackerToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtrackerTokenU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackerTokenU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_costType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_costType_m94B271C6C975D4C945D5912D7879C411BB2F25C6 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string costType { get; set; }
		String_t* L_0 = __this->___U3CcostTypeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_costType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string costType { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcostTypeU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcostTypeU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Double> com.adjust.sdk.AdjustAttribution::get_costAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 AdjustAttribution_get_costAmount_m570856A2EFDAE1646AB3EBE61E9D11FC7A872182 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public double? costAmount { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CcostAmountU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_costAmount(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// public double? costAmount { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CcostAmountU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_costCurrency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_costCurrency_m746AD16AC39C41F680D4420B830529EAF595E999 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string costCurrency { get; set; }
		String_t* L_0 = __this->___U3CcostCurrencyU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_costCurrency(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string costCurrency { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcostCurrencyU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcostCurrencyU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustAttribution::get_fbInstallReferrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustAttribution_get_fbInstallReferrer_m730BCBF4BD7687B6ABA49F85E1E3592944782A68 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public string fbInstallReferrer {get; set;}
		String_t* L_0 = __this->___U3CfbInstallReferrerU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::set_fbInstallReferrer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string fbInstallReferrer {get; set;}
		String_t* L_0 = ___value0;
		__this->___U3CfbInstallReferrerU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfbInstallReferrerU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution__ctor_m36B38620BB1475A4ACE1EDB1CCA466AB2F754307 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, const RuntimeMethod* method) 
{
	{
		// public AdjustAttribution() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AdjustAttribution() {}
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution__ctor_m8274D1B29F0C4D4D99E2067269DBF55161E3B98A (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// public AdjustAttribution(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var jsonNode = JSON.Parse(jsonString);
		String_t* L_0 = ___jsonString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// trackerName = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTrackerName);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876_inline(__this, L_6, NULL);
		// trackerToken = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTrackerToken);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7 = V_0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12;
		String_t* L_9;
		L_9 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_7, L_8, NULL);
		AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F_inline(__this, L_9, NULL);
		// network = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyNetwork);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_10 = V_0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2;
		String_t* L_12;
		L_12 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_10, L_11, NULL);
		AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20_inline(__this, L_12, NULL);
		// campaign = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCampaign);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13 = V_0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4;
		String_t* L_15;
		L_15 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_13, L_14, NULL);
		AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9_inline(__this, L_15, NULL);
		// adgroup = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdgroup);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_16 = V_0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3;
		String_t* L_18;
		L_18 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_16, L_17, NULL);
		AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB_inline(__this, L_18, NULL);
		// creative = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCreative);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19 = V_0;
		String_t* L_20 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5;
		String_t* L_21;
		L_21 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_19, L_20, NULL);
		AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183_inline(__this, L_21, NULL);
		// clickLabel = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyClickLabel);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_22 = V_0;
		String_t* L_23 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10;
		String_t* L_24;
		L_24 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_22, L_23, NULL);
		AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE_inline(__this, L_24, NULL);
		// adid = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdid);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_25 = V_0;
		String_t* L_26 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_27;
		L_27 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_25, L_26, NULL);
		AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6_inline(__this, L_27, NULL);
		// costType = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCostType);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_28 = V_0;
		String_t* L_29 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14;
		String_t* L_30;
		L_30 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_28, L_29, NULL);
		AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0_inline(__this, L_30, NULL);
	}
	try
	{// begin try (depth: 1)
		// costAmount = double.Parse(AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCostAmount),
		// System.Globalization.CultureInfo.InvariantCulture);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_32 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15;
		String_t* L_33;
		L_33 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_31, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_34;
		L_34 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		double L_35;
		L_35 = Double_Parse_m4566961BEFC86A927E00D2843F98EE83162EF2AB(L_33, L_34, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline(__this, L_36, NULL);
		// }
		goto IL_00d5;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d2;
		}
		throw e;
	}

CATCH_00d2:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00d5:
	{
		// costCurrency = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCostCurrency);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_38 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16;
		String_t* L_39;
		L_39 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_37, L_38, NULL);
		AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51_inline(__this, L_39, NULL);
		// fbInstallReferrer = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyFbInstallReferrer);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_40 = V_0;
		String_t* L_41 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17;
		String_t* L_42;
		L_42 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_40, L_41, NULL);
		AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D_inline(__this, L_42, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustAttribution::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustAttribution__ctor_mE3820E52AF63417CE1FF2ADAAE8B1BFA701344C9 (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dicAttributionData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// public AdjustAttribution(Dictionary<string, string> dicAttributionData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (dicAttributionData == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___dicAttributionData0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// trackerName = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyTrackerName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___dicAttributionData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11;
		String_t* L_3;
		L_3 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_1, L_2, NULL);
		AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876_inline(__this, L_3, NULL);
		// trackerToken = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyTrackerToken);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___dicAttributionData0;
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12;
		String_t* L_6;
		L_6 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_4, L_5, NULL);
		AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F_inline(__this, L_6, NULL);
		// network = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyNetwork);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___dicAttributionData0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2;
		String_t* L_9;
		L_9 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_7, L_8, NULL);
		AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20_inline(__this, L_9, NULL);
		// campaign = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyCampaign);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___dicAttributionData0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4;
		String_t* L_12;
		L_12 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_10, L_11, NULL);
		AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9_inline(__this, L_12, NULL);
		// adgroup = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyAdgroup);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___dicAttributionData0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3;
		String_t* L_15;
		L_15 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_13, L_14, NULL);
		AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB_inline(__this, L_15, NULL);
		// creative = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyCreative);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = ___dicAttributionData0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5;
		String_t* L_18;
		L_18 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_16, L_17, NULL);
		AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183_inline(__this, L_18, NULL);
		// clickLabel = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyClickLabel);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = ___dicAttributionData0;
		String_t* L_20 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10;
		String_t* L_21;
		L_21 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_19, L_20, NULL);
		AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE_inline(__this, L_21, NULL);
		// adid = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyAdid);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = ___dicAttributionData0;
		String_t* L_23 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_24;
		L_24 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_22, L_23, NULL);
		AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6_inline(__this, L_24, NULL);
		// costType = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyCostType);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = ___dicAttributionData0;
		String_t* L_26 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14;
		String_t* L_27;
		L_27 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_25, L_26, NULL);
		AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0_inline(__this, L_27, NULL);
	}
	try
	{// begin try (depth: 1)
		// costAmount = double.Parse(AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyCostAmount),
		// System.Globalization.CultureInfo.InvariantCulture);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = ___dicAttributionData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_29 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15;
		String_t* L_30;
		L_30 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_28, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31;
		L_31 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		double L_32;
		L_32 = Double_Parse_m4566961BEFC86A927E00D2843F98EE83162EF2AB(L_30, L_31, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_33), L_32, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline(__this, L_33, NULL);
		// }
		goto IL_00c8;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c5;
		}
		throw e;
	}

CATCH_00c5:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	}// end catch (depth: 1)

IL_00c8:
	{
		// costCurrency = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyCostCurrency);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = ___dicAttributionData0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_35 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16;
		String_t* L_36;
		L_36 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_34, L_35, NULL);
		AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51_inline(__this, L_36, NULL);
		// fbInstallReferrer = AdjustUtils.TryGetValue(dicAttributionData, AdjustUtils.KeyFbInstallReferrer);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_37 = ___dicAttributionData0;
		String_t* L_38 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17;
		String_t* L_39;
		L_39 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_37, L_38, NULL);
		AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D_inline(__this, L_39, NULL);
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
// System.Void com.adjust.sdk.AdjustConfig::.ctor(System.String,com.adjust.sdk.AdjustEnvironment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig__ctor_m718373AA152F4C6F3AB5E805B4630AB008A32395 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___appToken0, int32_t ___environment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdjustConfig(string appToken, AdjustEnvironment environment)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.sceneName = "";
		__this->___sceneName_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.processName = "";
		__this->___processName_44 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___processName_44), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.appToken = appToken;
		String_t* L_0 = ___appToken0;
		__this->___appToken_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appToken_14), (void*)L_0);
		// this.environment = environment;
		int32_t L_1 = ___environment1;
		__this->___environment_35 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::.ctor(System.String,com.adjust.sdk.AdjustEnvironment,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig__ctor_m96C4907B142108F8818BEBC52EDC03D90B5C6EA7 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___appToken0, int32_t ___environment1, bool ___allowSuppressLogLevel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdjustConfig(string appToken, AdjustEnvironment environment, bool allowSuppressLogLevel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.sceneName = "";
		__this->___sceneName_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.processName = "";
		__this->___processName_44 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___processName_44), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.appToken = appToken;
		String_t* L_0 = ___appToken0;
		__this->___appToken_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appToken_14), (void*)L_0);
		// this.environment = environment;
		int32_t L_1 = ___environment1;
		__this->___environment_35 = L_1;
		// this.allowSuppressLogLevel = allowSuppressLogLevel;
		bool L_2 = ___allowSuppressLogLevel2;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___allowSuppressLogLevel_31 = L_3;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setLogLevel(com.adjust.sdk.AdjustLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLogLevel_mDA93163BE7A5E536C670CCDC0CCF7C93B9B3E54F (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, int32_t ___logLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m758B42FEC23E776E2124A982ABAF1EE30586F2B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.logLevel = logLevel;
		int32_t L_0 = ___logLevel0;
		Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m758B42FEC23E776E2124A982ABAF1EE30586F2B4((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m758B42FEC23E776E2124A982ABAF1EE30586F2B4_RuntimeMethod_var);
		__this->___logLevel_34 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setDefaultTracker(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setDefaultTracker_mA67C3195A19A5E9AA2B5AF9E071336CA9E1AB724 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___defaultTracker0, const RuntimeMethod* method) 
{
	{
		// this.defaultTracker = defaultTracker;
		String_t* L_0 = ___defaultTracker0;
		__this->___defaultTracker_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultTracker_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setExternalDeviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setExternalDeviceId_m5AA54126D0A69091B9573F3A530BD2AF8B450FDF (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___externalDeviceId0, const RuntimeMethod* method) 
{
	{
		// this.externalDeviceId = externalDeviceId;
		String_t* L_0 = ___externalDeviceId0;
		__this->___externalDeviceId_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalDeviceId_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setLaunchDeferredDeeplink(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLaunchDeferredDeeplink_m8D6806307929E8E3AE2F01CE3C08BF96DDCD526F (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___launchDeferredDeeplink0, const RuntimeMethod* method) 
{
	{
		// this.launchDeferredDeeplink = launchDeferredDeeplink;
		bool L_0 = ___launchDeferredDeeplink0;
		__this->___launchDeferredDeeplink_33 = L_0;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setSendInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setSendInBackground_m039AABBAF2DB300CE62F8CBF78DA3A5E36604317 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___sendInBackground0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.sendInBackground = sendInBackground;
		bool L_0 = ___sendInBackground0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___sendInBackground_27 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setEventBufferingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setEventBufferingEnabled_mBB81E8C7A41ABCA6326F518EE53905C327B1F982 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___eventBufferingEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.eventBufferingEnabled = eventBufferingEnabled;
		bool L_0 = ___eventBufferingEnabled0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___eventBufferingEnabled_28 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setCoppaCompliantEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setCoppaCompliantEnabled_m43149C9F256F85E6149011100CEC777326B818DF (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___coppaCompliantEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.coppaCompliantEnabled = coppaCompliantEnabled;
		bool L_0 = ___coppaCompliantEnabled0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___coppaCompliantEnabled_29 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setPlayStoreKidsAppEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setPlayStoreKidsAppEnabled_m6786F76DFEE24836BA51A2FA1B798FB2AEA86484 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___playStoreKidsAppEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.playStoreKidsAppEnabled = playStoreKidsAppEnabled;
		bool L_0 = ___playStoreKidsAppEnabled0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___playStoreKidsAppEnabled_30 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setNeedsCost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setNeedsCost_m27ACE0EB3E57AECBD640B2A1B4510BCFBE8553DD (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___needsCost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.needsCost = needsCost;
		bool L_0 = ___needsCost0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___needsCost_32 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setDelayStart(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setDelayStart_m5E3583922F84F6E2B9988052D54ABECE6113B0B6 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, double ___delayStart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.delayStart = delayStart;
		double L_0 = ___delayStart0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		__this->___delayStart_25 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setUserAgent_mDD4FFFE5044037A2BC22003F631A9989361DFA1D (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___userAgent0, const RuntimeMethod* method) 
{
	{
		// this.userAgent = userAgent;
		String_t* L_0 = ___userAgent0;
		__this->___userAgent_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userAgent_16), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setIsDeviceKnown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setIsDeviceKnown_mAD1C556F14A0DBAED60254F330EF9625F3AB6EDA (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___isDeviceKnown0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.isDeviceKnown = isDeviceKnown;
		bool L_0 = ___isDeviceKnown0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___isDeviceKnown_26 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setUrlStrategy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setUrlStrategy_m43C184E9915977FC7955F22A086111B7836E2263 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___urlStrategy0, const RuntimeMethod* method) 
{
	{
		// this.urlStrategy = urlStrategy;
		String_t* L_0 = ___urlStrategy0;
		__this->___urlStrategy_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___urlStrategy_19), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::deactivateSKAdNetworkHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_deactivateSKAdNetworkHandling_m9E3A12F2125AE97AF898E7AC49DBCE9085D93B9E (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.skAdNetworkHandling = true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_0), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___skAdNetworkHandling_51 = L_0;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setLinkMeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLinkMeEnabled_mC3B85AB4A602F3BB59B8B4B7FA973D9F2B8EB55E (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___linkMeEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.linkMeEnabled = linkMeEnabled;
		bool L_0 = ___linkMeEnabled0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___linkMeEnabled_52 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setDeferredDeeplinkDelegate(System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setDeferredDeeplinkDelegate_m0434CB6325F267D824956505E38F55C1BC69F750 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deferredDeeplinkDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.deferredDeeplinkDelegate = deferredDeeplinkDelegate;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___deferredDeeplinkDelegate0;
		__this->___deferredDeeplinkDelegate_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deferredDeeplinkDelegate_36), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<System.String> com.adjust.sdk.AdjustConfig::getDeferredDeeplinkDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* AdjustConfig_getDeferredDeeplinkDelegate_m5E71CF0E1CD8ED86E14052643073B2B34A19E574 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.deferredDeeplinkDelegate;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___deferredDeeplinkDelegate_36;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setAttributionChangedDelegate(System.Action`1<com.adjust.sdk.AdjustAttribution>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAttributionChangedDelegate_m16311DC0B297069CC826AB0CEE81C747C47B7054 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* ___attributionChangedDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.attributionChangedDelegate = attributionChangedDelegate;
		Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* L_0 = ___attributionChangedDelegate0;
		__this->___attributionChangedDelegate_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attributionChangedDelegate_41), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<com.adjust.sdk.AdjustAttribution> com.adjust.sdk.AdjustConfig::getAttributionChangedDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* AdjustConfig_getAttributionChangedDelegate_m0B91F876BC47C733C887A0C674C69C7A2AAE859E (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.attributionChangedDelegate;
		Action_1_t83467CFE2946B43E2165628FC88E344E881C620C* L_0 = __this->___attributionChangedDelegate_41;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setEventSuccessDelegate(System.Action`1<com.adjust.sdk.AdjustEventSuccess>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setEventSuccessDelegate_mC93D376662090A2A7D5341FCB0EB6F5D47034C00 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* ___eventSuccessDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.eventSuccessDelegate = eventSuccessDelegate;
		Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* L_0 = ___eventSuccessDelegate0;
		__this->___eventSuccessDelegate_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventSuccessDelegate_37), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<com.adjust.sdk.AdjustEventSuccess> com.adjust.sdk.AdjustConfig::getEventSuccessDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* AdjustConfig_getEventSuccessDelegate_m803B0AF83809209BDCA4FD72ADCD37A3D6525AAE (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.eventSuccessDelegate;
		Action_1_t0B174A8E9C08E244BBCBB2E6AFBC0F579FCD9ED1* L_0 = __this->___eventSuccessDelegate_37;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setEventFailureDelegate(System.Action`1<com.adjust.sdk.AdjustEventFailure>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setEventFailureDelegate_mDF106AB503D7AE6A0EF9FC23C86FDB561C53D919 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* ___eventFailureDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.eventFailureDelegate = eventFailureDelegate;
		Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* L_0 = ___eventFailureDelegate0;
		__this->___eventFailureDelegate_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventFailureDelegate_38), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<com.adjust.sdk.AdjustEventFailure> com.adjust.sdk.AdjustConfig::getEventFailureDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* AdjustConfig_getEventFailureDelegate_m55B097E3E827DAA9D0A03C3827815990DEEFAA73 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.eventFailureDelegate;
		Action_1_tC00A847A0DBA2606902B0EE754AD248DB31A720B* L_0 = __this->___eventFailureDelegate_38;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setSessionSuccessDelegate(System.Action`1<com.adjust.sdk.AdjustSessionSuccess>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setSessionSuccessDelegate_m38873292BB0382A5A82272A971C2C8FB32EE97ED (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* ___sessionSuccessDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.sessionSuccessDelegate = sessionSuccessDelegate;
		Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* L_0 = ___sessionSuccessDelegate0;
		__this->___sessionSuccessDelegate_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionSuccessDelegate_39), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<com.adjust.sdk.AdjustSessionSuccess> com.adjust.sdk.AdjustConfig::getSessionSuccessDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* AdjustConfig_getSessionSuccessDelegate_mDD3BD6C6F62AF59330E60B1570D2FC3D42DE20C1 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.sessionSuccessDelegate;
		Action_1_tEE63CBE051BA508F3101B0C34B0B3299BAF625DE* L_0 = __this->___sessionSuccessDelegate_39;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setSessionFailureDelegate(System.Action`1<com.adjust.sdk.AdjustSessionFailure>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setSessionFailureDelegate_m3BEF1CB7417F8E3E12E59E610DBE1FEA8584E2AC (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* ___sessionFailureDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.sessionFailureDelegate = sessionFailureDelegate;
		Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* L_0 = ___sessionFailureDelegate0;
		__this->___sessionFailureDelegate_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionFailureDelegate_40), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<com.adjust.sdk.AdjustSessionFailure> com.adjust.sdk.AdjustConfig::getSessionFailureDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* AdjustConfig_getSessionFailureDelegate_mB847ACF06A571D19D85DD18BA596E78F646AED66 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.sessionFailureDelegate;
		Action_1_tE525B4DA61B71476C7887ABBF554BB9B69EFAA8B* L_0 = __this->___sessionFailureDelegate_40;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setConversionValueUpdatedDelegate(System.Action`1<System.Int32>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setConversionValueUpdatedDelegate_m944853EAA8941CDC4ECEA27C4C9CAD01279639B4 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___conversionValueUpdatedDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.conversionValueUpdatedDelegate = conversionValueUpdatedDelegate;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___conversionValueUpdatedDelegate0;
		__this->___conversionValueUpdatedDelegate_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conversionValueUpdatedDelegate_42), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setSkad4ConversionValueUpdatedDelegate(System.Action`3<System.Int32,System.String,System.Boolean>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setSkad4ConversionValueUpdatedDelegate_mBDC7D976A8BD22E4680DA70B9EC5EE7ECC4A45E4 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010* ___skad4ConversionValueUpdatedDelegate0, String_t* ___sceneName1, const RuntimeMethod* method) 
{
	{
		// this.skad4ConversionValueUpdatedDelegate = skad4ConversionValueUpdatedDelegate;
		Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010* L_0 = ___skad4ConversionValueUpdatedDelegate0;
		__this->___skad4ConversionValueUpdatedDelegate_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skad4ConversionValueUpdatedDelegate_43), (void*)L_0);
		// this.sceneName = sceneName;
		String_t* L_1 = ___sceneName1;
		__this->___sceneName_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_15), (void*)L_1);
		// }
		return;
	}
}
// System.Action`1<System.Int32> com.adjust.sdk.AdjustConfig::getConversionValueUpdatedDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* AdjustConfig_getConversionValueUpdatedDelegate_mA8286519D143FC8FA6AA32373F2169099ABEEE23 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.conversionValueUpdatedDelegate;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___conversionValueUpdatedDelegate_42;
		return L_0;
	}
}
// System.Action`3<System.Int32,System.String,System.Boolean> com.adjust.sdk.AdjustConfig::getSkad4ConversionValueUpdatedDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010* AdjustConfig_getSkad4ConversionValueUpdatedDelegate_m791D25B57223A51EDE3A28E916F1A6AB43EC2FFF (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, const RuntimeMethod* method) 
{
	{
		// return this.skad4ConversionValueUpdatedDelegate;
		Action_3_t3029ADC57F6DE8D0898DBD0B36A49E040C973010* L_0 = __this->___skad4ConversionValueUpdatedDelegate_43;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setAppSecret(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAppSecret_mCF9AAAE31F6A695F806709B8599E319706BE15DE (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, int64_t ___secretId0, int64_t ___info11, int64_t ___info22, int64_t ___info33, int64_t ___info44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.secretId = secretId;
		int64_t L_0 = ___secretId0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___secretId_24 = L_1;
		// this.info1 = info1;
		int64_t L_2 = ___info11;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___info1_20 = L_3;
		// this.info2 = info2;
		int64_t L_4 = ___info22;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___info2_21 = L_5;
		// this.info3 = info3;
		int64_t L_6 = ___info33;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___info3_22 = L_7;
		// this.info4 = info4;
		int64_t L_8 = ___info44;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___info4_23 = L_9;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setAllowiAdInfoReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowiAdInfoReading_mBCAE2AC7ED0E99E915648114A3424E985EFE469C (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowiAdInfoReading0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.allowiAdInfoReading = allowiAdInfoReading;
		bool L_0 = ___allowiAdInfoReading0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___allowiAdInfoReading_48 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setAllowAdServicesInfoReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowAdServicesInfoReading_m232716609D173872EF41FD5837A9D0133419C4C1 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowAdServicesInfoReading0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.allowAdServicesInfoReading = allowAdServicesInfoReading;
		bool L_0 = ___allowAdServicesInfoReading0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___allowAdServicesInfoReading_49 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setAllowIdfaReading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setAllowIdfaReading_m439C9CAB2FDE23F534F838B3BEAC30B917E483CA (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___allowIdfaReading0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.allowIdfaReading = allowIdfaReading;
		bool L_0 = ___allowIdfaReading0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___allowIdfaReading_50 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setProcessName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setProcessName_mA05E8249BDBEECED54C503BAAE53011D4EF18E53 (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___processName0, const RuntimeMethod* method) 
{
	{
		// this.processName = processName;
		String_t* L_0 = ___processName0;
		__this->___processName_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___processName_44), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setReadMobileEquipmentIdentity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setReadMobileEquipmentIdentity_m60C524B45682B362D3A43D8EA2AAB5E324F3D16C (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___readMobileEquipmentIdentity0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setPreinstallTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setPreinstallTrackingEnabled_m50FF6E90421C467AAB8D1668E426E2F2F5B15BDA (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___preinstallTrackingEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.preinstallTrackingEnabled = preinstallTrackingEnabled;
		bool L_0 = ___preinstallTrackingEnabled0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___preinstallTrackingEnabled_46 = L_1;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setPreinstallFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setPreinstallFilePath_mF70F4E2F50F2E73E7EAF1DEAB6351F6AB6EB728A (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___preinstallFilePath0, const RuntimeMethod* method) 
{
	{
		// this.preinstallFilePath = preinstallFilePath;
		String_t* L_0 = ___preinstallFilePath0;
		__this->___preinstallFilePath_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preinstallFilePath_47), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustConfig::setLogDelegate(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustConfig_setLogDelegate_mCD5A0B2CC87D71A6618CB76ED218FFDB346D487C (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___logDelegate0, const RuntimeMethod* method) 
{
	{
		// this.logDelegate = logDelegate;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___logDelegate0;
		__this->___logDelegate_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logDelegate_53), (void*)L_0);
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
// System.String com.adjust.sdk.AdjustEnvironmentExtension::ToLowercaseString(com.adjust.sdk.AdjustEnvironment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEnvironmentExtension_ToLowercaseString_mAEDC5B0CBA386D07FB258ED1BDFC83CB4394D49B (int32_t ___adjustEnvironment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD54A09108942F808A62787449EB450CAD3626323);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___adjustEnvironment0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___adjustEnvironment0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0015;
	}

IL_0009:
	{
		// return "sandbox";
		return _stringLiteralD54A09108942F808A62787449EB450CAD3626323;
	}

IL_000f:
	{
		// return "production";
		return _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
	}

IL_0015:
	{
		// return "unknown";
		return _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
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
// System.Void com.adjust.sdk.AdjustEvent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent__ctor_mB6F2EEAE794AF0DBA97B384BD745A06235288C03 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___eventToken0, const RuntimeMethod* method) 
{
	{
		// public AdjustEvent(string eventToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.eventToken = eventToken;
		String_t* L_0 = ___eventToken0;
		__this->___eventToken_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventToken_1), (void*)L_0);
		// this.isReceiptSet = false;
		__this->___isReceiptSet_8 = (bool)0;
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::setRevenue(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_setRevenue_mA8B68C9A56C7A90FDD61D07D6E9B527EA4BAEB49 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, double ___amount0, String_t* ___currency1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.revenue = amount;
		double L_0 = ___amount0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		__this->___revenue_4 = L_1;
		// this.currency = currency;
		String_t* L_2 = ___currency1;
		__this->___currency_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currency_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::addCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_addCallbackParameter_m69836E8BCB0600E59592F2226886F7E3717267DC (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___callbackList_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// callbackList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___callbackList_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackList_6), (void*)L_1);
	}

IL_0013:
	{
		// callbackList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___callbackList_6;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// callbackList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___callbackList_6;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::addPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_addPartnerParameter_m5C8A9B71C8E3668F18D2A7107128C2AA7F60115B (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (partnerList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___partnerList_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// partnerList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___partnerList_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerList_5), (void*)L_1);
	}

IL_0013:
	{
		// partnerList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___partnerList_5;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___partnerList_5;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::setTransactionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_setTransactionId_mD82CAE578CF9FBBB0F73937723AE9679D33AA254 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___transactionId0, const RuntimeMethod* method) 
{
	{
		// this.transactionId = transactionId;
		String_t* L_0 = ___transactionId0;
		__this->___transactionId_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transactionId_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::setCallbackId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_setCallbackId_m77A43125761431059046C8BD038A4090A6F67A98 (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___callbackId0, const RuntimeMethod* method) 
{
	{
		// this.callbackId = callbackId;
		String_t* L_0 = ___callbackId0;
		__this->___callbackId_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackId_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEvent::setReceipt(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEvent_setReceipt_m0DA7BC506BF585B0EFDD3E0FEDC51EECE0406BFD (AdjustEvent_tB68BEF705346600283BC31FFC0BA467982F62F6D* __this, String_t* ___receipt0, String_t* ___transactionId1, const RuntimeMethod* method) 
{
	{
		// this.receipt = receipt;
		String_t* L_0 = ___receipt0;
		__this->___receipt_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receipt_7), (void*)L_0);
		// this.transactionId = transactionId;
		String_t* L_1 = ___transactionId1;
		__this->___transactionId_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transactionId_3), (void*)L_1);
		// this.isReceiptSet = true;
		__this->___isReceiptSet_8 = (bool)1;
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
// System.String com.adjust.sdk.AdjustEventFailure::get_Adid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_get_Adid_m63A229A1E387D51BA76FD857843A30909472F4E9 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = __this->___U3CAdidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_Adid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventFailure::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_get_Message_m39E32498366357A63414ACBF2D829D67E378435C (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventFailure::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_get_Timestamp_m8AD7E740ED2BAD647DF69D3E9E20DA10AEA7894C (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = __this->___U3CTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_Timestamp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventFailure::get_EventToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_get_EventToken_m790B0C32B96810DB063845DB41C7EA5392511E0F (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = __this->___U3CEventTokenU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_EventToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEventTokenU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventTokenU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventFailure::get_CallbackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_get_CallbackId_m7C6B49AB5A6AE7A9287E309C85E4DDC8B6E01F6F (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = __this->___U3CCallbackIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_CallbackId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCallbackIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean com.adjust.sdk.AdjustEventFailure::get_WillRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustEventFailure_get_WillRetry_m437C69AED2629C0A51F93160CF269ECB51C48138 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = __this->___U3CWillRetryU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_WillRetry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CWillRetryU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventFailure::get_JsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure__ctor_m528922562AC18ADE49AC59EFECDF9DDDF06D9827 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public AdjustEventFailure() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AdjustEventFailure() {}
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure__ctor_mD35BD0B33754A00AF01D005F17CE529500281A14 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventFailureDataMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustEventFailure(Dictionary<string, string> eventFailureDataMap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (eventFailureDataMap == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___eventFailureDataMap0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Adid = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyAdid);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___eventFailureDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_3;
		L_3 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_1, L_2, NULL);
		AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC_inline(__this, L_3, NULL);
		// Message = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyMessage);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___eventFailureDataMap0;
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_6;
		L_6 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_4, L_5, NULL);
		AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472_inline(__this, L_6, NULL);
		// Timestamp = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyTimestamp);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___eventFailureDataMap0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_9;
		L_9 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_7, L_8, NULL);
		AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F_inline(__this, L_9, NULL);
		// EventToken = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyEventToken);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___eventFailureDataMap0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		String_t* L_12;
		L_12 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_10, L_11, NULL);
		AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E_inline(__this, L_12, NULL);
		// CallbackId = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyCallbackId);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___eventFailureDataMap0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		String_t* L_15;
		L_15 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_13, L_14, NULL);
		AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD_inline(__this, L_15, NULL);
		// if (bool.TryParse(AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyWillRetry), out willRetry))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = ___eventFailureDataMap0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		String_t* L_18;
		L_18 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_18, (&V_0), NULL);
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		// WillRetry = willRetry;
		bool L_20 = V_0;
		AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9_inline(__this, L_20, NULL);
	}

IL_007a:
	{
		// string jsonResponseString = AdjustUtils.TryGetValue(eventFailureDataMap, AdjustUtils.KeyJsonResponse);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = ___eventFailureDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_22 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		String_t* L_23;
		L_23 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_21, L_22, NULL);
		// var jsonResponseNode = JSON.Parse(jsonResponseString);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_24;
		L_24 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_23, NULL);
		V_1 = L_24;
		// if (jsonResponseNode != null && jsonResponseNode.AsObject != null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_25 = V_1;
		bool L_26;
		L_26 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_25, NULL, NULL);
		if (!L_26)
		{
			goto IL_00be;
		}
	}
	{
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_27 = V_1;
		NullCheck(L_27);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_28;
		L_28 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_27);
		bool L_29;
		L_29 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_28, NULL, NULL);
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_30 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_30, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE_inline(__this, L_30, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_31 = V_1;
		NullCheck(L_31);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_32;
		L_32 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_31);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_33;
		L_33 = AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_32, L_33, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure__ctor_mE44FDD70724F8F42E19DE705B7A0771C23BE0284 (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustEventFailure(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var jsonNode = JSON.Parse(jsonString);
		String_t* L_0 = ___jsonString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Adid = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdid);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC_inline(__this, L_6, NULL);
		// Message = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyMessage);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7 = V_0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_9;
		L_9 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_7, L_8, NULL);
		AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472_inline(__this, L_9, NULL);
		// Timestamp = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTimestamp);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_10 = V_0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_12;
		L_12 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_10, L_11, NULL);
		AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F_inline(__this, L_12, NULL);
		// EventToken = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyEventToken);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13 = V_0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		String_t* L_15;
		L_15 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_13, L_14, NULL);
		AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E_inline(__this, L_15, NULL);
		// CallbackId = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCallbackId);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_16 = V_0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		String_t* L_18;
		L_18 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_16, L_17, NULL);
		AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD_inline(__this, L_18, NULL);
		// WillRetry = Convert.ToBoolean(AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyWillRetry));
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19 = V_0;
		String_t* L_20 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		String_t* L_21;
		L_21 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_19, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_21, NULL);
		AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9_inline(__this, L_22, NULL);
		// var jsonResponseNode = jsonNode[AdjustUtils.KeyJsonResponse];
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_23 = V_0;
		String_t* L_24 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_23);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_25;
		L_25 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_23, L_24);
		V_1 = L_25;
		// if (jsonResponseNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_26 = V_1;
		bool L_27;
		L_27 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_26, NULL, NULL);
		if (!L_27)
		{
			goto IL_0098;
		}
	}
	{
		// return;
		return;
	}

IL_0098:
	{
		// if (jsonResponseNode.AsObject == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_28 = V_1;
		NullCheck(L_28);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_29;
		L_29 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_28);
		bool L_30;
		L_30 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_29, NULL, NULL);
		if (!L_30)
		{
			goto IL_00a7;
		}
	}
	{
		// return;
		return;
	}

IL_00a7:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_31, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE_inline(__this, L_31, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_32 = V_1;
		NullCheck(L_32);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_33;
		L_33 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_32);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_34;
		L_34 = AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventFailure::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventFailure_BuildJsonResponseFromString_mFC779A74C66E513EC19EF86F780AE363B25A828A (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(jsonResponseString);
		String_t* L_0 = ___jsonResponseString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_4, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE_inline(__this, L_4, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_5 = V_0;
		NullCheck(L_5);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_6;
		L_6 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_5);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventFailure::GetJsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventFailure_GetJsonResponse_m4A9D1FDB6FF13C9F955E00C64A4996F5826A31FD (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdjustUtils.GetJsonResponseCompact(JsonResponse);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_0, NULL);
		return L_1;
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
// System.String com.adjust.sdk.AdjustEventSuccess::get_Adid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_get_Adid_m9107BA449922578E0F9B8CB8B4541FE26A6C56C5 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = __this->___U3CAdidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Adid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventSuccess::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_get_Message_m5B29D1C7B3CF3C7CED972991740A888131931DE2 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventSuccess::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_get_Timestamp_m193EB4EBA0B8DA8CF0863D1DF75FEF141B1D3B10 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = __this->___U3CTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_Timestamp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventSuccess::get_EventToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_get_EventToken_m5784EFFBAE4463DA0ECFF6A537731DC98E286A3E (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = __this->___U3CEventTokenU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_EventToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEventTokenU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventTokenU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventSuccess::get_CallbackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_get_CallbackId_m3D7D77C8EF5837C5EAAB45998FD4C7A02C04D983 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = __this->___U3CCallbackIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_CallbackId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCallbackIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustEventSuccess::get_JsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess__ctor_m8E95350D1027E90E42E4A890D5D8F6C683C1388C (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public AdjustEventSuccess() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AdjustEventSuccess() {}
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess__ctor_m3AF21839E90ADA4ACF33D117311F354A788FFE1B (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventSuccessDataMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// public AdjustEventSuccess(Dictionary<string, string> eventSuccessDataMap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (eventSuccessDataMap == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___eventSuccessDataMap0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Adid = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyAdid);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___eventSuccessDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_3;
		L_3 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_1, L_2, NULL);
		AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD_inline(__this, L_3, NULL);
		// Message = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyMessage);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___eventSuccessDataMap0;
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_6;
		L_6 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_4, L_5, NULL);
		AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F_inline(__this, L_6, NULL);
		// Timestamp = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyTimestamp);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___eventSuccessDataMap0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_9;
		L_9 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_7, L_8, NULL);
		AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B_inline(__this, L_9, NULL);
		// EventToken = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyEventToken);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___eventSuccessDataMap0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		String_t* L_12;
		L_12 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_10, L_11, NULL);
		AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64_inline(__this, L_12, NULL);
		// CallbackId = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyCallbackId);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___eventSuccessDataMap0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		String_t* L_15;
		L_15 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_13, L_14, NULL);
		AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9_inline(__this, L_15, NULL);
		// string jsonResponseString = AdjustUtils.TryGetValue(eventSuccessDataMap, AdjustUtils.KeyJsonResponse);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = ___eventSuccessDataMap0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		String_t* L_18;
		L_18 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_16, L_17, NULL);
		// var jsonResponseNode = JSON.Parse(jsonResponseString);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19;
		L_19 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_18, NULL);
		V_0 = L_19;
		// if (jsonResponseNode != null && jsonResponseNode.AsObject != null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_20 = V_0;
		bool L_21;
		L_21 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_20, NULL, NULL);
		if (!L_21)
		{
			goto IL_00a3;
		}
	}
	{
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_22 = V_0;
		NullCheck(L_22);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_23;
		L_23 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_22);
		bool L_24;
		L_24 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_23, NULL, NULL);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_25, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90_inline(__this, L_25, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_26 = V_0;
		NullCheck(L_26);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_27;
		L_27 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_26);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28;
		L_28 = AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_27, L_28, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess__ctor_m572E2ED470E4819DFF8462F86CD0A35EE856DE75 (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustEventSuccess(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var jsonNode = JSON.Parse(jsonString);
		String_t* L_0 = ___jsonString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Adid = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdid);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD_inline(__this, L_6, NULL);
		// Message = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyMessage);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7 = V_0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_9;
		L_9 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_7, L_8, NULL);
		AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F_inline(__this, L_9, NULL);
		// Timestamp = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTimestamp);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_10 = V_0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_12;
		L_12 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_10, L_11, NULL);
		AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B_inline(__this, L_12, NULL);
		// EventToken = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyEventToken);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13 = V_0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9;
		String_t* L_15;
		L_15 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_13, L_14, NULL);
		AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64_inline(__this, L_15, NULL);
		// CallbackId = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyCallbackId);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_16 = V_0;
		String_t* L_17 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8;
		String_t* L_18;
		L_18 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_16, L_17, NULL);
		AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9_inline(__this, L_18, NULL);
		// var jsonResponseNode = jsonNode[AdjustUtils.KeyJsonResponse];
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19 = V_0;
		String_t* L_20 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_19);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_21;
		L_21 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_19, L_20);
		V_1 = L_21;
		// if (jsonResponseNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_22 = V_1;
		bool L_23;
		L_23 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_22, NULL, NULL);
		if (!L_23)
		{
			goto IL_0082;
		}
	}
	{
		// return;
		return;
	}

IL_0082:
	{
		// if (jsonResponseNode.AsObject == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_24 = V_1;
		NullCheck(L_24);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_25;
		L_25 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_24);
		bool L_26;
		L_26 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_25, NULL, NULL);
		if (!L_26)
		{
			goto IL_0091;
		}
	}
	{
		// return;
		return;
	}

IL_0091:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_27, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90_inline(__this, L_27, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_28 = V_1;
		NullCheck(L_28);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_29;
		L_29 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_28);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_30;
		L_30 = AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustEventSuccess::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustEventSuccess_BuildJsonResponseFromString_mB45093E3AE421B1E1C210318F2081EB7016C065C (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(jsonResponseString);
		String_t* L_0 = ___jsonResponseString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_4, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90_inline(__this, L_4, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_5 = V_0;
		NullCheck(L_5);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_6;
		L_6 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_5);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustEventSuccess::GetJsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustEventSuccess_GetJsonResponse_mC8F1B778DCD86E0CFCE0A7F34D2AE30E440E465B (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdjustUtils.GetJsonResponseCompact(JsonResponse);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_0, NULL);
		return L_1;
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
// System.String com.adjust.sdk.AdjustLogLevelExtension::ToLowercaseString(com.adjust.sdk.AdjustLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustLogLevelExtension_ToLowercaseString_mEF9C47460E6774026C495F7646A4369476C53588 (int32_t ___AdjustLogLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A7D5AAB9FDFB33B64981E65BE1383F01672A45F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD4F2CFEB1F344425CBDF9D59697BBD8D71BD91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBB72F6FDBFB660A966F952D120A6BFAD8E9F87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AD521726EC368F034B818450ADBFE7F1C1F2CA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___AdjustLogLevel0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_0044;
			}
			case 6:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		// return "verbose";
		return _stringLiteral7A7D5AAB9FDFB33B64981E65BE1383F01672A45F;
	}

IL_002c:
	{
		// return "debug";
		return _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443;
	}

IL_0032:
	{
		// return "info";
		return _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
	}

IL_0038:
	{
		// return "warn";
		return _stringLiteral7CD4F2CFEB1F344425CBDF9D59697BBD8D71BD91;
	}

IL_003e:
	{
		// return "error";
		return _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
	}

IL_0044:
	{
		// return "assert";
		return _stringLiteral9AD521726EC368F034B818450ADBFE7F1C1F2CA6;
	}

IL_004a:
	{
		// return "suppress";
		return _stringLiteral7DBB72F6FDBFB660A966F952D120A6BFAD8E9F87;
	}

IL_0050:
	{
		// return "unknown";
		return _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
	}
}
// System.String com.adjust.sdk.AdjustLogLevelExtension::ToUppercaseString(com.adjust.sdk.AdjustLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustLogLevelExtension_ToUppercaseString_m457BEEAE7375DBA0C92F1180B69A432CE360A133 (int32_t ___AdjustLogLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F130946577022936EE02472C36D257149CEBE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B324FCBD0A58C910F684A8AD8C8A9604A01AE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4311199EC87CA867BFCE8571CC7DEAC17DEAB5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___AdjustLogLevel0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_0044;
			}
			case 6:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		// return "VERBOSE";
		return _stringLiteral4F130946577022936EE02472C36D257149CEBE97;
	}

IL_002c:
	{
		// return "DEBUG";
		return _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
	}

IL_0032:
	{
		// return "INFO";
		return _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
	}

IL_0038:
	{
		// return "WARN";
		return _stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08;
	}

IL_003e:
	{
		// return "ERROR";
		return _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
	}

IL_0044:
	{
		// return "ASSERT";
		return _stringLiteral8B324FCBD0A58C910F684A8AD8C8A9604A01AE5D;
	}

IL_004a:
	{
		// return "SUPPRESS";
		return _stringLiteralC4311199EC87CA867BFCE8571CC7DEAC17DEAB5E;
	}

IL_0050:
	{
		// return "UNKNOWN";
		return _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098;
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
// System.Void com.adjust.sdk.AdjustPlayStoreSubscription::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustPlayStoreSubscription__ctor_m8FAA1BDF8B8C354B18FB090ACB1EF65E0B381EA1 (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* __this, String_t* ___price0, String_t* ___currency1, String_t* ___sku2, String_t* ___orderId3, String_t* ___signature4, String_t* ___purchaseToken5, const RuntimeMethod* method) 
{
	{
		// public AdjustPlayStoreSubscription(string price, string currency, string sku, string orderId, string signature, string purchaseToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.price = price;
		String_t* L_0 = ___price0;
		__this->___price_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___price_0), (void*)L_0);
		// this.currency = currency;
		String_t* L_1 = ___currency1;
		__this->___currency_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currency_1), (void*)L_1);
		// this.sku = sku;
		String_t* L_2 = ___sku2;
		__this->___sku_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sku_2), (void*)L_2);
		// this.orderId = orderId;
		String_t* L_3 = ___orderId3;
		__this->___orderId_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orderId_3), (void*)L_3);
		// this.signature = signature;
		String_t* L_4 = ___signature4;
		__this->___signature_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signature_4), (void*)L_4);
		// this.purchaseToken = purchaseToken;
		String_t* L_5 = ___purchaseToken5;
		__this->___purchaseToken_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___purchaseToken_5), (void*)L_5);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustPlayStoreSubscription::setPurchaseTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustPlayStoreSubscription_setPurchaseTime_mFB33C90CFC1A515912E08927A41E27DEB80094F4 (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* __this, String_t* ___purchaseTime0, const RuntimeMethod* method) 
{
	{
		// this.purchaseTime = purchaseTime;
		String_t* L_0 = ___purchaseTime0;
		__this->___purchaseTime_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___purchaseTime_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustPlayStoreSubscription::addCallbackParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustPlayStoreSubscription_addCallbackParameter_m384EC847C6931509BE14FF2275D6AB32F493F9A4 (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___callbackList_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// callbackList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___callbackList_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackList_9), (void*)L_1);
	}

IL_0013:
	{
		// callbackList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___callbackList_9;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// callbackList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___callbackList_9;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustPlayStoreSubscription::addPartnerParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustPlayStoreSubscription_addPartnerParameter_m864989B749FAE715C806A3772FC7B968FFD4A5F4 (AdjustPlayStoreSubscription_t989150B0F75C2B147AE6B9B6D5FC2EFC76CDC974* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (partnerList == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___partnerList_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// partnerList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___partnerList_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerList_8), (void*)L_1);
	}

IL_0013:
	{
		// partnerList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___partnerList_8;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___partnerList_8;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
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
// System.String com.adjust.sdk.AdjustSessionFailure::get_Adid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionFailure_get_Adid_m55CBA752E653E41BB100CA0666E984AC41A1C986 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = __this->___U3CAdidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Adid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionFailure::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionFailure_get_Message_m7FB5952110E6198593306F2D2206C87878241071 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionFailure::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionFailure_get_Timestamp_m16815BDDD78D3DC8836D6929D7ECA0287567E1C9 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = __this->___U3CTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::set_Timestamp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean com.adjust.sdk.AdjustSessionFailure::get_WillRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustSessionFailure_get_WillRetry_mDC6EF21BB9ED54A38E87A437F25B3E1ABFB64CB7 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = __this->___U3CWillRetryU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::set_WillRetry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CWillRetryU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionFailure::get_JsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure__ctor_m55084005614B14B05358BFC8D8093D0E1BA5D577 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public AdjustSessionFailure() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AdjustSessionFailure() {}
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure__ctor_mC8D3BF875D5D8A394B38A08DA6FD82FE78D65AB2 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___sessionFailureDataMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustSessionFailure(Dictionary<string, string> sessionFailureDataMap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (sessionFailureDataMap == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___sessionFailureDataMap0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Adid = AdjustUtils.TryGetValue(sessionFailureDataMap, AdjustUtils.KeyAdid);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___sessionFailureDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_3;
		L_3 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_1, L_2, NULL);
		AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7_inline(__this, L_3, NULL);
		// Message = AdjustUtils.TryGetValue(sessionFailureDataMap, AdjustUtils.KeyMessage);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___sessionFailureDataMap0;
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_6;
		L_6 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_4, L_5, NULL);
		AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835_inline(__this, L_6, NULL);
		// Timestamp = AdjustUtils.TryGetValue(sessionFailureDataMap, AdjustUtils.KeyTimestamp);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___sessionFailureDataMap0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_9;
		L_9 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_7, L_8, NULL);
		AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E_inline(__this, L_9, NULL);
		// if (bool.TryParse(AdjustUtils.TryGetValue(sessionFailureDataMap, AdjustUtils.KeyWillRetry), out willRetry))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___sessionFailureDataMap0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		String_t* L_12;
		L_12 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_12, (&V_0), NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		// WillRetry = willRetry;
		bool L_14 = V_0;
		AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF_inline(__this, L_14, NULL);
	}

IL_0058:
	{
		// string jsonResponseString = AdjustUtils.TryGetValue(sessionFailureDataMap, AdjustUtils.KeyJsonResponse);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = ___sessionFailureDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_16 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		String_t* L_17;
		L_17 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_15, L_16, NULL);
		// var jsonResponseNode = JSON.Parse(jsonResponseString);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_18;
		L_18 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_17, NULL);
		V_1 = L_18;
		// if (jsonResponseNode != null && jsonResponseNode.AsObject != null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19 = V_1;
		bool L_20;
		L_20 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_19, NULL, NULL);
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_21 = V_1;
		NullCheck(L_21);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_22;
		L_22 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_21);
		bool L_23;
		L_23 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_22, NULL, NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_24, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E_inline(__this, L_24, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_25 = V_1;
		NullCheck(L_25);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_26;
		L_26 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_25);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27;
		L_27 = AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_26, L_27, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure__ctor_mF96CCCD25D8F54F5FE37C1532E5A7D5B1FADEB3F (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustSessionFailure(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var jsonNode = JSON.Parse(jsonString);
		String_t* L_0 = ___jsonString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Adid = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdid);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7_inline(__this, L_6, NULL);
		// Message = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyMessage);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7 = V_0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_9;
		L_9 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_7, L_8, NULL);
		AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835_inline(__this, L_9, NULL);
		// Timestamp = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTimestamp);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_10 = V_0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_12;
		L_12 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_10, L_11, NULL);
		AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E_inline(__this, L_12, NULL);
		// WillRetry = Convert.ToBoolean(AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyWillRetry));
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13 = V_0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6;
		String_t* L_15;
		L_15 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_13, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_15, NULL);
		AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF_inline(__this, L_16, NULL);
		// var jsonResponseNode = jsonNode[AdjustUtils.KeyJsonResponse];
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_17 = V_0;
		String_t* L_18 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_17);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_19;
		L_19 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_17, L_18);
		V_1 = L_19;
		// if (jsonResponseNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_20 = V_1;
		bool L_21;
		L_21 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_20, NULL, NULL);
		if (!L_21)
		{
			goto IL_0076;
		}
	}
	{
		// return;
		return;
	}

IL_0076:
	{
		// if (jsonResponseNode.AsObject == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_22 = V_1;
		NullCheck(L_22);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_23;
		L_23 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_22);
		bool L_24;
		L_24 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_23, NULL, NULL);
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		// return;
		return;
	}

IL_0085:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_25, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E_inline(__this, L_25, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_26 = V_1;
		NullCheck(L_26);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_27;
		L_27 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_26);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28;
		L_28 = AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionFailure::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionFailure_BuildJsonResponseFromString_m2D4F30200FC6361CACC4417A512F8E14FF9C38A6 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(jsonResponseString);
		String_t* L_0 = ___jsonResponseString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_4, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E_inline(__this, L_4, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_5 = V_0;
		NullCheck(L_5);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_6;
		L_6 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_5);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionFailure::GetJsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionFailure_GetJsonResponse_mE5D4C31B41ED1899C26AB32CD2648ADEFDE09351 (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdjustUtils.GetJsonResponseCompact(JsonResponse);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_0, NULL);
		return L_1;
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
// System.String com.adjust.sdk.AdjustSessionSuccess::get_Adid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionSuccess_get_Adid_m647C0D4B4E911D6C8BE1634A171F548461180414 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = __this->___U3CAdidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Adid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionSuccess::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionSuccess_get_Message_m86BB21FF8BEC5DA95055C3A12413D7CEAF1731EA (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionSuccess::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionSuccess_get_Timestamp_mE2D213502F0F03A341B1E39DC4152AEF5C68F813 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = __this->___U3CTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_Timestamp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> com.adjust.sdk.AdjustSessionSuccess::get_JsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::set_JsonResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess__ctor_m5D4F0E9806EDCE8130DE98471E7ECA654B744F9A (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public AdjustSessionSuccess() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AdjustSessionSuccess() {}
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess__ctor_m468034512A1D2682AA0F15926CE8CA80F239C31D (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___sessionSuccessDataMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// public AdjustSessionSuccess(Dictionary<string, string> sessionSuccessDataMap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (sessionSuccessDataMap == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___sessionSuccessDataMap0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Adid = AdjustUtils.TryGetValue(sessionSuccessDataMap, AdjustUtils.KeyAdid);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___sessionSuccessDataMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_3;
		L_3 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_1, L_2, NULL);
		AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573_inline(__this, L_3, NULL);
		// Message = AdjustUtils.TryGetValue(sessionSuccessDataMap, AdjustUtils.KeyMessage);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___sessionSuccessDataMap0;
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_6;
		L_6 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_4, L_5, NULL);
		AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99_inline(__this, L_6, NULL);
		// Timestamp = AdjustUtils.TryGetValue(sessionSuccessDataMap, AdjustUtils.KeyTimestamp);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___sessionSuccessDataMap0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_9;
		L_9 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_7, L_8, NULL);
		AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA_inline(__this, L_9, NULL);
		// string jsonResponseString = AdjustUtils.TryGetValue(sessionSuccessDataMap, AdjustUtils.KeyJsonResponse);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___sessionSuccessDataMap0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		String_t* L_12;
		L_12 = AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9(L_10, L_11, NULL);
		// var jsonResponseNode = JSON.Parse(jsonResponseString);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13;
		L_13 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_12, NULL);
		V_0 = L_13;
		// if (jsonResponseNode != null && jsonResponseNode.AsObject != null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_14 = V_0;
		bool L_15;
		L_15 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_14, NULL, NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_16 = V_0;
		NullCheck(L_16);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_17;
		L_17 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_16);
		bool L_18;
		L_18 = JSONNode_op_Inequality_m31F67DC83671EE7A334E8A1A0445AC08CFDD9BD5(L_17, NULL, NULL);
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_19, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC_inline(__this, L_19, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_20 = V_0;
		NullCheck(L_20);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_21;
		L_21 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_20);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22;
		L_22 = AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_21, L_22, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess__ctor_mFD79CF038E807DE1559B54362B6E87EFAEFCD542 (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_1 = NULL;
	{
		// public AdjustSessionSuccess(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var jsonNode = JSON.Parse(jsonString);
		String_t* L_0 = ___jsonString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Adid = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyAdid);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573_inline(__this, L_6, NULL);
		// Message = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyMessage);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7 = V_0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1;
		String_t* L_9;
		L_9 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_7, L_8, NULL);
		AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99_inline(__this, L_9, NULL);
		// Timestamp = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeyTimestamp);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_10 = V_0;
		String_t* L_11 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7;
		String_t* L_12;
		L_12 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_10, L_11, NULL);
		AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA_inline(__this, L_12, NULL);
		// var jsonResponseNode = jsonNode[AdjustUtils.KeyJsonResponse];
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_13 = V_0;
		String_t* L_14 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13;
		NullCheck(L_13);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_15;
		L_15 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_13, L_14);
		V_1 = L_15;
		// if (jsonResponseNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_16 = V_1;
		bool L_17;
		L_17 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_16, NULL, NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		// return;
		return;
	}

IL_0060:
	{
		// if (jsonResponseNode.AsObject == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_18 = V_1;
		NullCheck(L_18);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_19;
		L_19 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_18);
		bool L_20;
		L_20 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_19, NULL, NULL);
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		// return;
		return;
	}

IL_006f:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_21, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC_inline(__this, L_21, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonResponseNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_22 = V_1;
		NullCheck(L_22);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_23;
		L_23 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_22);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24;
		L_24 = AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustSessionSuccess::BuildJsonResponseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustSessionSuccess_BuildJsonResponseFromString_m2CA7E40EDAD331AE6DEDF385D364682D7AC8ACCE (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___jsonResponseString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(jsonResponseString);
		String_t* L_0 = ___jsonResponseString0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// JsonResponse = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_4, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC_inline(__this, L_4, NULL);
		// AdjustUtils.WriteJsonResponseDictionary(jsonNode.AsObject, JsonResponse);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_5 = V_0;
		NullCheck(L_5);
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_6;
		L_6 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_5);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustSessionSuccess::GetJsonResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustSessionSuccess_GetJsonResponse_m22B1531644212867F4EFF412E5B90CC8F7A15C5D (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdjustUtils.GetJsonResponseCompact(JsonResponse);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_0, NULL);
		return L_1;
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
// System.Void com.adjust.sdk.AdjustThirdPartySharing::.ctor(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing__ctor_mD050F802304C5E3A20E88D7C1F8AE85586641A82 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdjustThirdPartySharing(bool? isEnabled)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.isEnabled = isEnabled;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___isEnabled0;
		__this->___isEnabled_0 = L_0;
		// this.granularOptions = new Dictionary<string, List<string>>();
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_1 = (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*)il2cpp_codegen_object_new(Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82(L_1, Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		__this->___granularOptions_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___granularOptions_1), (void*)L_1);
		// this.partnerSharingSettings = new Dictionary<string, List<string>>();
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*)il2cpp_codegen_object_new(Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82(L_2, Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		__this->___partnerSharingSettings_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerSharingSettings_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustThirdPartySharing::addGranularOption(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing_addGranularOption_m430DCE18F822237234F208C6FFD6C7837A2A1A77 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, String_t* ___partnerName0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// if (partnerName == null || key == null || value == null)
		String_t* L_0 = ___partnerName0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___key1;
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_2 = ___value2;
		if (L_2)
		{
			goto IL_000a;
		}
	}

IL_0009:
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (granularOptions.ContainsKey(partnerName))
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_3 = __this->___granularOptions_1;
		String_t* L_4 = ___partnerName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8(L_3, L_4, Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// partnerOptions = granularOptions[partnerName];
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_6 = __this->___granularOptions_1;
		String_t* L_7 = ___partnerName0;
		NullCheck(L_6);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A(L_6, L_7, Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0027:
	{
		// partnerOptions = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_9, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_9;
		// granularOptions.Add(partnerName, partnerOptions);
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_10 = __this->___granularOptions_1;
		String_t* L_11 = ___partnerName0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5(L_10, L_11, L_12, Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
	}

IL_003a:
	{
		// partnerOptions.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_0;
		String_t* L_14 = ___key1;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerOptions.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
		String_t* L_16 = ___value2;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustThirdPartySharing::addPartnerSharingSetting(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing_addPartnerSharingSetting_m46C4F5606AF8CE842EFA05FD126197ACCEC911E1 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, String_t* ___partnerName0, String_t* ___key1, bool ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// if (partnerName == null || key == null)
		String_t* L_0 = ___partnerName0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___key1;
		if (L_1)
		{
			goto IL_0007;
		}
	}

IL_0006:
	{
		// return;
		return;
	}

IL_0007:
	{
		// if (partnerSharingSettings.ContainsKey(partnerName))
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = __this->___partnerSharingSettings_2;
		String_t* L_3 = ___partnerName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8(L_2, L_3, Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// partnerSharingSetting = partnerSharingSettings[partnerName];
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_5 = __this->___partnerSharingSettings_2;
		String_t* L_6 = ___partnerName0;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
		L_7 = Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A(L_5, L_6, Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0037;
	}

IL_0024:
	{
		// partnerSharingSetting = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_8, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_8;
		// partnerSharingSettings.Add(partnerName, partnerSharingSetting);
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_9 = __this->___partnerSharingSettings_2;
		String_t* L_10 = ___partnerName0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5(L_9, L_10, L_11, Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
	}

IL_0037:
	{
		// partnerSharingSetting.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = ___key1;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerSharingSetting.Add(value.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___value2), NULL);
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
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
// System.String com.adjust.sdk.AdjustUrlStrategyExtension::ToLowerCaseString(com.adjust.sdk.AdjustUrlStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUrlStrategyExtension_ToLowerCaseString_mC501B171FABC8E81E217A019B01F9D079D4DC7A0 (int32_t ___strategy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830861A7BE146B54573618AB59D51536353969C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___strategy0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_001e;
			}
			case 4:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_001e:
	{
		// case AdjustUrlStrategy.India: return "india";
		return _stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F;
	}

IL_0024:
	{
		// case AdjustUrlStrategy.China: return "china";
		return _stringLiteral830861A7BE146B54573618AB59D51536353969C4;
	}

IL_002a:
	{
		// case AdjustUrlStrategy.DataResidencyEU: return "data-residency-eu";
		return _stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9;
	}

IL_0030:
	{
		// case AdjustUrlStrategy.DataResidencyTK: return "data-residency-tr";
		return _stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66;
	}

IL_0036:
	{
		// case AdjustUrlStrategy.DataResidencyUS: return "data-residency-us";
		return _stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76;
	}

IL_003c:
	{
		// default: return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
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
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertLogLevel(System.Nullable`1<com.adjust.sdk.AdjustLogLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertLogLevel_mF7D0CB4C0B08008E37686670B7361871B737A53F (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 ___logLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logLevel == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline((&___logLevel0), Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)logLevel;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6((&___logLevel0), Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertBool(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertBool_mBFC3BC841A003201C7056448C67C35625379E786 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&___value0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// if (value.Value)
		bool L_1;
		L_1 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&___value0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0016:
	{
		// return 0;
		return 0;
	}
}
// System.Double com.adjust.sdk.AdjustUtils::ConvertDouble(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdjustUtils_ConvertDouble_m328F7E087047FA52AEF1D681FCCD32D80791B749 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___value0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return -1;
		return (-1.0);
	}

IL_0013:
	{
		// return (double)value;
		double L_1;
		L_1 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___value0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		return ((double)L_1);
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertInt(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertInt_mE9AACF8054BA25B7605B3F8727091ED4F41CF37C (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___value0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)value;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___value0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int64 com.adjust.sdk.AdjustUtils::ConvertLong(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AdjustUtils_ConvertLong_m7B66091ED09C4DA947FB5C61D5AC40762100FAF4 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___value0), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// return -1;
		return ((int64_t)(-1));
	}

IL_000c:
	{
		// return (long)value;
		int64_t L_1;
		L_1 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&___value0), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		return L_1;
	}
}
// System.String com.adjust.sdk.AdjustUtils::ConvertListToJson(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_ConvertListToJson_m0834067B90DD8AA9713B0A395933C806BDB84689 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	{
		// if (list == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// if (list.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_2%2)))
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0011:
	{
		// List<String> processedList = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < list.Count; i += 2)
		V_2 = 0;
		goto IL_0048;
	}

IL_001b:
	{
		// String key = list[i];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___list0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_3 = L_6;
		// String value = list[i + 1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___list0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_4 = L_9;
		// if (key == null || value == null)
		String_t* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// processedList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// processedList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0048:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_17 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ___list0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001b;
		}
	}
	{
		// var jsonArray = new JSONArray();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_20 = (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663*)il2cpp_codegen_object_new(JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E(L_20, NULL);
		V_1 = L_20;
		// foreach (var listItem in processedList)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		NullCheck(L_21);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_22;
		L_22 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_21, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_5), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0077_1;
			}

IL_0061_1:
			{
				// foreach (var listItem in processedList)
				String_t* L_23;
				L_23 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_5), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_6 = L_23;
				// jsonArray.Add(new JSONData(listItem));
				JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_24 = V_1;
				String_t* L_25 = V_6;
				JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_26 = (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)il2cpp_codegen_object_new(JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5(L_26, L_25, NULL);
				NullCheck(L_24);
				VirtualActionInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* >::Invoke(12 /* System.Void com.adjust.sdk.JSONNode::Add(com.adjust.sdk.JSONNode) */, L_24, L_26);
			}

IL_0077_1:
			{
				// foreach (var listItem in processedList)
				bool L_27;
				L_27 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_5), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		// return jsonArray.ToString();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_5 = NULL;
	{
		// string logJsonResponse = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (dictionary == null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return logJsonResponse;
		String_t* L_1 = V_0;
		return L_1;
	}

IL_000b:
	{
		// int preLoopCounter = 0;
		V_1 = 0;
		// logJsonResponse += "{";
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		V_0 = L_3;
		// foreach (KeyValuePair<string, object> pair in dictionary)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___dictionary0;
		NullCheck(L_4);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_5;
		L_5 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_4, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0135:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_2), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0127_1;
			}

IL_0025_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_6;
				L_6 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_2), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_3 = L_6;
				// String valueString = pair.Value as string;
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
				// if (valueString != null)
				String_t* L_8 = V_4;
				if (!L_8)
				{
					goto IL_00df_1;
				}
			}
			{
				// if (++preLoopCounter > 1)
				int32_t L_9 = V_1;
				int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				V_1 = L_10;
				if ((((int32_t)L_10) <= ((int32_t)1)))
				{
					goto IL_0056_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_11 = V_0;
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_12;
			}

IL_0056_1:
			{
				// if (valueString.StartsWith("{") && valueString.EndsWith("}"))
				String_t* L_13 = V_4;
				NullCheck(L_13);
				bool L_14;
				L_14 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_13, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
				if (!L_14)
				{
					goto IL_00a6_1;
				}
			}
			{
				String_t* L_15 = V_4;
				NullCheck(L_15);
				bool L_16;
				L_16 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_15, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				if (!L_16)
				{
					goto IL_00a6_1;
				}
			}
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + valueString;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				String_t* L_19 = V_0;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
				String_t* L_22;
				L_22 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_22);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_22);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
				String_t* L_25 = V_4;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_25);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
				String_t* L_26;
				L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
				V_0 = L_26;
				goto IL_0127_1;
			}

IL_00a6_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + "\"" + valueString + "\"";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
				String_t* L_29 = V_0;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_29);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
				String_t* L_32;
				L_32 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
				String_t* L_35 = V_4;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_35);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_35);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				String_t* L_37;
				L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
				V_0 = L_37;
				// continue;
				goto IL_0127_1;
			}

IL_00df_1:
			{
				// Dictionary<string, object> valueDictionary = pair.Value as Dictionary<string, object>;
				RuntimeObject* L_38;
				L_38 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_5 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_38, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
				// if (++preLoopCounter > 1)
				int32_t L_39 = V_1;
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				V_1 = L_40;
				if ((((int32_t)L_40) <= ((int32_t)1)))
				{
					goto IL_0101_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_41 = V_0;
				String_t* L_42;
				L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_41, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_42;
			}

IL_0101_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":";
				String_t* L_43 = V_0;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				String_t* L_45;
				L_45 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_43, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_44, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
				V_0 = L_45;
				// logJsonResponse += GetJsonResponseCompact(valueDictionary);
				String_t* L_46 = V_0;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_5;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				String_t* L_48;
				L_48 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_47, NULL);
				String_t* L_49;
				L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, L_48, NULL);
				V_0 = L_49;
			}

IL_0127_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				bool L_50;
				L_50 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_2), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0143;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		// logJsonResponse += "}";
		String_t* L_51 = V_0;
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_51, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_52;
		// return logJsonResponse;
		String_t* L_53 = V_0;
		return L_53;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonString(com.adjust.sdk.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___node0, String_t* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* V_0 = NULL;
	{
		// if (node == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_0 = ___node0;
		bool L_1;
		L_1 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000b:
	{
		// var nodeValue = node[key] as JSONData;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = ___node0;
		String_t* L_3 = ___key1;
		NullCheck(L_2);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4;
		L_4 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_2, L_3);
		V_0 = ((JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)IsInstClass((RuntimeObject*)L_4, JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var));
		// if (nodeValue == null)
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_5 = V_0;
		bool L_6;
		L_6 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_5, NULL, NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0023:
	{
		// if (nodeValue == "")
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_7 = V_0;
		bool L_8;
		L_8 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0032:
	{
		// return nodeValue.Value;
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_9);
		return L_10;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___jsonObject0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_0 = ___jsonObject0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_0081;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0081:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0009_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((*(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)((KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)UnBox(L_6, KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var))));
				// var subNode = pair.Value.AsObject;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7;
				L_7 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_7);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_8;
				L_8 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_7);
				V_2 = L_8;
				// var key = pair.Key;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline((&V_1), KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
				V_3 = L_9;
				// if (subNode == null)
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_10 = V_2;
				bool L_11;
				L_11 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_10, NULL, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// var value = pair.Value.Value;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_12;
				L_12 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_12);
				V_5 = L_13;
				// output.Add(key, value);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___output1;
				String_t* L_15 = V_3;
				String_t* L_16 = V_5;
				NullCheck(L_14);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_14, L_15, L_16, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// continue;
				goto IL_0064_1;
			}

IL_004c_1:
			{
				// var newSubDictionary = new Dictionary<string, object>();
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_17, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
				V_4 = L_17;
				// output.Add(key, newSubDictionary);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = ___output1;
				String_t* L_19 = V_3;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_4;
				NullCheck(L_18);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_18, L_19, L_20, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// WriteJsonResponseDictionary(subNode, newSubDictionary);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_21 = V_2;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = V_4;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_21, L_22, NULL);
			}

IL_0064_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustUtils::TryGetValue(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, String_t* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (dictionary.TryGetValue(key, out value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___dictionary0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (value == "")
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_001a:
	{
		// return value;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::GetSkad4ConversionValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_GetSkad4ConversionValue_mF1B95F499F7AECC0987FA3A4DD57E10F9582741E (String_t* ___conversionValueUpdate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___conversionValueUpdate0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0012:
	{
		// string strConversionValue = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadConversionValue);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		// int conversionValue = 0;
		V_1 = 0;
		// if (Int32.TryParse(strConversionValue, out conversionValue))
		bool L_7;
		L_7 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return conversionValue;
		int32_t L_8 = V_1;
		return L_8;
	}

IL_002a:
	{
		// return -1;
		return (-1);
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetSkad4CoarseValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetSkad4CoarseValue_m6A96D9597EAAD2D606A7B8730683A1870E324FCA (String_t* ___conversionValueUpdate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___conversionValueUpdate0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0012:
	{
		// string coarseValue = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadCoarseValue);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		// return coarseValue;
		return L_6;
	}
}
// System.Boolean com.adjust.sdk.AdjustUtils::GetSkad4LockWindow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustUtils_GetSkad4LockWindow_mE9E55E3A5B683CDF1BF463568133655A4BEEA39C (String_t* ___conversionValueUpdate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___conversionValueUpdate0;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// bool lockWindow = Convert.ToBoolean(AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadLockWindow));
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_6, NULL);
		// return lockWindow;
		return L_7;
	}
}
// UnityEngine.AndroidJavaObject com.adjust.sdk.AdjustUtils::TestOptionsMap2AndroidJavaObject(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AdjustUtils_TestOptionsMap2AndroidJavaObject_m898CB8FB47E84D854197B546786A2AD9C160FCAB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___testOptionsMap0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ajoCurrentActivity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	bool V_1 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int64_t V_3 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	int64_t V_5 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	int64_t V_7 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	int64_t V_9 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_10 = NULL;
	bool V_11 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_12 = NULL;
	bool V_13 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_14 = NULL;
	{
		// AndroidJavaObject ajoTestOptions = new AndroidJavaObject("com.adjust.sdk.AdjustTestOptions");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515, L_0, NULL);
		V_0 = L_1;
		// ajoTestOptions.Set<String>("baseUrl", testOptionsMap[KeyTestOptionsBaseUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_3, L_4, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_2, _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprUrl", testOptionsMap[KeyTestOptionsGdprUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___testOptionsMap0;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_7, L_8, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_6, _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888, L_9, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionUrl", testOptionsMap[KeyTestOptionsSubscriptionUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___testOptionsMap0;
		String_t* L_12 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_11, L_12, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_10, _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C, L_13, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// if (testOptionsMap.ContainsKey(KeyTestOptionsExtraPath) && !string.IsNullOrEmpty(testOptionsMap[KeyTestOptionsExtraPath]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = ___testOptionsMap0;
		String_t* L_15 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_14, L_15, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00b3;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_18 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_17, L_18, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// ajoTestOptions.Set<String>("basePath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_23 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_22, L_23, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_21);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_21, _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84, L_24, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = ___testOptionsMap0;
		String_t* L_27 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_26, L_27, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_25, _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309, L_28, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = ___testOptionsMap0;
		String_t* L_31 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_30);
		String_t* L_32;
		L_32 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_30, L_31, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_29);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_29, _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0, L_32, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
	}

IL_00b3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsDeleteState) && ajoCurrentActivity != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_34 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_33, L_34, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00cf;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___ajoCurrentActivity1;
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// ajoTestOptions.Set<AndroidJavaObject>("context", ajoCurrentActivity);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = ___ajoCurrentActivity1;
		NullCheck(L_37);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_37, _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE, L_38, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_00cf:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsUseTestConnectionOptions))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_40 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28;
		NullCheck(L_39);
		bool L_41;
		L_41 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_39, L_40, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_011d;
		}
	}
	{
		// bool useTestConnectionOptions = testOptionsMap[KeyTestOptionsUseTestConnectionOptions].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_43 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28;
		NullCheck(L_42);
		String_t* L_44;
		L_44 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_42, L_43, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_44, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_1 = L_46;
		// AndroidJavaObject ajoUseTestConnectionOptions = new AndroidJavaObject("java.lang.Boolean", useTestConnectionOptions);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		bool L_49 = V_1;
		bool L_50 = L_49;
		RuntimeObject* L_51 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_52, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_48, NULL);
		V_2 = L_52;
		// ajoTestOptions.Set<AndroidJavaObject>("useTestConnectionOptions", ajoUseTestConnectionOptions);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = V_2;
		NullCheck(L_53);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_53, _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607, L_54, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_56 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_55, L_56, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_0163;
		}
	}
	{
		// var timerIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_59 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_58, L_59, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_61;
		L_61 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_60, NULL);
		V_3 = L_61;
		// AndroidJavaObject ajoTimerIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", timerIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_62;
		int64_t L_64 = V_3;
		int64_t L_65 = L_64;
		RuntimeObject* L_66 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_67, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_63, NULL);
		V_4 = L_67;
		// ajoTestOptions.Set<AndroidJavaObject>("timerIntervalInMilliseconds", ajoTimerIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_68 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_4;
		NullCheck(L_68);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_68, _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36, L_69, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_0163:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerStartInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_70 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_71 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30;
		NullCheck(L_70);
		bool L_72;
		L_72 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_70, L_71, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_72)
		{
			goto IL_01ab;
		}
	}
	{
		// var timerStartInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerStartInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_74 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30;
		NullCheck(L_73);
		String_t* L_75;
		L_75 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_73, L_74, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_76;
		L_76 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_75, NULL);
		V_5 = L_76;
		// AndroidJavaObject ajoTimerStartInMilliseconds = new AndroidJavaObject("java.lang.Long", timerStartInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
		int64_t L_79 = V_5;
		int64_t L_80 = L_79;
		RuntimeObject* L_81 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_81);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_82 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_82, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_78, NULL);
		V_6 = L_82;
		// ajoTestOptions.Set<AndroidJavaObject>("timerStartInMilliseconds", ajoTimerStartInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_84 = V_6;
		NullCheck(L_83);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_83, _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86, L_84, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01ab:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_86 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31;
		NullCheck(L_85);
		bool L_87;
		L_87 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_85, L_86, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_87)
		{
			goto IL_01f3;
		}
	}
	{
		// var sessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_88 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_89 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31;
		NullCheck(L_88);
		String_t* L_90;
		L_90 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_88, L_89, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_91;
		L_91 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_90, NULL);
		V_7 = L_91;
		// AndroidJavaObject ajoSessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", sessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_92;
		int64_t L_94 = V_7;
		int64_t L_95 = L_94;
		RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_96);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_97 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_97, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_93, NULL);
		V_8 = L_97;
		// ajoTestOptions.Set<AndroidJavaObject>("sessionIntervalInMilliseconds", ajoSessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_98 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99 = V_8;
		NullCheck(L_98);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_98, _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467, L_99, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01f3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSubsessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_100 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_101 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
		NullCheck(L_100);
		bool L_102;
		L_102 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_100, L_101, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_102)
		{
			goto IL_023b;
		}
	}
	{
		// var subsessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSubsessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_103 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_104 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
		NullCheck(L_103);
		String_t* L_105;
		L_105 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_103, L_104, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_106;
		L_106 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_105, NULL);
		V_9 = L_106;
		// AndroidJavaObject ajoSubsessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", subsessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = L_107;
		int64_t L_109 = V_9;
		int64_t L_110 = L_109;
		RuntimeObject* L_111 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_111);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_111);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_112 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_112, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_108, NULL);
		V_10 = L_112;
		// ajoTestOptions.Set<AndroidJavaObject>("subsessionIntervalInMilliseconds", ajoSubsessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_113 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_114 = V_10;
		NullCheck(L_113);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_113, _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C, L_114, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_023b:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTeardown))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_115 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_116 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33;
		NullCheck(L_115);
		bool L_117;
		L_117 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_115, L_116, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_117)
		{
			goto IL_028d;
		}
	}
	{
		// bool teardown = testOptionsMap[KeyTestOptionsTeardown].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_118 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_119 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33;
		NullCheck(L_118);
		String_t* L_120;
		L_120 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_118, L_119, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_120);
		String_t* L_121;
		L_121 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_120, NULL);
		bool L_122;
		L_122 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_121, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_11 = L_122;
		// AndroidJavaObject ajoTeardown = new AndroidJavaObject("java.lang.Boolean", teardown);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_123 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_124 = L_123;
		bool L_125 = V_11;
		bool L_126 = L_125;
		RuntimeObject* L_127 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_126);
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_127);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_127);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_128 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_128, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_124, NULL);
		V_12 = L_128;
		// ajoTestOptions.Set<AndroidJavaObject>("teardown", ajoTeardown);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_129 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_130 = V_12;
		NullCheck(L_129);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_129, _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12, L_130, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_028d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsNoBackoffWait))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_131 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_132 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34;
		NullCheck(L_131);
		bool L_133;
		L_133 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_131, L_132, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_133)
		{
			goto IL_02df;
		}
	}
	{
		// bool noBackoffWait = testOptionsMap[KeyTestOptionsNoBackoffWait].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_134 = ___testOptionsMap0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_135 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34;
		NullCheck(L_134);
		String_t* L_136;
		L_136 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_134, L_135, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_136);
		String_t* L_137;
		L_137 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_136, NULL);
		bool L_138;
		L_138 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_137, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_13 = L_138;
		// AndroidJavaObject ajoNoBackoffWait = new AndroidJavaObject("java.lang.Boolean", noBackoffWait);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_139 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_140 = L_139;
		bool L_141 = V_13;
		bool L_142 = L_141;
		RuntimeObject* L_143 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_142);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_143);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_143);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_144 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_144);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_144, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_140, NULL);
		V_14 = L_144;
		// ajoTestOptions.Set<AndroidJavaObject>("noBackoffWait", ajoNoBackoffWait);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_145 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_146 = V_14;
		NullCheck(L_145);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_145, _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3, L_146, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_02df:
	{
		// return ajoTestOptions;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_147 = V_0;
		return L_147;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__ctor_mEE74F3B9A26BAE12B3C426FF63604FD7396544A2 (AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__cctor_m4489DD780E5669549E8C7EDAF985BDEC7AC456E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string KeyAdid = "adid";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0 = _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0), (void*)_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		// public static string KeyMessage = "message";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1 = _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1), (void*)_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		// public static string KeyNetwork = "network";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2 = _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2), (void*)_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		// public static string KeyAdgroup = "adgroup";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3 = _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3), (void*)_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		// public static string KeyCampaign = "campaign";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4 = _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4), (void*)_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		// public static string KeyCreative = "creative";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5 = _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5), (void*)_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		// public static string KeyWillRetry = "willRetry";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6 = _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6), (void*)_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		// public static string KeyTimestamp = "timestamp";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7 = _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7), (void*)_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		// public static string KeyCallbackId = "callbackId";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8 = _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8), (void*)_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		// public static string KeyEventToken = "eventToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9 = _stringLiteral79129E77C99D9B997190424687919AB33976D848;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9), (void*)_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		// public static string KeyClickLabel = "clickLabel";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10 = _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10), (void*)_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		// public static string KeyTrackerName = "trackerName";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11 = _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11), (void*)_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		// public static string KeyTrackerToken = "trackerToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12 = _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12), (void*)_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		// public static string KeyJsonResponse = "jsonResponse";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13 = _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13), (void*)_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		// public static string KeyCostType = "costType";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14 = _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14), (void*)_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		// public static string KeyCostAmount = "costAmount";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15 = _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15), (void*)_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		// public static string KeyCostCurrency = "costCurrency";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16 = _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16), (void*)_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		// public static string KeyFbInstallReferrer = "fbInstallReferrer";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17 = _stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17), (void*)_stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664);
		// public static string KeySkadConversionValue = "fineValue";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18 = _stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18), (void*)_stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A);
		// public static string KeySkadCoarseValue = "coarseValue";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19 = _stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19), (void*)_stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4);
		// public static string KeySkadLockWindow = "lockWindow";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20 = _stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20), (void*)_stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F);
		// public static string KeyTestOptionsBaseUrl = "baseUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21 = _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21), (void*)_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		// public static string KeyTestOptionsGdprUrl = "gdprUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22 = _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22), (void*)_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		// public static string KeyTestOptionsSubscriptionUrl = "subscriptionUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23 = _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23), (void*)_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		// public static string KeyTestOptionsExtraPath = "extraPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24 = _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24), (void*)_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		// public static string KeyTestOptionsBasePath = "basePath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_25 = _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_25), (void*)_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		// public static string KeyTestOptionsGdprPath = "gdprPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_26 = _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_26), (void*)_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		// public static string KeyTestOptionsDeleteState = "deleteState";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27 = _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27), (void*)_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		// public static string KeyTestOptionsUseTestConnectionOptions = "useTestConnectionOptions";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28 = _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28), (void*)_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		// public static string KeyTestOptionsTimerIntervalInMilliseconds = "timerIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29 = _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29), (void*)_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		// public static string KeyTestOptionsTimerStartInMilliseconds = "timerStartInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30 = _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30), (void*)_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		// public static string KeyTestOptionsSessionIntervalInMilliseconds = "sessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31 = _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31), (void*)_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		// public static string KeyTestOptionsSubsessionIntervalInMilliseconds = "subsessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32 = _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32), (void*)_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		// public static string KeyTestOptionsTeardown = "teardown";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33 = _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33), (void*)_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		// public static string KeyTestOptionsNoBackoffWait = "noBackoffWait";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34 = _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34), (void*)_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		// public static string KeyTestOptionsiAdFrameworkEnabled = "iAdFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_35 = _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_35), (void*)_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		// public static string KeyTestOptionsAdServicesFrameworkEnabled = "adServicesFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_36 = _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_36), (void*)_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerName_m731697B9763F60A9FC502CC6A1A27BDBD2574876_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string trackerName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtrackerNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackerNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_trackerToken_m6093F9C8CC27B2425BB1373F51EDFA26B9E2103F_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string trackerToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtrackerTokenU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackerTokenU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_network_m68ED3E4E1E6850226D667FDE9829B402AF120D20_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string network { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnetworkU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnetworkU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_campaign_m29AC5BBED526925450C7D081A5A656E9A71470E9_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string campaign { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcampaignU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcampaignU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_adgroup_m04EB13F0176574C01F8E233A15E6E7AB71CDEBFB_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string adgroup { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CadgroupU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CadgroupU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_creative_mF0F350C3D8521BBC5D841A28428210CD9CF41183_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string creative { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcreativeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcreativeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_clickLabel_mAAFCDD0362AFE2EF2F6AEC66E6973B65B75692DE_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string clickLabel { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CclickLabelU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclickLabelU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_adid_m8FF9650D73A3B30569FA924D09F2A1B5841800F6_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CadidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CadidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costType_m2B994A60E50367E752D803F431BE9B010BE784B0_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string costType { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcostTypeU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcostTypeU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costAmount_m8C20F2BD1C52F1109660D5A965B5159BA4DC5647_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// public double? costAmount { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CcostAmountU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_costCurrency_m4C83141F90E118ADEA5CCA620335B9FDD0C38D51_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string costCurrency { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CcostCurrencyU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcostCurrencyU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustAttribution_set_fbInstallReferrer_m03CE43EE59FB3D653CB09AB9BD1DE86EE11D292D_inline (AdjustAttribution_t24DAB11C31009C51FDE3BAC78DDA6CB613AC783C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string fbInstallReferrer {get; set;}
		String_t* L_0 = ___value0;
		__this->___U3CfbInstallReferrerU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfbInstallReferrerU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Adid_mF832EF6F1DC6FE8156A132AD42AA1060E539A7AD_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Message_m38D9A47DB181615424C49B59C6E4A562B3E5F89F_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_Timestamp_m0CCE0BEF1E47ACA8E07187A73BBE9ACFEEC6586B_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_EventToken_mAF539927077C6E4B98FC29622DE5D26C3A5F2C64_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEventTokenU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventTokenU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_CallbackId_mA49D8F4F34D8A1C9FB36A15EFB7572AC187A28C9_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCallbackIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Adid_m1C9E862F9EE373D5F36B28D07F944581B4733FCC_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Message_m67C166B4D02AD43A8835555633ED6A41B6470472_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_WillRetry_m4C79E145286998F97FFFC7106C792794C06669E9_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CWillRetryU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_Timestamp_m144FA4FAB62F3AE2D92C8A729A4D80C78129FC8F_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_EventToken_m0107E2C7300ECD415209E1F64A6B8AD04F33798E_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EventToken { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEventTokenU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventTokenU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_CallbackId_mE4D4EE9B87B3B947F952C7BC539A177AA609B0FD_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CallbackId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCallbackIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Adid_m4393AA9B18910CE351BB43D1C510132B4F971573_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Message_mD680D8861FD8EE269D0994D51498AC2210694E99_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_Timestamp_m2ED4611CC016044E197BF515B3A7C81C27B207EA_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Adid_m9D52E417E29F03D868D2A5C1BA50578FAE232BC7_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Adid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAdidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Message_m84D2E372880BCEAB77F55A2D5E3228A2D0179835_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_WillRetry_m891830EFFC0F200C979980F639EF51F2357E6BCF_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool WillRetry { get; set; }
		bool L_0 = ___value0;
		__this->___U3CWillRetryU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_Timestamp_m4620F96554EF0DBF543BF574C3B9E2CBEA0BF46E_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Timestamp { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setLaunchDeferredDeeplink_m8D6806307929E8E3AE2F01CE3C08BF96DDCD526F_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, bool ___launchDeferredDeeplink0, const RuntimeMethod* method) 
{
	{
		// this.launchDeferredDeeplink = launchDeferredDeeplink;
		bool L_0 = ___launchDeferredDeeplink0;
		__this->___launchDeferredDeeplink_33 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setDefaultTracker_mA67C3195A19A5E9AA2B5AF9E071336CA9E1AB724_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___defaultTracker0, const RuntimeMethod* method) 
{
	{
		// this.defaultTracker = defaultTracker;
		String_t* L_0 = ___defaultTracker0;
		__this->___defaultTracker_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultTracker_17), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setUrlStrategy_m43C184E9915977FC7955F22A086111B7836E2263_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___urlStrategy0, const RuntimeMethod* method) 
{
	{
		// this.urlStrategy = urlStrategy;
		String_t* L_0 = ___urlStrategy0;
		__this->___urlStrategy_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___urlStrategy_19), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustConfig_setPreinstallFilePath_mF70F4E2F50F2E73E7EAF1DEAB6351F6AB6EB728A_inline (AdjustConfig_tD435777B1EC48602D9CE912CF174792E3039BB49* __this, String_t* ___preinstallFilePath0, const RuntimeMethod* method) 
{
	{
		// this.preinstallFilePath = preinstallFilePath;
		String_t* L_0 = ___preinstallFilePath0;
		__this->___preinstallFilePath_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preinstallFilePath_47), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventFailure_set_JsonResponse_mC129C66E6BD3773556DD9984F8A9B41987A480EE_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventFailure_get_JsonResponse_mB7A9E1270C3CA4F577552217E4FDB3CCFB32852A_inline (AdjustEventFailure_t97618DB30BE84909D82256E00C1B080C4C56AF26* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustEventSuccess_set_JsonResponse_mCA8F4E6DE391C1D4B8BCEEFB437BA5EE1E717D90_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustEventSuccess_get_JsonResponse_mC1ED1F8BC320A1BE406D403D15DB0EA699A01A75_inline (AdjustEventSuccess_tE3BD5AB4EDB3700846430DB2CA3325E6867861DA* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionFailure_set_JsonResponse_m9697C8316211570DED147C08CA044DB7A9626B6E_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionFailure_get_JsonResponse_m3CC10F98CEFA48F10203B4B21CA8B7F48313E337_inline (AdjustSessionFailure_t0C189E7A2FDD75524F5DA714405D9812006ABF23* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdjustSessionSuccess_set_JsonResponse_mCFFE1E0F01BD95837EE0A4E9D89CE5913C3E0FBC_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CJsonResponseU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonResponseU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AdjustSessionSuccess_get_JsonResponse_m13404EAE48C660945ED5BBC50A26E9AB2E4B8595_inline (AdjustSessionSuccess_t38023C31D6F692A6AA57410490205C23F78AEB87* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> JsonResponse { get; set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CJsonResponseU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
