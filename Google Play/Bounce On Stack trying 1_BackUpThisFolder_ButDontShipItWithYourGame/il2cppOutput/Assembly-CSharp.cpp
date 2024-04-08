#include "pch-cpp.hpp"

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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeTheScene
struct ChangeTheScene_tBE62307158A2A863A7673121BE96400070036E26;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// InterstitialAd
struct InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovingPlatform
struct MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerBluePrint
struct PlayerBluePrint_t4AE28BE1274B98B63271D5B2FCE9780DBE650A9D;
// PlayerJump
struct PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RewardedAdsButton
struct RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// shopManager
struct shopManager_tF65B18946407D091F5C21F53DE82915C014D4730;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CameraFollow/<ZoomOutCoroutine>d__13
struct U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MovingPlatform/<FlashEffect>d__12
struct U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906;
// ObjectSpawner/PlatformStoppedMoving
struct PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63AE1933A0AF1A7EF8EE5B02EBA859BF9E63FEC833304330F13B3C4235439FED_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral128FB5F88B29C5298C7F2A952C57F03FC90A2663;
IL2CPP_EXTERN_C String_t* _stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49;
IL2CPP_EXTERN_C String_t* _stringLiteral288310EB888FB4F0F02A786171C9D52D06805B57;
IL2CPP_EXTERN_C String_t* _stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8;
IL2CPP_EXTERN_C String_t* _stringLiteral46D7F5973DA73213E6E816F18CC53EE688971F89;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E;
IL2CPP_EXTERN_C String_t* _stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
IL2CPP_EXTERN_C String_t* _stringLiteral83CA01DC025DBCB894F954AFBBEB94D17EC03B18;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF32812866CFA3032008E13841948E28B01EBAC5;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE0DAB8398124A54A5A77E3C4435D6B981711265B;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15;
IL2CPP_EXTERN_C String_t* _stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_HideBannerAd_mAC820CF2DDF344FDC4EB52D9BA4A20BC238C4F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdsButton_ShowAd_m45398B75EE6914A0F05E470DA026DB0438549697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlashEffectU3Ed__12_System_Collections_IEnumerator_Reset_mF9963367D576C83B741D7B33A65A9D6BAF48039E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomOutCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mF7BBDC751B81B611862E73E3AC04641500B4783C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___U3CerrorCallbackU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CclickCallbackU3Ek__BackingField_2;
};

// PlayerBluePrint
struct PlayerBluePrint_t4AE28BE1274B98B63271D5B2FCE9780DBE650A9D  : public RuntimeObject
{
	// System.String PlayerBluePrint::name
	String_t* ___name_0;
	// System.Int32 PlayerBluePrint::index
	int32_t ___index_1;
	// System.Int32 PlayerBluePrint::price
	int32_t ___price_2;
	// System.Boolean PlayerBluePrint::isUnlocked
	bool ___isUnlocked_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CameraFollow/<ZoomOutCoroutine>d__13
struct U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D  : public RuntimeObject
{
	// System.Int32 CameraFollow/<ZoomOutCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraFollow/<ZoomOutCoroutine>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CameraFollow CameraFollow/<ZoomOutCoroutine>d__13::<>4__this
	CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* ___U3CU3E4__this_2;
	// System.Single CameraFollow/<ZoomOutCoroutine>d__13::<startTime>5__2
	float ___U3CstartTimeU3E5__2_3;
	// System.Single CameraFollow/<ZoomOutCoroutine>d__13::<duration>5__3
	float ___U3CdurationU3E5__3_4;
	// System.Single CameraFollow/<ZoomOutCoroutine>d__13::<startSize>5__4
	float ___U3CstartSizeU3E5__4_5;
	// System.Single CameraFollow/<ZoomOutCoroutine>d__13::<targetSize>5__5
	float ___U3CtargetSizeU3E5__5_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// MovingPlatform/<FlashEffect>d__12
struct U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906  : public RuntimeObject
{
	// System.Int32 MovingPlatform/<FlashEffect>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MovingPlatform/<FlashEffect>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MovingPlatform MovingPlatform/<FlashEffect>d__12::<>4__this
	MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 MovingPlatform/<FlashEffect>d__12::<initialScale>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CinitialScaleU3E5__2_3;
	// System.Single MovingPlatform/<FlashEffect>d__12::<timer>5__3
	float ___U3CtimerU3E5__3_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88  : public MulticastDelegate_t
{
};

// ObjectSpawner/PlatformStoppedMoving
struct PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsInitializer::_androidGameId
	String_t* ____androidGameId_4;
	// System.String AdsInitializer::_iOSGameId
	String_t* ____iOSGameId_5;
	// System.Boolean AdsInitializer::_testMode
	bool ____testMode_6;
	// System.String AdsInitializer::_gameId
	String_t* ____gameId_7;
	// RewardedAdsButton AdsInitializer::Rad
	RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* ___Rad_8;
	// BannerAd AdsInitializer::Bad
	BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* ___Bad_9;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button BannerAd::_loadBannerButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____loadBannerButton_4;
	// UnityEngine.UI.Button BannerAd::_showBannerButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____showBannerButton_5;
	// UnityEngine.UI.Button BannerAd::_hideBannerButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____hideBannerButton_6;
	// UnityEngine.Advertisements.BannerPosition BannerAd::_bannerPosition
	int32_t ____bannerPosition_7;
	// System.String BannerAd::_androidAdUnitId
	String_t* ____androidAdUnitId_8;
	// System.String BannerAd::_iOSAdUnitId
	String_t* ____iOSAdUnitId_9;
	// System.String BannerAd::_adUnitId
	String_t* ____adUnitId_10;
};

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraFollow::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_5;
	// UnityEngine.Transform CameraFollow::ground
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ground_6;
	// System.Single CameraFollow::followSpeed
	float ___followSpeed_7;
	// UnityEngine.Camera CameraFollow::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_8;
	// System.Single CameraFollow::initialSize
	float ___initialSize_9;
	// UnityEngine.Vector3 CameraFollow::initialCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialCameraPosition_10;
};

// ChangeTheScene
struct ChangeTheScene_tBE62307158A2A863A7673121BE96400070036E26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ChangeTheScene::sceneName
	String_t* ___sceneName_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color GameManager::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
};

// InterstitialAd
struct InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InterstitialAd::_androidAdUnitId
	String_t* ____androidAdUnitId_4;
	// System.String InterstitialAd::_iOsAdUnitId
	String_t* ____iOsAdUnitId_5;
	// System.String InterstitialAd::_adUnitId
	String_t* ____adUnitId_6;
};

// MovingPlatform
struct MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single[] MovingPlatform::speedOptions
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___speedOptions_4;
	// System.Single MovingPlatform::stopDistance
	float ___stopDistance_5;
	// UnityEngine.Color MovingPlatform::flashColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flashColor_6;
	// System.Single MovingPlatform::flashDuration
	float ___flashDuration_7;
	// UnityEngine.GameObject MovingPlatform::objectToScale
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToScale_8;
	// UnityEngine.Vector3 MovingPlatform::targetScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale_9;
	// System.Boolean MovingPlatform::isMoving
	bool ___isMoving_10;
	// System.Single MovingPlatform::moveSpeed
	float ___moveSpeed_11;
	// UnityEngine.Renderer MovingPlatform::platformRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___platformRenderer_12;
	// UnityEngine.Color MovingPlatform::originalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___originalColor_13;
};

// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] ObjectSpawner::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_5;
	// System.Int32 ObjectSpawner::numberOfObjectsToSpawn
	int32_t ___numberOfObjectsToSpawn_6;
	// System.Single ObjectSpawner::minDelayBetweenSpawns
	float ___minDelayBetweenSpawns_7;
	// System.Single ObjectSpawner::maxDelayBetweenSpawns
	float ___maxDelayBetweenSpawns_8;
	// System.Single ObjectSpawner::yMoveDistance
	float ___yMoveDistance_9;
	// System.Int32 ObjectSpawner::objectsSpawned
	int32_t ___objectsSpawned_11;
	// System.Boolean ObjectSpawner::isSpawning
	bool ___isSpawning_12;
	// System.Boolean ObjectSpawner::shouldStopSpawning
	bool ___shouldStopSpawning_13;
	// UnityEngine.GameObject ObjectSpawner::currentObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentObjectPrefab_14;
	// UnityEngine.Vector3 ObjectSpawner::lastSpawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastSpawnPosition_15;
};

// PlayerJump
struct PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerJump::jumpForce
	float ___jumpForce_4;
	// System.Single PlayerJump::fallMultiplier
	float ___fallMultiplier_5;
	// System.Single PlayerJump::lowJumpMultiplier
	float ___lowJumpMultiplier_6;
	// UnityEngine.LayerMask PlayerJump::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_7;
	// UnityEngine.GameObject PlayerJump::gameOverUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverUI_8;
	// UnityEngine.GameObject PlayerJump::startMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startMenuUI_9;
	// UnityEngine.GameObject PlayerJump::inGameUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inGameUI_10;
	// UnityEngine.GameObject PlayerJump::shopUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopUI_11;
	// TMPro.TextMeshProUGUI PlayerJump::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_12;
	// TMPro.TextMeshProUGUI PlayerJump::highScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___highScoreText_13;
	// UnityEngine.AudioSource PlayerJump::jumpEffectSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___jumpEffectSound_14;
	// UnityEngine.AudioSource PlayerJump::deadEffect
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___deadEffect_15;
	// System.String PlayerJump::sceneName
	String_t* ___sceneName_16;
	// UnityEngine.Rigidbody PlayerJump::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_17;
	// System.Boolean PlayerJump::canJump
	bool ___canJump_18;
	// System.Boolean PlayerJump::isGameOver
	bool ___isGameOver_19;
	// System.Int32 PlayerJump::score
	int32_t ___score_20;
	// System.Int32 PlayerJump::highScore
	int32_t ___highScore_21;
	// System.Int32 PlayerJump::coins
	int32_t ___coins_22;
	// System.Boolean PlayerJump::isGrounded
	bool ___isGrounded_23;
	// UnityEngine.Renderer PlayerJump::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_24;
};

// RewardedAdsButton
struct RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button RewardedAdsButton::_showAdButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____showAdButton_4;
	// System.String RewardedAdsButton::_androidAdUnitId
	String_t* ____androidAdUnitId_5;
	// System.String RewardedAdsButton::_iOSAdUnitId
	String_t* ____iOSAdUnitId_6;
	// System.String RewardedAdsButton::_adUnitId
	String_t* ____adUnitId_7;
	// System.Boolean RewardedAdsButton::isAdShowing
	bool ___isAdShowing_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// shopManager
struct shopManager_tF65B18946407D091F5C21F53DE82915C014D4730  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 shopManager::currentIndex
	int32_t ___currentIndex_5;
	// System.Int32 shopManager::defaultPlayerIndex
	int32_t ___defaultPlayerIndex_6;
	// UnityEngine.GameObject[] shopManager::playerModels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___playerModels_7;
	// UnityEngine.GameObject[] shopManager::objectPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectPrefabs_8;
	// ObjectSpawner shopManager::objectSpawner
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___objectSpawner_9;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63AE1933A0AF1A7EF8EE5B02EBA859BF9E63FEC833304330F13B3C4235439FED
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___63AE1933A0AF1A7EF8EE5B02EBA859BF9E63FEC833304330F13B3C4235439FED_0;
};

// <PrivateImplementationDetails>

// UnityEngine.Advertisements.BannerLoadOptions

// UnityEngine.Advertisements.BannerLoadOptions

// UnityEngine.Advertisements.BannerOptions

// UnityEngine.Advertisements.BannerOptions

// PlayerBluePrint

// PlayerBluePrint

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// CameraFollow/<ZoomOutCoroutine>d__13

// CameraFollow/<ZoomOutCoroutine>d__13

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// MovingPlatform/<FlashEffect>d__12

// MovingPlatform/<FlashEffect>d__12

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback

// UnityEngine.Advertisements.BannerOptions/BannerCallback

// UnityEngine.Advertisements.BannerOptions/BannerCallback

// ObjectSpawner/PlatformStoppedMoving

// ObjectSpawner/PlatformStoppedMoving

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AdsInitializer

// AdsInitializer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BannerAd

// BannerAd

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields
{
	// CameraFollow CameraFollow::<Instance>k__BackingField
	CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* ___U3CInstanceU3Ek__BackingField_4;
};

// CameraFollow

// ChangeTheScene

// ChangeTheScene

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::<Instance>k__BackingField
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CInstanceU3Ek__BackingField_4;
};

// GameManager

// InterstitialAd

// InterstitialAd

// MovingPlatform

// MovingPlatform

// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields
{
	// ObjectSpawner ObjectSpawner::<Instance>k__BackingField
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___U3CInstanceU3Ek__BackingField_4;
	// ObjectSpawner/PlatformStoppedMoving ObjectSpawner::OnPlatformStoppedMoving
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* ___OnPlatformStoppedMoving_10;
};

// ObjectSpawner

// PlayerJump
struct PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields
{
	// PlayerJump PlayerJump::<Instance>k__BackingField
	PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* ___U3CInstanceU3Ek__BackingField_25;
};

// PlayerJump

// RewardedAdsButton

// RewardedAdsButton

// shopManager
struct shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields
{
	// shopManager shopManager::<Instance>k__BackingField
	shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* ___U3CInstanceU3Ek__BackingField_4;
};

// shopManager

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8 (int32_t ___0_position, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions__ctor_m866C2FA6DEA20A35F7FBE25536D96BD563D1CFE7 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_loadCallback(UnityEngine.Advertisements.BannerLoadOptions/LoadCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_errorCallback(UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E (String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions__ctor_m5D0194C2660940617F25552DB827D41D10878A60 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_clickCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_hideCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_showCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3 (String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC (bool ___0_destroy, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___0_placementId, RuntimeObject* ___1_showListener, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void RewardedAdsButton::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_ResumeGame_m49C30C178E9FCF6D368CDEC07FC5D8C59FEFA9BC (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) ;
// System.Void RewardedAdsButton::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_PauseGame_m2D4302C4734166FA24600D41BE17DC2CB2856928 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m91E4922DA136C2D13868A1B8F4BDC5CDEFBA6284 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_mB5C493696A3AF825A4CB2EDD59433E41E9F270A9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343 (String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) ;
// System.Void RewardedAdsButton::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_LoadAd_mD4F4DAB5F657FC7CF37B560F86BC19893BB0A6AC (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) ;
// System.Void BannerAd::LoadBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// CameraFollow CameraFollow::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* CameraFollow_get_Instance_m2F48A897DB7ECBB452132BB17D6011EDFE62704B_inline (const RuntimeMethod* method) ;
// System.Void CameraFollow::set_Instance(CameraFollow)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_m94F9CA541ED316A81F8486688AFD2DF049CBA2F2_inline (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraFollow::ZoomOutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraFollow_ZoomOutCoroutine_mED108DF4FBC510ADAB6A18BE6056CEB3CFCA0215 (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void CameraFollow/<ZoomOutCoroutine>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomOutCoroutineU3Ed__13__ctor_mE9C1B90CC9A191D6CD11DEBE9648BB9287FA8207 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single CameraFollow::CalculateTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollow_CalculateTargetSize_m7C2CEB07187EF1F0FA859D849BD0005263913B2A (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MovingPlatform::FlashEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingPlatform_FlashEffect_mBF6B7C80B09E1C1ED9CF266FE70B44FD57714647 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) ;
// System.Void MovingPlatform/<FlashEffect>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashEffectU3Ed__12__ctor_mFB0D94DEB3806A98824170FDB4D989922F44E25A (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// PlayerJump PlayerJump::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* PlayerJump_get_Instance_m9717DB654FF33203AF45A86380EFFC180057E248_inline (const RuntimeMethod* method) ;
// System.Void PlayerJump::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_GameOver_m5B687658C6A98A0961A8E83D6849FBE8845BAD8E (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// ObjectSpawner ObjectSpawner::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F_inline (const RuntimeMethod* method) ;
// System.Void ObjectSpawner::set_Instance(ObjectSpawner)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_set_Instance_m99A6279801A6DDD9FAC5206EF8F5B79E1C5AA9AE_inline (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___0_value, const RuntimeMethod* method) ;
// shopManager shopManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void ObjectSpawner::MoveSpawnPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_MoveSpawnPoints_mC1763E60067378288E9B9EC39808E8008CF1881C (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Void ObjectSpawner/PlatformStoppedMoving::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_inline (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerJump::set_Instance(PlayerJump)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerJump_set_Instance_m8B134EAB8EDFE042C21863F9EDDD36296BFB5ED8_inline (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void PlayerJump::UpdateHighScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_UpdateHighScoreText_m5F516B5433C1B3780772549C46D3458A12AE4463 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) ;
// System.Void PlayerJump::UpdateScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_UpdateScoreText_mEB5770196F0D7072FB8F606315B3A3536DCBD1CF (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void PlayerJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_Jump_mD3E275A2F9182BF60855730C4C1E0121B89BDB7D (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::StartSpawningObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_StartSpawningObjects_mD1583099BAEF23047E0B1AE3BA61416F65398E9A (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::StopSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_StopSpawning_mD99711FD11A81A81A3E5E9C877894D5DC53F9EE4 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void PlayerJump::betterZoomOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_betterZoomOut_m0F07B7166AF99EB9F74803173FD89531F5F5606C (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void CameraFollow::ZoomOutUntilTwoTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_ZoomOutUntilTwoTransforms_m09200299FFEAD07D997020339B31E165F1E996BA (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void shopManager::set_Instance(shopManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void shopManager_set_Instance_m8C14A6E70860822BB93828F208BE0DC6F59D1B3C_inline (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* ___0_value, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::SetObjectPrefab(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40_inline (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void BannerAd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_Start_m408AAD1F0D3F7EC107EE37E12A402FA378327A24 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _adUnitId = _androidAdUnitId;
		String_t* L_0 = __this->____androidAdUnitId_8;
		__this->____adUnitId_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_10), (void*)L_0);
		// _showBannerButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____showBannerButton_5;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// _hideBannerButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____hideBannerButton_6;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
		// Advertisement.Banner.SetPosition(_bannerPosition);
		int32_t L_3 = __this->____bannerPosition_7;
		Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8(L_3, NULL);
		// _loadBannerButton.onClick.AddListener(LoadBanner);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->____loadBannerButton_4;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// _loadBannerButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->____loadBannerButton_4;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::LoadBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* V_0 = NULL;
	{
		// BannerLoadOptions options = new BannerLoadOptions
		// {
		//     loadCallback = OnBannerLoaded,
		//     errorCallback = OnBannerError
		// };
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)il2cpp_codegen_object_new(BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BannerLoadOptions__ctor_m866C2FA6DEA20A35F7FBE25536D96BD563D1CFE7(L_0, NULL);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_1 = L_0;
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_2 = (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B*)il2cpp_codegen_object_new(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1(L_2, __this, (intptr_t)((void*)BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline(L_1, L_2, NULL);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_3 = L_1;
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_4 = (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029*)il2cpp_codegen_object_new(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9(L_4, __this, (intptr_t)((void*)BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline(L_3, L_4, NULL);
		V_0 = L_3;
		// Advertisement.Banner.Load(_adUnitId, options);
		String_t* L_5 = __this->____adUnitId_10;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_6 = V_0;
		Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_HideBannerAd_mAC820CF2DDF344FDC4EB52D9BA4A20BC238C4F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Banner loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B, NULL);
		// _showBannerButton.onClick.AddListener(ShowBannerAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____showBannerButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _hideBannerButton.onClick.AddListener(HideBannerAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____hideBannerButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)BannerAd_HideBannerAd_mAC820CF2DDF344FDC4EB52D9BA4A20BC238C4F8F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _showBannerButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____showBannerButton_5;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)1, NULL);
		// _hideBannerButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->____hideBannerButton_6;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Banner Error: {message}");
		String_t* L_0 = ___0_message;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::ShowBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* V_0 = NULL;
	{
		// BannerOptions options = new BannerOptions
		// {
		//     clickCallback = OnBannerClicked,
		//     hideCallback = OnBannerHidden,
		//     showCallback = OnBannerShown
		// };
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A*)il2cpp_codegen_object_new(BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BannerOptions__ctor_m5D0194C2660940617F25552DB827D41D10878A60(L_0, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_2, __this, (intptr_t)((void*)BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline(L_1, L_2, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_3 = L_1;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_4 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_4, __this, (intptr_t)((void*)BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline(L_3, L_4, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_3;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_6 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_6, __this, (intptr_t)((void*)BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline(L_5, L_6, NULL);
		V_0 = L_5;
		// Advertisement.Banner.Show(_adUnitId, options);
		String_t* L_7 = __this->____adUnitId_10;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_8 = V_0;
		Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::HideBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_HideBannerAd_mAC820CF2DDF344FDC4EB52D9BA4A20BC238C4F8F (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// Advertisement.Banner.Hide();
		Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC((bool)0, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerClicked() { }
		return;
	}
}
// System.Void BannerAd::OnBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerShown() { }
		return;
	}
}
// System.Void BannerAd::OnBannerHidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerHidden() { }
		return;
	}
}
// System.Void BannerAd::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnDestroy_m71420C9E4AA5CE0525596BF193E0E36132D07081 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// _loadBannerButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____loadBannerButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// _showBannerButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____showBannerButton_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_3, NULL);
		// _hideBannerButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->____hideBannerButton_6;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd__ctor_m155A92495C9C9CEA0A5B7C867F53916021EA3C09 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] BannerPosition _bannerPosition = BannerPosition.BOTTOM_CENTER;
		__this->____bannerPosition_7 = 4;
		// [SerializeField] string _androidAdUnitId = "Banner_Android";
		__this->____androidAdUnitId_8 = _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_8), (void*)_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		// [SerializeField] string _iOSAdUnitId = "Banner_iOS";
		__this->____iOSAdUnitId_9 = _stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdUnitId_9), (void*)_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
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
// System.Void ChangeTheScene::ThemeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeTheScene_ThemeChange_mD096D3A2933F3BA021662FCD13B0566A3261B07F (ChangeTheScene_tBE62307158A2A863A7673121BE96400070036E26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeTheScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeTheScene__ctor_m65ACDD64BC43745F10B1FB5570B0640477CC537D (ChangeTheScene_tBE62307158A2A863A7673121BE96400070036E26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0DAB8398124A54A5A77E3C4435D6B981711265B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string sceneName = "SceneNameHere";
		__this->___sceneName_4 = _stringLiteralE0DAB8398124A54A5A77E3C4435D6B981711265B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_4), (void*)_stringLiteralE0DAB8398124A54A5A77E3C4435D6B981711265B);
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___0_value;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameManager::whitecolor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_whitecolor_m278968E1F6A0577422E8771A001F5E182B805107 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_5 = L_0;
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void InterstitialAd::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Awake_m357D4BED241DC859B93D0C0EFA6B32CEBB7E8FCD (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, const RuntimeMethod* method) 
{
	InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* G_B2_0 = NULL;
	InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* G_B3_1 = NULL;
	{
		// _adUnitId = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? _iOsAdUnitId
		//     : _androidAdUnitId;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->____androidAdUnitId_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->____iOsAdUnitId_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->____adUnitId_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____adUnitId_6), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void InterstitialAd::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m4D0F0F7ED4A2E9ED34F7C935E4122D55B7572A82 (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_6;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAd::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_ShowAd_m40D39A51F997895F2427F13A5DF1FF358B391D1D (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Showing Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_6;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Show(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsAdLoaded_m32C6A0BF19CB1AC56A0DCC148FABB8BAA3486E0F (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0_adUnitId, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsFailedToLoad_mF88538124480EFA49B6EF96892EA7B94F9FAFD8D (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0__adUnitId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit: {_adUnitId} - {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0__adUnitId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___1_error));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___2_message;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsShowFailure_m462FD0B5D47123F297186F6260F3CF11CFFD78D5 (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0__adUnitId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0__adUnitId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___1_error));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___2_message;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsShowStart_m7F02C5D47439B863024F169F23FF150BFB5FD11B (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0__adUnitId, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string _adUnitId) { }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsShowClick_m620BE41B69665F551FDC50552E2122FCCC269490 (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0__adUnitId, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string _adUnitId) { }
		return;
	}
}
// System.Void InterstitialAd::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnUnityAdsShowComplete_m9AC743881FFF9B3BE56CA830748503A1EE29EE10 (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, String_t* ___0__adUnitId, int32_t ___1_showCompletionState, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowComplete(string _adUnitId, UnityAdsShowCompletionState showCompletionState) { }
		return;
	}
}
// System.Void InterstitialAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m9C870CEA3A78D5CBCD55FA8120B4A0EA02ED7F3C (InterstitialAd_tDE4774F7C1D63F135BC10EC1C224C9CB389D9F75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string _androidAdUnitId = "Interstitial_Android";
		__this->____androidAdUnitId_4 = _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_4), (void*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		// [SerializeField] string _iOsAdUnitId = "Interstitial_iOS";
		__this->____iOsAdUnitId_5 = _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOsAdUnitId_5), (void*)_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
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
// System.Void RewardedAdsButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_Awake_mDCE26E5FD6D876DBB564A72B6F2745278C271F09 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	{
		// _adUnitId = _androidAdUnitId;
		String_t* L_0 = __this->____androidAdUnitId_5;
		__this->____adUnitId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_LoadAd_mD4F4DAB5F657FC7CF37B560F86BC19893BB0A6AC (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_7;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsAdLoaded_mD8DB2A7D0111733F0061908BC1BED160E8F919C4 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdsButton_ShowAd_m45398B75EE6914A0F05E470DA026DB0438549697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___0_adUnitId;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (adUnitId.Equals(_adUnitId))
		String_t* L_2 = ___0_adUnitId;
		String_t* L_3 = __this->____adUnitId_7;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// _showAdButton.onClick.AddListener(ShowAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->____showAdButton_4;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)RewardedAdsButton_ShowAd_m45398B75EE6914A0F05E470DA026DB0438549697_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void RewardedAdsButton::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_ShowAd_m45398B75EE6914A0F05E470DA026DB0438549697 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(_adUnitId, this);
		String_t* L_0 = __this->____adUnitId_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsShowComplete_m6668D69FF80D2C2A6343FD8F1F0621E2FE46A2C2 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, int32_t ___1_showCompletionState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		String_t* L_0 = ___0_adUnitId;
		String_t* L_1 = __this->____adUnitId_7;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___1_showCompletionState));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5, NULL);
		// ResumeGame(); // Resume the game after the ad completes.
		RewardedAdsButton_ResumeGame_m49C30C178E9FCF6D368CDEC07FC5D8C59FEFA9BC(__this, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsFailedToLoad_mBEF2D05D40E392EDB127FDF784CE29B59C0A39C9 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_adUnitId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___1_error));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___2_message;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsShowFailure_m2C7899801458CC1294374734D8EBEDB77224A201 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_adUnitId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___1_error));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___2_message;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsShowStart_m5B3255A6BB9D820B49576244D99C46B8FC7FF013 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128FB5F88B29C5298C7F2A952C57F03FC90A2663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adUnitId.Equals(_adUnitId))
		String_t* L_0 = ___0_adUnitId;
		String_t* L_1 = __this->____adUnitId_7;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral128FB5F88B29C5298C7F2A952C57F03FC90A2663, NULL);
		// PauseGame(); // Pause the game when the ad starts.
		RewardedAdsButton_PauseGame_m2D4302C4734166FA24600D41BE17DC2CB2856928(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void RewardedAdsButton::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnUnityAdsShowClick_m35249074D745BCB282AB5A6F97025B295E6C1026 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, String_t* ___0_adUnitId, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void RewardedAdsButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_OnDestroy_m4A641574C793D2EC8FA2E6A6571F13057AEE1297 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	{
		// _showAdButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____showAdButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_PauseGame_m2D4302C4734166FA24600D41BE17DC2CB2856928 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	{
		// isAdShowing = true;
		__this->___isAdShowing_8 = (bool)1;
		// Time.timeScale = 0f; // Pause the game by setting the time scale to zero.
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton_ResumeGame_m49C30C178E9FCF6D368CDEC07FC5D8C59FEFA9BC (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	{
		// isAdShowing = false;
		__this->___isAdShowing_8 = (bool)0;
		// Time.timeScale = 1f; // Resume the game by setting the time scale to its normal value.
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void RewardedAdsButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdsButton__ctor_mAB85308CCFA6B70628CAEDBBA4E060AB102EB103 (RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string _androidAdUnitId = "Rewarded_Android";
		__this->____androidAdUnitId_5 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_5), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		// [SerializeField] string _iOSAdUnitId = "Rewarded_iOS";
		__this->____iOSAdUnitId_6 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdUnitId_6), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
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
// System.Void AdsInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_Awake_m04671CB71AEE8EF08CC710D12FA78A141067E377 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	{
		// InitializeAds();
		AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameId = _androidGameId;
		String_t* L_0 = __this->____androidGameId_4;
		__this->____gameId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameId_7), (void*)L_0);
		// if (!Advertisement.isInitialized && Advertisement.isSupported)
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Advertisement_get_isInitialized_m91E4922DA136C2D13868A1B8F4BDC5CDEFBA6284(NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Advertisement_get_isSupported_mB5C493696A3AF825A4CB2EDD59433E41E9F270A9(NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// Advertisement.Initialize(_gameId, _testMode, this);
		String_t* L_3 = __this->____gameId_7;
		bool L_4 = __this->____testMode_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343(L_3, L_4, __this, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationComplete_m6242C2C23BE6944E499C403BA6A3CD57BC0D7A7F (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Unity Ads initialization complete.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676, NULL);
		// Rad.LoadAd();
		RewardedAdsButton_t6F6B78F497E78CB9A5C3F9F3BFE0B94D6BC0796B* L_0 = __this->___Rad_8;
		NullCheck(L_0);
		RewardedAdsButton_LoadAd_mD4F4DAB5F657FC7CF37B560F86BC19893BB0A6AC(L_0, NULL);
		// Bad.LoadBanner();
		BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* L_1 = __this->___Bad_9;
		NullCheck(L_1);
		BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD(L_1, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationFailed_m09D61E0D7B4209B86ECB588A714B59680997410C (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
		Il2CppFakeBox<int32_t> L_0(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, (&___0_error));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259, L_1, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer__ctor_m99EF1AA6834703CA8F5F965F86A325105DA88A46 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] bool _testMode = true;
		__this->____testMode_6 = (bool)1;
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
// CameraFollow CameraFollow::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* CameraFollow_get_Instance_m2F48A897DB7ECBB452132BB17D6011EDFE62704B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_0 = ((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void CameraFollow::set_Instance(CameraFollow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_m94F9CA541ED316A81F8486688AFD2DF049CBA2F2 (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_0 = ___0_value;
		((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void CameraFollow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Awake_mB8C3E610F559E2F0844D797D843BC52EF5A85B8F (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_0;
		L_0 = CameraFollow_get_Instance_m2F48A897DB7ECBB452132BB17D6011EDFE62704B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		CameraFollow_set_Instance_m94F9CA541ED316A81F8486688AFD2DF049CBA2F2_inline(__this, NULL);
	}

IL_0013:
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_8), (void*)L_2);
		// mainCamera.transform.position = initialCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___mainCamera_8;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___initialCameraPosition_10;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// initialSize = mainCamera.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___mainCamera_8;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_6, NULL);
		__this->___initialSize_9 = L_7;
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_mFE010EED058E2CE97530268AC64A2C071D5F853A (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (player != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		// float targetCameraY = player.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___player_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// Vector3 targetPosition = mainCamera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___mainCamera_8;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_1 = L_7;
		// targetPosition.y = Mathf.Lerp(mainCamera.transform.position.y, targetCameraY, followSpeed * Time.deltaTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___mainCamera_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = V_0;
		float L_13 = __this->___followSpeed_7;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		(&V_1)->___y_3 = L_15;
		// mainCamera.transform.position = targetPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___mainCamera_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void CameraFollow::ZoomOutUntilTwoTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_ZoomOutUntilTwoTransforms_m09200299FFEAD07D997020339B31E165F1E996BA (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ZoomOutCoroutine());
		RuntimeObject* L_0;
		L_0 = CameraFollow_ZoomOutCoroutine_mED108DF4FBC510ADAB6A18BE6056CEB3CFCA0215(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraFollow::ZoomOutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraFollow_ZoomOutCoroutine_mED108DF4FBC510ADAB6A18BE6056CEB3CFCA0215 (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* L_0 = (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D*)il2cpp_codegen_object_new(U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CZoomOutCoroutineU3Ed__13__ctor_mE9C1B90CC9A191D6CD11DEBE9648BB9287FA8207(L_0, 0, NULL);
		U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Single CameraFollow::CalculateTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollow_CalculateTargetSize_m7C2CEB07187EF1F0FA859D849BD0005263913B2A (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Bounds bounds = new Bounds(player.position, Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_1, L_2, NULL);
		// bounds.Encapsulate(ground.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___ground_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F((&V_0), L_4, NULL);
		// float distance = bounds.size.y / (2f * Mathf.Tan(mainCamera.fieldOfView * 0.5f * Mathf.Deg2Rad));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_6 = L_5.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___mainCamera_8;
		NullCheck(L_7);
		float L_8;
		L_8 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_7, NULL);
		float L_9;
		L_9 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (0.5f))), (0.0174532924f))));
		// return targetSize;
		return ((float)(L_6/((float)il2cpp_codegen_multiply((2.0f), L_9))));
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m113CC547D419EF599BC487F0F44B06BB2D4EE11B (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// public float followSpeed = 5f; // The speed at which the camera follows the player
		__this->___followSpeed_7 = (5.0f);
		// public Vector3 initialCameraPosition = new Vector3(0f, 10f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		__this->___initialCameraPosition_10 = L_0;
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
// System.Void CameraFollow/<ZoomOutCoroutine>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomOutCoroutineU3Ed__13__ctor_mE9C1B90CC9A191D6CD11DEBE9648BB9287FA8207 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraFollow/<ZoomOutCoroutine>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomOutCoroutineU3Ed__13_System_IDisposable_Dispose_m317B79490DCF1587AFDAEFDE1888898384E0B424 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraFollow/<ZoomOutCoroutine>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZoomOutCoroutineU3Ed__13_MoveNext_mB5A32F574752256668AF8C48A9780E33BDF43583 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float startTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__2_3 = L_4;
		// float duration = 1.0f; // You can adjust the duration of the zoom-out animation here
		__this->___U3CdurationU3E5__3_4 = (1.0f);
		// float startSize = mainCamera.orthographicSize;
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_5 = V_1;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___mainCamera_8;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_6, NULL);
		__this->___U3CstartSizeU3E5__4_5 = L_7;
		// float targetSize = CalculateTargetSize();
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_8 = V_1;
		NullCheck(L_8);
		float L_9;
		L_9 = CameraFollow_CalculateTargetSize_m7C2CEB07187EF1F0FA859D849BD0005263913B2A(L_8, NULL);
		__this->___U3CtargetSizeU3E5__5_6 = L_9;
		goto IL_009b;
	}

IL_0053:
	{
		// float t = (Time.time - startTime) / duration;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_11 = __this->___U3CstartTimeU3E5__2_3;
		float L_12 = __this->___U3CdurationU3E5__3_4;
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_10, L_11))/L_12));
		// mainCamera.orthographicSize = Mathf.Lerp(startSize, targetSize, t);
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_13 = V_1;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = L_13->___mainCamera_8;
		float L_15 = __this->___U3CstartSizeU3E5__4_5;
		float L_16 = __this->___U3CtargetSizeU3E5__5_6;
		float L_17 = V_2;
		float L_18;
		L_18 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_16, L_17, NULL);
		NullCheck(L_14);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_14, L_18, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009b:
	{
		// while (Time.time - startTime < duration)
		float L_19;
		L_19 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_20 = __this->___U3CstartTimeU3E5__2_3;
		float L_21 = __this->___U3CdurationU3E5__3_4;
		if ((((float)((float)il2cpp_codegen_subtract(L_19, L_20))) < ((float)L_21)))
		{
			goto IL_0053;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object CameraFollow/<ZoomOutCoroutine>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CZoomOutCoroutineU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m72237DFAC75F0A35519CA6EC575FE02D3FFB0B49 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraFollow/<ZoomOutCoroutine>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomOutCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mF7BBDC751B81B611862E73E3AC04641500B4783C (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomOutCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mF7BBDC751B81B611862E73E3AC04641500B4783C_RuntimeMethod_var)));
	}
}
// System.Object CameraFollow/<ZoomOutCoroutine>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CZoomOutCoroutineU3Ed__13_System_Collections_IEnumerator_get_Current_mBB71D6FE55D1A8896DDA9906A43697AE8F01D852 (U3CZoomOutCoroutineU3Ed__13_tF43026F32D6AE1FD16D272EAB1A47302CA57424D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MovingPlatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_Start_m9914EE0A6A01DDDC4EB8217C5B9A228C0C99AD93 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveSpeed = speedOptions[Random.Range(0, speedOptions.Length)];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___speedOptions_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___speedOptions_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		float L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___moveSpeed_11 = L_4;
		// platformRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___platformRenderer_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformRenderer_12), (void*)L_5);
		// originalColor = platformRenderer.material.color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->___platformRenderer_12;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_7, NULL);
		__this->___originalColor_13 = L_8;
		// }
		return;
	}
}
// System.Void MovingPlatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_Update_mB9FF010491E49D66F773CD25A878874D10ECDF58 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (isMoving)
		bool L_0 = __this->___isMoving_10;
		if (!L_0)
		{
			goto IL_00a6;
		}
	}
	{
		// Vector3 currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 targetPosition = new Vector3(0f, currentPosition.y, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.0f), L_4, (0.0f), NULL);
		// float distanceToTarget = Vector3.Distance(targetPosition, currentPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_6, NULL);
		// if (distanceToTarget > stopDistance)
		float L_8 = __this->___stopDistance_5;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0086;
		}
	}
	{
		// Vector3 moveDirection = (targetPosition - currentPosition).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		V_3 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_12;
		// moveDirection.y = 0f;
		(&V_2)->___y_3 = (0.0f);
		// transform.position += moveDirection * moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = __this->___moveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_20, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_21, NULL);
		return;
	}

IL_0086:
	{
		// transform.position = targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// isMoving = false;
		__this->___isMoving_10 = (bool)0;
		// StartCoroutine(FlashEffect());
		RuntimeObject* L_24;
		L_24 = MovingPlatform_FlashEffect_mBF6B7C80B09E1C1ED9CF266FE70B44FD57714647(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_24, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MovingPlatform::FlashEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingPlatform_FlashEffect_mBF6B7C80B09E1C1ED9CF266FE70B44FD57714647 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* L_0 = (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906*)il2cpp_codegen_object_new(U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFlashEffectU3Ed__12__ctor_mFB0D94DEB3806A98824170FDB4D989922F44E25A(L_0, 0, NULL);
		U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MovingPlatform::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_OnCollisionEnter_m8952EBC06646AE6DEEAD5BCFFCB7444FA30A8C87 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isMoving = false;
		__this->___isMoving_10 = (bool)0;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MovingPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_OnTriggerEnter_mF7526BE6636525A708585B971F917D5C25BFCB15 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Enemy"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// PlayerJump.Instance.GameOver();
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_2;
		L_2 = PlayerJump_get_Instance_m9717DB654FF33203AF45A86380EFFC180057E248_inline(NULL);
		NullCheck(L_2);
		PlayerJump_GameOver_m5B687658C6A98A0961A8E83D6849FBE8845BAD8E(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void MovingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform__ctor_m5C990ED2F574567F2C5AF2F4F878C60899E2ADDA (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63AE1933A0AF1A7EF8EE5B02EBA859BF9E63FEC833304330F13B3C4235439FED_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] speedOptions = { 5, 6, 8, 10};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63AE1933A0AF1A7EF8EE5B02EBA859BF9E63FEC833304330F13B3C4235439FED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___speedOptions_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speedOptions_4), (void*)L_1);
		// public float stopDistance = 0.1f;
		__this->___stopDistance_5 = (0.100000001f);
		// public Color flashColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___flashColor_6 = L_3;
		// public float flashDuration = 0.5f;
		__this->___flashDuration_7 = (0.5f);
		// public Vector3 targetScale = new Vector3(1.5f, 1.5f, 1f); // The target scale for the object
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (1.5f), (1.5f), (1.0f), /*hidden argument*/NULL);
		__this->___targetScale_9 = L_4;
		// private bool isMoving = true;
		__this->___isMoving_10 = (bool)1;
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
// System.Void MovingPlatform/<FlashEffect>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashEffectU3Ed__12__ctor_mFB0D94DEB3806A98824170FDB4D989922F44E25A (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MovingPlatform/<FlashEffect>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashEffectU3Ed__12_System_IDisposable_Dispose_m482FA1AD884DB02786FB9527829B9865263852B2 (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MovingPlatform/<FlashEffect>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlashEffectU3Ed__12_MoveNext_mE94BF0178E6216B3F2226B3806E6CFCE57449A63 (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isMoving = false;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isMoving_10 = (bool)0;
		// Vector3 initialScale = objectToScale.transform.localScale;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___objectToScale_8;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		__this->___U3CinitialScaleU3E5__2_3 = L_8;
		// float timer = 0f;
		__this->___U3CtimerU3E5__3_4 = (0.0f);
		goto IL_00d3;
	}

IL_004e:
	{
		// platformRenderer.material.color = Color.Lerp(originalColor, flashColor, timer / flashDuration);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_9 = V_1;
		NullCheck(L_9);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = L_9->___platformRenderer_12;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_12 = V_1;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12->___originalColor_13;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_14 = V_1;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = L_14->___flashColor_6;
		float L_16 = __this->___U3CtimerU3E5__3_4;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___flashDuration_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_13, L_15, ((float)(L_16/L_18)), NULL);
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_19, NULL);
		// objectToScale.transform.localScale = Vector3.Lerp(initialScale, targetScale, timer / flashDuration);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___objectToScale_8;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___U3CinitialScaleU3E5__2_3;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_24 = V_1;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___targetScale_9;
		float L_26 = __this->___U3CtimerU3E5__3_4;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___flashDuration_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_25, ((float)(L_26/L_28)), NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_29, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ba:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timer += Time.deltaTime;
		float L_30 = __this->___U3CtimerU3E5__3_4;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__3_4 = ((float)il2cpp_codegen_add(L_30, L_31));
	}

IL_00d3:
	{
		// while (timer < flashDuration)
		float L_32 = __this->___U3CtimerU3E5__3_4;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->___flashDuration_7;
		if ((((float)L_32) < ((float)L_34)))
		{
			goto IL_004e;
		}
	}
	{
		// platformRenderer.material.color = originalColor;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_35 = V_1;
		NullCheck(L_35);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = L_35->___platformRenderer_12;
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_38 = V_1;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = L_38->___originalColor_13;
		NullCheck(L_37);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_37, L_39, NULL);
		// objectToScale.transform.localScale = targetScale;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_40 = V_1;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___objectToScale_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_43 = V_1;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43->___targetScale_9;
		NullCheck(L_42);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_42, L_44, NULL);
		// objectToScale.SetActive(false);
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_45 = V_1;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_45->___objectToScale_8;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// isMoving = true;
		MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* L_47 = V_1;
		NullCheck(L_47);
		L_47->___isMoving_10 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object MovingPlatform/<FlashEffect>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashEffectU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E7B2BAF08794A3B6613C42075F09A3AC106E504 (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MovingPlatform/<FlashEffect>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashEffectU3Ed__12_System_Collections_IEnumerator_Reset_mF9963367D576C83B741D7B33A65A9D6BAF48039E (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlashEffectU3Ed__12_System_Collections_IEnumerator_Reset_mF9963367D576C83B741D7B33A65A9D6BAF48039E_RuntimeMethod_var)));
	}
}
// System.Object MovingPlatform/<FlashEffect>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashEffectU3Ed__12_System_Collections_IEnumerator_get_Current_mF4DC4F9A7B941836464A359FC4FF5EC49D97858F (U3CFlashEffectU3Ed__12_t2FC085BD73D7D8FEE4C3DBE8EC73830977665906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// ObjectSpawner ObjectSpawner::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectSpawner Instance { get; private set; }
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ObjectSpawner::set_Instance(ObjectSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_Instance_m99A6279801A6DDD9FAC5206EF8F5B79E1C5AA9AE (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectSpawner Instance { get; private set; }
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0 = ___0_value;
		((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void ObjectSpawner::add_OnPlatformStoppedMoving(ObjectSpawner/PlatformStoppedMoving)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_add_OnPlatformStoppedMoving_m214A04ADD9F8855527EF3DA9421AEA77C225C008 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_0 = NULL;
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_1 = NULL;
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_2 = NULL;
	{
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_0 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10;
		V_0 = L_0;
	}

IL_0006:
	{
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_1 = V_0;
		V_1 = L_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_2 = V_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)CastclassSealed((RuntimeObject*)L_4, PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756_il2cpp_TypeInfo_var));
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_5 = V_2;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_6 = V_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*>((&((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10), L_5, L_6);
		V_0 = L_7;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_8 = V_0;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)L_8) == ((RuntimeObject*)(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectSpawner::remove_OnPlatformStoppedMoving(ObjectSpawner/PlatformStoppedMoving)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_remove_OnPlatformStoppedMoving_mD86D34A25FAF9C9F31C53954D6E588837E665665 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_0 = NULL;
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_1 = NULL;
	PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* V_2 = NULL;
	{
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_0 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10;
		V_0 = L_0;
	}

IL_0006:
	{
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_1 = V_0;
		V_1 = L_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_2 = V_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)CastclassSealed((RuntimeObject*)L_4, PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756_il2cpp_TypeInfo_var));
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_5 = V_2;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_6 = V_1;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*>((&((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10), L_5, L_6);
		V_0 = L_7;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_8 = V_0;
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)L_8) == ((RuntimeObject*)(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectSpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Awake_m4CAB7A5201CAF72D44C72310AC38344AE34CEB6E (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0;
		L_0 = ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		ObjectSpawner_set_Instance_m99A6279801A6DDD9FAC5206EF8F5B79E1C5AA9AE_inline(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::StartSpawningObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_StartSpawningObjects_mD1583099BAEF23047E0B1AE3BA61416F65398E9A (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral288310EB888FB4F0F02A786171C9D52D06805B57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83CA01DC025DBCB894F954AFBBEB94D17EC03B18);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (shouldStopSpawning)
		bool L_0 = __this->___shouldStopSpawning_13;
		if (!L_0)
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
		// if (objectsSpawned < numberOfObjectsToSpawn)
		int32_t L_1 = __this->___objectsSpawned_11;
		int32_t L_2 = __this->___numberOfObjectsToSpawn_6;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_00a5;
		}
	}
	{
		// isSpawning = true;
		__this->___isSpawning_12 = (bool)1;
		// Transform spawnPoint = spawnPoints[objectsSpawned % spawnPoints.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___spawnPoints_5;
		int32_t L_4 = __this->___objectsSpawned_11;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___spawnPoints_5;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// Debug.Log("Current Object Prefab: " + currentObjectPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___currentObjectPrefab_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		G_B4_0 = L_9;
		G_B4_1 = _stringLiteral288310EB888FB4F0F02A786171C9D52D06805B57;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = _stringLiteral288310EB888FB4F0F02A786171C9D52D06805B57;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_004f;
	}

IL_004a:
	{
		NullCheck(G_B5_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
	}

IL_004f:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// GameObject newPlatform = Instantiate(shopManager.Instance.objectPrefabs[shopManager.Instance.currentIndex], spawnPoint.position, spawnPoint.rotation);
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_12;
		L_12 = shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline(NULL);
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = L_12->___objectPrefabs_8;
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_14;
		L_14 = shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline(NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___currentIndex_5;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_0;
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_19, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_22;
		// objectsSpawned++;
		int32_t L_23 = __this->___objectsSpawned_11;
		__this->___objectsSpawned_11 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// MoveSpawnPoints();
		ObjectSpawner_MoveSpawnPoints_mC1763E60067378288E9B9EC39808E8008CF1881C(__this, NULL);
		// lastSpawnPosition = newPlatform.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_1;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		__this->___lastSpawnPosition_15 = L_26;
	}

IL_00a5:
	{
		// if (objectsSpawned < numberOfObjectsToSpawn)
		int32_t L_27 = __this->___objectsSpawned_11;
		int32_t L_28 = __this->___numberOfObjectsToSpawn_6;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_00d2;
		}
	}
	{
		// float nextSpawnDelay = Random.Range(minDelayBetweenSpawns, maxDelayBetweenSpawns);
		float L_29 = __this->___minDelayBetweenSpawns_7;
		float L_30 = __this->___maxDelayBetweenSpawns_8;
		float L_31;
		L_31 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_29, L_30, NULL);
		V_2 = L_31;
		// Invoke(nameof(StartSpawningObjects), nextSpawnDelay);
		float L_32 = V_2;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral83CA01DC025DBCB894F954AFBBEB94D17EC03B18, L_32, NULL);
		return;
	}

IL_00d2:
	{
		// isSpawning = false;
		__this->___isSpawning_12 = (bool)0;
		// }
		return;
	}
}
// System.Void ObjectSpawner::MoveSpawnPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_MoveSpawnPoints_mC1763E60067378288E9B9EC39808E8008CF1881C (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var spawnPoint in spawnPoints)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___spawnPoints_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0037;
	}

IL_000b:
	{
		// foreach (var spawnPoint in spawnPoints)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// spawnPoint.position += new Vector3(0f, yMoveDistance, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = __this->___yMoveDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		// foreach (var spawnPoint in spawnPoints)
		int32_t L_11 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::SpawnObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnObjects_m84DF372163BC307560521FA66D3E6E2851590E62 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (objectsSpawned < numberOfObjectsToSpawn)
		int32_t L_0 = __this->___objectsSpawned_11;
		int32_t L_1 = __this->___numberOfObjectsToSpawn_6;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_009f;
		}
	}
	{
		// Transform spawnPoint = spawnPoints[objectsSpawned % spawnPoints.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___spawnPoints_5;
		int32_t L_3 = __this->___objectsSpawned_11;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___spawnPoints_5;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// GameObject newPlatform = Instantiate(shopManager.Instance.objectPrefabs[shopManager.Instance.currentIndex], lastSpawnPosition + new Vector3(0f, yMoveDistance, 0f), spawnPoint.rotation);
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_7;
		L_7 = shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline(NULL);
		NullCheck(L_7);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = L_7->___objectPrefabs_8;
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_9;
		L_9 = shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline(NULL);
		NullCheck(L_9);
		int32_t L_10 = L_9->___currentIndex_5;
		NullCheck(L_8);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___lastSpawnPosition_15;
		float L_14 = __this->___yMoveDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_12, L_16, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_19;
		// lastSpawnPosition = newPlatform.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		__this->___lastSpawnPosition_15 = L_22;
		// MoveSpawnPoints();
		ObjectSpawner_MoveSpawnPoints_mC1763E60067378288E9B9EC39808E8008CF1881C(__this, NULL);
		// objectsSpawned++;
		int32_t L_23 = __this->___objectsSpawned_11;
		__this->___objectsSpawned_11 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// if (OnPlatformStoppedMoving != null)
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_24 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10;
		if (!L_24)
		{
			goto IL_009f;
		}
	}
	{
		// OnPlatformStoppedMoving();
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* L_25 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___OnPlatformStoppedMoving_10;
		NullCheck(L_25);
		PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_inline(L_25, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Update_m9F373E88B27396D6EC93ACFF2EAFFDC63833BDE8 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// if (isSpawning)
		bool L_0 = __this->___isSpawning_12;
		// return;
		return;
	}
}
// System.Void ObjectSpawner::StopSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_StopSpawning_mD99711FD11A81A81A3E5E9C877894D5DC53F9EE4 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// shouldStopSpawning = true;
		__this->___shouldStopSpawning_13 = (bool)1;
		// }
		return;
	}
}
// System.Void ObjectSpawner::SetObjectPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) 
{
	{
		// currentObjectPrefab = prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_prefab;
		__this->___currentObjectPrefab_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjectPrefab_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void ObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner__ctor_mF75EFE9AB26EAEF6D1995A34FB35C2BDE08A083C (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// public int numberOfObjectsToSpawn = 1000;
		__this->___numberOfObjectsToSpawn_6 = ((int32_t)1000);
		// public float minDelayBetweenSpawns = 0.5f;
		__this->___minDelayBetweenSpawns_7 = (0.5f);
		// public float maxDelayBetweenSpawns = 2f;
		__this->___maxDelayBetweenSpawns_8 = (2.0f);
		// public float yMoveDistance = 1f;
		__this->___yMoveDistance_9 = (1.0f);
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
void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_Multicast(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* currentDelegate = reinterpret_cast<PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_OpenInst(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_OpenStatic(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_OpenStaticInvoker(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_ClosedStaticInvoker(PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ObjectSpawner/PlatformStoppedMoving::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformStoppedMoving__ctor_m9FA31299F83B97DE1A76947923088AF185DAF56D (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_Multicast;
}
// System.Void ObjectSpawner/PlatformStoppedMoving::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ObjectSpawner/PlatformStoppedMoving::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformStoppedMoving_BeginInvoke_mEA056387665403BB1A115648248D59702AC6C9B8 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void ObjectSpawner/PlatformStoppedMoving::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformStoppedMoving_EndInvoke_m98FC28ABE58AAAB7360A11BF771F5A432747DE72 (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerBluePrint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBluePrint__ctor_m4990C5056F96E396021F6E69E2005B30CA98CA89 (PlayerBluePrint_t4AE28BE1274B98B63271D5B2FCE9780DBE650A9D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// PlayerJump PlayerJump::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* PlayerJump_get_Instance_m9717DB654FF33203AF45A86380EFFC180057E248 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PlayerJump Instance { get; private set; }
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_0 = ((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void PlayerJump::set_Instance(PlayerJump)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_set_Instance_m8B134EAB8EDFE042C21863F9EDDD36296BFB5ED8 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PlayerJump Instance { get; private set; }
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_0 = ___0_value;
		((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Void PlayerJump::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_Awake_m52F2186DA9989EA0A4E66180165DF4814D95ED57 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_17), (void*)L_0);
		// if (Instance == null)
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_1;
		L_1 = PlayerJump_get_Instance_m9717DB654FF33203AF45A86380EFFC180057E248_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		PlayerJump_set_Instance_m8B134EAB8EDFE042C21863F9EDDD36296BFB5ED8_inline(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PlayerJump::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_Start_m2F8EF00CC20A78DDB71033FBBAB53C1F9D842B9B (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highScore = PlayerPrefs.GetInt("HighScore", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		__this->___highScore_21 = L_0;
		// UpdateHighScoreText();
		PlayerJump_UpdateHighScoreText_m5F516B5433C1B3780772549C46D3458A12AE4463(__this, NULL);
		// UpdateScoreText();
		PlayerJump_UpdateScoreText_mEB5770196F0D7072FB8F606315B3A3536DCBD1CF(__this, NULL);
		// objectRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___objectRenderer_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectRenderer_24), (void*)L_1);
		// deadEffect.mute = PlayerPrefs.GetInt("SFXMute", 0) == 1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___deadEffect_15;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E, 0, NULL);
		NullCheck(L_2);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_2, (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0), NULL);
		// jumpEffectSound.mute = PlayerPrefs.GetInt("SFXMute", 0) == 1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___jumpEffectSound_14;
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E, 0, NULL);
		NullCheck(L_4);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_4, (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_Update_mA6A3D33CF1BFE5B84BACA1B35EB2657B17007477 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isGrounded && canJump && !isGameOver && (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began ||
		//                                               Input.GetMouseButtonDown(0)))
		bool L_0 = __this->___isGrounded_23;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = __this->___canJump_18;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		bool L_2 = __this->___isGameOver_19;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3;
		L_3 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0030:
	{
		bool L_6;
		L_6 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}

IL_0038:
	{
		// Jump();
		PlayerJump_Jump_mD3E275A2F9182BF60855730C4C1E0121B89BDB7D(__this, NULL);
	}

IL_003e:
	{
		// if (rb.velocity.y < 0)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_17;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// rb.velocity += Vector3.up * Physics.gravity.y * (fallMultiplier - 1) * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_17;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_15, NULL);
		float L_17 = __this->___fallMultiplier_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, ((float)il2cpp_codegen_subtract(L_17, (1.0f))), NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_20, NULL);
		NullCheck(L_11);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_21, NULL);
		return;
	}

IL_009b:
	{
		// else if (rb.velocity.y > 0 && !Input.GetMouseButton(0))
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___rb_17;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_22, NULL);
		float L_24 = L_23.___y_3;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		bool L_25;
		L_25 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_25)
		{
			goto IL_00ff;
		}
	}
	{
		// rb.velocity += Vector3.up * Physics.gravity.y * (lowJumpMultiplier - 1) * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = __this->___rb_17;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = L_26;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_31, NULL);
		float L_33 = __this->___lowJumpMultiplier_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, ((float)il2cpp_codegen_subtract(L_33, (1.0f))), NULL);
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_36, NULL);
		NullCheck(L_27);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_27, L_37, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void PlayerJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_Jump_mD3E275A2F9182BF60855730C4C1E0121B89BDB7D (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF32812866CFA3032008E13841948E28B01EBAC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (canJump)
		bool L_0 = __this->___canJump_18;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_3 = __this->___jumpForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_1, L_4, 1, NULL);
		// canJump = false; // Prevent further jumps until the cooldown is over
		__this->___canJump_18 = (bool)0;
		// score++;
		int32_t L_5 = __this->___score_20;
		__this->___score_20 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// UpdateScoreText();
		PlayerJump_UpdateScoreText_mEB5770196F0D7072FB8F606315B3A3536DCBD1CF(__this, NULL);
		// jumpEffectSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___jumpEffectSound_14;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// Invoke(nameof(EnableJump), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralCF32812866CFA3032008E13841948E28B01EBAC5, (0.5f), NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void PlayerJump::EnableJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_EnableJump_m79159AEE9DC204D55E96B0E635FAB4FFD2B0E6BB (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	{
		// canJump = true;
		__this->___canJump_18 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayerJump::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_OnCollisionEnter_m8ECBA12C19EE1D190130D737BA048C6BF8198D9C (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Ground"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_23 = (bool)1;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PlayerJump::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_StartGame_m19670AA15385CD03797FD69610AABAB803200C39 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	{
		// startMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startMenuUI_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// inGameUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___inGameUI_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// canJump = true;
		__this->___canJump_18 = (bool)1;
		// ObjectSpawner.Instance.StartSpawningObjects();
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_2;
		L_2 = ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F_inline(NULL);
		NullCheck(L_2);
		ObjectSpawner_StartSpawningObjects_mD1583099BAEF23047E0B1AE3BA61416F65398E9A(L_2, NULL);
		// shopUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___shopUI_11;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_GameOver_m5B687658C6A98A0961A8E83D6849FBE8845BAD8E (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGameOver = true;
		__this->___isGameOver_19 = (bool)1;
		// ObjectSpawner.Instance.StopSpawning();
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0;
		L_0 = ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F_inline(NULL);
		NullCheck(L_0);
		ObjectSpawner_StopSpawning_mD99711FD11A81A81A3E5E9C877894D5DC53F9EE4(L_0, NULL);
		// gameOverUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameOverUI_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// if (score > highScore)
		int32_t L_2 = __this->___score_20;
		int32_t L_3 = __this->___highScore_21;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		// highScore = score;
		int32_t L_4 = __this->___score_20;
		__this->___highScore_21 = L_4;
		// PlayerPrefs.SetInt("HighScore", highScore);
		int32_t L_5 = __this->___highScore_21;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_5, NULL);
		// UpdateHighScoreText();
		PlayerJump_UpdateHighScoreText_m5F516B5433C1B3780772549C46D3458A12AE4463(__this, NULL);
	}

IL_004d:
	{
		// betterZoomOut();
		PlayerJump_betterZoomOut_m0F07B7166AF99EB9F74803173FD89531F5F5606C(__this, NULL);
		// deadEffect.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___deadEffect_15;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::RestartImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_RestartImmediate_m4C39CAAE1229AEF8FA6B8AD1FD86720482619528 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_16;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::UpdateScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_UpdateScoreText_mEB5770196F0D7072FB8F606315B3A3536DCBD1CF (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_1 = NULL;
	{
		// scoreText.text = "" + score;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_12;
		int32_t* L_1 = (int32_t*)(&__this->___score_20);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void PlayerJump::UpdateHighScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_UpdateHighScoreText_m5F516B5433C1B3780772549C46D3458A12AE4463 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highScoreText.text = "High Score: " + highScore;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___highScoreText_13;
		int32_t* L_1 = (int32_t*)(&__this->___highScore_21);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void PlayerJump::betterZoomOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_betterZoomOut_m0F07B7166AF99EB9F74803173FD89531F5F5606C (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	{
		// if (score > 10)
		int32_t L_0 = __this->___score_20;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0014;
		}
	}
	{
		// CameraFollow.Instance.ZoomOutUntilTwoTransforms();
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_1;
		L_1 = CameraFollow_get_Instance_m2F48A897DB7ECBB452132BB17D6011EDFE62704B_inline(NULL);
		NullCheck(L_1);
		CameraFollow_ZoomOutUntilTwoTransforms_m09200299FFEAD07D997020339B31E165F1E996BA(L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void PlayerJump::PlayerShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_PlayerShop_mE99D5A7EF468A3823F06953C9BE3227FA3A9E242 (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	{
		// shopUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shopUI_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// startMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___startMenuUI_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::closeShopUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_closeShopUI_m2D396D49DE3F758B33296052286C9840BEC2276B (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	{
		// shopUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shopUI_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// startMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___startMenuUI_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::ToggleSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump_ToggleSFX_mC24725B312A21B674D15633B802995FAFE77CBDB (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	{
		// deadEffect.mute = !deadEffect.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___deadEffect_15;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___deadEffect_15;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_1, NULL);
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// jumpEffectSound.mute = !jumpEffectSound.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___jumpEffectSound_14;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___jumpEffectSound_14;
		NullCheck(L_4);
		bool L_5;
		L_5 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_4, NULL);
		NullCheck(L_3);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// PlayerPrefs.SetInt("SFXMute", deadEffect.mute ? 1 : 0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___deadEffect_15;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_6, NULL);
		G_B1_0 = _stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E;
		if (L_7)
		{
			G_B2_0 = _stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E;
			goto IL_0047;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0048:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B3_1, G_B3_0, NULL);
		// PlayerPrefs.SetInt("SFXMute", jumpEffectSound.mute ? 1 : 0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___jumpEffectSound_14;
		NullCheck(L_8);
		bool L_9;
		L_9 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_8, NULL);
		G_B4_0 = _stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E;
		if (L_9)
		{
			G_B5_0 = _stringLiteral6DEE84736F17423E76C02DD8D7779694E9A9D98E;
			goto IL_0062;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0063;
	}

IL_0062:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0063:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B6_1, G_B6_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void PlayerJump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJump__ctor_mEFC508A3B07C39BC7EA61CC9BB0BD67F0E22C0AF (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46D7F5973DA73213E6E816F18CC53EE688971F89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float jumpForce = 5f;
		__this->___jumpForce_4 = (5.0f);
		// public float fallMultiplier = 2.5f;
		__this->___fallMultiplier_5 = (2.5f);
		// public float lowJumpMultiplier = 2f;
		__this->___lowJumpMultiplier_6 = (2.0f);
		// public string sceneName = "YourSceneNameHere";
		__this->___sceneName_16 = _stringLiteral46D7F5973DA73213E6E816F18CC53EE688971F89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneName_16), (void*)_stringLiteral46D7F5973DA73213E6E816F18CC53EE688971F89);
		// private bool isGrounded = true;
		__this->___isGrounded_23 = (bool)1;
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
// shopManager shopManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static shopManager Instance { get; private set; }
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_0 = ((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void shopManager::set_Instance(shopManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_set_Instance_m8C14A6E70860822BB93828F208BE0DC6F59D1B3C (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static shopManager Instance { get; private set; }
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_0 = ___0_value;
		((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void shopManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_Awake_mB44848E82CB006DBE66FACAFC8DE4FCF83ECAD58 (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_0;
		L_0 = shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		shopManager_set_Instance_m8C14A6E70860822BB93828F208BE0DC6F59D1B3C_inline(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void shopManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_Start_mAB6AAC295D14189ACBD787BFAD5ADEB2CD87DA6E (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// currentIndex = PlayerPrefs.GetInt("selectedPlayer", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF, 0, NULL);
		__this->___currentIndex_5 = L_0;
		// foreach (GameObject player in playerModels)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___playerModels_7;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		// foreach (GameObject player in playerModels)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// player.SetActive(false);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		// foreach (GameObject player in playerModels)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// playerModels[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___playerModels_7;
		int32_t L_10 = __this->___currentIndex_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void shopManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_Update_mCCFF3999DECABC4A5F72FA2079E6296F4BCE27BA (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void shopManager::changeNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeNext_m77D2CAACF1E7F21C4BC0B9B29DFD90AA76DB73B4 (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerModels[currentIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___playerModels_7;
		int32_t L_1 = __this->___currentIndex_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// currentIndex++;
		int32_t L_4 = __this->___currentIndex_5;
		__this->___currentIndex_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (currentIndex == playerModels.Length)
		int32_t L_5 = __this->___currentIndex_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___playerModels_7;
		NullCheck(L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// currentIndex = 0;
		__this->___currentIndex_5 = 0;
	}

IL_0038:
	{
		// playerModels[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___playerModels_7;
		int32_t L_8 = __this->___currentIndex_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// PlayerPrefs.SetInt("selectedPlayer", currentIndex);
		int32_t L_11 = __this->___currentIndex_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF, L_11, NULL);
		// objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_12 = __this->___objectSpawner_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___objectPrefabs_8;
		int32_t L_14 = __this->___currentIndex_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40_inline(L_12, L_16, NULL);
		// }
		return;
	}
}
// System.Void shopManager::changePrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changePrevious_m8ABE811A169389463CB711F85898E60E4010AB6A (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerModels[currentIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___playerModels_7;
		int32_t L_1 = __this->___currentIndex_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// currentIndex--;
		int32_t L_4 = __this->___currentIndex_5;
		__this->___currentIndex_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// if (currentIndex < 0)
		int32_t L_5 = __this->___currentIndex_5;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// currentIndex = playerModels.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___playerModels_7;
		NullCheck(L_6);
		__this->___currentIndex_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
	}

IL_003a:
	{
		// playerModels[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___playerModels_7;
		int32_t L_8 = __this->___currentIndex_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// PlayerPrefs.SetInt("selectedPlayer", currentIndex);
		int32_t L_11 = __this->___currentIndex_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF, L_11, NULL);
		// objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_12 = __this->___objectSpawner_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___objectPrefabs_8;
		int32_t L_14 = __this->___currentIndex_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40_inline(L_12, L_16, NULL);
		// }
		return;
	}
}
// System.Void shopManager::ResetPlayerModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_ResetPlayerModel_m836E1DC163E8D423C85FEAE33235002684009CD8 (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentIndex >= 0 && currentIndex < playerModels.Length)
		int32_t L_0 = __this->___currentIndex_5;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = __this->___currentIndex_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___playerModels_7;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// playerModels[currentIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___playerModels_7;
		int32_t L_4 = __this->___currentIndex_5;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_002c:
	{
		// currentIndex = defaultPlayerIndex;
		int32_t L_7 = __this->___defaultPlayerIndex_6;
		__this->___currentIndex_5 = L_7;
		// if (currentIndex >= 0 && currentIndex < playerModels.Length)
		int32_t L_8 = __this->___currentIndex_5;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_9 = __this->___currentIndex_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___playerModels_7;
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// playerModels[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___playerModels_7;
		int32_t L_12 = __this->___currentIndex_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
	}

IL_0064:
	{
		// PlayerPrefs.SetInt("selectedPlayer", currentIndex);
		int32_t L_15 = __this->___currentIndex_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral293DD559D08FF5B13AE455D55EBDAD4A96D3A9BF, L_15, NULL);
		// objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_16 = __this->___objectSpawner_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___objectPrefabs_8;
		int32_t L_18 = __this->___currentIndex_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40_inline(L_16, L_20, NULL);
		// }
		return;
	}
}
// System.Void shopManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager__ctor_m44EB4BED9FAB473621F86D3DFEDAC1C2D32C81D0 (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* __this, const RuntimeMethod* method) 
{
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = ___0_value;
		__this->___U3CloadCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = ___0_value;
		__this->___U3CerrorCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3CclickCallbackU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclickCallbackU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3ChideCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChideCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3CshowCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CshowCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___0_value;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* CameraFollow_get_Instance_m2F48A897DB7ECBB452132BB17D6011EDFE62704B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_0 = ((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_m94F9CA541ED316A81F8486688AFD2DF049CBA2F2_inline (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* L_0 = ___0_value;
		((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* PlayerJump_get_Instance_m9717DB654FF33203AF45A86380EFFC180057E248_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PlayerJump Instance { get; private set; }
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_0 = ((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ObjectSpawner_get_Instance_mA043737EAA0E60B2CE8AB30C4AC79E14FE16CF5F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectSpawner Instance { get; private set; }
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0 = ((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_set_Instance_m99A6279801A6DDD9FAC5206EF8F5B79E1C5AA9AE_inline (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectSpawner Instance { get; private set; }
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_0 = ___0_value;
		((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* shopManager_get_Instance_mE2B7DBD8983844A9A84280361C54A4CBD9FB6BCA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static shopManager Instance { get; private set; }
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_0 = ((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformStoppedMoving_Invoke_m72F26300D531DA407B061F202BB1BF1801E50CD5_inline (PlatformStoppedMoving_t0CEC8734196B188847314994F8B6CEA130334756* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerJump_set_Instance_m8B134EAB8EDFE042C21863F9EDDD36296BFB5ED8_inline (PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PlayerJump Instance { get; private set; }
		PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707* L_0 = ___0_value;
		((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_StaticFields*)il2cpp_codegen_static_fields_for(PlayerJump_t98D2B57E886B15AF3400D8DFCE39DB16D1F28707_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void shopManager_set_Instance_m8C14A6E70860822BB93828F208BE0DC6F59D1B3C_inline (shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static shopManager Instance { get; private set; }
		shopManager_tF65B18946407D091F5C21F53DE82915C014D4730* L_0 = ___0_value;
		((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_StaticFields*)il2cpp_codegen_static_fields_for(shopManager_tF65B18946407D091F5C21F53DE82915C014D4730_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_SetObjectPrefab_m1687FF7A30C594D7970A1F8EC168B25E7ACD1A40_inline (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) 
{
	{
		// currentObjectPrefab = prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_prefab;
		__this->___currentObjectPrefab_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjectPrefab_14), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
