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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MapCanvasController[]
struct MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// AnimalScript
struct AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Ilumisoft.Environment.CloudLayer
struct CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50;
// EnemyAIAggresive
struct EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InnerMap
struct InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D;
// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// MapArrow
struct MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68;
// MapCanvasController
struct MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5;
// MapMarker
struct MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75;
// MarkerGroup
struct MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Ilumisoft.Environment.Skydome
struct Skydome_t560CAB59D2E6623F1F04A2005EE39963404B8C53;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EnemyAI/<CompletePanel>d__18
struct U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9;
// EnemyAIAggresive/<CompletePanel>d__26
struct U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral03ADE3CDBE671473EF0D8677F3E151A8382141C5;
IL2CPP_EXTERN_C String_t* _stringLiteral048CF392195CA20FB438C853C0317DB429CDF5E1;
IL2CPP_EXTERN_C String_t* _stringLiteral08F6DFCAE19575465169F3E49086BC4BF1AC6FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC684E3C343E5553C0DB8874AACB3BE5BD5E9F7;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A;
IL2CPP_EXTERN_C String_t* _stringLiteral1CADABFEC1B9E6799ECCA604A3E81B6651AAC078;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral36DFE39AC8A56C840F779ADE6D79CC73EFCBBDBC;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral40E86C5B1E2E056581C19F9EF553EA44F7FACAAA;
IL2CPP_EXTERN_C String_t* _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral57BC9206ADB97D4468ECE466E2DB96FDE30C17EC;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF6DF1642044596011F5BE5BDDEE28E7BD499D9;
IL2CPP_EXTERN_C String_t* _stringLiteral78239462CE8AA49406B783398E5BC5D24E905891;
IL2CPP_EXTERN_C String_t* _stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93;
IL2CPP_EXTERN_C String_t* _stringLiteral7E6F57B21C962FCD8E15CC466127B293048A5BEA;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE44FA26C3140C2A3B790DD965501B6DB60D63A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855;
IL2CPP_EXTERN_C String_t* _stringLiteral96F077F0D271CFF7AB71C6018C3BCCA961CCB4C3;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8F4320A3914D69F2800A9A464F8D8EE5ECFFE53;
IL2CPP_EXTERN_C String_t* _stringLiteralCF221E63D03A23B8008DFF93949BF359D70B836A;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C1E2B1E6E4D08248C0849A2781DF30C9318811;
IL2CPP_EXTERN_C String_t* _stringLiteralF0619AC77E4CE3155622BCD7C1617620E9537F95;
IL2CPP_EXTERN_C String_t* _stringLiteralF9832C031148FFB1536EC63FD53ECE00835175EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF1B3C4803BF1AFDB4B895E198D18749E9F003E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisInnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D_m4F7D7FF73857CF5F974FB97A0241A0149B058F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisMapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68_m62AEFEEE5B0D0DD19BBE43A2643B4488F2299B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisMarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F_m335BB059EC12291FA50A8D9C9F09CF1058959E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_mF2EB1BA596FBEAEC9F0692CF8869FE32E628DB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_m48A63D6C73285C19860C3309F46CF64907FC6D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCompletePanelU3Ed__18_System_Collections_IEnumerator_Reset_m77B431F661074F919AFD805AEBEF3B2AD4FA01B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCompletePanelU3Ed__26_System_Collections_IEnumerator_Reset_m9DABF8418BE9CDF9EF577B8BB03B5C57E9A3E29B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// EnemyAI/<CompletePanel>d__18
struct U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9  : public RuntimeObject
{
	// System.Int32 EnemyAI/<CompletePanel>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyAI/<CompletePanel>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// EnemyAIAggresive/<CompletePanel>d__26
struct U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B  : public RuntimeObject
{
	// System.Int32 EnemyAIAggresive/<CompletePanel>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyAIAggresive/<CompletePanel>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
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

// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B 
{
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// AnimalScript
struct AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AnimalScript::explosionRadius
	float ___explosionRadius_4;
	// UnityEngine.LayerMask AnimalScript::enemyLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___enemyLayer_5;
	// UnityEngine.GameObject AnimalScript::explosionPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosionPrefab_6;
	// UnityEngine.GameObject AnimalScript::StunButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StunButton_7;
	// UnityEngine.GameObject[] AnimalScript::Enemy
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Enemy_8;
	// UnityEngine.LineRenderer AnimalScript::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_9;
	// UnityEngine.UI.Slider AnimalScript::PlayerHealth
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___PlayerHealth_10;
	// System.Single AnimalScript::HealthDown
	float ___HealthDown_11;
};

// Ilumisoft.Environment.CloudLayer
struct CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Ilumisoft.Environment.CloudLayer::cloudPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___cloudPrefabs_4;
	// System.Int32 Ilumisoft.Environment.CloudLayer::randomSeed
	int32_t ___randomSeed_5;
	// System.Single Ilumisoft.Environment.CloudLayer::spawnRadius
	float ___spawnRadius_6;
	// System.Single Ilumisoft.Environment.CloudLayer::minLevel
	float ___minLevel_7;
	// System.Single Ilumisoft.Environment.CloudLayer::maxLevel
	float ___maxLevel_8;
	// System.Int32 Ilumisoft.Environment.CloudLayer::numberofClouds
	int32_t ___numberofClouds_9;
	// System.Single Ilumisoft.Environment.CloudLayer::minScale
	float ___minScale_10;
	// System.Single Ilumisoft.Environment.CloudLayer::maxScale
	float ___maxScale_11;
	// System.Single Ilumisoft.Environment.CloudLayer::horizontalStretch
	float ___horizontalStretch_12;
	// System.Single Ilumisoft.Environment.CloudLayer::rotationSpeed
	float ___rotationSpeed_13;
};

// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyAI::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// System.Single EnemyAI::detectionRange
	float ___detectionRange_5;
	// System.Single EnemyAI::runningSpeed
	float ___runningSpeed_6;
	// UnityEngine.Animator EnemyAI::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.AI.NavMeshAgent EnemyAI::navMeshAgent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___navMeshAgent_8;
	// UnityEngine.UI.Image EnemyAI::HealthSlider
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___HealthSlider_9;
	// System.Single EnemyAI::StartingHealth
	float ___StartingHealth_10;
	// System.Single EnemyAI::HalthDownSpeed
	float ___HalthDownSpeed_11;
	// UnityEngine.Animator EnemyAI::PlayerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PlayerAnimator_12;
	// UnityEngine.GameObject EnemyAI::Camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Camera_13;
	// UnityEngine.GameObject EnemyAI::Healthbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Healthbar_14;
	// System.Int32 EnemyAI::KillAnimals
	int32_t ___KillAnimals_15;
};

// EnemyAIAggresive
struct EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyAIAggresive::detectionRadius
	float ___detectionRadius_4;
	// System.Single EnemyAIAggresive::attackRange
	float ___attackRange_5;
	// System.Single EnemyAIAggresive::runSpeed
	float ___runSpeed_6;
	// System.Single EnemyAIAggresive::walkSpeed
	float ___walkSpeed_7;
	// System.Single EnemyAIAggresive::rotationSpeed
	float ___rotationSpeed_8;
	// UnityEngine.Transform EnemyAIAggresive::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_9;
	// UnityEngine.Animator EnemyAIAggresive::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
	// System.Boolean EnemyAIAggresive::playerDetected
	bool ___playerDetected_11;
	// System.Boolean EnemyAIAggresive::isAttacking
	bool ___isAttacking_12;
	// System.Boolean EnemyAIAggresive::isChasing
	bool ___isChasing_13;
	// System.Single EnemyAIAggresive::minDistance
	float ___minDistance_14;
	// UnityEngine.UI.Image EnemyAIAggresive::EnemyHealth
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___EnemyHealth_15;
	// UnityEngine.UI.Image EnemyAIAggresive::HealthBAr
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___HealthBAr_16;
	// UnityEngine.Transform EnemyAIAggresive::Camera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Camera_17;
	// System.Single EnemyAIAggresive::StartingHealth
	float ___StartingHealth_18;
	// System.Single EnemyAIAggresive::HalthDownSpeed
	float ___HalthDownSpeed_19;
	// UnityEngine.Animator EnemyAIAggresive::PlayerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PlayerAnimator_20;
	// System.Single EnemyAIAggresive::walkingRadius
	float ___walkingRadius_21;
	// UnityEngine.Vector3 EnemyAIAggresive::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_22;
	// System.Boolean EnemyAIAggresive::isDeath
	bool ___isDeath_23;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManager::TotalEnemyInLevel
	int32_t ___TotalEnemyInLevel_4;
	// UnityEngine.GameObject GameManager::PausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PausePanel_5;
	// UnityEngine.GameObject GameManager::Complete
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Complete_6;
	// UnityEngine.GameObject GameManager::Fail
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Fail_7;
	// UnityEngine.GameObject GameManager::MoveMentController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MoveMentController_8;
	// UnityEngine.GameObject GameManager::TaskPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TaskPanel_9;
	// System.String[] GameManager::AnimalsNamesToKill
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AnimalsNamesToKill_11;
	// System.Int32 GameManager::KillAnimals
	int32_t ___KillAnimals_12;
};

// InnerMap
struct InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform InnerMap::_innerMapRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____innerMapRect_4;
};

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LevelLoader::Levels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Levels_4;
};

// MapArrow
struct MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MapArrow::_arrowRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____arrowRect_4;
};

// MapCanvasController
struct MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MapCanvasController::playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTransform_5;
	// System.Single MapCanvasController::radarDistance
	float ___radarDistance_6;
	// System.Boolean MapCanvasController::hideOutOfRadius
	bool ___hideOutOfRadius_7;
	// System.Boolean MapCanvasController::useOpacity
	bool ___useOpacity_8;
	// System.Single MapCanvasController::maxRadarDistance
	float ___maxRadarDistance_9;
	// System.Boolean MapCanvasController::rotateMap
	bool ___rotateMap_10;
	// System.Single MapCanvasController::scale
	float ___scale_11;
	// System.Single MapCanvasController::minimalOpacity
	float ___minimalOpacity_12;
	// UnityEngine.RectTransform MapCanvasController::mapRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___mapRect_13;
	// InnerMap MapCanvasController::innerMap
	InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* ___innerMap_14;
	// MapArrow MapCanvasController::mapArrow
	MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* ___mapArrow_15;
	// MarkerGroup MapCanvasController::markerGroup
	MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* ___markerGroup_16;
	// System.Single MapCanvasController::innerMapRadius
	float ___innerMapRadius_17;
};

// MapMarker
struct MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite MapMarker::markerSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___markerSprite_4;
	// System.Single MapMarker::markerSize
	float ___markerSize_5;
	// System.Boolean MapMarker::isActive
	bool ___isActive_6;
	// UnityEngine.UI.Image MapMarker::markerImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___markerImage_7;
};

// MarkerGroup
struct MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MarkerGroup::_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rectTransform_4;
};

// Ilumisoft.Environment.Skydome
struct Skydome_t560CAB59D2E6623F1F04A2005EE39963404B8C53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

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

// EnemyAI/<CompletePanel>d__18

// EnemyAI/<CompletePanel>d__18

// EnemyAIAggresive/<CompletePanel>d__26

// EnemyAIAggresive/<CompletePanel>d__26

// Readme/Section

// Readme/Section

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorStateInfo

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

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

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

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.AI.NavMeshHit

// UnityEngine.AI.NavMeshHit

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

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

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// AnimalScript

// AnimalScript

// Ilumisoft.Environment.CloudLayer

// Ilumisoft.Environment.CloudLayer

// EnemyAI

// EnemyAI

// EnemyAIAggresive

// EnemyAIAggresive

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___Instance_10;
};

// GameManager

// InnerMap

// InnerMap

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields
{
	// LevelLoader LevelLoader::Instance
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* ___Instance_5;
};

// LevelLoader

// MapArrow

// MapArrow

// MapCanvasController
struct MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_StaticFields
{
	// MapCanvasController MapCanvasController::_instance
	MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* ____instance_4;
};

// MapCanvasController

// MapMarker

// MapMarker

// MarkerGroup

// MarkerGroup

// Ilumisoft.Environment.Skydome

// Ilumisoft.Environment.Skydome

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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// MapCanvasController[]
struct MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A  : public RuntimeArray
{
	ALIGN_FIELD (8) MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* m_Items[1];

	inline MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyAI>()
inline EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* GameObject_GetComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_mF2EB1BA596FBEAEC9F0692CF8869FE32E628DB16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyAI::stun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_stun_m66B21A5DBA90DCD8F1AF289B8CE8EF7EC28847A9 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void GameManager::LevelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelFail_mEF21E036B53D8C7FF1C1079A6945389BAE94DB63 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI::PlayRandomAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_PlayRandomAnimation_mB5882967513B0367DA024A34F7E6F37D8F99F9BC (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___1_hit, float ___2_maxDistance, int32_t ___3_areaMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemyAI::CompletePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyAI_CompletePanel_mD756DCA0E1D7A95E691C0D72D7578E05B09A771C (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void EnemyAI/<CompletePanel>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__18__ctor_m7C85F074E9F4DDF88E82B510F13A1F03ED630ADB (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean EnemyAI::IsAttackAnimationPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying_mFE417FD4E9CEA5A6C756AD62D62E43AD8909AD8F (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAI::IsAttackAnimationPlaying1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying1_m8203AB70731F5D0F71DDE91631C6DD68632476B9 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAI::IsAttackAnimationPlaying2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying2_m4B16AB56EAFA070D024119DE6B07236B1BAFCCD1 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAI::IsAttackAnimationPlaying3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying3_m9026D36C8AE6A8B1FCD563954889B6A5644517E0 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI::Demage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Demage_m09779E6836840A215A51BA8FD51C7F605B372C4B (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void GameManager::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelComplete_mBD98C94316E9EC13AD8F5369334C9174FF669800 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_ChasePlayer_m6ED8A4F3C60F5C525E75E47363FFB62887781461 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive::StopChasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_StopChasing_m58D86C1BEE54122342E7630ED23E7893DD23F5F6 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive::ReturnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_ReturnToInitialPosition_mA86C49A9C5E6CB3DF78D39ADE986FB171CF39DC5 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_AttackPlayer_m77EB6CA37433AB91D77A9AC902FAD42E6596726C (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemyAIAggresive::CompletePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyAIAggresive_CompletePanel_m0EC0F8796E9B0C492B959C3BC658A71BDDED0185 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive/<CompletePanel>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__26__ctor_mC38E65F10F2F0BB465D2339A47CC03284300FC5F (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying_mAAB83AFA87DD133A29DCA5D0773C33204B839489 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying1_mBD0D772D661223F935F61CA88DD5FC3EE8FCF9FD (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying2_m463408B1D8DE5389E078F4300290D9CE48387713 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying3_mB7448997123CCBD2642D417C5278E7E454CFC707 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) ;
// System.Void EnemyAIAggresive::Demage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_Demage_m6659868F6C853A8431B6B35EB55AE900B355BDFF (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void LevelLoader::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadNextLevel_m255F24B41F56FE1A554D3A45194FF5584ED19CB1 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void LevelLoader::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.RectTransform InnerMap::get_InnerMapRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* InnerMap_get_InnerMapRect_mBAAE5D6A06B66C186ACCEA30140EEC9D756C0FB8 (InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetLocalCorners_m18B3E5ED5EB24AD46279199A134CD7F218D3DD11 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
// UnityEngine.RectTransform MapArrow::get_ArrowRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* MapArrow_get_ArrowRect_mBA7F62B96A27ED14ED0F6D88FF6C3DB50431E41C (MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<MapCanvasController>()
inline MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* Object_FindObjectsOfType_TisMapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_m48A63D6C73285C19860C3309F46CF64907FC6D98 (const RuntimeMethod* method)
{
	return ((  MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// T UnityEngine.Component::GetComponentInChildren<InnerMap>()
inline InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* Component_GetComponentInChildren_TisInnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D_m4F7D7FF73857CF5F974FB97A0241A0149B058F2B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<MapArrow>()
inline MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* Component_GetComponentInChildren_TisMapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68_m62AEFEEE5B0D0DD19BBE43A2643B4488F2299B36 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<MarkerGroup>()
inline MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* Component_GetComponentInChildren_TisMarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F_m335BB059EC12291FA50A8D9C9F09CF1058959E5B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Single InnerMap::getMapRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InnerMap_getMapRadius_mF99DE7888464241A137AA05984CD260D334684DE (InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void MapArrow::rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapArrow_rotate_m7DCA30C55DCAA5F66FEA779621CB6AEF9BDC7907 (MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_quat, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MapMarker::getPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MapMarker_getPosition_mFA9B419407E633DEFA8198DFFAAFED7322F42A77 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) ;
// System.Single MapCanvasController::distanceToPlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MapCanvasController_distanceToPlayer_mD5B219105841F4DFF64C10858235A04A0369CAC7 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
// System.Boolean MapMarker::isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) ;
// System.Void MapMarker::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_hide_mDD011B8BF5EE6A59E4BD2F640889ABB258698B28 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) ;
// System.Void MapMarker::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_show_mF468B6D2BB44683ED4737DDEA4F132F954F7E766 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void MapMarker::setLocalPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_setLocalPos_m183995466E47D0072326F6AF9D83528086421094 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void MapMarker::setOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_setOpacity_m4F113BFDB6481D802E1139EEBF863A667AC2A9FE (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, float ___0_opacity, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// MapCanvasController MapCanvasController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* MapCanvasController_get_Instance_mF6455C617F65218702284C37AF0ECE60C0501996 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// MarkerGroup MapCanvasController::get_MarkerGroup()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* MapCanvasController_get_MarkerGroup_m79B2326F5F7E5F8B7ED9FF9F94C3185FC7480358_inline (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform MarkerGroup::get_MarkerGroupRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* MarkerGroup_get_MarkerGroupRect_m26FF229E27C93C086380B9C3F6ECB8C578F63E72 (MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void MapCanvasController::checkIn(MapMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCanvasController_checkIn_mF80832344B9B834C093E6942035C759E37A5054E (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* ___0_marker, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void Ilumisoft.Environment.CloudLayer::RotateClouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_RotateClouds_mDA18B91CF7292C0B86105AB38BFB5D8BA92EEEE1 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void AnimalScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript_Start_m581E33899A547877D47DE837A4CB2145CB873684 (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lineRenderer == null)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0079;
		}
	}
	{
		// lineRenderer = gameObject.AddComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3;
		L_3 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_2, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		__this->___lineRenderer_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_9), (void*)L_3);
		// lineRenderer.startWidth = 0.1f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___lineRenderer_9;
		NullCheck(L_4);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_4, (0.100000001f), NULL);
		// lineRenderer.endWidth = 0.1f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_9;
		NullCheck(L_5);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_5, (0.100000001f), NULL);
		// lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		NullCheck(L_6);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_8, NULL);
		// lineRenderer.startColor = Color.red;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___lineRenderer_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_9);
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_9, L_10, NULL);
		// lineRenderer.endColor = Color.red;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = __this->___lineRenderer_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_11);
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_11, L_12, NULL);
	}

IL_0079:
	{
		// lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___lineRenderer_9;
		NullCheck(L_13);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AnimalScript::Stun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript_Stun_m98EB87DF482CD528FFB852B0EA58FCCD7C249544 (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_mF2EB1BA596FBEAEC9F0692CF8869FE32E628DB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36DFE39AC8A56C840F779ADE6D79CC73EFCBBDBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9832C031148FFB1536EC63FD53ECE00835175EC);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	float V_3 = 0.0f;
	{
		// Debug.LogError("Click");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
		// foreach (GameObject enemy in Enemy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Enemy_8;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00e6;
	}

IL_0018:
	{
		// foreach (GameObject enemy in Enemy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Debug.LogError("ForEach");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF9832C031148FFB1536EC63FD53ECE00835175EC, NULL);
		// float distance = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10;
		L_10 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_6, L_9, NULL);
		V_3 = L_10;
		// Debug.LogError(enemy.name+" "+distance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_13, NULL);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		// if (distance <= explosionRadius)
		float L_15 = V_3;
		float L_16 = __this->___explosionRadius_4;
		if ((!(((float)L_15) <= ((float)L_16))))
		{
			goto IL_00e2;
		}
	}
	{
		// Debug.LogError("Distance");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93, NULL);
		// lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = __this->___lineRenderer_9;
		NullCheck(L_17);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_17, (bool)1, NULL);
		// lineRenderer.SetPosition(0, transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_18 = __this->___lineRenderer_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_18);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_18, 0, L_20, NULL);
		// lineRenderer.SetPosition(1, enemy.transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->___lineRenderer_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		NullCheck(L_21);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_21, 1, L_24, NULL);
		// Instantiate(explosionPrefab, enemy.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___explosionPrefab_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_28, L_29, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// enemy.GetComponent<EnemyAI>().stun();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_31);
		EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* L_32;
		L_32 = GameObject_GetComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_mF2EB1BA596FBEAEC9F0692CF8869FE32E628DB16(L_31, GameObject_GetComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_mF2EB1BA596FBEAEC9F0692CF8869FE32E628DB16_RuntimeMethod_var);
		NullCheck(L_32);
		EnemyAI_stun_m66B21A5DBA90DCD8F1AF289B8CE8EF7EC28847A9(L_32, NULL);
		// Invoke(nameof(DisableLine), 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral36DFE39AC8A56C840F779ADE6D79CC73EFCBBDBC, (1.0f), NULL);
	}

IL_00e2:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e6:
	{
		// foreach (GameObject enemy in Enemy)
		int32_t L_34 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimalScript::DisableLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript_DisableLine_mB0A68B729AC5C61500320C76D2D24BD9B1A68140 (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_9;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AnimalScript::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript_OnDrawGizmosSelected_m71E4CD136C5A9113FE2C14DADAFBDDE7B92E54CF (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, explosionRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___explosionRadius_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AnimalScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript_OnTriggerEnter_m8FB6805FF72A0F788A26B0B2CB97DFB204F55608 (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "NPC")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C, NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// PlayerHealth.value = PlayerHealth.value - HealthDown;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___PlayerHealth_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___PlayerHealth_10;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		float L_7 = __this->___HealthDown_11;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)il2cpp_codegen_subtract(L_6, L_7)));
		// if (PlayerHealth.value <= 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___PlayerHealth_10;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// GameManager.Instance.LevelFail();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_10);
		GameManager_LevelFail_mEF21E036B53D8C7FF1C1079A6945389BAE94DB63(L_10, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void AnimalScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalScript__ctor_m254AB806E3E72221CAD956919DAC73202C6D93D7 (AnimalScript_t421E1FC0A393EFC86C7718970084F26DD2A1D3D5* __this, const RuntimeMethod* method) 
{
	{
		// public float explosionRadius = 5f;
		__this->___explosionRadius_4 = (5.0f);
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
// System.Void EnemyAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Start_mF7B5F2CCA1F4E07B3443D6520DFC0114CCBF7D28 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_0);
		// navMeshAgent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1;
		L_1 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___navMeshAgent_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navMeshAgent_8), (void*)L_1);
		// HealthSlider.fillAmount = StartingHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___HealthSlider_9;
		float L_3 = __this->___StartingHealth_10;
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, L_3, NULL);
		// PlayerAnimator = player.GetComponent<Animator>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___player_4;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_4, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___PlayerAnimator_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PlayerAnimator_12), (void*)L_5);
		// }
		return;
	}
}
// System.Void EnemyAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Update_mD595950351F973E18DF3AB79692E6DE4BDFC16B0 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___player_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		// if (distanceToPlayer <= detectionRange)
		float L_5 = __this->___detectionRange_5;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// ChasePlayer();
		EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A(__this, NULL);
		goto IL_0031;
	}

IL_002b:
	{
		// PlayRandomAnimation();
		EnemyAI_PlayRandomAnimation_mB5882967513B0367DA024A34F7E6F37D8F99F9BC(__this, NULL);
	}

IL_0031:
	{
		// Healthbar.transform.LookAt(Camera.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Healthbar_14;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Camera_13;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_7);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// animator.SetBool("isRunning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, NULL);
		// animator.SetBool("isWalking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_7;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)0, NULL);
		// Vector3 runDirection = transform.position - player.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___player_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// Vector3 runPosition = transform.position + runDirection.normalized * 5f; // Adjust the distance
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		// if (NavMesh.SamplePosition(runPosition, out hit, 5f, NavMesh.AllAreas))
		bool L_12;
		L_12 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_11, (&V_1), (5.0f), (-1), NULL);
		if (!L_12)
		{
			goto IL_0092;
		}
	}
	{
		// navMeshAgent.SetDestination(hit.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_13 = __this->___navMeshAgent_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_1), NULL);
		NullCheck(L_13);
		bool L_15;
		L_15 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_13, L_14, NULL);
		// navMeshAgent.speed = runningSpeed;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_16 = __this->___navMeshAgent_8;
		float L_17 = __this->___runningSpeed_6;
		NullCheck(L_16);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_16, L_17, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::PlayRandomAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_PlayRandomAnimation_mB5882967513B0367DA024A34F7E6F37D8F99F9BC (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// bool playIdle = Random.value > 0.5f;
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_0 = (bool)((((float)L_0) > ((float)(0.5f)))? 1 : 0);
		// animator.SetBool("isRunning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_7;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// animator.SetBool("isWalking", playIdle);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_7;
		bool L_3 = V_0;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, L_3, NULL);
		// if (playIdle)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// navMeshAgent.velocity = Vector3.zero;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = __this->___navMeshAgent_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_5);
		NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31(L_5, L_6, NULL);
		return;
	}

IL_0043:
	{
		// Vector3 randomDestination = Random.insideUnitSphere * 5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (5.0f), NULL);
		// NavMesh.SamplePosition(randomDestination, out hit, 5f, NavMesh.AllAreas);
		bool L_9;
		L_9 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_8, (&V_1), (5.0f), (-1), NULL);
		// navMeshAgent.SetDestination(hit.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_10 = __this->___navMeshAgent_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_1), NULL);
		NullCheck(L_10);
		bool L_12;
		L_12 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_10, L_11, NULL);
		// navMeshAgent.speed = 1.5f; // Adjust walking speed
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_13 = __this->___navMeshAgent_8;
		NullCheck(L_13);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_13, (1.5f), NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::stun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_stun_m66B21A5DBA90DCD8F1AF289B8CE8EF7EC28847A9 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E6F57B21C962FCD8E15CC466127B293048A5BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("stun", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral7E6F57B21C962FCD8E15CC466127B293048A5BEA, (bool)1, NULL);
		// GetComponent<NavMeshAgent>().isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1;
		L_1 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		NullCheck(L_1);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::Demage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Demage_m09779E6836840A215A51BA8FD51C7F605B372C4B (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (HealthSlider.fillAmount > 0) {
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___HealthSlider_9;
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_0, NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// StartingHealth = StartingHealth - HalthDownSpeed;
		float L_2 = __this->___StartingHealth_10;
		float L_3 = __this->___HalthDownSpeed_11;
		__this->___StartingHealth_10 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// HealthSlider.fillAmount = StartingHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___HealthSlider_9;
		float L_5 = __this->___StartingHealth_10;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, L_5, NULL);
		// if (HealthSlider.fillAmount <= 0)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___HealthSlider_9;
		NullCheck(L_6);
		float L_7;
		L_7 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_6, NULL);
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// animator.SetBool("death", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_7;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8, (bool)1, NULL);
		// GameManager.Instance.KillAnimals++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___KillAnimals_12;
		NullCheck(L_10);
		L_10->___KillAnimals_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// for (int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		V_0 = 0;
		goto IL_00d7;
	}

IL_0075:
	{
		// if (name == GameManager.Instance.AnimalsNamesToKill[i])
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13->___AnimalsNamesToKill_11;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_17, NULL);
		if (!L_18)
		{
			goto IL_00d3;
		}
	}
	{
		// GameManager.Instance.KillAnimals++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___KillAnimals_12;
		NullCheck(L_20);
		L_20->___KillAnimals_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// if (GameManager.Instance.KillAnimals >= GameManager.Instance.TotalEnemyInLevel)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_22 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___KillAnimals_12;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_24 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_24);
		int32_t L_25 = L_24->___TotalEnemyInLevel_4;
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_00d3;
		}
	}
	{
		// GameManager.Instance.MoveMentController.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___MoveMentController_8;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// StartCoroutine(CompletePanel());
		RuntimeObject* L_28;
		L_28 = EnemyAI_CompletePanel_mD756DCA0E1D7A95E691C0D72D7578E05B09A771C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
	}

IL_00d3:
	{
		// for (int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d7:
	{
		// for (int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		int32_t L_31 = V_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32->___AnimalsNamesToKill_11;
		NullCheck(L_33);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0075;
		}
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyAI::CompletePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyAI_CompletePanel_mD756DCA0E1D7A95E691C0D72D7578E05B09A771C (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* L_0 = (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9*)il2cpp_codegen_object_new(U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCompletePanelU3Ed__18__ctor_m7C85F074E9F4DDF88E82B510F13A1F03ED630ADB(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void EnemyAI::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_OnTriggerEnter_m0DAA79EB7E535A3D0AED281E2D81FD34C52773CD (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Explosion"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// stun();
		EnemyAI_stun_m66B21A5DBA90DCD8F1AF289B8CE8EF7EC28847A9(__this, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_OnTriggerStay_m3F2D9C4BE7AEC198BD7A998232B636CA7CCAEF6A (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57BC9206ADB97D4468ECE466E2DB96FDE30C17EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FF6DF1642044596011F5BE5BDDEE28E7BD499D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Animal"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855, NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.Log("Stay");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral57BC9206ADB97D4468ECE466E2DB96FDE30C17EC, NULL);
		// if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
		bool L_3;
		L_3 = EnemyAI_IsAttackAnimationPlaying_mFE417FD4E9CEA5A6C756AD62D62E43AD8909AD8F(__this, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		bool L_4;
		L_4 = EnemyAI_IsAttackAnimationPlaying1_m8203AB70731F5D0F71DDE91631C6DD68632476B9(__this, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		bool L_5;
		L_5 = EnemyAI_IsAttackAnimationPlaying2_m4B16AB56EAFA070D024119DE6B07236B1BAFCCD1(__this, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		bool L_6;
		L_6 = EnemyAI_IsAttackAnimationPlaying3_m9026D36C8AE6A8B1FCD563954889B6A5644517E0(__this, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}

IL_003c:
	{
		// animator.SetBool("Demage", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_7;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral6FF6DF1642044596011F5BE5BDDEE28E7BD499D9, (bool)1, NULL);
		// Demage();
		EnemyAI_Demage_m09779E6836840A215A51BA8FD51C7F605B372C4B(__this, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean EnemyAI::IsAttackAnimationPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying_mFE417FD4E9CEA5A6C756AD62D62E43AD8909AD8F (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE44FA26C3140C2A3B790DD965501B6DB60D63A);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Left");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_12;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral8AE44FA26C3140C2A3B790DD965501B6DB60D63A, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAI::IsAttackAnimationPlaying1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying1_m8203AB70731F5D0F71DDE91631C6DD68632476B9 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0619AC77E4CE3155622BCD7C1617620E9537F95);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Right");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_12;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF0619AC77E4CE3155622BCD7C1617620E9537F95, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAI::IsAttackAnimationPlaying2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying2_m4B16AB56EAFA070D024119DE6B07236B1BAFCCD1 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC684E3C343E5553C0DB8874AACB3BE5BD5E9F7);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Right");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_12;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral0FC684E3C343E5553C0DB8874AACB3BE5BD5E9F7, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAI::IsAttackAnimationPlaying3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAI_IsAttackAnimationPlaying3_m9026D36C8AE6A8B1FCD563954889B6A5644517E0 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8F4320A3914D69F2800A9A464F8D8EE5ECFFE53);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Left");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_12;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC8F4320A3914D69F2800A9A464F8D8EE5ECFFE53, NULL);
		return L_2;
	}
}
// System.Void EnemyAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__ctor_m6C8AF5E69E44D32D35FC23F33F01C77FC89ACAE2 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// public float detectionRange = 10f;
		__this->___detectionRange_5 = (10.0f);
		// public float runningSpeed = 5f;
		__this->___runningSpeed_6 = (5.0f);
		// public float StartingHealth=1;
		__this->___StartingHealth_10 = (1.0f);
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
// System.Void EnemyAI/<CompletePanel>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__18__ctor_m7C85F074E9F4DDF88E82B510F13A1F03ED630ADB (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyAI/<CompletePanel>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__18_System_IDisposable_Dispose_m408DC8A201075C95183E2E6A751C18B83825B7B2 (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyAI/<CompletePanel>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCompletePanelU3Ed__18_MoveNext_m763DEB27157619F316D90F54AF7B1953FC218202 (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager.Instance.LevelComplete();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_4);
		GameManager_LevelComplete_mBD98C94316E9EC13AD8F5369334C9174FF669800(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyAI/<CompletePanel>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompletePanelU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF297F29EB62EFCE57224F1DE7FD498718E2B1071 (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyAI/<CompletePanel>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__18_System_Collections_IEnumerator_Reset_m77B431F661074F919AFD805AEBEF3B2AD4FA01B9 (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCompletePanelU3Ed__18_System_Collections_IEnumerator_Reset_m77B431F661074F919AFD805AEBEF3B2AD4FA01B9_RuntimeMethod_var)));
	}
}
// System.Object EnemyAI/<CompletePanel>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompletePanelU3Ed__18_System_Collections_IEnumerator_get_Current_m26182718FC018495270EE183FB1721AB79C545D2 (U3CCompletePanelU3Ed__18_t0C3973B6529BB82000447082C9415409C6706FF9* __this, const RuntimeMethod* method) 
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
// System.Void EnemyAIAggresive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_Start_m69AC54BE450C0067AEC5AACF1894D531DE186263 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_10), (void*)L_0);
		// PlayerAnimator = player.GetComponent<Animator>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___player_9;
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_1, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___PlayerAnimator_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PlayerAnimator_20), (void*)L_2);
		// initialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___initialPosition_22 = L_4;
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_Update_m4F6D2E89A5D68AE14E5624A83AE50332A86AB0DA (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___player_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// if (!isDeath) {
		bool L_5 = __this->___isDeath_23;
		if (L_5)
		{
			goto IL_00aa;
		}
	}
	{
		// if (distanceToPlayer <= detectionRadius)
		float L_6 = V_0;
		float L_7 = __this->___detectionRadius_4;
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_003f;
		}
	}
	{
		// isChasing = true;
		__this->___isChasing_13 = (bool)1;
		// ChasePlayer();
		EnemyAIAggresive_ChasePlayer_m6ED8A4F3C60F5C525E75E47363FFB62887781461(__this, NULL);
		goto IL_0078;
	}

IL_003f:
	{
		// isChasing = false;
		__this->___isChasing_13 = (bool)0;
		// StopChasing();
		EnemyAIAggresive_StopChasing_m58D86C1BEE54122342E7630ED23E7893DD23F5F6(__this, NULL);
		// if (Vector3.Distance(transform.position, initialPosition) > walkingRadius)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___initialPosition_22;
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_10, NULL);
		float L_12 = __this->___walkingRadius_21;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0072;
		}
	}
	{
		// ReturnToInitialPosition();
		EnemyAIAggresive_ReturnToInitialPosition_mA86C49A9C5E6CB3DF78D39ADE986FB171CF39DC5(__this, NULL);
		goto IL_0078;
	}

IL_0072:
	{
		// StopChasing();
		EnemyAIAggresive_StopChasing_m58D86C1BEE54122342E7630ED23E7893DD23F5F6(__this, NULL);
	}

IL_0078:
	{
		// if (isChasing && distanceToPlayer <= attackRange)
		bool L_13 = __this->___isChasing_13;
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		float L_14 = V_0;
		float L_15 = __this->___attackRange_5;
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_008f;
		}
	}
	{
		// AttackPlayer();
		EnemyAIAggresive_AttackPlayer_m77EB6CA37433AB91D77A9AC902FAD42E6596726C(__this, NULL);
	}

IL_008f:
	{
		// HealthBAr.transform.LookAt(Camera.transform);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___HealthBAr_16;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___Camera_17;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_17);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_17, L_19, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_ChasePlayer_m6ED8A4F3C60F5C525E75E47363FFB62887781461 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (isChasing)
		bool L_0 = __this->___isChasing_13;
		if (!L_0)
		{
			goto IL_00ba;
		}
	}
	{
		// animator.SetBool("isRunning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_10;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, NULL);
		// animator.SetBool("Attack", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_10;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)0, NULL);
		// Vector3 direction = (player.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___player_9;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_2 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_0 = L_8;
		// Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_10, (0.0f), L_12, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_13, NULL);
		V_1 = L_14;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_20 = __this->___rotationSpeed_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_17, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_21, NULL);
		// transform.Translate(Vector3.forward * runSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_24 = __this->___runSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_22);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_22, L_27, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::StopChasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_StopChasing_m58D86C1BEE54122342E7630ED23E7893DD23F5F6 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isRunning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_10;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// animator.SetBool("Attack", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_10;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)0, NULL);
		// transform.Translate(Vector3.forward * walkSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_4 = __this->___walkSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_7, NULL);
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_AttackPlayer_m77EB6CA37433AB91D77A9AC902FAD42E6596726C (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("Attack", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_10;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)1, NULL);
		// transform.LookAt(player.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___player_9;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_1);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::Demage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_Demage_m6659868F6C853A8431B6B35EB55AE900B355BDFF (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (EnemyHealth.fillAmount > 0)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___EnemyHealth_15;
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_0, NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// StartingHealth = StartingHealth - HalthDownSpeed;
		float L_2 = __this->___StartingHealth_18;
		float L_3 = __this->___HalthDownSpeed_19;
		__this->___StartingHealth_18 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// EnemyHealth.fillAmount = StartingHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___EnemyHealth_15;
		float L_5 = __this->___StartingHealth_18;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, L_5, NULL);
		// if (EnemyHealth.fillAmount <= 0)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___EnemyHealth_15;
		NullCheck(L_6);
		float L_7;
		L_7 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_6, NULL);
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// animator.SetTrigger("Death");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_10;
		NullCheck(L_8);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, NULL);
		// isDeath = true;
		__this->___isDeath_23 = (bool)1;
		// GameManager.Instance.KillAnimals++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___KillAnimals_12;
		NullCheck(L_10);
		L_10->___KillAnimals_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// for(int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		V_0 = 0;
		goto IL_00d8;
	}

IL_007b:
	{
		// if(name== GameManager.Instance.AnimalsNamesToKill[i])
		String_t* L_12 = ___0_name;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13->___AnimalsNamesToKill_11;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_17, NULL);
		if (!L_18)
		{
			goto IL_00d4;
		}
	}
	{
		// GameManager.Instance.KillAnimals++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___KillAnimals_12;
		NullCheck(L_20);
		L_20->___KillAnimals_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// if (GameManager.Instance.KillAnimals >= GameManager.Instance.TotalEnemyInLevel)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_22 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___KillAnimals_12;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_24 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_24);
		int32_t L_25 = L_24->___TotalEnemyInLevel_4;
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_00d4;
		}
	}
	{
		// GameManager.Instance.MoveMentController.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___MoveMentController_8;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// StartCoroutine(CompletePanel());
		RuntimeObject* L_28;
		L_28 = EnemyAIAggresive_CompletePanel_m0EC0F8796E9B0C492B959C3BC658A71BDDED0185(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
	}

IL_00d4:
	{
		// for(int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d8:
	{
		// for(int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
		int32_t L_31 = V_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32->___AnimalsNamesToKill_11;
		NullCheck(L_33);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_007b;
		}
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyAIAggresive::CompletePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyAIAggresive_CompletePanel_m0EC0F8796E9B0C492B959C3BC658A71BDDED0185 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* L_0 = (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B*)il2cpp_codegen_object_new(U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCompletePanelU3Ed__26__ctor_mC38E65F10F2F0BB465D2339A47CC03284300FC5F(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void EnemyAIAggresive::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_OnTriggerStay_m5D51EC48DEA4FCEAB5F63EC8B0E95A536BF19551 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57BC9206ADB97D4468ECE466E2DB96FDE30C17EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Animal"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855, NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("Stay");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral57BC9206ADB97D4468ECE466E2DB96FDE30C17EC, NULL);
		// if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
		bool L_3;
		L_3 = EnemyAIAggresive_IsAttackAnimationPlaying_mAAB83AFA87DD133A29DCA5D0773C33204B839489(__this, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		bool L_4;
		L_4 = EnemyAIAggresive_IsAttackAnimationPlaying1_mBD0D772D661223F935F61CA88DD5FC3EE8FCF9FD(__this, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		bool L_5;
		L_5 = EnemyAIAggresive_IsAttackAnimationPlaying2_m463408B1D8DE5389E078F4300290D9CE48387713(__this, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		bool L_6;
		L_6 = EnemyAIAggresive_IsAttackAnimationPlaying3_mB7448997123CCBD2642D417C5278E7E454CFC707(__this, NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}

IL_003c:
	{
		// Demage(other.gameObject.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		EnemyAIAggresive_Demage_m6659868F6C853A8431B6B35EB55AE900B355BDFF(__this, L_9, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying_mAAB83AFA87DD133A29DCA5D0773C33204B839489 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE44FA26C3140C2A3B790DD965501B6DB60D63A);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Left");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_20;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral8AE44FA26C3140C2A3B790DD965501B6DB60D63A, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying1_mBD0D772D661223F935F61CA88DD5FC3EE8FCF9FD (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0619AC77E4CE3155622BCD7C1617620E9537F95);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Right");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_20;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF0619AC77E4CE3155622BCD7C1617620E9537F95, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying2_m463408B1D8DE5389E078F4300290D9CE48387713 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC684E3C343E5553C0DB8874AACB3BE5BD5E9F7);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Right");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_20;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral0FC684E3C343E5553C0DB8874AACB3BE5BD5E9F7, NULL);
		return L_2;
	}
}
// System.Boolean EnemyAIAggresive::IsAttackAnimationPlaying3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAIAggresive_IsAttackAnimationPlaying3_mB7448997123CCBD2642D417C5278E7E454CFC707 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8F4320A3914D69F2800A9A464F8D8EE5ECFFE53);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Left");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___PlayerAnimator_20;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC8F4320A3914D69F2800A9A464F8D8EE5ECFFE53, NULL);
		return L_2;
	}
}
// System.Void EnemyAIAggresive::ReturnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive_ReturnToInitialPosition_mA86C49A9C5E6CB3DF78D39ADE986FB171CF39DC5 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 direction = (initialPosition - transform.position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___initialPosition_22;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		V_2 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_0 = L_4;
		// Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, (0.0f), L_8, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_9, NULL);
		V_1 = L_10;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_1;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_16 = __this->___rotationSpeed_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_13, L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_17, NULL);
		// transform.Translate(Vector3.forward * walkSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_20 = __this->___walkSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		NullCheck(L_18);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_18, L_23, NULL);
		// animator.SetBool("isRunning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_10;
		NullCheck(L_24);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// animator.SetBool("Attack", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_10;
		NullCheck(L_25);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_25, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EnemyAIAggresive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAIAggresive__ctor_m3C9728AC42A47D87544ABBF25B6B9013AEDD0784 (EnemyAIAggresive_tFB562ACEE4C534435126EE25BE2F8299B9AF7318* __this, const RuntimeMethod* method) 
{
	{
		// public float detectionRadius = 10f;
		__this->___detectionRadius_4 = (10.0f);
		// public float attackRange = 5f;
		__this->___attackRange_5 = (5.0f);
		// public float runSpeed = 6f;
		__this->___runSpeed_6 = (6.0f);
		// public float walkSpeed = 3f;
		__this->___walkSpeed_7 = (3.0f);
		// public float rotationSpeed = 3f;
		__this->___rotationSpeed_8 = (3.0f);
		// public float minDistance = 2f;
		__this->___minDistance_14 = (2.0f);
		// public float StartingHealth = 1;
		__this->___StartingHealth_18 = (1.0f);
		// public float walkingRadius = 5f;
		__this->___walkingRadius_21 = (5.0f);
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
// System.Void EnemyAIAggresive/<CompletePanel>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__26__ctor_mC38E65F10F2F0BB465D2339A47CC03284300FC5F (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyAIAggresive/<CompletePanel>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__26_System_IDisposable_Dispose_m5A6E8799F110984B33F0857254E75F4572F9F9E0 (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyAIAggresive/<CompletePanel>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCompletePanelU3Ed__26_MoveNext_mCFE356312B769687272EB890805F47DDE2DB5B31 (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager.Instance.LevelComplete();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10;
		NullCheck(L_4);
		GameManager_LevelComplete_mBD98C94316E9EC13AD8F5369334C9174FF669800(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyAIAggresive/<CompletePanel>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompletePanelU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m74FDA472890F15DF8E39F4DFEF0D2CF66C8E7BE2 (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyAIAggresive/<CompletePanel>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompletePanelU3Ed__26_System_Collections_IEnumerator_Reset_m9DABF8418BE9CDF9EF577B8BB03B5C57E9A3E29B (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCompletePanelU3Ed__26_System_Collections_IEnumerator_Reset_m9DABF8418BE9CDF9EF577B8BB03B5C57E9A3E29B_RuntimeMethod_var)));
	}
}
// System.Object EnemyAIAggresive/<CompletePanel>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompletePanelU3Ed__26_System_Collections_IEnumerator_get_Current_m4DBCF2A9FCAF2D93492819D413C294AD7904316B (U3CCompletePanelU3Ed__26_t932B3D71030BD175519860ADD447E0A4DDE6E00B* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_10), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::PauseBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseBtnClick_mB5106DB4D51AA2CF337B0DCDA568DD079B93FF48 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// PausePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PausePanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Home()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Home_mDA61E6A59CF46DEDC0DE7A96723E8E4EB9475D5F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("Gameplay");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelComplete_mBD98C94316E9EC13AD8F5369334C9174FF669800 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// Complete.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Complete_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LevelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelFail_mEF21E036B53D8C7FF1C1079A6945389BAE94DB63 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// Fail.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Fail_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LevelNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelNext_mC8135E6E42D4B1FEA84A7B740E4EDE5938FCCD81 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LevelLoader.Instance.LoadNextLevel();
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_0 = ((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_0);
		LevelLoader_LoadNextLevel_m255F24B41F56FE1A554D3A45194FF5584ED19CB1(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeGame_m4E9452E3FE77FD421C8178B1BFE541BA22FAC993 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// PausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PausePanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ClickOkInTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClickOkInTask_mBFEBD45F99BE0FFBA4D2ACD69E4D67064159358D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// TaskPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___TaskPanel_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
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
// System.Void LevelLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_Awake_m94010FF464D284404683315331E77561F65AC9D9 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void LevelLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_Start_m4D5447BE58C257C9C192270CD7ABC78570BCCEE2 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey("Level"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, 0, NULL);
		// LoadLevel(PlayerPrefs.GetInt("Level"));
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03(__this, L_1, NULL);
		return;
	}

IL_0028:
	{
		// LoadLevel(PlayerPrefs.GetInt("Level"));
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadNextLevel_m255F24B41F56FE1A554D3A45194FF5584ED19CB1 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF221E63D03A23B8008DFF93949BF359D70B836A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level")+1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		// if (PlayerPrefs.GetInt("Level") < Levels.Length)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___Levels_4;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// LoadLevel(PlayerPrefs.GetInt("Level"));
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03(__this, L_3, NULL);
		return;
	}

IL_003b:
	{
		// Debug.Log("All levels completed!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCF221E63D03A23B8008DFF93949BF359D70B836A, NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(Levels[index]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Levels_4;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LevelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader__ctor_mB1812BC658449839C948710AC302F1483F380107 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
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
// UnityEngine.RectTransform InnerMap::get_InnerMapRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* InnerMap_get_InnerMapRect_mBAAE5D6A06B66C186ACCEA30140EEC9D756C0FB8 (InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_innerMapRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____innerMapRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _innerMapRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____innerMapRect_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerMapRect_4), (void*)L_2);
	}

IL_0019:
	{
		// return _innerMapRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____innerMapRect_4;
		return L_3;
	}
}
// System.Single InnerMap::getMapRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InnerMap_getMapRadius_mF99DE7888464241A137AA05984CD260D334684DE (InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// Vector3[] arr = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// InnerMapRect.GetLocalCorners(arr);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = InnerMap_get_InnerMapRect_mBAAE5D6A06B66C186ACCEA30140EEC9D756C0FB8(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_1);
		RectTransform_GetLocalCorners_m18B3E5ED5EB24AD46279199A134CD7F218D3DD11(L_1, L_2, NULL);
		// if (Mathf.Abs(arr[0].x) < Mathf.Abs(arr[0].y))
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		float L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2;
		float L_5;
		L_5 = fabsf(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_6);
		float L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3;
		float L_8;
		L_8 = fabsf(L_7);
		if ((!(((float)L_5) < ((float)L_8))))
		{
			goto IL_004b;
		}
	}
	{
		// mapRadius = Mathf.Abs(arr[0].x);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		NullCheck(L_9);
		float L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2;
		float L_11;
		L_11 = fabsf(L_10);
		V_1 = L_11;
		goto IL_005d;
	}

IL_004b:
	{
		// mapRadius = Mathf.Abs(arr[0].y);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_0;
		NullCheck(L_12);
		float L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3;
		float L_14;
		L_14 = fabsf(L_13);
		V_1 = L_14;
	}

IL_005d:
	{
		// return mapRadius;
		float L_15 = V_1;
		return L_15;
	}
}
// System.Void InnerMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InnerMap__ctor_mEDC24DE55B0BFA52182F1CF368836025A3A33D68 (InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* __this, const RuntimeMethod* method) 
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
// UnityEngine.RectTransform MapArrow::get_ArrowRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* MapArrow_get_ArrowRect_mBA7F62B96A27ED14ED0F6D88FF6C3DB50431E41C (MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral048CF392195CA20FB438C853C0317DB429CDF5E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_arrowRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____arrowRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// _arrowRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____arrowRect_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrowRect_4), (void*)L_2);
		// if (!_arrowRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____arrowRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("RectTransform not found. MapArrow script must by attached to an Image.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral048CF392195CA20FB438C853C0317DB429CDF5E1, NULL);
	}

IL_0030:
	{
		// return _arrowRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->____arrowRect_4;
		return L_5;
	}
}
// System.Void MapArrow::rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapArrow_rotate_m7DCA30C55DCAA5F66FEA779621CB6AEF9BDC7907 (MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_quat, const RuntimeMethod* method) 
{
	{
		// ArrowRect.rotation = quat;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = MapArrow_get_ArrowRect_mBA7F62B96A27ED14ED0F6D88FF6C3DB50431E41C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_quat;
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MapArrow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapArrow__ctor_mDB01CD3E5BF14CFC558746C76711D7E26A737EF6 (MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* __this, const RuntimeMethod* method) 
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
// MapCanvasController MapCanvasController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* MapCanvasController_get_Instance_mF6455C617F65218702284C37AF0ECE60C0501996 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_m48A63D6C73285C19860C3309F46CF64907FC6D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F6DFCAE19575465169F3E49086BC4BF1AC6FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C1E2B1E6E4D08248C0849A2781DF30C9318811);
		s_Il2CppMethodInitialized = true;
	}
	MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* V_0 = NULL;
	{
		// if (!_instance)
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_0 = ((MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_StaticFields*)il2cpp_codegen_static_fields_for(MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		// MapCanvasController[] controllers = GameObject.FindObjectsOfType<MapCanvasController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* L_2;
		L_2 = Object_FindObjectsOfType_TisMapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_m48A63D6C73285C19860C3309F46CF64907FC6D98(Object_FindObjectsOfType_TisMapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_m48A63D6C73285C19860C3309F46CF64907FC6D98_RuntimeMethod_var);
		V_0 = L_2;
		// if (controllers.Length != 0)
		MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* L_3 = V_0;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0032;
		}
	}
	{
		// if (controllers.Length == 1)
		MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// _instance = controllers[0];
		MapCanvasControllerU5BU5D_t6AEA59AAB87F6DFA17C77A834D38C8314CD3E68A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_StaticFields*)il2cpp_codegen_static_fields_for(MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var))->____instance_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_StaticFields*)il2cpp_codegen_static_fields_for(MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var))->____instance_4), (void*)L_7);
		goto IL_003c;
	}

IL_0026:
	{
		// Debug.LogError("You have more than one MapCanvasController in the scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral08F6DFCAE19575465169F3E49086BC4BF1AC6FF3, NULL);
		goto IL_003c;
	}

IL_0032:
	{
		// Debug.LogError("You should add Map prefab to your canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD7C1E2B1E6E4D08248C0849A2781DF30C9318811, NULL);
	}

IL_003c:
	{
		// return _instance;
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_8 = ((MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_StaticFields*)il2cpp_codegen_static_fields_for(MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5_il2cpp_TypeInfo_var))->____instance_4;
		return L_8;
	}
}
// InnerMap MapCanvasController::get_InnerMapComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* MapCanvasController_get_InnerMapComponent_m912FA67AE646329AC14EAA06293391B00DC76334 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	{
		// return innerMap;
		InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* L_0 = __this->___innerMap_14;
		return L_0;
	}
}
// MarkerGroup MapCanvasController::get_MarkerGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* MapCanvasController_get_MarkerGroup_m79B2326F5F7E5F8B7ED9FF9F94C3185FC7480358 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	{
		// return markerGroup;
		MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* L_0 = __this->___markerGroup_16;
		return L_0;
	}
}
// System.Void MapCanvasController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCanvasController_Awake_m2734580D84C6675FA53FDD365A149A7F54B9E08A (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisInnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D_m4F7D7FF73857CF5F974FB97A0241A0149B058F2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68_m62AEFEEE5B0D0DD19BBE43A2643B4488F2299B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F_m335BB059EC12291FA50A8D9C9F09CF1058959E5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03ADE3CDBE671473EF0D8677F3E151A8382141C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CADABFEC1B9E6799ECCA604A3E81B6651AAC078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E86C5B1E2E056581C19F9EF553EA44F7FACAAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78239462CE8AA49406B783398E5BC5D24E905891);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!playerTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("You must specify the player transform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral03ADE3CDBE671473EF0D8677F3E151A8382141C5, NULL);
	}

IL_0017:
	{
		// mapRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___mapRect_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapRect_13), (void*)L_2);
		// innerMap = GetComponentInChildren<InnerMap>();
		InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* L_3;
		L_3 = Component_GetComponentInChildren_TisInnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D_m4F7D7FF73857CF5F974FB97A0241A0149B058F2B(__this, Component_GetComponentInChildren_TisInnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D_m4F7D7FF73857CF5F974FB97A0241A0149B058F2B_RuntimeMethod_var);
		__this->___innerMap_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerMap_14), (void*)L_3);
		// if (!innerMap)
		InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* L_4 = __this->___innerMap_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogError("InnerMap component is missing from children");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral40E86C5B1E2E056581C19F9EF553EA44F7FACAAA, NULL);
	}

IL_0046:
	{
		// mapArrow = GetComponentInChildren<MapArrow>();
		MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* L_6;
		L_6 = Component_GetComponentInChildren_TisMapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68_m62AEFEEE5B0D0DD19BBE43A2643B4488F2299B36(__this, Component_GetComponentInChildren_TisMapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68_m62AEFEEE5B0D0DD19BBE43A2643B4488F2299B36_RuntimeMethod_var);
		__this->___mapArrow_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapArrow_15), (void*)L_6);
		// if (!mapArrow)
		MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* L_7 = __this->___mapArrow_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("MapArrow component is missing from children");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral78239462CE8AA49406B783398E5BC5D24E905891, NULL);
	}

IL_0069:
	{
		// markerGroup = GetComponentInChildren<MarkerGroup>();
		MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* L_9;
		L_9 = Component_GetComponentInChildren_TisMarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F_m335BB059EC12291FA50A8D9C9F09CF1058959E5B(__this, Component_GetComponentInChildren_TisMarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F_m335BB059EC12291FA50A8D9C9F09CF1058959E5B_RuntimeMethod_var);
		__this->___markerGroup_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerGroup_16), (void*)L_9);
		// if (!markerGroup)
		MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* L_10 = __this->___markerGroup_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (L_11)
		{
			goto IL_008c;
		}
	}
	{
		// Debug.LogError("MerkerGroup component is missing. It must be a child of InnerMap");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1CADABFEC1B9E6799ECCA604A3E81B6651AAC078, NULL);
	}

IL_008c:
	{
		// innerMapRadius = innerMap.getMapRadius();
		InnerMap_t1B4E697361E2AFD58FE7571C606987E51F968F1D* L_12 = __this->___innerMap_14;
		NullCheck(L_12);
		float L_13;
		L_13 = InnerMap_getMapRadius_mF99DE7888464241A137AA05984CD260D334684DE(L_12, NULL);
		__this->___innerMapRadius_17 = L_13;
		// }
		return;
	}
}
// System.Void MapCanvasController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCanvasController_Update_m2DF153BB945FB26920F1679F85B46A3928BDD341 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!playerTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (rotateMap)
		bool L_2 = __this->___rotateMap_10;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// mapRect.rotation = Quaternion.Euler(new Vector3(0, 0, playerTransform.eulerAngles.y));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___mapRect_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTransform_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), L_6, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_7, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_8, NULL);
		// mapArrow.rotate(Quaternion.identity);
		MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* L_9 = __this->___mapArrow_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_9);
		MapArrow_rotate_m7DCA30C55DCAA5F66FEA779621CB6AEF9BDC7907(L_9, L_10, NULL);
		return;
	}

IL_0056:
	{
		// mapArrow.rotate(Quaternion.Euler(new Vector3(0, 0, -playerTransform.eulerAngles.y)));
		MapArrow_t8A271F8F9B102F1E1E0B034909757C802C32AB68* L_11 = __this->___mapArrow_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___playerTransform_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.0f), ((-L_14)), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_15, NULL);
		NullCheck(L_11);
		MapArrow_rotate_m7DCA30C55DCAA5F66FEA779621CB6AEF9BDC7907(L_11, L_16, NULL);
		// }
		return;
	}
}
// System.Void MapCanvasController::checkIn(MapMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCanvasController_checkIn_mF80832344B9B834C093E6942035C759E37A5054E (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* ___0_marker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96F077F0D271CFF7AB71C6018C3BCCA961CCB4C3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// if (!playerTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// float scaledRadarDistance = radarDistance * scale;
		float L_2 = __this->___radarDistance_6;
		float L_3 = __this->___scale_11;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// float scaledMaxRadarDistance = maxRadarDistance * scale;
		float L_4 = __this->___maxRadarDistance_9;
		float L_5 = __this->___scale_11;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// if (marker.isActive)
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_6 = ___0_marker;
		NullCheck(L_6);
		bool L_7 = L_6->___isActive_6;
		if (!L_7)
		{
			goto IL_0139;
		}
	}
	{
		// float distance = distanceToPlayer(marker.getPosition());
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_8 = ___0_marker;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = MapMarker_getPosition_mFA9B419407E633DEFA8198DFFAAFED7322F42A77(L_8, NULL);
		float L_10;
		L_10 = MapCanvasController_distanceToPlayer_mD5B219105841F4DFF64C10858235A04A0369CAC7(__this, L_9, NULL);
		V_2 = L_10;
		// float opacity = 1.0f;
		V_3 = (1.0f);
		// if (distance > scaledRadarDistance)
		float L_11 = V_2;
		float L_12 = V_0;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_00ba;
		}
	}
	{
		// if (hideOutOfRadius)
		bool L_13 = __this->___hideOutOfRadius_7;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// if (marker.isVisible())
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_14 = ___0_marker;
		NullCheck(L_14);
		bool L_15;
		L_15 = MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705(L_14, NULL);
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		// marker.hide();
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_16 = ___0_marker;
		NullCheck(L_16);
		MapMarker_hide_mDD011B8BF5EE6A59E4BD2F640889ABB258698B28(L_16, NULL);
	}

IL_0062:
	{
		// return;
		return;
	}

IL_0063:
	{
		// if (distance > scaledMaxRadarDistance)
		float L_17 = V_2;
		float L_18 = V_1;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0076;
		}
	}
	{
		// if (marker.isVisible())
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_19 = ___0_marker;
		NullCheck(L_19);
		bool L_20;
		L_20 = MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705(L_19, NULL);
		if (!L_20)
		{
			goto IL_0075;
		}
	}
	{
		// marker.hide();
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_21 = ___0_marker;
		NullCheck(L_21);
		MapMarker_hide_mDD011B8BF5EE6A59E4BD2F640889ABB258698B28(L_21, NULL);
	}

IL_0075:
	{
		// return;
		return;
	}

IL_0076:
	{
		// if (useOpacity)
		bool L_22 = __this->___useOpacity_8;
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		// float opacityRange = scaledMaxRadarDistance - scaledRadarDistance;
		float L_23 = V_1;
		float L_24 = V_0;
		V_8 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		// if (opacityRange <= 0)
		float L_25 = V_8;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		// Debug.LogError("Max radar distance should be bigger than radar distance");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral96F077F0D271CFF7AB71C6018C3BCCA961CCB4C3, NULL);
		// return;
		return;
	}

IL_0097:
	{
		// float distanceDiff = distance - scaledRadarDistance;
		float L_26 = V_2;
		float L_27 = V_0;
		V_9 = ((float)il2cpp_codegen_subtract(L_26, L_27));
		// opacity = 1 - (distanceDiff / opacityRange);
		float L_28 = V_9;
		float L_29 = V_8;
		V_3 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_28/L_29))));
		// if (opacity < minimalOpacity)
		float L_30 = V_3;
		float L_31 = __this->___minimalOpacity_12;
		if ((!(((float)L_30) < ((float)L_31))))
		{
			goto IL_00b8;
		}
	}
	{
		// opacity = minimalOpacity;
		float L_32 = __this->___minimalOpacity_12;
		V_3 = L_32;
	}

IL_00b8:
	{
		// distance = scaledRadarDistance;
		float L_33 = V_0;
		V_2 = L_33;
	}

IL_00ba:
	{
		// if (!marker.isVisible())
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_34 = ___0_marker;
		NullCheck(L_34);
		bool L_35;
		L_35 = MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705(L_34, NULL);
		if (L_35)
		{
			goto IL_00c8;
		}
	}
	{
		// marker.show();
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_36 = ___0_marker;
		NullCheck(L_36);
		MapMarker_show_mF468B6D2BB44683ED4737DDEA4F132F954F7E766(L_36, NULL);
	}

IL_00c8:
	{
		// Vector3 posDif = marker.getPosition() - playerTransform.position;
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_37 = ___0_marker;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = MapMarker_getPosition_mFA9B419407E633DEFA8198DFFAAFED7322F42A77(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___playerTransform_5;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_40, NULL);
		V_4 = L_41;
		// Vector3 newPos = new Vector3(posDif.x, posDif.z, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_4;
		float L_43 = L_42.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		float L_45 = L_44.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_43, L_45, (0.0f), NULL);
		// newPos.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_5), NULL);
		// float markerRadius = (marker.markerSize / 2);
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_46 = ___0_marker;
		NullCheck(L_46);
		float L_47 = L_46->___markerSize_5;
		V_6 = ((float)(L_47/(2.0f)));
		// float newLen = (distance / scaledRadarDistance) * (innerMapRadius - markerRadius);
		float L_48 = V_2;
		float L_49 = V_0;
		float L_50 = __this->___innerMapRadius_17;
		float L_51 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply(((float)(L_48/L_49)), ((float)il2cpp_codegen_subtract(L_50, L_51))));
		// newPos *= newLen;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_5;
		float L_53 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_52, L_53, NULL);
		V_5 = L_54;
		// marker.setLocalPos(newPos);
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_55 = ___0_marker;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_5;
		NullCheck(L_55);
		MapMarker_setLocalPos_m183995466E47D0072326F6AF9D83528086421094(L_55, L_56, NULL);
		// marker.setOpacity(opacity);
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_57 = ___0_marker;
		float L_58 = V_3;
		NullCheck(L_57);
		MapMarker_setOpacity_m4F113BFDB6481D802E1139EEBF863A667AC2A9FE(L_57, L_58, NULL);
		return;
	}

IL_0139:
	{
		// if (marker.isVisible())
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_59 = ___0_marker;
		NullCheck(L_59);
		bool L_60;
		L_60 = MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705(L_59, NULL);
		if (!L_60)
		{
			goto IL_0147;
		}
	}
	{
		// marker.hide();
		MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* L_61 = ___0_marker;
		NullCheck(L_61);
		MapMarker_hide_mDD011B8BF5EE6A59E4BD2F640889ABB258698B28(L_61, NULL);
	}

IL_0147:
	{
		// }
		return;
	}
}
// System.Single MapCanvasController::distanceToPlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MapCanvasController_distanceToPlayer_mD5B219105841F4DFF64C10858235A04A0369CAC7 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	{
		// return Vector2.Distance(new Vector2(playerTransform.position.x, playerTransform.position.z), new Vector2(other.x, other.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTransform_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___playerTransform_5;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_other;
		float L_10 = L_9.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_6, L_11, NULL);
		return L_12;
	}
}
// System.Void MapCanvasController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCanvasController__ctor_m6C04D9CB1EBB73CB9470DFE317411698A96355D1 (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	{
		// public float radarDistance = 10;
		__this->___radarDistance_6 = (10.0f);
		// public bool hideOutOfRadius = true;
		__this->___hideOutOfRadius_7 = (bool)1;
		// public bool useOpacity = true;
		__this->___useOpacity_8 = (bool)1;
		// public float maxRadarDistance = 10;
		__this->___maxRadarDistance_9 = (10.0f);
		// public float scale = 1.0f;
		__this->___scale_11 = (1.0f);
		// public float minimalOpacity = 0.3f;
		__this->___minimalOpacity_12 = (0.300000012f);
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
// UnityEngine.UI.Image MapMarker::get_MarkerImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* MapMarker_get_MarkerImage_mA162B99ED2D83DC6638DF18BC360B3CB3C4FEBC5 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// return markerImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		return L_0;
	}
}
// System.Void MapMarker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_Start_mF04BB1531AE434D003DE4C9DF7080A685D5E44E1 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCF1B3C4803BF1AFDB4B895E198D18749E9F003E);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* V_1 = NULL;
	{
		// if (!markerSprite)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___markerSprite_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError(" Please, specify the marker sprite.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFCF1B3C4803BF1AFDB4B895E198D18749E9F003E, NULL);
	}

IL_0017:
	{
		// GameObject markerImageObject = new GameObject("Marker");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD, NULL);
		V_0 = L_2;
		// markerImageObject.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_3, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// MapCanvasController controller = MapCanvasController.Instance;
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_5;
		L_5 = MapCanvasController_get_Instance_mF6455C617F65218702284C37AF0ECE60C0501996(NULL);
		V_1 = L_5;
		// if (!controller)
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// markerImageObject.transform.SetParent(controller.MarkerGroup.MarkerGroupRect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_11 = V_1;
		NullCheck(L_11);
		MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* L_12;
		L_12 = MapCanvasController_get_MarkerGroup_m79B2326F5F7E5F8B7ED9FF9F94C3185FC7480358_inline(L_11, NULL);
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = MarkerGroup_get_MarkerGroupRect_m26FF229E27C93C086380B9C3F6ECB8C578F63E72(L_12, NULL);
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_13, NULL);
		// markerImage = markerImageObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_14, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___markerImage_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerImage_7), (void*)L_15);
		// markerImage.sprite = markerSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___markerImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___markerSprite_4;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
		// markerImage.rectTransform.localPosition = Vector3.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___markerImage_7;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// markerImage.rectTransform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___markerImage_7;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
		// markerImage.rectTransform.sizeDelta = new Vector2(markerSize, markerSize);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___markerImage_7;
		NullCheck(L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_24, NULL);
		float L_26 = __this->___markerSize_5;
		float L_27 = __this->___markerSize_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_25, L_28, NULL);
		// markerImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___markerImage_7;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MapMarker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_Update_m5A438B487782F24E2B4C513F1CC9D0A01C97E781 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MapCanvasController controller = MapCanvasController.Instance;
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_0;
		L_0 = MapCanvasController_get_Instance_mF6455C617F65218702284C37AF0ECE60C0501996(NULL);
		// if (!controller)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
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
		// MapCanvasController.Instance.checkIn(this);
		MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* L_2;
		L_2 = MapCanvasController_get_Instance_mF6455C617F65218702284C37AF0ECE60C0501996(NULL);
		NullCheck(L_2);
		MapCanvasController_checkIn_mF80832344B9B834C093E6942035C759E37A5054E(L_2, __this, NULL);
		// markerImage.rectTransform.rotation = Quaternion.identity;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___markerImage_7;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void MapMarker::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_OnDestroy_m7B6B3BD386175A25A9AB2CEF51EB042CF835FDD1 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (markerImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(markerImage.gameObject);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___markerImage_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void MapMarker::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_show_mF468B6D2BB44683ED4737DDEA4F132F954F7E766 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// markerImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MapMarker::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_hide_mDD011B8BF5EE6A59E4BD2F640889ABB258698B28 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// markerImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean MapMarker::isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapMarker_isVisible_mFEDF439DA0AA18AB7E0DF346410D4785884F3705 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// return markerImage.gameObject.activeSelf;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 MapMarker::getPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MapMarker_getPosition_mFA9B419407E633DEFA8198DFFAAFED7322F42A77 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}
}
// System.Void MapMarker::setLocalPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_setLocalPos_m183995466E47D0072326F6AF9D83528086421094 (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// markerImage.rectTransform.localPosition = pos;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_pos;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void MapMarker::setOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker_setOpacity_m4F113BFDB6481D802E1139EEBF863A667AC2A9FE (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, float ___0_opacity, const RuntimeMethod* method) 
{
	{
		// markerImage.color = new Color(1.0f, 1.0f, 1.0f, opacity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___markerImage_7;
		float L_1 = ___0_opacity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (1.0f), (1.0f), (1.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void MapMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapMarker__ctor_m6C2530E61F4301C43582A95713BF8B33D6AAD18F (MapMarker_tFB538D4A296AB1A3735FC4492FF7BB8956864A75* __this, const RuntimeMethod* method) 
{
	{
		// public float markerSize = 6.5f;
		__this->___markerSize_5 = (6.5f);
		// public bool isActive = true;
		__this->___isActive_6 = (bool)1;
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
// UnityEngine.RectTransform MarkerGroup::get_MarkerGroupRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* MarkerGroup_get_MarkerGroupRect_m26FF229E27C93C086380B9C3F6ECB8C578F63E72 (MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_rectTransform)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____rectTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____rectTransform_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rectTransform_4), (void*)L_2);
	}

IL_0019:
	{
		// return _rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____rectTransform_4;
		return L_3;
	}
}
// System.Void MarkerGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerGroup__ctor_m852C014DAD836A877F04E51EDE4BECB3AD6080A3 (MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<UnityEngine.GameObject> Ilumisoft.Environment.CloudLayer::get_CloudPrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CloudLayer_get_CloudPrefabs_m553113BF6CB560DACAE9B5C60BB5F45A5811F4E2 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> CloudPrefabs { get => cloudPrefabs; set => cloudPrefabs = value; }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___cloudPrefabs_4;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_CloudPrefabs(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_CloudPrefabs_mFBB8472F13C007CF870EA0A08A1BB68212ACB5A0 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> CloudPrefabs { get => cloudPrefabs; set => cloudPrefabs = value; }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___0_value;
		__this->___cloudPrefabs_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cloudPrefabs_4), (void*)L_0);
		return;
	}
}
// System.Int32 Ilumisoft.Environment.CloudLayer::get_RandomSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CloudLayer_get_RandomSeed_m4CEFE24F3E4E06601680DCB6972DBD53A2D3767C (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public int RandomSeed { get => randomSeed; set => randomSeed = value; }
		int32_t L_0 = __this->___randomSeed_5;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_RandomSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_RandomSeed_mEE63598F708322B53B386AE09F76A42F4F32990D (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int RandomSeed { get => randomSeed; set => randomSeed = value; }
		int32_t L_0 = ___0_value;
		__this->___randomSeed_5 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_SpawnRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_SpawnRadius_m785C43E9B31D2A960F19BD54F42F2F6882381B9F (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float SpawnRadius { get => spawnRadius; set => spawnRadius = value; }
		float L_0 = __this->___spawnRadius_6;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_SpawnRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_SpawnRadius_m8D88D7940ACA9659D5CB8F4752D5B0762E1ED2B0 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float SpawnRadius { get => spawnRadius; set => spawnRadius = value; }
		float L_0 = ___0_value;
		__this->___spawnRadius_6 = L_0;
		return;
	}
}
// System.Int32 Ilumisoft.Environment.CloudLayer::get_NumberofClouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CloudLayer_get_NumberofClouds_m7606462AB128AC428D346BFB65F65EBC80877A18 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public int NumberofClouds { get => numberofClouds; set => numberofClouds = value; }
		int32_t L_0 = __this->___numberofClouds_9;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_NumberofClouds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_NumberofClouds_m451C9C8B31A56AC95AE5DFCC3288EA22A1DAFAF4 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int NumberofClouds { get => numberofClouds; set => numberofClouds = value; }
		int32_t L_0 = ___0_value;
		__this->___numberofClouds_9 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_HorizontalStretch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_HorizontalStretch_m71CDAF834FEB700E06B2D1159F830965D47173B0 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float HorizontalStretch { get => horizontalStretch; set => horizontalStretch = value; }
		float L_0 = __this->___horizontalStretch_12;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_HorizontalStretch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_HorizontalStretch_m76A7BA85B9C41C1455DAED2697C6EDF7A9B0BFE9 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float HorizontalStretch { get => horizontalStretch; set => horizontalStretch = value; }
		float L_0 = ___0_value;
		__this->___horizontalStretch_12 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_MinScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_MinScale_m2750F8AFB23496CBF94A11D368285F1B21163D3A (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinScale { get => minScale; set => minScale = value; }
		float L_0 = __this->___minScale_10;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_MinScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_MinScale_m9D3B55F5FFC22B78394E99CEEB9649F4CADD31DE (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinScale { get => minScale; set => minScale = value; }
		float L_0 = ___0_value;
		__this->___minScale_10 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_MaxScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_MaxScale_m8B672D14C5A124324296BFC6AB5264CF60B880F0 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxScale { get => maxScale; set => maxScale = value; }
		float L_0 = __this->___maxScale_11;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_MaxScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_MaxScale_m8FF51FA474A9029D35287CD96563D49F8CD53E1B (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxScale { get => maxScale; set => maxScale = value; }
		float L_0 = ___0_value;
		__this->___maxScale_11 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_MinLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_MinLevel_m025053071B5B8CA2CEEE1C55AEAE1CEEFCD9503D (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinLevel { get => minLevel; set => minLevel = value; }
		float L_0 = __this->___minLevel_7;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_MinLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_MinLevel_m693A0865DB9BB924CB9D505315C3688D9D2EFBB5 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinLevel { get => minLevel; set => minLevel = value; }
		float L_0 = ___0_value;
		__this->___minLevel_7 = L_0;
		return;
	}
}
// System.Single Ilumisoft.Environment.CloudLayer::get_MaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CloudLayer_get_MaxLevel_mDEAD1F427917DE314D866785CD1A83C5D4C0B50D (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxLevel { get => maxLevel; set => maxLevel = value; }
		float L_0 = __this->___maxLevel_8;
		return L_0;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::set_MaxLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_set_MaxLevel_mC7F5242E779ADDEAFD3090D0E3C8879D21C4F983 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxLevel { get => maxLevel; set => maxLevel = value; }
		float L_0 = ___0_value;
		__this->___maxLevel_8 = L_0;
		return;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_Update_m591F6F1D4196E112F9724D90B4C91F1A7C704461 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// RotateClouds();
		CloudLayer_RotateClouds_mDA18B91CF7292C0B86105AB38BFB5D8BA92EEEE1(__this, NULL);
		// }
		return;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::RotateClouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer_RotateClouds_mDA18B91CF7292C0B86105AB38BFB5D8BA92EEEE1 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->___rotationSpeed_13;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void Ilumisoft.Environment.CloudLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudLayer__ctor_m18E3777A3D73741BA945B1E34D2E0DD498C65A99 (CloudLayer_t9431D06FE7161D3A6990266100B2582B611C77F0* __this, const RuntimeMethod* method) 
{
	{
		// private float spawnRadius = 100;
		__this->___spawnRadius_6 = (100.0f);
		// private float maxLevel = 1.0f;
		__this->___maxLevel_8 = (1.0f);
		// private int numberofClouds = 50;
		__this->___numberofClouds_9 = ((int32_t)50);
		// private float minScale = 1;
		__this->___minScale_10 = (1.0f);
		// private float maxScale = 1;
		__this->___maxScale_11 = (1.0f);
		// private float horizontalStretch = 1;
		__this->___horizontalStretch_12 = (1.0f);
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
// System.Void Ilumisoft.Environment.Skydome::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skydome_LateUpdate_mCC80B7EF7BAE9E9AC7E97B5BAA10770C168DE0AB (Skydome_t560CAB59D2E6623F1F04A2005EE39963404B8C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Camera.main == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var position = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// position.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		(&V_0)->___y_3 = L_7;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Ilumisoft.Environment.Skydome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skydome__ctor_mFDF6F3F2F2026DE98050E46D7E4146A47960CC22 (Skydome_t560CAB59D2E6623F1F04A2005EE39963404B8C53* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
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
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* MapCanvasController_get_MarkerGroup_m79B2326F5F7E5F8B7ED9FF9F94C3185FC7480358_inline (MapCanvasController_t38E30357D80F431ED8E00A74A1FD53FAD64436B5* __this, const RuntimeMethod* method) 
{
	{
		// return markerGroup;
		MarkerGroup_t3DEF44D8EAB402505659978DF20DBABD4625B12F* L_0 = __this->___markerGroup_16;
		return L_0;
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
