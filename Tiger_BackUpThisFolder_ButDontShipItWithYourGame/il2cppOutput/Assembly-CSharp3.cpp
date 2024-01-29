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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<CompassNavigatorPro.CompassProPOI>
struct Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<CompassNavigatorPro.CompassPro/CompassActiveIcon>
struct List_1_tD7C37CB33538178DD17E80A77C9223D591B0FE44;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// CompassNavigatorPro.LetterAnimator[]
struct LetterAnimatorU5BU5D_tE837694510BD7A067FED663C112B953A18D53CDE;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// CompassNavigatorPro.CompassPro/CompassPointPOI[]
struct CompassPointPOIU5BU5D_t56CE713CC161B40B2308358ED06DE37B15BC9B9B;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// CompassNavigatorPro.CompassButtonHandler
struct CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8;
// CompassNavigatorPro.CompassPro
struct CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B;
// CompassNavigatorPro.CompassProPOI
struct CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// CompassNavigatorProDemos.DiscoverArea
struct DiscoverArea_t6FC8666EA3E819CCF22F295A2F5F04FB2B540996;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// CompassNavigatorProDemos.FreeCameraMove
struct FreeCameraMove_tDEB8581F95B3E769A016AB5F73B7334996E0939D;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// CompassNavigatorPro.LetterAnimator
struct LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714;
// CompassNavigatorProDemos.LevelManager
struct LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// CompassNavigatorPro.MiniMapInteraction
struct MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CompassNavigatorPro.OnAnimationEndDelegate
struct OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518;
// CompassNavigatorPro.OnHeartbeatEvent
struct OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3;
// CompassNavigatorProDemos.POIHeartbeatAnimator
struct POIHeartbeatAnimator_tECC47A616B3AE3CC55ABF6A132319A9DBA4575D7;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4
struct U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13
struct U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral017FE148012E6E5DBE65C3F6C3E7FF111A3ECCA9;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE28F51BD2488B4940EF2B6B5D7C84B5DAADCF0;
IL2CPP_EXTERN_C String_t* _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4E0DB8A252F39A25AD6A011D0EBD96A4EA414DD0;
IL2CPP_EXTERN_C String_t* _stringLiteral6E491217AD26AA9C4175F2D9186C384E3E3F7E70;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C2A2A84028E793FD75B8042666B72F537BC4A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7E283F858CD1DC91E63B8127B247C9652B8DE83;
IL2CPP_EXTERN_C const RuntimeMethod* CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m8281F2C78F2AE9755001A814555B84B4DBEA4A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m1EDB527367ACCD7563E6E0268AE890F036C9D440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_MiniMapClicked_mE2EDE8EB668886934E0735B95A28D60AEBA9A5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_POIClicked_mAC774BB2BB5C4EFC6132A7672BE9160B15F00FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_POIExit_mDE121AF289222F2ECF09C0AC74431CF7562BD0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_POIHover_m639A18BF87915EA713B13044CAB2DCDFBABEEDE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_POIVisited_mE277E36E61BF98457453B25B4B215104C84B6773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* POIHeartbeatAnimator_OnHeartbeatHandler_m6E43398A08DAAD615226A28D40F948F7111D7AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteHandlerU3Ed__4_System_Collections_IEnumerator_Reset_m27E3973E6BDA5FFBDE8035116CF103B00C23B0D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRemovePOIU3Ed__13_System_Collections_IEnumerator_Reset_m26B110E801FAEFC903353769BFED1734A26EE52C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
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

// CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4
struct U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62  : public RuntimeObject
{
	// System.Int32 CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CompassNavigatorPro.CompassButtonHandler CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::<>4__this
	CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* ___U3CU3E4__this_2;
	// UnityEngine.WaitForEndOfFrame CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::<w>5__2
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CwU3E5__2_3;
};

// CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13
struct U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D  : public RuntimeObject
{
	// System.Int32 CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CompassNavigatorPro.CompassProPOI CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::poi
	CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___poi_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// CompassNavigatorPro.Misc
struct Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8  : public RuntimeObject
{
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<CompassNavigatorPro.CompassProPOI>
struct Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
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

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// CompassNavigatorPro.OnAnimationEndDelegate
struct OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518  : public MulticastDelegate_t
{
};

// CompassNavigatorPro.OnHeartbeatEvent
struct OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3  : public MulticastDelegate_t
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// CompassNavigatorPro.CompassButtonHandler
struct CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction CompassNavigatorPro.CompassButtonHandler::actionHandler
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___actionHandler_4;
	// UnityEngine.Coroutine CompassNavigatorPro.CompassButtonHandler::co
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___co_5;
};

// CompassNavigatorPro.CompassPro
struct CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CompassNavigatorPro.CompassPro::_cameraMain
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____cameraMain_4;
	// CompassNavigatorPro.UPDATE_INTERVAL CompassNavigatorPro.CompassPro::_updateInterval
	int32_t ____updateInterval_5;
	// System.Int32 CompassNavigatorPro.CompassPro::_updateIntervalFrameCount
	int32_t ____updateIntervalFrameCount_6;
	// System.Single CompassNavigatorPro.CompassPro::_updateIntervalTime
	float ____updateIntervalTime_7;
	// CompassNavigatorPro.COMPASS_STYLE CompassNavigatorPro.CompassPro::_style
	int32_t ____style_8;
	// System.Single CompassNavigatorPro.CompassPro::_northDegrees
	float ____northDegrees_9;
	// System.Single CompassNavigatorPro.CompassPro::_visibleDistance
	float ____visibleDistance_10;
	// System.Single CompassNavigatorPro.CompassPro::_visibleMinDistance
	float ____visibleMinDistance_11;
	// System.Single CompassNavigatorPro.CompassPro::_nearDistance
	float ____nearDistance_12;
	// System.Single CompassNavigatorPro.CompassPro::_visitedDistance
	float ____visitedDistance_13;
	// System.Single CompassNavigatorPro.CompassPro::_gizmoScale
	float ____gizmoScale_14;
	// System.Single CompassNavigatorPro.CompassPro::_alpha
	float ____alpha_15;
	// System.Boolean CompassNavigatorPro.CompassPro::_autoHide
	bool ____autoHide_16;
	// System.Single CompassNavigatorPro.CompassPro::_fadeDuration
	float ____fadeDuration_17;
	// System.Boolean CompassNavigatorPro.CompassPro::_alwaysVisibleInEditMode
	bool ____alwaysVisibleInEditMode_18;
	// System.Single CompassNavigatorPro.CompassPro::_verticalPosition
	float ____verticalPosition_19;
	// System.Single CompassNavigatorPro.CompassPro::_horizontalPosition
	float ____horizontalPosition_20;
	// System.Single CompassNavigatorPro.CompassPro::_bendAmount
	float ____bendAmount_21;
	// System.Single CompassNavigatorPro.CompassPro::_width
	float ____width_22;
	// System.Single CompassNavigatorPro.CompassPro::_height
	float ____height_23;
	// System.Boolean CompassNavigatorPro.CompassPro::_edgeFadeOut
	bool ____edgeFadeOut_24;
	// System.Boolean CompassNavigatorPro.CompassPro::_edgeFadeOutText
	bool ____edgeFadeOutText_25;
	// System.Single CompassNavigatorPro.CompassPro::_edgeFadeOutWidth
	float ____edgeFadeOutWidth_26;
	// System.Single CompassNavigatorPro.CompassPro::_edgeFadeOutStart
	float ____edgeFadeOutStart_27;
	// System.Single CompassNavigatorPro.CompassPro::_endCapsWidth
	float ____endCapsWidth_28;
	// System.Boolean CompassNavigatorPro.CompassPro::_showCardinalPoints
	bool ____showCardinalPoints_29;
	// System.Boolean CompassNavigatorPro.CompassPro::_showOrdinalPoints
	bool ____showOrdinalPoints_30;
	// System.Single CompassNavigatorPro.CompassPro::_cardinalScale
	float ____cardinalScale_31;
	// System.Single CompassNavigatorPro.CompassPro::_ordinalScale
	float ____ordinalScale_32;
	// System.Single CompassNavigatorPro.CompassPro::_cardinalPointsVerticalOffset
	float ____cardinalPointsVerticalOffset_33;
	// System.Boolean CompassNavigatorPro.CompassPro::_showHalfWinds
	bool ____showHalfWinds_34;
	// System.Single CompassNavigatorPro.CompassPro::_halfWindsHeight
	float ____halfWindsHeight_35;
	// System.Single CompassNavigatorPro.CompassPro::_halfWindsWidth
	float ____halfWindsWidth_36;
	// UnityEngine.Color CompassNavigatorPro.CompassPro::_halfWindsTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____halfWindsTintColor_37;
	// System.Single CompassNavigatorPro.CompassPro::_labelHotZone
	float ____labelHotZone_38;
	// System.Single CompassNavigatorPro.CompassPro::_maxIconSize
	float ____maxIconSize_39;
	// System.Single CompassNavigatorPro.CompassPro::_minIconSize
	float ____minIconSize_40;
	// System.Single CompassNavigatorPro.CompassPro::_scaleInDuration
	float ____scaleInDuration_41;
	// CompassNavigatorPro.WORLD_MAPPING_MODE CompassNavigatorPro.CompassPro::_worldMappingMode
	int32_t ____worldMappingMode_42;
	// System.Single CompassNavigatorPro.CompassPro::_textVerticalPosition
	float ____textVerticalPosition_43;
	// System.Single CompassNavigatorPro.CompassPro::_textScale
	float ____textScale_44;
	// System.Single CompassNavigatorPro.CompassPro::_letterSpacing
	float ____letterSpacing_45;
	// System.Boolean CompassNavigatorPro.CompassPro::_textRevealEnabled
	bool ____textRevealEnabled_46;
	// System.Single CompassNavigatorPro.CompassPro::_textRevealDuration
	float ____textRevealDuration_47;
	// System.Single CompassNavigatorPro.CompassPro::_textRevealLetterDelay
	float ____textRevealLetterDelay_48;
	// System.Single CompassNavigatorPro.CompassPro::_textDuration
	float ____textDuration_49;
	// System.Single CompassNavigatorPro.CompassPro::_textFadeOutDuration
	float ____textFadeOutDuration_50;
	// System.Boolean CompassNavigatorPro.CompassPro::_textShadowEnabled
	bool ____textShadowEnabled_51;
	// UnityEngine.Font CompassNavigatorPro.CompassPro::_textFont
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____textFont_52;
	// System.Single CompassNavigatorPro.CompassPro::_titleVerticalPosition
	float ____titleVerticalPosition_53;
	// System.Single CompassNavigatorPro.CompassPro::_titleScale
	float ____titleScale_54;
	// UnityEngine.Font CompassNavigatorPro.CompassPro::_titleFont
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____titleFont_55;
	// System.Boolean CompassNavigatorPro.CompassPro::_titleShadowEnabled
	bool ____titleShadowEnabled_56;
	// System.Boolean CompassNavigatorPro.CompassPro::_use3Ddistance
	bool ____use3Ddistance_57;
	// System.Single CompassNavigatorPro.CompassPro::_sameAltitudeThreshold
	float ____sameAltitudeThreshold_58;
	// System.Boolean CompassNavigatorPro.CompassPro::_showDistance
	bool ____showDistance_59;
	// System.String CompassNavigatorPro.CompassPro::_showDistanceFormat
	String_t* ____showDistanceFormat_60;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassPro::_visitedDefaultAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____visitedDefaultAudioClip_61;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassPro::_beaconDefaultAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____beaconDefaultAudioClip_62;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassPro::_heartbeatDefaultAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____heartbeatDefaultAudioClip_63;
	// System.Boolean CompassNavigatorPro.CompassPro::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_64;
	// CompassNavigatorPro.CompassProPOI CompassNavigatorPro.CompassPro::nearestPOI
	CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___nearestPOI_65;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIVisited
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIVisited_66;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIVisible
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIVisible_67;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIHide
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIHide_68;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIMiniMapIconMouseEnter
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIMiniMapIconMouseEnter_69;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIMiniMapIconMouseExit
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIMiniMapIconMouseExit_70;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIMiniMapIconMouseDown
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIMiniMapIconMouseDown_71;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIMiniMapIconMouseUp
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIMiniMapIconMouseUp_72;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIMiniMapIconMouseClick
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIMiniMapIconMouseClick_73;
	// System.Boolean CompassNavigatorPro.CompassPro::_fogOfWarEnabled
	bool ____fogOfWarEnabled_74;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::_fogOfWarCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____fogOfWarCenter_75;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::_fogOfWarSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____fogOfWarSize_76;
	// System.Int32 CompassNavigatorPro.CompassPro::_fogOfWarTextureSize
	int32_t ____fogOfWarTextureSize_77;
	// UnityEngine.Color CompassNavigatorPro.CompassPro::_fogOfWarColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____fogOfWarColor_78;
	// System.Boolean CompassNavigatorPro.CompassPro::_fogOfWarAutoClear
	bool ____fogOfWarAutoClear_79;
	// System.Single CompassNavigatorPro.CompassPro::_fogOfWarAutoClearRadius
	float ____fogOfWarAutoClearRadius_80;
	// System.Single CompassNavigatorPro.CompassPro::_fogOfWarDefaultAlpha
	float ____fogOfWarDefaultAlpha_81;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIVisibleInMiniMap
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIVisibleInMiniMap_82;
	// System.Action`1<CompassNavigatorPro.CompassProPOI> CompassNavigatorPro.CompassPro::OnPOIHidesInMiniMap
	Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* ___OnPOIHidesInMiniMap_83;
	// System.Action`1<System.Boolean> CompassNavigatorPro.CompassPro::OnMiniMapChangeFullScreenState
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMiniMapChangeFullScreenState_84;
	// System.Action`1<UnityEngine.Vector3> CompassNavigatorPro.CompassPro::OnMiniMapMouseClick
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___OnMiniMapMouseClick_85;
	// System.Action`1<UnityEngine.Vector2> CompassNavigatorPro.CompassPro::OnMiniMapMouseEnter
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___OnMiniMapMouseEnter_86;
	// System.Action`1<UnityEngine.Vector2> CompassNavigatorPro.CompassPro::OnMiniMapMouseExit
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___OnMiniMapMouseExit_87;
	// System.Boolean CompassNavigatorPro.CompassPro::_showMiniMap
	bool ____showMiniMap_88;
	// CompassNavigatorPro.MINIMAP_POSITION_AND_SIZE CompassNavigatorPro.CompassPro::_miniMapPositionAndSize
	int32_t ____miniMapPositionAndSize_89;
	// CompassNavigatorPro.MINIMAP_LOCATION CompassNavigatorPro.CompassPro::_miniMapLocation
	int32_t ____miniMapLocation_90;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::_miniMapLocationOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____miniMapLocationOffset_91;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapKeepStraight
	bool ____miniMapKeepStraight_92;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapCameraTilt
	float ____miniMapCameraTilt_93;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapSize
	float ____miniMapSize_94;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::_miniMapFollow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____miniMapFollow_95;
	// UnityEngine.Sprite CompassNavigatorPro.CompassPro::_miniMapMaskSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____miniMapMaskSprite_96;
	// UnityEngine.Texture2D CompassNavigatorPro.CompassPro::_miniMapBorderTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____miniMapBorderTexture_97;
	// CompassNavigatorPro.MINIMAP_STYLE CompassNavigatorPro.CompassPro::_miniMapStyle
	int32_t ____miniMapStyle_98;
	// UnityEngine.Color CompassNavigatorPro.CompassPro::_miniMapBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____miniMapBackgroundColor_99;
	// CompassNavigatorPro.MINIMAP_CONTENTS CompassNavigatorPro.CompassPro::_miniMapContents
	int32_t ____miniMapContents_100;
	// UnityEngine.Texture CompassNavigatorPro.CompassPro::_miniMapContentsTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____miniMapContentsTexture_101;
	// UnityEngine.Sprite CompassNavigatorPro.CompassPro::_miniMapMaskSpriteFullScreenMode
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____miniMapMaskSpriteFullScreenMode_102;
	// UnityEngine.Texture2D CompassNavigatorPro.CompassPro::_miniMapBorderTextureFullScreenMode
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____miniMapBorderTextureFullScreenMode_103;
	// CompassNavigatorPro.MINIMAP_STYLE CompassNavigatorPro.CompassPro::_miniMapStyleFullScreenMode
	int32_t ____miniMapStyleFullScreenMode_104;
	// CompassNavigatorPro.MINIMAP_RESOLUTION CompassNavigatorPro.CompassPro::_miniMapResolution
	int32_t ____miniMapResolution_105;
	// CompassNavigatorPro.MINIMAP_RESOLUTION CompassNavigatorPro.CompassPro::_miniMapFullScreenResolution
	int32_t ____miniMapFullScreenResolution_106;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapFullScreenZoomLevel
	float ____miniMapFullScreenZoomLevel_107;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassPro::_miniMapFullScreenPlaceholder
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____miniMapFullScreenPlaceholder_108;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapFullScreenSize
	float ____miniMapFullScreenSize_109;
	// CompassNavigatorPro.MINIMAP_CONTENTS CompassNavigatorPro.CompassPro::_miniMapStyleFullScreenContents
	int32_t ____miniMapStyleFullScreenContents_110;
	// UnityEngine.Texture CompassNavigatorPro.CompassPro::_miniMapStyleFullScreenContentsTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____miniMapStyleFullScreenContentsTexture_111;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapKeepAspectRatio
	bool ____miniMapKeepAspectRatio_112;
	// CompassNavigatorPro.MINIMAP_CAMERA_MODE CompassNavigatorPro.CompassPro::_miniMapCameraMode
	int32_t ____miniMapCameraMode_113;
	// CompassNavigatorPro.MINIMAP_CAMERA_SNAPSHOT_FREQUENCY CompassNavigatorPro.CompassPro::_miniMapCameraSnapshotFrequency
	int32_t ____miniMapCameraSnapshotFrequency_114;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapCaptureSize
	float ____miniMapCaptureSize_115;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapSnapshotInterval
	float ____miniMapSnapshotInterval_116;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapSnapshotDistance
	float ____miniMapSnapshotDistance_117;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapContrast
	float ____miniMapContrast_118;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapBrightness
	float ____miniMapBrightness_119;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapEnableShadows
	bool ____miniMapEnableShadows_120;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapZoomMin
	float ____miniMapZoomMin_121;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapZoomMax
	float ____miniMapZoomMax_122;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::_miniMapIconPositionShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____miniMapIconPositionShift_123;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapZoomLevel
	float ____miniMapZoomLevel_124;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapCameraMinAltitude
	float ____miniMapCameraMinAltitude_125;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapCameraMaxAltitude
	float ____miniMapCameraMaxAltitude_126;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapCameraHeightVSFollow
	float ____miniMapCameraHeightVSFollow_127;
	// System.Int32 CompassNavigatorPro.CompassPro::_miniMapLayerMask
	int32_t ____miniMapLayerMask_128;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapIconSize
	float ____miniMapIconSize_129;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapPlayerIconSize
	float ____miniMapPlayerIconSize_130;
	// UnityEngine.Sprite CompassNavigatorPro.CompassPro::_miniMapPlayerIconSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____miniMapPlayerIconSprite_131;
	// UnityEngine.Color CompassNavigatorPro.CompassPro::_miniMapPlayerIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____miniMapPlayerIconColor_132;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapClampBorder
	float ____miniMapClampBorder_133;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapClampBorderCircular
	bool ____miniMapClampBorderCircular_134;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapVignette
	bool ____miniMapVignette_135;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapAlpha
	float ____miniMapAlpha_136;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapShowButtons
	bool ____miniMapShowButtons_137;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapButtonsScale
	float ____miniMapButtonsScale_138;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapIconEvents
	bool ____miniMapIconEvents_139;
	// System.Boolean CompassNavigatorPro.CompassPro::_miniMapZoomState
	bool ____miniMapZoomState_140;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::miniMapFullScreenWorldCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___miniMapFullScreenWorldCenter_141;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::miniMapFullScreenWorldSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___miniMapFullScreenWorldSize_142;
	// System.Boolean CompassNavigatorPro.CompassPro::miniMapFullScreenWorldCenterFollows
	bool ___miniMapFullScreenWorldCenterFollows_143;
	// System.Boolean CompassNavigatorPro.CompassPro::miniMapFullScreenFreezeCamera
	bool ___miniMapFullScreenFreezeCamera_144;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::_miniMapWorldCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____miniMapWorldCenter_145;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::_miniMapWorldSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____miniMapWorldSize_146;
	// System.Single CompassNavigatorPro.CompassPro::_miniMapLutIntensity
	float ____miniMapLutIntensity_147;
	// UnityEngine.Texture2D CompassNavigatorPro.CompassPro::_miniMapLutTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____miniMapLutTexture_148;
	// System.Boolean CompassNavigatorPro.CompassPro::needFogOfWarUpdate
	bool ___needFogOfWarUpdate_149;
	// System.Boolean CompassNavigatorPro.CompassPro::needFogOfWarTextureUpdate
	bool ___needFogOfWarTextureUpdate_150;
	// UnityEngine.Texture2D CompassNavigatorPro.CompassPro::fogOfWarTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___fogOfWarTexture_152;
	// UnityEngine.Color32[] CompassNavigatorPro.CompassPro::fogOfWarColorBuffer
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___fogOfWarColorBuffer_153;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::fogOfWarMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fogOfWarMaterial_154;
	// System.Int32 CompassNavigatorPro.CompassPro::fogOfWarAutoClearLastPosX
	int32_t ___fogOfWarAutoClearLastPosX_155;
	// System.Int32 CompassNavigatorPro.CompassPro::fogOfWarAutoClearLastPosZ
	int32_t ___fogOfWarAutoClearLastPosZ_156;
	// System.Int32[] CompassNavigatorPro.CompassPro::cardinals
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cardinals_157;
	// System.Int32[] CompassNavigatorPro.CompassPro::ordinals
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ordinals_158;
	// System.Int32[] CompassNavigatorPro.CompassPro::halfwinds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___halfwinds_159;
	// System.Boolean CompassNavigatorPro.CompassPro::isDirty
	bool ___isDirty_161;
	// System.Collections.Generic.List`1<CompassNavigatorPro.CompassPro/CompassActiveIcon> CompassNavigatorPro.CompassPro::icons
	List_1_tD7C37CB33538178DD17E80A77C9223D591B0FE44* ___icons_163;
	// System.Single CompassNavigatorPro.CompassPro::fadeStartTime
	float ___fadeStartTime_164;
	// System.Single CompassNavigatorPro.CompassPro::prevAlpha
	float ___prevAlpha_165;
	// UnityEngine.CanvasGroup CompassNavigatorPro.CompassPro::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_166;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassPro::compassBackRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___compassBackRect_167;
	// UnityEngine.UI.Image CompassNavigatorPro.CompassPro::compassBackImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___compassBackImage_168;
	// UnityEngine.GameObject CompassNavigatorPro.CompassPro::compassIconPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___compassIconPrefab_169;
	// UnityEngine.GameObject CompassNavigatorPro.CompassPro::compassMiniMapClampedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___compassMiniMapClampedPrefab_170;
	// UnityEngine.UI.Text CompassNavigatorPro.CompassPro::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_171;
	// UnityEngine.UI.Text CompassNavigatorPro.CompassPro::textShadow
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textShadow_172;
	// UnityEngine.UI.Text CompassNavigatorPro.CompassPro::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_173;
	// UnityEngine.UI.Text CompassNavigatorPro.CompassPro::titleShadow
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleShadow_174;
	// System.Single CompassNavigatorPro.CompassPro::endTimeOfCurrentTextReveal
	float ___endTimeOfCurrentTextReveal_175;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::spriteOverlayMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___spriteOverlayMat_176;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::lastCamPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastCamPos_177;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::lastCamRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastCamRot_178;
	// System.Int32 CompassNavigatorPro.CompassPro::lastFrameCount
	int32_t ___lastFrameCount_179;
	// System.Single CompassNavigatorPro.CompassPro::lastTime
	float ___lastTime_180;
	// System.Text.StringBuilder CompassNavigatorPro.CompassPro::titleText
	StringBuilder_t* ___titleText_181;
	// UnityEngine.AudioSource CompassNavigatorPro.CompassPro::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_182;
	// System.Int32 CompassNavigatorPro.CompassPro::poiVisibleCount
	int32_t ___poiVisibleCount_183;
	// System.Boolean CompassNavigatorPro.CompassPro::autoHiding
	bool ___autoHiding_184;
	// System.Single CompassNavigatorPro.CompassPro::thisAlpha
	float ___thisAlpha_185;
	// System.Boolean CompassNavigatorPro.CompassPro::needUpdateBarContents
	bool ___needUpdateBarContents_186;
	// System.String CompassNavigatorPro.CompassPro::lastDistanceText
	String_t* ___lastDistanceText_187;
	// System.Single CompassNavigatorPro.CompassPro::lastDistanceSqr
	float ___lastDistanceSqr_188;
	// System.Single CompassNavigatorPro.CompassPro::lastDistance
	float ___lastDistance_189;
	// CompassNavigatorPro.CompassPro/CompassPointPOI[] CompassNavigatorPro.CompassPro::compassPoints
	CompassPointPOIU5BU5D_t56CE713CC161B40B2308358ED06DE37B15BC9B9B* ___compassPoints_190;
	// System.Single CompassNavigatorPro.CompassPro::usedNorthDegrees
	float ___usedNorthDegrees_191;
	// CompassNavigatorPro.LetterAnimator[] CompassNavigatorPro.CompassPro::textPool
	LetterAnimatorU5BU5D_tE837694510BD7A067FED663C112B953A18D53CDE* ___textPool_193;
	// System.Int32 CompassNavigatorPro.CompassPro::poolIndex
	int32_t ___poolIndex_194;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::canvasTextPool
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___canvasTextPool_195;
	// UnityEngine.Canvas CompassNavigatorPro.CompassPro::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_196;
	// System.Single CompassNavigatorPro.CompassPro::nearestPOIDistanceSqr
	float ___nearestPOIDistanceSqr_197;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::miniMapUIRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___miniMapUIRoot_198;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::miniMapUI
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___miniMapUI_199;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::miniMapMaskUI
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___miniMapMaskUI_200;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::miniMapButtonsPanel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___miniMapButtonsPanel_201;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassPro::miniMapUIRootRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___miniMapUIRootRT_202;
	// UnityEngine.Camera CompassNavigatorPro.CompassPro::miniMapCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___miniMapCamera_203;
	// UnityEngine.Transform CompassNavigatorPro.CompassPro::cameraCompass
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraCompass_204;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassPro::cameraCompassRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___cameraCompassRT_205;
	// UnityEngine.UI.Image CompassNavigatorPro.CompassPro::cameraCompassImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___cameraCompassImage_206;
	// UnityEngine.RenderTexture CompassNavigatorPro.CompassPro::miniMapTex
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___miniMapTex_207;
	// UnityEngine.CanvasGroup CompassNavigatorPro.CompassPro::miniMapCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___miniMapCanvasGroup_208;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::miniMapOverlayMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___miniMapOverlayMat_209;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::miniMapAnchorMin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miniMapAnchorMin_210;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::miniMapAnchorMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miniMapAnchorMax_211;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::miniMapPivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miniMapPivot_212;
	// UnityEngine.Vector2 CompassNavigatorPro.CompassPro::miniMapSizeDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miniMapSizeDelta_213;
	// System.Single CompassNavigatorPro.CompassPro::miniMapCameraAspect
	float ___miniMapCameraAspect_214;
	// System.Single CompassNavigatorPro.CompassPro::miniMapLastSnapshotTime
	float ___miniMapLastSnapshotTime_215;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::miniMapLastSnapshotLocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___miniMapLastSnapshotLocation_216;
	// System.Int32 CompassNavigatorPro.CompassPro::needMiniMapShot
	int32_t ___needMiniMapShot_217;
	// UnityEngine.UI.Image CompassNavigatorPro.CompassPro::miniMapImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___miniMapImage_218;
	// UnityEngine.UI.Image CompassNavigatorPro.CompassPro::miniMapMaskImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___miniMapMaskImage_219;
	// System.Boolean CompassNavigatorPro.CompassPro::miniMapMaterialRefresh
	bool ___miniMapMaterialRefresh_220;
	// System.Single CompassNavigatorPro.CompassPro::miniMapLastCameraRotation
	float ___miniMapLastCameraRotation_221;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::lastMiniMapCameraPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMiniMapCameraPos_222;
	// UnityEngine.Quaternion CompassNavigatorPro.CompassPro::miniMapFullScreenFixedCameraRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___miniMapFullScreenFixedCameraRotation_223;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::followPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___followPos_224;
	// System.Boolean CompassNavigatorPro.CompassPro::needsSetupMiniMap
	bool ___needsSetupMiniMap_225;
	// System.Boolean CompassNavigatorPro.CompassPro::needsIconSorting
	bool ___needsIconSorting_226;
	// UnityEngine.Renderer CompassNavigatorPro.CompassPro::miniMapBackgroundTexRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___miniMapBackgroundTexRenderer_227;
	// System.Single CompassNavigatorPro.CompassPro::miniMapRegularZoomLevel
	float ___miniMapRegularZoomLevel_228;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::curvedMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___curvedMat_229;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::defaultUICurvedMatForCardinals
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultUICurvedMatForCardinals_230;
	// UnityEngine.Material CompassNavigatorPro.CompassPro::defaultUICurvedMatForText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultUICurvedMatForText_231;
};

// CompassNavigatorPro.CompassProPOI
struct CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CompassNavigatorPro.CompassProPOI::id
	int32_t ___id_4;
	// System.Int32 CompassNavigatorPro.CompassProPOI::priority
	int32_t ___priority_5;
	// CompassNavigatorPro.POI_VISIBILITY CompassNavigatorPro.CompassProPOI::visibility
	int32_t ___visibility_6;
	// System.Single CompassNavigatorPro.CompassProPOI::visibleDistanceOverride
	float ___visibleDistanceOverride_7;
	// System.Single CompassNavigatorPro.CompassProPOI::visibleMinDistanceOverride
	float ___visibleMinDistanceOverride_8;
	// System.Single CompassNavigatorPro.CompassProPOI::minDistanceText
	float ___minDistanceText_9;
	// System.Boolean CompassNavigatorPro.CompassProPOI::isVisible
	bool ___isVisible_10;
	// System.String CompassNavigatorPro.CompassProPOI::title
	String_t* ___title_11;
	// CompassNavigatorPro.TITLE_VISIBILITY CompassNavigatorPro.CompassProPOI::titleVisibility
	int32_t ___titleVisibility_12;
	// System.Boolean CompassNavigatorPro.CompassProPOI::canBeVisited
	bool ___canBeVisited_13;
	// System.Single CompassNavigatorPro.CompassProPOI::visitedDistanceOverride
	float ___visitedDistanceOverride_14;
	// System.Boolean CompassNavigatorPro.CompassProPOI::hideWhenVisited
	bool ___hideWhenVisited_15;
	// System.Boolean CompassNavigatorPro.CompassProPOI::isVisited
	bool ___isVisited_16;
	// System.String CompassNavigatorPro.CompassProPOI::visitedText
	String_t* ___visitedText_17;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassProPOI::visitedAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___visitedAudioClip_18;
	// System.Single CompassNavigatorPro.CompassProPOI::radius
	float ___radius_19;
	// System.Single CompassNavigatorPro.CompassProPOI::iconScale
	float ___iconScale_20;
	// UnityEngine.Sprite CompassNavigatorPro.CompassProPOI::iconNonVisited
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___iconNonVisited_21;
	// UnityEngine.Sprite CompassNavigatorPro.CompassProPOI::iconVisited
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___iconVisited_22;
	// UnityEngine.Color CompassNavigatorPro.CompassProPOI::tintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tintColor_23;
	// System.Boolean CompassNavigatorPro.CompassProPOI::showPlayModeGizmo
	bool ___showPlayModeGizmo_24;
	// System.Boolean CompassNavigatorPro.CompassProPOI::clampPosition
	bool ___clampPosition_25;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassProPOI::beaconAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___beaconAudioClip_26;
	// System.Boolean CompassNavigatorPro.CompassProPOI::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_27;
	// System.Boolean CompassNavigatorPro.CompassProPOI::heartbeatEnabled
	bool ___heartbeatEnabled_28;
	// UnityEngine.AudioClip CompassNavigatorPro.CompassProPOI::heartbeatAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___heartbeatAudioClip_29;
	// System.Single CompassNavigatorPro.CompassProPOI::heartbeatDistance
	float ___heartbeatDistance_30;
	// UnityEngine.AnimationCurve CompassNavigatorPro.CompassProPOI::heartbeatInterval
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___heartbeatInterval_31;
	// CompassNavigatorPro.POI_VISIBILITY CompassNavigatorPro.CompassProPOI::miniMapVisibility
	int32_t ___miniMapVisibility_32;
	// System.Boolean CompassNavigatorPro.CompassProPOI::miniMapIsVisible
	bool ___miniMapIsVisible_33;
	// System.Boolean CompassNavigatorPro.CompassProPOI::miniMapClampPosition
	bool ___miniMapClampPosition_34;
	// System.Boolean CompassNavigatorPro.CompassProPOI::miniMapShowRotation
	bool ___miniMapShowRotation_35;
	// System.Single CompassNavigatorPro.CompassProPOI::miniMapRotationAngleOffset
	float ___miniMapRotationAngleOffset_36;
	// System.Single CompassNavigatorPro.CompassProPOI::miniMapIconScale
	float ___miniMapIconScale_37;
	// CompassNavigatorPro.OnHeartbeatEvent CompassNavigatorPro.CompassProPOI::OnHeartbeat
	OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3* ___OnHeartbeat_38;
	// System.Single CompassNavigatorPro.CompassProPOI::distanceToCameraSQR
	float ___distanceToCameraSQR_39;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassProPOI::computedIconScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___computedIconScale_40;
	// System.Single CompassNavigatorPro.CompassProPOI::iconAlpha
	float ___iconAlpha_41;
	// UnityEngine.SpriteRenderer CompassNavigatorPro.CompassProPOI::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_42;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassProPOI::compassIconRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___compassIconRectTransform_43;
	// UnityEngine.RectTransform CompassNavigatorPro.CompassProPOI::miniMapIconRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___miniMapIconRectTransform_44;
	// CompassNavigatorPro.CompassPro CompassNavigatorPro.CompassProPOI::compass
	CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* ___compass_45;
	// System.Single CompassNavigatorPro.CompassProPOI::visibleTime
	float ___visibleTime_46;
	// System.Boolean CompassNavigatorPro.CompassProPOI::heartbeatIsActive
	bool ___heartbeatIsActive_47;
	// UnityEngine.Coroutine CompassNavigatorPro.CompassProPOI::heartbeatPlayer
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___heartbeatPlayer_48;
	// UnityEngine.Vector3 CompassNavigatorPro.CompassProPOI::miniMapCurrentIconScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___miniMapCurrentIconScale_49;
};

// CompassNavigatorProDemos.DiscoverArea
struct DiscoverArea_t6FC8666EA3E819CCF22F295A2F5F04FB2B540996  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CompassNavigatorProDemos.FreeCameraMove
struct FreeCameraMove_tDEB8581F95B3E769A016AB5F73B7334996E0939D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CompassNavigatorProDemos.FreeCameraMove::cameraSensitivity
	float ___cameraSensitivity_4;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::climbSpeed
	float ___climbSpeed_5;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::normalMoveSpeed
	float ___normalMoveSpeed_6;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::slowMoveFactor
	float ___slowMoveFactor_7;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::fastMoveFactor
	float ___fastMoveFactor_8;
	// UnityEngine.Bounds CompassNavigatorProDemos.FreeCameraMove::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_9;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::rotationX
	float ___rotationX_10;
	// System.Single CompassNavigatorProDemos.FreeCameraMove::rotationY
	float ___rotationY_11;
};

// CompassNavigatorPro.LetterAnimator
struct LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CompassNavigatorPro.LetterAnimator::startTime
	float ___startTime_4;
	// System.Single CompassNavigatorPro.LetterAnimator::revealDuration
	float ___revealDuration_5;
	// System.Single CompassNavigatorPro.LetterAnimator::startFadeTime
	float ___startFadeTime_6;
	// System.Single CompassNavigatorPro.LetterAnimator::fadeDuration
	float ___fadeDuration_7;
	// UnityEngine.UI.Text CompassNavigatorPro.LetterAnimator::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_8;
	// UnityEngine.UI.Text CompassNavigatorPro.LetterAnimator::textShadow
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textShadow_9;
	// System.Int32 CompassNavigatorPro.LetterAnimator::poolIndex
	int32_t ___poolIndex_10;
	// CompassNavigatorPro.OnAnimationEndDelegate CompassNavigatorPro.LetterAnimator::OnAnimationEnds
	OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* ___OnAnimationEnds_11;
	// System.Boolean CompassNavigatorPro.LetterAnimator::used
	bool ___used_12;
	// UnityEngine.Vector3 CompassNavigatorPro.LetterAnimator::localScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale_13;
};

// CompassNavigatorProDemos.LevelManager
struct LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CompassNavigatorProDemos.LevelManager::initialPoiCount
	int32_t ___initialPoiCount_4;
	// UnityEngine.Material CompassNavigatorProDemos.LevelManager::sphereMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___sphereMaterial_5;
	// UnityEngine.Sprite[] CompassNavigatorProDemos.LevelManager::icons
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___icons_6;
	// UnityEngine.AudioClip[] CompassNavigatorProDemos.LevelManager::soundClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___soundClips_7;
	// System.Int32 CompassNavigatorProDemos.LevelManager::poiNumber
	int32_t ___poiNumber_8;
	// CompassNavigatorPro.CompassPro CompassNavigatorProDemos.LevelManager::compass
	CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* ___compass_9;
	// CompassNavigatorPro.CompassProPOI CompassNavigatorProDemos.LevelManager::POIUnderMouse
	CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___POIUnderMouse_10;
};

// CompassNavigatorPro.MiniMapInteraction
struct MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CompassNavigatorPro.CompassPro CompassNavigatorPro.MiniMapInteraction::compass
	CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* ___compass_4;
};

// CompassNavigatorProDemos.POIHeartbeatAnimator
struct POIHeartbeatAnimator_tECC47A616B3AE3CC55ABF6A132319A9DBA4575D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CompassNavigatorPro.CompassProPOI CompassNavigatorProDemos.POIHeartbeatAnimator::poi
	CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___poi_4;
	// UnityEngine.Rigidbody CompassNavigatorProDemos.POIHeartbeatAnimator::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4

// CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4

// CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13

// CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

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

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::51309C707736770935B3D47D807E1B731F2A1C49BBCE2AEF2FD9D59A432E51B3
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___51309C707736770935B3D47D807E1B731F2A1C49BBCE2AEF2FD9D59A432E51B3_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5BAEF6782848A15997F2710C74163BFFF1173F9BABF9DC79EA9656A85655265E
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5BAEF6782848A15997F2710C74163BFFF1173F9BABF9DC79EA9656A85655265E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6E3B46D58601A050D75295B1088519A44B04F45B3B1D9477AB31566036CFFCFD
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___6E3B46D58601A050D75295B1088519A44B04F45B3B1D9477AB31566036CFFCFD_2;
};

// <PrivateImplementationDetails>

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// CompassNavigatorPro.Misc
struct Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields
{
	// UnityEngine.Vector4 CompassNavigatorPro.Misc::Vector4back
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Vector4back_0;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3one
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3one_1;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3zero
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3zero_2;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3back
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3back_3;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3left
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3left_4;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3right
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3right_5;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3up_6;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3down
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3down_7;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::Vector3half
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector3half_8;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2left
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2left_9;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2right
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2right_10;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2one
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2one_11;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2zero
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2zero_12;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2down
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2down_13;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2up
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2up_14;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2max_15;
	// UnityEngine.Vector2 CompassNavigatorPro.Misc::Vector2half
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Vector2half_16;
	// UnityEngine.Vector3 CompassNavigatorPro.Misc::ViewportCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ViewportCenter_17;
	// UnityEngine.Color CompassNavigatorPro.Misc::ColorTransparent
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorTransparent_18;
	// UnityEngine.Quaternion CompassNavigatorPro.Misc::QuaternionZero
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___QuaternionZero_19;
	// UnityEngine.Vector3[] CompassNavigatorPro.Misc::wc
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___wc_20;
};

// CompassNavigatorPro.Misc

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// System.Action`1<CompassNavigatorPro.CompassProPOI>

// System.Action`1<CompassNavigatorPro.CompassProPOI>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector3>

// System.Action`1<UnityEngine.Vector3>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// System.NotSupportedException

// System.NotSupportedException

// CompassNavigatorPro.OnAnimationEndDelegate

// CompassNavigatorPro.OnAnimationEndDelegate

// CompassNavigatorPro.OnHeartbeatEvent

// CompassNavigatorPro.OnHeartbeatEvent

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

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

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// CompassNavigatorPro.CompassButtonHandler

// CompassNavigatorPro.CompassButtonHandler

// CompassNavigatorPro.CompassPro
struct CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B_StaticFields
{
	// CompassNavigatorPro.CompassPro CompassNavigatorPro.CompassPro::_instance
	CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* ____instance_162;
};

// CompassNavigatorPro.CompassPro

// CompassNavigatorPro.CompassProPOI

// CompassNavigatorPro.CompassProPOI

// CompassNavigatorProDemos.DiscoverArea

// CompassNavigatorProDemos.DiscoverArea

// CompassNavigatorProDemos.FreeCameraMove

// CompassNavigatorProDemos.FreeCameraMove

// CompassNavigatorPro.LetterAnimator

// CompassNavigatorPro.LetterAnimator

// CompassNavigatorProDemos.LevelManager

// CompassNavigatorProDemos.LevelManager

// CompassNavigatorPro.MiniMapInteraction

// CompassNavigatorPro.MiniMapInteraction

// CompassNavigatorProDemos.POIHeartbeatAnimator

// CompassNavigatorProDemos.POIHeartbeatAnimator

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void CompassNavigatorPro.CompassPro::BubbleEvent<UnityEngine.Vector2>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_gshared (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_o, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::BubbleEvent<UnityEngine.Vector3>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC_gshared (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_o, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CompassNavigatorPro.CompassButtonHandler::ExecuteHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompassButtonHandler_ExecuteHandler_m9DB798A954AB413D436058CD77D8EF3F7B470B13 (CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteHandlerU3Ed__4__ctor_m91063F33BF7B05F908461E66EAADC559E96498C1 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.LetterAnimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_Update_mF6244DDC742761C710B58E2E4A51BD4D9F112443 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.LetterAnimator::UpdateTextScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_UpdateTextScale_mEDC3970762D0B9DD3AB487C44CCB9ABEA50B95C7 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.LetterAnimator::UpdateTextAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_UpdateTextAlpha_m9C1F62DA151F3FAF56114B29C7810C571E1BF9F6 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.OnAnimationEndDelegate::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_inline (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::BubbleEvent<UnityEngine.Vector2>(System.Action`1<T>,T)
inline void CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_o, const RuntimeMethod* method)
{
	((  void (*) (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B*, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_gshared)(__this, ___0_a, ___1_o, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect CompassNavigatorPro.Misc::GetScreenRect(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Misc_GetScreenRect_m608BFC23F2BEA989D3548E4096365E8C8B828378 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_o, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CompassNavigatorPro.CompassPro::GetMiniMapWorldPositionFromUV(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CompassPro_GetMiniMapWorldPositionFromUV_m224CFA5378EC1B1161AE4198E1E3697AD63151B3 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_uv, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::BubbleEvent<UnityEngine.Vector3>(System.Action`1<T>,T)
inline void CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_o, const RuntimeMethod* method)
{
	((  void (*) (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B*, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC_gshared)(__this, ___0_a, ___1_o, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
// UnityEngine.Rect CompassNavigatorPro.Misc::GetScreenRect(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Misc_GetScreenRect_mDA93197D8B4E4366E979C6C7D26E71BE427124AC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_o, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// CompassNavigatorPro.CompassPro CompassNavigatorPro.CompassPro::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* CompassPro_get_instance_m6F18F3A716DBDAEFE2D2E76BCAD91BFE5230ECDA (const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::ShowAnimatedText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_ShowAnimatedText_m656ADF85B0E24D785B2CA3CD648EF969F2538FDB (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Boolean CompassNavigatorPro.CompassPro::IsMouseOverMiniMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompassPro_IsMouseOverMiniMap_m3940426A1576316E69FD5918C8C9D20C3C2EDCD0 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void System.Action`1<CompassNavigatorPro.CompassProPOI>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2B11C74E1F3162A496865DA4BE8016AF9FF52F42 (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void CompassNavigatorProDemos.LevelManager::AddRandomPOI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddRandomPOI_m625F34D0169CE4544929726D1E6245B02430AB63 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::POIShowBeacon(System.Single,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_POIShowBeacon_m71E947F633B2648020A98D6895CC6D8EE7267122 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, float ___0_duration, float ___1_horizontalScale, float ___2_intensity, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_tintColor, const RuntimeMethod* method) ;
// System.Single CompassNavigatorPro.CompassPro::get_miniMapZoomLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CompassPro_get_miniMapZoomLevel_m6A0158E10689EFEC9AAF45CDEE95C6A3DCB3F5BA_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::set_miniMapZoomLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_set_miniMapZoomLevel_m594EAFF331301D5AAB5A85D4A79CFBD995D0EB11 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean CompassNavigatorPro.CompassPro::get_showMiniMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompassPro_get_showMiniMap_m8C1FFE235B036DA3CF740396FB86BE1FA8C4C8E4_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::set_showMiniMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_set_showMiniMap_m5C6B334A9CAFB95E04E361819320DF3DA1A887A6 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::POIShowBeacon(UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_POIShowBeacon_m06307E76476F33F2687ED25C896D0DDB92FA8300 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_duration, float ___2_horizontalScale, float ___3_intensity, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_tintColor, const RuntimeMethod* method) ;
// System.Boolean CompassNavigatorPro.CompassPro::get_miniMapZoomState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompassPro_get_miniMapZoomState_m82435D15596D708DAAF281F9422F19C8C4F55E5F_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) ;
// System.Void CompassNavigatorPro.CompassPro::set_miniMapZoomState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassPro_set_miniMapZoomState_mF3252925E45B80B36676E98D844B6D55BBB9FF59 (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect CompassNavigatorPro.CompassProPOI::GetMiniMapIconScreenRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D CompassProPOI_GetMiniMapIconScreenRect_mC8A65FDEE25A1038A3F3B29307D4791DD2AD261E (CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___0_styleName, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void CompassNavigatorProDemos.LevelManager::AddPOI(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddPOI_m7F9A8D98BF52E45742F3A3EA12268F1A4A850348 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CompassNavigatorPro.CompassProPOI>()
inline CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* GameObject_AddComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m1EDB527367ACCD7563E6E0268AE890F036C9D440 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CompassNavigatorProDemos.LevelManager::RemovePOI(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_RemovePOI_m35198F2A56183744C390E97F85E51DAF5773736C (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) ;
// System.Void CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemovePOIU3Ed__13__ctor_mCF4C431429A89C5839018E0A90D87E83771620AA (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CompassNavigatorPro.CompassProPOI>()
inline CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* Component_GetComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m8281F2C78F2AE9755001A814555B84B4DBEA4A16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CompassNavigatorPro.OnHeartbeatEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHeartbeatEvent__ctor_m09735810C2E41EB797177679F3DB7105498AB276 (OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_IsSleeping_m059CBAD60AA4A6CA666FE2EAD2D7A3B02269E43F (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_torque, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CompassNavigatorPro.CompassButtonHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassButtonHandler_OnPointerDown_mDD716330BA98DE60DA5EC681307B18B91F9AB953 (CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (co != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___co_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine (co);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___co_5;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// co = StartCoroutine (ExecuteHandler ());
		RuntimeObject* L_2;
		L_2 = CompassButtonHandler_ExecuteHandler_m9DB798A954AB413D436058CD77D8EF3F7B470B13(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->___co_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___co_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.CompassButtonHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassButtonHandler_OnPointerUp_m8E3965A479CDD16DB76D696E9FD0720F021E2653 (CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (co != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___co_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine (co);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___co_5;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CompassNavigatorPro.CompassButtonHandler::ExecuteHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompassButtonHandler_ExecuteHandler_m9DB798A954AB413D436058CD77D8EF3F7B470B13 (CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* L_0 = (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62*)il2cpp_codegen_object_new(U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CExecuteHandlerU3Ed__4__ctor_m91063F33BF7B05F908461E66EAADC559E96498C1(L_0, 0, NULL);
		U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CompassNavigatorPro.CompassButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassButtonHandler__ctor_m23A6D2060836130D753372E1C8D8C6CB5B6FA1F7 (CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* __this, const RuntimeMethod* method) 
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
// System.Void CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteHandlerU3Ed__4__ctor_m91063F33BF7B05F908461E66EAADC559E96498C1 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteHandlerU3Ed__4_System_IDisposable_Dispose_m122B70AD9D3AB7054A7C109C900792BED5C286C3 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteHandlerU3Ed__4_MoveNext_m24F9EFA1274F48A3F23F26F5CD22DD75C2DC9DC3 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WaitForEndOfFrame w = new WaitForEndOfFrame ();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CwU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwU3E5__2_3), (void*)L_4);
	}

IL_0029:
	{
		// actionHandler ();
		CompassButtonHandler_t16208A0225987345B0F97D17F65727F57EEC43A8* L_5 = V_1;
		NullCheck(L_5);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5->___actionHandler_4;
		NullCheck(L_6);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_6, NULL);
		// yield return w;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_7 = __this->___U3CwU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_0029;
	}
}
// System.Object CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteHandlerU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78FCD224E8FA3A475BD9BCD8902BC79E53F8CA74 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteHandlerU3Ed__4_System_Collections_IEnumerator_Reset_m27E3973E6BDA5FFBDE8035116CF103B00C23B0D3 (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteHandlerU3Ed__4_System_Collections_IEnumerator_Reset_m27E3973E6BDA5FFBDE8035116CF103B00C23B0D3_RuntimeMethod_var)));
	}
}
// System.Object CompassNavigatorPro.CompassButtonHandler/<ExecuteHandler>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteHandlerU3Ed__4_System_Collections_IEnumerator_get_Current_m4EF4D840C1943F7744621C2CDEF946550F1DAE4F (U3CExecuteHandlerU3Ed__4_t0427C52E4303C9EF647CE706F53AB5DBAE0C5B62* __this, const RuntimeMethod* method) 
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
void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_Multicast(OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* currentDelegate = reinterpret_cast<OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_poolIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_OpenInst(OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_poolIndex, method);
}
void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_OpenStatic(OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_poolIndex, method);
}
void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_OpenStaticInvoker(OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_poolIndex);
}
void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_ClosedStaticInvoker(OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_poolIndex);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518 (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_poolIndex);

}
// System.Void CompassNavigatorPro.OnAnimationEndDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimationEndDelegate__ctor_m4358BCB32128FB33A9FA27FBB5830841FFDFE723 (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_Multicast;
}
// System.Void CompassNavigatorPro.OnAnimationEndDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7 (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_poolIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CompassNavigatorPro.OnAnimationEndDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAnimationEndDelegate_BeginInvoke_m11AC5FA37DB5FB4802D94F5CE6B5FBAF2D744C67 (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_poolIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void CompassNavigatorPro.OnAnimationEndDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimationEndDelegate_EndInvoke_m03AD54806DCF7BE95A17EE631DA4E9D4F66D7767 (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void CompassNavigatorPro.LetterAnimator::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_Play_mD91D4BE08A2639E17316349658675A445F71EAC0 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, const RuntimeMethod* method) 
{
	{
		// localScale = text.transform.localScale;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___localScale_13 = L_2;
		// Update ();
		LetterAnimator_Update_mF6244DDC742761C710B58E2E4A51BD4D9F112443(__this, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.LetterAnimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_Update_mF6244DDC742761C710B58E2E4A51BD4D9F112443 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float now = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = L_0;
		// float elapsed = now - startTime;
		float L_1 = V_0;
		float L_2 = __this->___startTime_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (elapsed < revealDuration) { // revealing
		float L_3 = V_1;
		float L_4 = __this->___revealDuration_5;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0035;
		}
	}
	{
		// float t = Mathf.Clamp01 (elapsed / revealDuration);
		float L_5 = V_1;
		float L_6 = __this->___revealDuration_5;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_5/L_6)), NULL);
		V_2 = L_7;
		// UpdateTextScale (t);
		float L_8 = V_2;
		LetterAnimator_UpdateTextScale_mEDC3970762D0B9DD3AB487C44CCB9ABEA50B95C7(__this, L_8, NULL);
		// UpdateTextAlpha (t);
		float L_9 = V_2;
		LetterAnimator_UpdateTextAlpha_m9C1F62DA151F3FAF56114B29C7810C571E1BF9F6(__this, L_9, NULL);
		return;
	}

IL_0035:
	{
		// } else if (now < startFadeTime) {
		float L_10 = V_0;
		float L_11 = __this->___startFadeTime_6;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0055;
		}
	}
	{
		// UpdateTextScale (1.0f);
		LetterAnimator_UpdateTextScale_mEDC3970762D0B9DD3AB487C44CCB9ABEA50B95C7(__this, (1.0f), NULL);
		// UpdateTextAlpha (1.0f);
		LetterAnimator_UpdateTextAlpha_m9C1F62DA151F3FAF56114B29C7810C571E1BF9F6(__this, (1.0f), NULL);
		return;
	}

IL_0055:
	{
		// } else if (now < startFadeTime + fadeDuration) {
		float L_12 = V_0;
		float L_13 = __this->___startFadeTime_6;
		float L_14 = __this->___fadeDuration_7;
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_add(L_13, L_14))))))
		{
			goto IL_0088;
		}
	}
	{
		// float t = Mathf.Clamp01 (1.0f - (now - startFadeTime) / fadeDuration);
		float L_15 = V_0;
		float L_16 = __this->___startFadeTime_6;
		float L_17 = __this->___fadeDuration_7;
		float L_18;
		L_18 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_15, L_16))/L_17)))), NULL);
		V_3 = L_18;
		// UpdateTextAlpha (t);
		float L_19 = V_3;
		LetterAnimator_UpdateTextAlpha_m9C1F62DA151F3FAF56114B29C7810C571E1BF9F6(__this, L_19, NULL);
		return;
	}

IL_0088:
	{
		// OnAnimationEnds(poolIndex);
		OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* L_20 = __this->___OnAnimationEnds_11;
		int32_t L_21 = __this->___poolIndex_10;
		NullCheck(L_20);
		OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_inline(L_20, L_21, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.LetterAnimator::UpdateTextScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_UpdateTextScale_mEDC3970762D0B9DD3AB487C44CCB9ABEA50B95C7 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		// text.transform.localScale = localScale * t;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___localScale_13;
		float L_3 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// textShadow.transform.localScale = localScale * t;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___textShadow_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___localScale_13;
		float L_8 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.LetterAnimator::UpdateTextAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator_UpdateTextAlpha_m9C1F62DA151F3FAF56114B29C7810C571E1BF9F6 (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		// text.color = new Color (text.color.r, text.color.g, text.color.b, t);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_8;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.___r_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___text_8;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.___g_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_8;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		float L_9 = L_8.___b_2;
		float L_10 = ___0_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), L_3, L_6, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// textShadow.color = new Color (0, 0, 0, t);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___textShadow_9;
		float L_13 = ___0_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_14), (0.0f), (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_14);
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.LetterAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterAnimator__ctor_m814FBD571996826AE72DD3AF33497E98AF747C1A (LetterAnimator_t85A004AE8C8F1BA996CB4E943665425341449714* __this, const RuntimeMethod* method) 
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
// System.Void CompassNavigatorPro.MiniMapInteraction::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMapInteraction_OnPointerEnter_m0D9ABF23FCF51C72AC81740CD6A0DE02C2BC6F7D (MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (compass != null) {
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_0 = __this->___compass_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// compass.BubbleEvent(compass.OnMiniMapMouseEnter, eventData.position);
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_2 = __this->___compass_4;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_3 = __this->___compass_4;
		NullCheck(L_3);
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_4 = L_3->___OnMiniMapMouseEnter_86;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_eventData;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_5, NULL);
		NullCheck(L_2);
		CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634(L_2, L_4, L_6, CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_RuntimeMethod_var);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.MiniMapInteraction::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMapInteraction_OnPointerExit_m7CAA644C29E542EBF18449D6EC70239131BECF76 (MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (compass != null) {
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_0 = __this->___compass_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// compass.BubbleEvent(compass.OnMiniMapMouseExit, eventData.position);
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_2 = __this->___compass_4;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_3 = __this->___compass_4;
		NullCheck(L_3);
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_4 = L_3->___OnMiniMapMouseExit_87;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_eventData;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_5, NULL);
		NullCheck(L_2);
		CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634(L_2, L_4, L_6, CompassPro_BubbleEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4534DC5B96681F682BE1B156A7025FAEFF70A634_RuntimeMethod_var);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.MiniMapInteraction::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMapInteraction_OnPointerClick_m3EDA39D287EBA9102872709B4D0EF1C734910015 (MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (compass != null) {
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_0 = __this->___compass_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0089;
		}
	}
	{
		// Vector2 position = eventData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		// RectTransform rect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Rect screenRect = rect.GetScreenRect();
		il2cpp_codegen_runtime_class_init_inline(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = Misc_GetScreenRect_m608BFC23F2BEA989D3548E4096365E8C8B828378(L_4, NULL);
		V_0 = L_5;
		// uv.x = (eventData.position.x - screenRect.xMin) / screenRect.width;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_6, NULL);
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		(&V_1)->___x_0 = ((float)(((float)il2cpp_codegen_subtract(L_8, L_9))/L_10));
		// uv.y = (eventData.position.y - screenRect.yMin) / screenRect.height;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___0_eventData;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		float L_13 = L_12.___y_1;
		float L_14;
		L_14 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		(&V_1)->___y_1 = ((float)(((float)il2cpp_codegen_subtract(L_13, L_14))/L_15));
		// Vector3 worldPos = compass.GetMiniMapWorldPositionFromUV(uv);
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_16 = __this->___compass_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = CompassPro_GetMiniMapWorldPositionFromUV_m224CFA5378EC1B1161AE4198E1E3697AD63151B3(L_16, L_17, NULL);
		V_2 = L_18;
		// compass.BubbleEvent(compass.OnMiniMapMouseClick, worldPos);
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_19 = __this->___compass_4;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_20 = __this->___compass_4;
		NullCheck(L_20);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_21 = L_20->___OnMiniMapMouseClick_85;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		NullCheck(L_19);
		CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC(L_19, L_21, L_22, CompassPro_BubbleEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2879455E6E7C267B4D97852E5F2E1E961B32A7DC_RuntimeMethod_var);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorPro.MiniMapInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMapInteraction__ctor_m78014C159817C82FFC9ECEF401C33CB34DAD41C3 (MiniMapInteraction_tE57B8AB2902876A8E484BA27B9F67FCB6BF30290* __this, const RuntimeMethod* method) 
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
// UnityEngine.Rect CompassNavigatorPro.Misc::GetScreenRect(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Misc_GetScreenRect_m608BFC23F2BEA989D3548E4096365E8C8B828378 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_o, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 size = Vector2.Scale (o.rect.size, o.lossyScale);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_o;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___0_o;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// Rect rect = new Rect(o.position.x, o.position.y, size.x, size.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___0_o;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ___0_o;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_9, L_12, L_14, L_16, NULL);
		// rect.x -= (o.pivot.x * size.x);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_17 = (&V_1);
		float L_18;
		L_18 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_17, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___0_o;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_19, NULL);
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_17, ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(L_21, L_23)))), NULL);
		// rect.y -= (o.pivot.y * size.y);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = (&V_1);
		float L_25;
		L_25 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_24, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = ___0_o;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_26, NULL);
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_0;
		float L_30 = L_29.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_24, ((float)il2cpp_codegen_subtract(L_25, ((float)il2cpp_codegen_multiply(L_28, L_30)))), NULL);
		// return rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31 = V_1;
		return L_31;
	}
}
// UnityEngine.Rect CompassNavigatorPro.Misc::GetScreenRect(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Misc_GetScreenRect_mDA93197D8B4E4366E979C6C7D26E71BE427124AC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_o, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// o.GetWorldCorners (wc);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_o;
		il2cpp_codegen_runtime_class_init_inline(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_0);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_0, L_1, NULL);
		// return new Rect (wc [0].x, wc [0].y, wc [2].x - wc [0].x, wc [2].y - wc [0].y);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_2);
		float L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_4);
		float L_5 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_6);
		float L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_8);
		float L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_10);
		float L_11 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___y_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20;
		NullCheck(L_12);
		float L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_14), L_3, L_5, ((float)il2cpp_codegen_subtract(L_7, L_9)), ((float)il2cpp_codegen_subtract(L_11, L_13)), /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Rect CompassNavigatorPro.Misc::GetViewportRect(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Misc_GetViewportRect_mDA89CDCA3F789B24285E6A6A0ED7C78385722C6E (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_o, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect = o.GetScreenRect (camera);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_o;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___1_camera;
		il2cpp_codegen_runtime_class_init_inline(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = Misc_GetScreenRect_mDA93197D8B4E4366E979C6C7D26E71BE427124AC(L_0, L_1, NULL);
		V_0 = L_2;
		// rect.x /= camera.pixelWidth;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&V_0);
		float L_4;
		L_4 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___1_camera;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_5, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_3, ((float)(L_4/((float)L_6))), NULL);
		// rect.y /= camera.pixelHeight;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&V_0);
		float L_8;
		L_8 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_7, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = ___1_camera;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_9, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_7, ((float)(L_8/((float)L_10))), NULL);
		// rect.width /= camera.pixelWidth;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&V_0);
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_11, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = ___1_camera;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_13, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_11, ((float)(L_12/((float)L_14))), NULL);
		// rect.height /= camera.pixelHeight;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_15 = (&V_0);
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_15, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___1_camera;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_17, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_15, ((float)(L_16/((float)L_18))), NULL);
		// return rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19 = V_0;
		return L_19;
	}
}
// System.Void CompassNavigatorPro.Misc::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Misc__cctor_mDFDD54913734DFE0EE801F7AADA5AB69888ADB31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector4 Vector4back = new Vector4 (0, 0, -1, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_0), (0.0f), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector4back_0 = L_0;
		// public static Vector3 Vector3one = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3one_1 = L_1;
		// public static Vector3 Vector3zero = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3zero_2 = L_2;
		// public static Vector3 Vector3back = Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3back_3 = L_3;
		// public static Vector3 Vector3left = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3left_4 = L_4;
		// public static Vector3 Vector3right = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3right_5 = L_5;
		// public static Vector3 Vector3up = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3up_6 = L_6;
		// public static Vector3 Vector3down = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3down_7 = L_7;
		// public static Vector3 Vector3half = new Vector3(0.5f, 0.5f, 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector3half_8 = L_8;
		// public static Vector2 Vector2left = Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2left_9 = L_9;
		// public static Vector2 Vector2right = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2right_10 = L_10;
		// public static Vector2 Vector2one = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2one_11 = L_11;
		// public static Vector2 Vector2zero = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2zero_12 = L_12;
		// public static Vector2 Vector2down = Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2down_13 = L_13;
		// public static Vector2 Vector2up = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2up_14 = L_14;
		// public static Vector2 Vector2max = new Vector2 (100000f, 100000f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (100000.0f), (100000.0f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2max_15 = L_15;
		// public static Vector2 Vector2half = new Vector2(0.5f, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.5f), (0.5f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___Vector2half_16 = L_16;
		// public static Vector3 ViewportCenter = new Vector3 (0.5f, 0.5f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___ViewportCenter_17 = L_17;
		// public static Color ColorTransparent = new Color (0, 0, 0, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_18), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___ColorTransparent_18 = L_18;
		// public static Quaternion QuaternionZero = Quaternion.Euler (0f, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___QuaternionZero_19 = L_19;
		// static readonly Vector3[] wc = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_StaticFields*)il2cpp_codegen_static_fields_for(Misc_t7962CF9F87E4652A78745EA78F8BA07AB8473FC8_il2cpp_TypeInfo_var))->___wc_20), (void*)L_20);
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
// System.Void CompassNavigatorProDemos.DiscoverArea::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverArea_OnTriggerEnter_m9B354BFAAFA03327C3B342B7CED69CFA071F00F8 (DiscoverArea_t6FC8666EA3E819CCF22F295A2F5F04FB2B540996* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_col, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE28F51BD2488B4940EF2B6B5D7C84B5DAADCF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.tag == "MainCamera") {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_col;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// CompassPro.instance.ShowAnimatedText("Area Discovered!");
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_4;
		L_4 = CompassPro_get_instance_m6F18F3A716DBDAEFE2D2E76BCAD91BFE5230ECDA(NULL);
		NullCheck(L_4);
		CompassPro_ShowAnimatedText_m656ADF85B0E24D785B2CA3CD648EF969F2538FDB(L_4, _stringLiteral1AE28F51BD2488B4940EF2B6B5D7C84B5DAADCF0, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.DiscoverArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverArea__ctor_mBB28B8035CC2884AFD691D1F88D5EC187D49E5E1 (DiscoverArea_t6FC8666EA3E819CCF22F295A2F5F04FB2B540996* __this, const RuntimeMethod* method) 
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
// System.Void CompassNavigatorProDemos.FreeCameraMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeCameraMove_Update_mA74B3FDA29058A0292F1F89ECDAA93ECD96E1F09 (FreeCameraMove_tDEB8581F95B3E769A016AB5F73B7334996E0939D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 mousePos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		V_0 = L_1;
		// if (mousePos.x < 0 || mousePos.x > Screen.width || mousePos.y < 0 || mousePos.y > Screen.height)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		if ((((float)L_3) < ((float)(0.0f))))
		{
			goto IL_0041;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((((float)L_5) > ((float)((float)L_6))))
		{
			goto IL_0041;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		if ((((float)L_8) < ((float)(0.0f))))
		{
			goto IL_0041;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((!(((float)L_10) > ((float)((float)L_11)))))
		{
			goto IL_0042;
		}
	}

IL_0041:
	{
		// return;
		return;
	}

IL_0042:
	{
		// CompassPro compass = CompassPro.instance;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_12;
		L_12 = CompassPro_get_instance_m6F18F3A716DBDAEFE2D2E76BCAD91BFE5230ECDA(NULL);
		V_1 = L_12;
		// if (compass != null) {
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0103;
		}
	}
	{
		// if (!compass.IsMouseOverMiniMap ()) {
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = CompassPro_IsMouseOverMiniMap_m3940426A1576316E69FD5918C8C9D20C3C2EDCD0(L_15, NULL);
		if (L_16)
		{
			goto IL_0103;
		}
	}
	{
		// rotationX += Input.GetAxis ("Mouse X") * cameraSensitivity * Time.deltaTime;
		float L_17 = __this->___rotationX_10;
		float L_18;
		L_18 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_19 = __this->___cameraSensitivity_4;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___rotationX_10 = ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_19)), L_20))));
		// transform.localRotation = Quaternion.AngleAxis (rotationX, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_22 = __this->___rotationX_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_22, L_23, NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_24, NULL);
		// rotationY += Input.GetAxis ("Mouse Y") * cameraSensitivity * Time.deltaTime;
		float L_25 = __this->___rotationY_11;
		float L_26;
		L_26 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_27 = __this->___cameraSensitivity_4;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___rotationY_11 = ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_26, L_27)), L_28))));
		// rotationY = Mathf.Clamp(rotationY, -15, 15);
		float L_29 = __this->___rotationY_11;
		float L_30;
		L_30 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_29, (-15.0f), (15.0f), NULL);
		__this->___rotationY_11 = L_30;
		// transform.localRotation *= Quaternion.AngleAxis (rotationY, Vector3.left);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_32, NULL);
		float L_34 = __this->___rotationY_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_34, L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_33, L_36, NULL);
		NullCheck(L_32);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_32, L_37, NULL);
	}

IL_0103:
	{
		// Vector3 oldPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		V_2 = L_39;
		// if (Input.GetKey (KeyCode.LeftShift) || Input.GetKey (KeyCode.RightShift)) {
		bool L_40;
		L_40 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_40)
		{
			goto IL_012a;
		}
	}
	{
		bool L_41;
		L_41 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		if (!L_41)
		{
			goto IL_01c7;
		}
	}

IL_012a:
	{
		// transform.position += transform.forward * (normalMoveSpeed * fastMoveFactor) * Input.GetAxis ("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = L_42;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_45, NULL);
		float L_47 = __this->___normalMoveSpeed_6;
		float L_48 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, ((float)il2cpp_codegen_multiply(L_47, L_48)), NULL);
		float L_50;
		L_50 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_50, NULL);
		float L_52;
		L_52 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_53, NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_54, NULL);
		// transform.position += transform.right * (normalMoveSpeed * fastMoveFactor) * Input.GetAxis ("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = L_55;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_58, NULL);
		float L_60 = __this->___normalMoveSpeed_6;
		float L_61 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_59, ((float)il2cpp_codegen_multiply(L_60, L_61)), NULL);
		float L_63;
		L_63 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, L_63, NULL);
		float L_65;
		L_65 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_64, L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_57, L_66, NULL);
		NullCheck(L_56);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_56, L_67, NULL);
		goto IL_0309;
	}

IL_01c7:
	{
		// } else if (Input.GetKey (KeyCode.LeftControl) || Input.GetKey (KeyCode.RightControl)) {
		bool L_68;
		L_68 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_68)
		{
			goto IL_01e2;
		}
	}
	{
		bool L_69;
		L_69 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_69)
		{
			goto IL_027f;
		}
	}

IL_01e2:
	{
		// transform.position += transform.forward * (normalMoveSpeed * slowMoveFactor) * Input.GetAxis ("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = L_70;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_71, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_73, NULL);
		float L_75 = __this->___normalMoveSpeed_6;
		float L_76 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_74, ((float)il2cpp_codegen_multiply(L_75, L_76)), NULL);
		float L_78;
		L_78 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, L_78, NULL);
		float L_80;
		L_80 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_81, NULL);
		NullCheck(L_71);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_71, L_82, NULL);
		// transform.position += transform.right * (normalMoveSpeed * slowMoveFactor) * Input.GetAxis ("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = L_83;
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_86, NULL);
		float L_88 = __this->___normalMoveSpeed_6;
		float L_89 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_87, ((float)il2cpp_codegen_multiply(L_88, L_89)), NULL);
		float L_91;
		L_91 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_90, L_91, NULL);
		float L_93;
		L_93 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_94, NULL);
		NullCheck(L_84);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_84, L_95, NULL);
		goto IL_0309;
	}

IL_027f:
	{
		// transform.position += transform.forward * normalMoveSpeed * Input.GetAxis ("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = L_96;
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_99, NULL);
		float L_101 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_100, L_101, NULL);
		float L_103;
		L_103 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_102, L_103, NULL);
		float L_105;
		L_105 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_104, L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_98, L_106, NULL);
		NullCheck(L_97);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_97, L_107, NULL);
		// transform.position += transform.right * normalMoveSpeed * Input.GetAxis ("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = L_108;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_111, NULL);
		float L_113 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_112, L_113, NULL);
		float L_115;
		L_115 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_114, L_115, NULL);
		float L_117;
		L_117 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_116, L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_110, L_118, NULL);
		NullCheck(L_109);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_109, L_119, NULL);
	}

IL_0309:
	{
		// if (Input.GetKey (KeyCode.Q)) {
		bool L_120;
		L_120 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		if (!L_120)
		{
			goto IL_0348;
		}
	}
	{
		// transform.position -= transform.up * climbSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122 = L_121;
		NullCheck(L_122);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_122, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_124);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_124, NULL);
		float L_126 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_125, L_126, NULL);
		float L_128;
		L_128 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_127, L_128, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_123, L_129, NULL);
		NullCheck(L_122);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_122, L_130, NULL);
	}

IL_0348:
	{
		// if (Input.GetKey (KeyCode.E)) {
		bool L_131;
		L_131 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		if (!L_131)
		{
			goto IL_0387;
		}
	}
	{
		// transform.position += transform.up * climbSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = L_132;
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_135, NULL);
		float L_137 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_136, L_137, NULL);
		float L_139;
		L_139 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_138, L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_134, L_140, NULL);
		NullCheck(L_133);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_133, L_141, NULL);
	}

IL_0387:
	{
		// transform.position = new Vector3 (transform.position.x, 1, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_143, NULL);
		float L_145 = L_144.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_146;
		L_146 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_146);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_146, NULL);
		float L_148 = L_147.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_149), L_145, (1.0f), L_148, /*hidden argument*/NULL);
		NullCheck(L_142);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_142, L_149, NULL);
		// if (!bounds.Contains (transform.position)) {
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_150 = (&__this->___bounds_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151;
		L_151 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_151);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_151, NULL);
		bool L_153;
		L_153 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_03e0;
		}
	}
	{
		// transform.position = oldPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = V_2;
		NullCheck(L_154);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_154, L_155, NULL);
	}

IL_03e0:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.FreeCameraMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeCameraMove__ctor_m0431316892586453BDE24EE4E6754B3E519932FD (FreeCameraMove_tDEB8581F95B3E769A016AB5F73B7334996E0939D* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraSensitivity = 150;
		__this->___cameraSensitivity_4 = (150.0f);
		// public float climbSpeed = 20;
		__this->___climbSpeed_5 = (20.0f);
		// public float normalMoveSpeed = 20;
		__this->___normalMoveSpeed_6 = (20.0f);
		// public float slowMoveFactor = 0.25f;
		__this->___slowMoveFactor_7 = (0.25f);
		// public float fastMoveFactor = 3;
		__this->___fastMoveFactor_8 = (3.0f);
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
// System.Void CompassNavigatorProDemos.LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_m4B5CFE4CAC55C6677D438B9D1C3F811F32EBE2ED (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_MiniMapClicked_mE2EDE8EB668886934E0735B95A28D60AEBA9A5DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_POIClicked_mAC774BB2BB5C4EFC6132A7672BE9160B15F00FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_POIExit_mDE121AF289222F2ECF09C0AC74431CF7562BD0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_POIHover_m639A18BF87915EA713B13044CAB2DCDFBABEEDE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_POIVisited_mE277E36E61BF98457453B25B4B215104C84B6773_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// compass = CompassPro.instance;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_0;
		L_0 = CompassPro_get_instance_m6F18F3A716DBDAEFE2D2E76BCAD91BFE5230ECDA(NULL);
		__this->___compass_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compass_9), (void*)L_0);
		// compass.OnPOIVisited += POIVisited;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_1 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_2 = L_1;
		NullCheck(L_2);
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_3 = L_2->___OnPOIVisited_66;
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_4 = (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)il2cpp_codegen_object_new(Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m2B11C74E1F3162A496865DA4BE8016AF9FF52F42(L_4, __this, (intptr_t)((void*)LevelManager_POIVisited_mE277E36E61BF98457453B25B4B215104C84B6773_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___OnPOIVisited_66 = ((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_5, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnPOIVisited_66), (void*)((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_5, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var)));
		// compass.OnPOIMiniMapIconMouseEnter += POIHover;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_6 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_7 = L_6;
		NullCheck(L_7);
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_8 = L_7->___OnPOIMiniMapIconMouseEnter_69;
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_9 = (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)il2cpp_codegen_object_new(Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m2B11C74E1F3162A496865DA4BE8016AF9FF52F42(L_9, __this, (intptr_t)((void*)LevelManager_POIHover_m639A18BF87915EA713B13044CAB2DCDFBABEEDE9_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		NullCheck(L_7);
		L_7->___OnPOIMiniMapIconMouseEnter_69 = ((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_10, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___OnPOIMiniMapIconMouseEnter_69), (void*)((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_10, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var)));
		// compass.OnPOIMiniMapIconMouseExit += POIExit;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_11 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_12 = L_11;
		NullCheck(L_12);
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_13 = L_12->___OnPOIMiniMapIconMouseExit_70;
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_14 = (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)il2cpp_codegen_object_new(Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2B11C74E1F3162A496865DA4BE8016AF9FF52F42(L_14, __this, (intptr_t)((void*)LevelManager_POIExit_mDE121AF289222F2ECF09C0AC74431CF7562BD0B6_RuntimeMethod_var), NULL);
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		NullCheck(L_12);
		L_12->___OnPOIMiniMapIconMouseExit_70 = ((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_15, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___OnPOIMiniMapIconMouseExit_70), (void*)((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_15, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var)));
		// compass.OnPOIMiniMapIconMouseClick += POIClicked;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_16 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_17 = L_16;
		NullCheck(L_17);
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_18 = L_17->___OnPOIMiniMapIconMouseClick_73;
		Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9* L_19 = (Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)il2cpp_codegen_object_new(Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m2B11C74E1F3162A496865DA4BE8016AF9FF52F42(L_19, __this, (intptr_t)((void*)LevelManager_POIClicked_mAC774BB2BB5C4EFC6132A7672BE9160B15F00FB1_RuntimeMethod_var), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_18, L_19, NULL);
		NullCheck(L_17);
		L_17->___OnPOIMiniMapIconMouseClick_73 = ((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_20, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___OnPOIMiniMapIconMouseClick_73), (void*)((Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9*)Castclass((RuntimeObject*)L_20, Action_1_t3432E087E6C987B3D0C8E0B1AB6C4B554F6367E9_il2cpp_TypeInfo_var)));
		// compass.OnMiniMapMouseClick += MiniMapClicked;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_21 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_22 = L_21;
		NullCheck(L_22);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_23 = L_22->___OnMiniMapMouseClick_85;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_24 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_24, __this, (intptr_t)((void*)LevelManager_MiniMapClicked_mE2EDE8EB668886934E0735B95A28D60AEBA9A5DD_RuntimeMethod_var), NULL);
		Delegate_t* L_25;
		L_25 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_23, L_24, NULL);
		NullCheck(L_22);
		L_22->___OnMiniMapMouseClick_85 = ((Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)Castclass((RuntimeObject*)L_25, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___OnMiniMapMouseClick_85), (void*)((Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)Castclass((RuntimeObject*)L_25, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var)));
		// for (int k = 1; k <= initialPoiCount; k++) {
		V_0 = 1;
		goto IL_00dc;
	}

IL_00d2:
	{
		// AddRandomPOI ();
		LevelManager_AddRandomPOI_m625F34D0169CE4544929726D1E6245B02430AB63(__this, NULL);
		// for (int k = 1; k <= initialPoiCount; k++) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00dc:
	{
		// for (int k = 1; k <= initialPoiCount; k++) {
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___initialPoiCount_4;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_m470BE650AB2B5EFD165FD2EB958C5A223933F205 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown (KeyCode.B)) {
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)98), NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// compass.POIShowBeacon (5f, 1.1f, 1f, new Color (1, 1, 0.25f));
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_1 = __this->___compass_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		NullCheck(L_1);
		CompassPro_POIShowBeacon_m71E947F633B2648020A98D6895CC6D8EE7267122(L_1, (5.0f), (1.10000002f), (1.0f), L_2, NULL);
	}

IL_0037:
	{
		// if (Input.GetKey (KeyCode.Z)) {
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)122), NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// compass.miniMapZoomLevel -= Time.deltaTime;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_4 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = CompassPro_get_miniMapZoomLevel_m6A0158E10689EFEC9AAF45CDEE95C6A3DCB3F5BA_inline(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_5);
		CompassPro_set_miniMapZoomLevel_m594EAFF331301D5AAB5A85D4A79CFBD995D0EB11(L_5, ((float)il2cpp_codegen_subtract(L_6, L_7)), NULL);
	}

IL_0057:
	{
		// if (Input.GetKey (KeyCode.X)) {
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)120), NULL);
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		// compass.miniMapZoomLevel += Time.deltaTime;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_9 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_10 = L_9;
		NullCheck(L_10);
		float L_11;
		L_11 = CompassPro_get_miniMapZoomLevel_m6A0158E10689EFEC9AAF45CDEE95C6A3DCB3F5BA_inline(L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_10);
		CompassPro_set_miniMapZoomLevel_m594EAFF331301D5AAB5A85D4A79CFBD995D0EB11(L_10, ((float)il2cpp_codegen_add(L_11, L_12)), NULL);
	}

IL_0077:
	{
		// if (Input.GetKeyDown (KeyCode.M)) {
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)109), NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		// compass.showMiniMap = !compass.showMiniMap;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_14 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_15 = __this->___compass_9;
		NullCheck(L_15);
		bool L_16;
		L_16 = CompassPro_get_showMiniMap_m8C1FFE235B036DA3CF740396FB86BE1FA8C4C8E4_inline(L_15, NULL);
		NullCheck(L_14);
		CompassPro_set_showMiniMap_m5C6B334A9CAFB95E04E361819320DF3DA1A887A6(L_14, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0099:
	{
		// if (Input.GetKeyDown (KeyCode.C)) {
		bool L_17;
		L_17 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_17)
		{
			goto IL_00f9;
		}
	}
	{
		// Ray ray = Camera.main.ViewportPointToRay (new Vector3 (0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_19), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_20;
		L_20 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_18, L_19, NULL);
		// if (Physics.Raycast (ray, out hit)) {
		bool L_21;
		L_21 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_20, (&V_0), NULL);
		if (!L_21)
		{
			goto IL_00f9;
		}
	}
	{
		// compass.POIShowBeacon (hit.point, 5f, 1.1f, 1f, new Color (0, 0.5f, 1f));
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_22 = __this->___compass_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_24), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		CompassPro_POIShowBeacon_m06307E76476F33F2687ED25C896D0DDB92FA8300(L_22, L_23, (5.0f), (1.10000002f), (1.0f), L_24, NULL);
	}

IL_00f9:
	{
		// if (Input.GetKeyDown (KeyCode.T)) {
		bool L_25;
		L_25 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)116), NULL);
		if (!L_25)
		{
			goto IL_011b;
		}
	}
	{
		// compass.miniMapZoomState = !compass.miniMapZoomState;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_26 = __this->___compass_9;
		CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* L_27 = __this->___compass_9;
		NullCheck(L_27);
		bool L_28;
		L_28 = CompassPro_get_miniMapZoomState_m82435D15596D708DAAF281F9422F19C8C4F55E5F_inline(L_27, NULL);
		NullCheck(L_26);
		CompassPro_set_miniMapZoomState_mF3252925E45B80B36676E98D844B6D55BBB9FF59(L_26, (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_011b:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnGUI_mDB74ADE9E5ED11BF61C80275231AACAD63F55E34 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_1 = NULL;
	{
		// if (POIUnderMouse != null) {
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_0 = __this->___POIUnderMouse_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_008a;
		}
	}
	{
		// Rect rect = POIUnderMouse.GetMiniMapIconScreenRect ();
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_2 = __this->___POIUnderMouse_10;
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = CompassProPOI_GetMiniMapIconScreenRect_mC8A65FDEE25A1038A3F3B29307D4791DD2AD261E(L_2, NULL);
		V_0 = L_3;
		// rect = new Rect (rect.center.x - 100, Screen.height - rect.y - 65, 200, 25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_0), NULL);
		float L_5 = L_4.___x_0;
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), ((float)il2cpp_codegen_subtract(L_5, (100.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)L_6), L_7)), (65.0f))), (200.0f), (25.0f), NULL);
		// GUIStyle style = GUI.skin.GetStyle("Label");
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_8;
		L_8 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_8);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9;
		L_9 = GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA(L_8, _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD, NULL);
		V_1 = L_9;
		// style.alignment = TextAnchor.UpperCenter;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = V_1;
		NullCheck(L_10);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_10, 1, NULL);
		// style.normal.textColor = Color.yellow;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = V_1;
		NullCheck(L_11);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_12;
		L_12 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_12);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_12, L_13, NULL);
		// GUI.Label (rect, POIUnderMouse.title, style);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = V_0;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_15 = __this->___POIUnderMouse_10;
		NullCheck(L_15);
		String_t* L_16 = L_15->___title_11;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17 = V_1;
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_14, L_16, L_17, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::AddRandomPOI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddRandomPOI_m625F34D0169CE4544929726D1E6245B02430AB63 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3 (Random.Range (-50, 50), 1, Random.Range (-50, 50));
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-50), ((int32_t)50), NULL);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-50), ((int32_t)50), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_0), (1.0f), ((float)L_1), NULL);
		// AddPOI(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		LevelManager_AddPOI_m7F9A8D98BF52E45742F3A3EA12268F1A4A850348(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::AddPOI(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddPOI_m7F9A8D98BF52E45742F3A3EA12268F1A4A850348 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m1EDB527367ACCD7563E6E0268AE890F036C9D440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E0DB8A252F39A25AD6A011D0EBD96A4EA414DD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7E283F858CD1DC91E63B8127B247C9652B8DE83);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// GameObject obj = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		// obj.transform.position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// obj.GetComponent<Renderer>().material = sphereMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_1;
		NullCheck(L_4);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_4, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___sphereMaterial_5;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
		// CompassProPOI poi = obj.AddComponent<CompassProPOI>();
		NullCheck(L_4);
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_7;
		L_7 = GameObject_AddComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m1EDB527367ACCD7563E6E0268AE890F036C9D440(L_4, GameObject_AddComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m1EDB527367ACCD7563E6E0268AE890F036C9D440_RuntimeMethod_var);
		// poi.title = "Target " + (++poiNumber).ToString();
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_8 = L_7;
		int32_t L_9 = __this->___poiNumber_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		__this->___poiNumber_8 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE7E283F858CD1DC91E63B8127B247C9652B8DE83, L_11, NULL);
		NullCheck(L_8);
		L_8->___title_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___title_11), (void*)L_12);
		// poi.titleVisibility = TITLE_VISIBILITY.Always;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_13 = L_8;
		NullCheck(L_13);
		L_13->___titleVisibility_12 = 1;
		// poi.visitedText = "Target " + poiNumber + " acquired!";
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_14 = L_13;
		int32_t* L_15 = (&__this->___poiNumber_8);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE7E283F858CD1DC91E63B8127B247C9652B8DE83, L_16, _stringLiteral4E0DB8A252F39A25AD6A011D0EBD96A4EA414DD0, NULL);
		NullCheck(L_14);
		L_14->___visitedText_17 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___visitedText_17), (void*)L_17);
		// int j = Random.Range(0, icons.Length / 2);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_18 = __this->___icons_6;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((int32_t)(((RuntimeArray*)L_18)->max_length))/2)), NULL);
		V_0 = L_19;
		// poi.iconNonVisited = icons[j * 2];
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_20 = L_14;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_21 = __this->___icons_6;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_multiply(L_22, 2));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_20);
		L_20->___iconNonVisited_21 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___iconNonVisited_21), (void*)L_24);
		// poi.iconVisited = icons[j * 2 + 1];
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_25 = L_20;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_26 = __this->___icons_6;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, 2)), 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		L_25->___iconVisited_22 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___iconVisited_22), (void*)L_29);
		// poi.showPlayModeGizmo = true;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_30 = L_25;
		NullCheck(L_30);
		L_30->___showPlayModeGizmo_24 = (bool)1;
		// j = Random.Range(0, soundClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = __this->___soundClips_7;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_31)->max_length)), NULL);
		V_0 = L_32;
		// poi.visitedAudioClip = soundClips[j];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_33 = __this->___soundClips_7;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_30);
		L_30->___visitedAudioClip_18 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___visitedAudioClip_18), (void*)L_36);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::POIVisited(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_POIVisited_mE277E36E61BF98457453B25B4B215104C84B6773 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E491217AD26AA9C4175F2D9186C384E3E3F7E70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log (poi.title + " has been reached.");
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_0 = ___0_poi;
		NullCheck(L_0);
		String_t* L_1 = L_0->___title_11;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral6E491217AD26AA9C4175F2D9186C384E3E3F7E70, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// StartCoroutine (RemovePOI (poi));
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_3 = ___0_poi;
		RuntimeObject* L_4;
		L_4 = LevelManager_RemovePOI_m35198F2A56183744C390E97F85E51DAF5773736C(__this, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CompassNavigatorProDemos.LevelManager::RemovePOI(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_RemovePOI_m35198F2A56183744C390E97F85E51DAF5773736C (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* L_0 = (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D*)il2cpp_codegen_object_new(U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRemovePOIU3Ed__13__ctor_mCF4C431429A89C5839018E0A90D87E83771620AA(L_0, 0, NULL);
		U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* L_1 = L_0;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_2 = ___0_poi;
		NullCheck(L_1);
		L_1->___poi_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___poi_2), (void*)L_2);
		return L_1;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::POIClicked(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_POIClicked_mAC774BB2BB5C4EFC6132A7672BE9160B15F00FB1 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C2A2A84028E793FD75B8042666B72F537BC4A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log (poi.title + " has been clicked on minimap.");
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_0 = ___0_poi;
		NullCheck(L_0);
		String_t* L_1 = L_0->___title_11;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral8C2A2A84028E793FD75B8042666B72F537BC4A1B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::POIHover(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_POIHover_m639A18BF87915EA713B13044CAB2DCDFBABEEDE9 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) 
{
	{
		// POIUnderMouse = poi;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_0 = ___0_poi;
		__this->___POIUnderMouse_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___POIUnderMouse_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::POIExit(CompassNavigatorPro.CompassProPOI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_POIExit_mDE121AF289222F2ECF09C0AC74431CF7562BD0B6 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* ___0_poi, const RuntimeMethod* method) 
{
	{
		// POIUnderMouse = null;
		__this->___POIUnderMouse_10 = (CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___POIUnderMouse_10), (void*)(CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607*)NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::MiniMapClicked(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_MiniMapClicked_mE2EDE8EB668886934E0735B95A28D60AEBA9A5DD (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017FE148012E6E5DBE65C3F6C3E7FF111A3ECCA9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("User clicked on mini-map. Creating a POI at world position: " + position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		V_0 = L_0;
		String_t* L_1;
		L_1 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral017FE148012E6E5DBE65C3F6C3E7FF111A3ECCA9, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// position.y = 1f;
		(&___0_position)->___y_3 = (1.0f);
		// AddPOI(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		LevelManager_AddPOI_m7F9A8D98BF52E45742F3A3EA12268F1A4A850348(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m508BA3F8B114224B7FF30779E85C8D71DD0F84D7 (LevelManager_t12A59FD04F93561AEC3E55D9E40A0A1C7173F814* __this, const RuntimeMethod* method) 
{
	{
		// public int initialPoiCount = 1;
		__this->___initialPoiCount_4 = 1;
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
// System.Void CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemovePOIU3Ed__13__ctor_mCF4C431429A89C5839018E0A90D87E83771620AA (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemovePOIU3Ed__13_System_IDisposable_Dispose_m3A2AE957B04B7AE2ED5885BF82C22672218F0B85 (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRemovePOIU3Ed__13_MoveNext_m2D6EB9C27F2C64003793B59853B8F1F656C8614E (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007e;
	}

IL_0019:
	{
		// poi.transform.position += Vector3.up * Time.deltaTime;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_3 = __this->___poi_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_10, NULL);
		// poi.transform.localScale *= 0.9f;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_11 = __this->___poi_2;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (0.899999976f), NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_15, NULL);
		// yield return new WaitForEndOfFrame ();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_16 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_16, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007e:
	{
		// while (poi.transform.position.y < 5) {
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_17 = __this->___poi_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		if ((((float)L_20) < ((float)(5.0f))))
		{
			goto IL_0019;
		}
	}
	{
		// Destroy (poi.gameObject);
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_21 = __this->___poi_2;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_22, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRemovePOIU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m572C3DA081322DCF65E3D0623C7067B49E7834DE (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemovePOIU3Ed__13_System_Collections_IEnumerator_Reset_m26B110E801FAEFC903353769BFED1734A26EE52C (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRemovePOIU3Ed__13_System_Collections_IEnumerator_Reset_m26B110E801FAEFC903353769BFED1734A26EE52C_RuntimeMethod_var)));
	}
}
// System.Object CompassNavigatorProDemos.LevelManager/<RemovePOI>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRemovePOIU3Ed__13_System_Collections_IEnumerator_get_Current_m603C0BFAD63015FA613CC0ACD84836328671070F (U3CRemovePOIU3Ed__13_tB21D14AD0A7DECEC7E7DF9CFFB19EF84DFC0741D* __this, const RuntimeMethod* method) 
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
// System.Void CompassNavigatorProDemos.POIHeartbeatAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POIHeartbeatAnimator_Start_m227A1607D613B32DD3947DEDFB45D79B42DFB916 (POIHeartbeatAnimator_tECC47A616B3AE3CC55ABF6A132319A9DBA4575D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m8281F2C78F2AE9755001A814555B84B4DBEA4A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&POIHeartbeatAnimator_OnHeartbeatHandler_m6E43398A08DAAD615226A28D40F948F7111D7AF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// poi = GetComponent<CompassProPOI>();
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_0;
		L_0 = Component_GetComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m8281F2C78F2AE9755001A814555B84B4DBEA4A16(__this, Component_GetComponent_TisCompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607_m8281F2C78F2AE9755001A814555B84B4DBEA4A16_RuntimeMethod_var);
		__this->___poi_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poi_4), (void*)L_0);
		// poi.OnHeartbeat += OnHeartbeatHandler;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_1 = __this->___poi_4;
		CompassProPOI_t23B47A8A8CD83B4B52C2F23C9FD537F28EEF3607* L_2 = L_1;
		NullCheck(L_2);
		OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3* L_3 = L_2->___OnHeartbeat_38;
		OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3* L_4 = (OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3*)il2cpp_codegen_object_new(OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnHeartbeatEvent__ctor_m09735810C2E41EB797177679F3DB7105498AB276(L_4, __this, (intptr_t)((void*)POIHeartbeatAnimator_OnHeartbeatHandler_m6E43398A08DAAD615226A28D40F948F7111D7AF7_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___OnHeartbeat_38 = ((OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3*)CastclassSealed((RuntimeObject*)L_5, OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnHeartbeat_38), (void*)((OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3*)CastclassSealed((RuntimeObject*)L_5, OnHeartbeatEvent_tC87603285930CB2FFFFFD6CCC332F978BBBD31E3_il2cpp_TypeInfo_var)));
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_6);
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.POIHeartbeatAnimator::OnHeartbeatHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POIHeartbeatAnimator_OnHeartbeatHandler_m6E43398A08DAAD615226A28D40F948F7111D7AF7 (POIHeartbeatAnimator_tECC47A616B3AE3CC55ABF6A132319A9DBA4575D7* __this, const RuntimeMethod* method) 
{
	{
		// if (rb.IsSleeping()) {
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Rigidbody_IsSleeping_m059CBAD60AA4A6CA666FE2EAD2D7A3B02269E43F(L_0, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// rb.AddForce(Vector3.up * (100f + Random.value * 100f));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4;
		L_4 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)il2cpp_codegen_add((100.0f), ((float)il2cpp_codegen_multiply(L_4, (100.0f))))), NULL);
		NullCheck(L_2);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_2, L_5, NULL);
		// rb.AddTorque(Random.onUnitSphere * 10f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (10.0f), NULL);
		NullCheck(L_6);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_6, L_8, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void CompassNavigatorProDemos.POIHeartbeatAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POIHeartbeatAnimator__ctor_m50D41DCAE07106BEA48A235C9EA625C875DD2351 (POIHeartbeatAnimator_tECC47A616B3AE3CC55ABF6A132319A9DBA4575D7* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnAnimationEndDelegate_Invoke_m909DC72D89EB8277E5D9CC69527A61694E10F7C7_inline (OnAnimationEndDelegate_t636837B670AC3CE7A0A3A03739FC6287FA6D5518* __this, int32_t ___0_poolIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_poolIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CompassPro_get_miniMapZoomLevel_m6A0158E10689EFEC9AAF45CDEE95C6A3DCB3F5BA_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _miniMapZoomLevel; }
		float L_0 = __this->____miniMapZoomLevel_124;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompassPro_get_showMiniMap_m8C1FFE235B036DA3CF740396FB86BE1FA8C4C8E4_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _showMiniMap; }
		bool L_0 = __this->____showMiniMap_88;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompassPro_get_miniMapZoomState_m82435D15596D708DAAF281F9422F19C8C4F55E5F_inline (CompassPro_t74E7DB09BB6E1EE7577DA16E6160ABD94064DD6B* __this, const RuntimeMethod* method) 
{
	{
		// return _miniMapZoomState;
		bool L_0 = __this->____miniMapZoomState_140;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
