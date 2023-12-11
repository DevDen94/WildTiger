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

// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// Cinemachine.CinemachineSmoothPath/Waypoint[]
struct WaypointU5BU5D_tCC66FFD1C1AEE553FFFF63D809508B018C86EE0C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// MalbersAnimations.Scriptables.BoolReference
struct BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761;
// MalbersAnimations.Scriptables.BoolVar
struct BoolVar_t8CA253F33D5C2C7BA023D69C4B5C325CDAE72864;
// MalbersAnimations.CameraInputMapper
struct CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD;
// Cinemachine.CinemachinePathBase
struct CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D;
// Cinemachine.CinemachineSmoothPath
struct CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MalbersAnimations.Scriptables.FloatReference
struct FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1;
// MalbersAnimations.Scriptables.FloatVar
struct FloatVar_t1713C9BB7D7FA58467E7BA708E235C43738E8A89;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MalbersAnimations.PathCreation.PathLink_Cinemachine
struct PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082;
// System.String
struct String_t;
// MalbersAnimations.ThirdPersonFollowTarget
struct ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// MalbersAnimations.Scriptables.TransformReference
struct TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1;
// MalbersAnimations.Scriptables.TransformVar
struct TransformVar_t4759379165DECB166DD4250744145CABF91987DA;
// MalbersAnimations.Scriptables.Vector2Reference
struct Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C;
// MalbersAnimations.Scriptables.Vector2Var
struct Vector2Var_t50FFD2D6503BF084010B8206AD6046CCF6ED8D31;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A;
// Cinemachine.CinemachinePathBase/Appearance
struct Appearance_t598AE4F607DDAB13B808E1D4ECEBE53E335967F8;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;

IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInputMapper_GetInputAxis_m5588A0F062B1D1438F39B683CBA96F697AB0C2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m4A2D8E5E55A0773E0533A73411B84FCF1BD7954B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m323CE263A7D82DCC201D1BC1A4F441B86B4E858E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m003106AB75CD7F2AB0DBED8AB5AAEF3FBC1AD436_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A13E01A28F034DE7C5093BE315CA42F2DDB0040 
{
};

// Cinemachine.CinemachineCore
struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D* ___mActiveBrains_9;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6* ___mActiveCameras_11;
	// System.Boolean Cinemachine.CinemachineCore::m_ActiveCamerasAreSorted
	bool ___m_ActiveCamerasAreSorted_12;
	// System.Int32 Cinemachine.CinemachineCore::m_ActivationSequence
	int32_t ___m_ActivationSequence_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655* ___mAllCameras_14;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mRoundRobinVcamLastFrame_15;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705* ___mUpdateStatus_18;
	// Cinemachine.CinemachineCore/UpdateFilter Cinemachine.CinemachineCore::m_CurrentUpdateFilter
	int32_t ___m_CurrentUpdateFilter_19;
};

// MalbersAnimations.Scriptables.ReferenceVar
struct ReferenceVar_t543C99BA5835A7ED72B49655548C938F966D1364  : public RuntimeObject
{
	// System.Boolean MalbersAnimations.Scriptables.ReferenceVar::UseConstant
	bool ___UseConstant_0;
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

// MalbersAnimations.Scriptables.BoolReference
struct BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761  : public ReferenceVar_t543C99BA5835A7ED72B49655548C938F966D1364
{
	// System.Boolean MalbersAnimations.Scriptables.BoolReference::ConstantValue
	bool ___ConstantValue_1;
	// MalbersAnimations.Scriptables.BoolVar MalbersAnimations.Scriptables.BoolReference::Variable
	BoolVar_t8CA253F33D5C2C7BA023D69C4B5C325CDAE72864* ___Variable_2;
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

// MalbersAnimations.Scriptables.FloatReference
struct FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1  : public ReferenceVar_t543C99BA5835A7ED72B49655548C938F966D1364
{
	// System.Single MalbersAnimations.Scriptables.FloatReference::ConstantValue
	float ___ConstantValue_1;
	// MalbersAnimations.Scriptables.FloatVar MalbersAnimations.Scriptables.FloatReference::Variable
	FloatVar_t1713C9BB7D7FA58467E7BA708E235C43738E8A89* ___Variable_2;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// MalbersAnimations.Scriptables.TransformReference
struct TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1  : public ReferenceVar_t543C99BA5835A7ED72B49655548C938F966D1364
{
	// UnityEngine.Transform MalbersAnimations.Scriptables.TransformReference::ConstantValue
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ConstantValue_1;
	// MalbersAnimations.Scriptables.TransformVar MalbersAnimations.Scriptables.TransformReference::Variable
	TransformVar_t4759379165DECB166DD4250744145CABF91987DA* ___Variable_2;
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

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
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

// MalbersAnimations.Scriptables.Vector2Reference
struct Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C  : public ReferenceVar_t543C99BA5835A7ED72B49655548C938F966D1364
{
	// UnityEngine.Vector2 MalbersAnimations.Scriptables.Vector2Reference::ConstantValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ConstantValue_1;
	// MalbersAnimations.Scriptables.Vector2Var MalbersAnimations.Scriptables.Vector2Reference::Variable
	Vector2Var_t50FFD2D6503BF084010B8206AD6046CCF6ED8D31* ___Variable_2;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MalbersAnimations.CameraInputMapper
struct CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MalbersAnimations.CameraInputMapper::TouchXInputMapTo
	String_t* ___TouchXInputMapTo_4;
	// System.String MalbersAnimations.CameraInputMapper::TouchYInputMapTo
	String_t* ___TouchYInputMapTo_5;
	// UnityEngine.Vector2 MalbersAnimations.CameraInputMapper::delta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_6;
};

// Cinemachine.CinemachinePathBase
struct CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Cinemachine.CinemachinePathBase::m_Resolution
	int32_t ___m_Resolution_4;
	// Cinemachine.CinemachinePathBase/Appearance Cinemachine.CinemachinePathBase::m_Appearance
	Appearance_t598AE4F607DDAB13B808E1D4ECEBE53E335967F8* ___m_Appearance_5;
	// System.Single[] Cinemachine.CinemachinePathBase::m_DistanceToPos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_DistanceToPos_6;
	// System.Single[] Cinemachine.CinemachinePathBase::m_PosToDistance
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_PosToDistance_7;
	// System.Int32 Cinemachine.CinemachinePathBase::m_CachedSampleSteps
	int32_t ___m_CachedSampleSteps_8;
	// System.Single Cinemachine.CinemachinePathBase::m_PathLength
	float ___m_PathLength_9;
	// System.Single Cinemachine.CinemachinePathBase::m_cachedPosStepSize
	float ___m_cachedPosStepSize_10;
	// System.Single Cinemachine.CinemachinePathBase::m_cachedDistanceStepSize
	float ___m_cachedDistanceStepSize_11;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::m_blendStartPosition
	float ___m_blendStartPosition_20;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_21;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_22;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_23;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_24;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_25;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_27;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_28;
};

// MalbersAnimations.PathCreation.PathLink_Cinemachine
struct PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachinePathBase MalbersAnimations.PathCreation.PathLink_Cinemachine::m_Path
	CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* ___m_Path_4;
	// System.Int32 MalbersAnimations.PathCreation.PathLink_Cinemachine::m_SearchResolution
	int32_t ___m_SearchResolution_5;
};

// MalbersAnimations.ThirdPersonFollowTarget
struct ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MalbersAnimations.Scriptables.TransformReference MalbersAnimations.ThirdPersonFollowTarget::Target
	TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* ___Target_4;
	// UnityEngine.Transform MalbersAnimations.ThirdPersonFollowTarget::Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Pivot_5;
	// MalbersAnimations.Scriptables.Vector2Reference MalbersAnimations.ThirdPersonFollowTarget::look
	Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* ___look_6;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.ThirdPersonFollowTarget::invertX
	BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* ___invertX_7;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.ThirdPersonFollowTarget::invertY
	BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* ___invertY_8;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.ThirdPersonFollowTarget::XMultiplier
	FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* ___XMultiplier_9;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.ThirdPersonFollowTarget::YMultiplier
	FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* ___YMultiplier_10;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.ThirdPersonFollowTarget::TopClamp
	FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* ___TopClamp_11;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.ThirdPersonFollowTarget::BottomClamp
	FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* ___BottomClamp_12;
	// System.Single MalbersAnimations.ThirdPersonFollowTarget::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_13;
	// System.Single MalbersAnimations.ThirdPersonFollowTarget::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_14;
};

// Cinemachine.CinemachineSmoothPath
struct CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE  : public CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D
{
	// System.Boolean Cinemachine.CinemachineSmoothPath::m_Looped
	bool ___m_Looped_12;
	// Cinemachine.CinemachineSmoothPath/Waypoint[] Cinemachine.CinemachineSmoothPath::m_Waypoints
	WaypointU5BU5D_tCC66FFD1C1AEE553FFFF63D809508B018C86EE0C* ___m_Waypoints_13;
	// Cinemachine.CinemachineSmoothPath/Waypoint[] Cinemachine.CinemachineSmoothPath::m_ControlPoints1
	WaypointU5BU5D_tCC66FFD1C1AEE553FFFF63D809508B018C86EE0C* ___m_ControlPoints1_14;
	// Cinemachine.CinemachineSmoothPath/Waypoint[] Cinemachine.CinemachineSmoothPath::m_ControlPoints2
	WaypointU5BU5D_tCC66FFD1C1AEE553FFFF63D809508B018C86EE0C* ___m_ControlPoints2_15;
	// System.Boolean Cinemachine.CinemachineSmoothPath::m_IsLoopedCache
	bool ___m_IsLoopedCache_16;
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_29;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_30;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_31;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_32;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_33;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

// <Module>

// <Module>

// Cinemachine.CinemachineCore
struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields
{
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD* ___sInstance_1;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_2;
	// Cinemachine.CinemachineCore/AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* ___GetInputAxis_3;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_4;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_5;
	// Cinemachine.CinemachineCore/GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A* ___GetBlendOverride_6;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraUpdatedEvent_7;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraCutEvent_8;
	// System.Boolean Cinemachine.CinemachineCore::FrameDeltaCompensationEnabled
	bool ___FrameDeltaCompensationEnabled_10;
	// System.Single Cinemachine.CinemachineCore::s_LastUpdateTime
	float ___s_LastUpdateTime_16;
	// System.Int32 Cinemachine.CinemachineCore::s_FixedFrameCount
	int32_t ___s_FixedFrameCount_17;
};

// Cinemachine.CinemachineCore

// MalbersAnimations.Scriptables.ReferenceVar

// MalbersAnimations.Scriptables.ReferenceVar

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// MalbersAnimations.Scriptables.BoolReference

// MalbersAnimations.Scriptables.BoolReference

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

// MalbersAnimations.Scriptables.FloatReference

// MalbersAnimations.Scriptables.FloatReference

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

// MalbersAnimations.Scriptables.TransformReference

// MalbersAnimations.Scriptables.TransformReference

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

// System.Void

// System.Void

// Cinemachine.CameraState/CustomBlendable

// Cinemachine.CameraState/CustomBlendable

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};

// Cinemachine.LensSettings

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// MalbersAnimations.Scriptables.Vector2Reference

// MalbersAnimations.Scriptables.Vector2Reference

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};

// Cinemachine.CameraState

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// Cinemachine.CinemachineCore/AxisInputDelegate

// Cinemachine.CinemachineCore/AxisInputDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// MalbersAnimations.CameraInputMapper

// MalbersAnimations.CameraInputMapper

// Cinemachine.CinemachinePathBase

// Cinemachine.CinemachinePathBase

// Cinemachine.CinemachineVirtualCameraBase

// Cinemachine.CinemachineVirtualCameraBase

// MalbersAnimations.PathCreation.PathLink_Cinemachine
struct PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields
{
	// Cinemachine.CinemachinePathBase/PositionUnits MalbersAnimations.PathCreation.PathLink_Cinemachine::Normalized
	int32_t ___Normalized_6;
};

// MalbersAnimations.PathCreation.PathLink_Cinemachine

// MalbersAnimations.ThirdPersonFollowTarget

// MalbersAnimations.ThirdPersonFollowTarget

// Cinemachine.CinemachineSmoothPath

// Cinemachine.CinemachineSmoothPath

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_35;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_36;
};

// Cinemachine.CinemachineVirtualCamera
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m8D7FED117FA4DDE1BBDC08B5158E73E2FACFF7B6 (AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean MalbersAnimations.Scriptables.BoolReference::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolReference_get_Value_mDC6AFC1C5AF3D257E372398EE6D618DC785429DA (BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.MalbersAnimationsExtensions::ResetLocal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MalbersAnimationsExtensions_ResetLocal_mDE360CD7D6CF98C248FE4308D160740B8498F907 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Cinemachine.CinemachineVirtualCamera>()
inline CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* Component_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m323CE263A7D82DCC201D1BC1A4F441B86B4E858E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Transform MalbersAnimations.Scriptables.TransformReference::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformReference_get_Value_mD153809A240211CF26A1DC65AB3E00484609FFCF (TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MalbersAnimations.Scriptables.TransformReference::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformReference_get_position_m78B9E34BD7F16555E351302FCDAC70E967344DF0 (TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.ThirdPersonFollowTarget::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_CameraRotation_mD5C79ADAD2329D4818B61FF8B8DD2E8DD7FB217F (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.Vector2Reference::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference_set_x_m1C420842325A07FC85EADD28175500A98D7E0604 (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.Vector2Reference::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference_set_y_m28C8F396ED4B5B218B1B14B25B64AB0D9D7DF13B (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.Vector2Reference::set_Value(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference_set_Value_m1CDDBF3B4AC4BCBF03ECFE46AD664C3B7DF85021 (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MalbersAnimations.Scriptables.Vector2Reference::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Reference_get_Value_m4ED49A755F64475D570C51CEBFA30AB356030E0D (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.Scriptables.Vector2Reference::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Reference_get_x_m263B356DFA9840711DB603059A3BC3E7CCE10E97 (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.ThirdPersonFollowTarget::get_InvertX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_get_InvertX_mF162897EBB688465952D7E62F6B64A28577D9EF3 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.Scriptables.FloatReference::op_Implicit(MalbersAnimations.Scriptables.FloatReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatReference_op_Implicit_m67D6DA821B11C9876C4D84CA5C78A3A709A38D11 (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* ___0_reference, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.Scriptables.Vector2Reference::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Reference_get_y_m72D0631C442B7D7C0553A2987AE89E8812BD8A62 (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.ThirdPersonFollowTarget::get_InvertY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_get_InvertY_m50FB4FD3A712AFEC9F08146E8A1337C67BBF7B5B (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.ThirdPersonFollowTarget::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_ClampAngle_mE51AEE9D05F52F8FBB9B13923987A236A9BBB30F (float ___0_lfAngle, float ___1_lfMin, float ___2_lfMax, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.TransformReference::set_Value(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformReference_set_Value_mB8583A80F2DF7A30313928773C25C1F74B67B0B1 (TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.Vector2Reference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference__ctor_m28BB4BF2A0967F6BF848424E526EC87D718EB13D (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* __this, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.BoolReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolReference__ctor_m96BF669B29266410224EA95DF8E2AAD327DDCC5E (BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* __this, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Scriptables.FloatReference::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatReference__ctor_m5252EFD9CCEF9012C3C39F4ABD500901C85C6454 (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MalbersAnimations.PathCreation.PathLink_Cinemachine::GetPointAtTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathLink_Cinemachine_GetPointAtTime_mBE9B204440BAEDBD42C1A2597C9A8FC2E6B0E4AC (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, float ___0_NormalizedTime, const RuntimeMethod* method) ;
// UnityEngine.Bounds MalbersAnimations.PathCreation.PathLink_Cinemachine::CalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 PathLink_Cinemachine_CalculateBounds_mA17269772FAA756140BB855C141BF3BACF3321BD (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.PathCreation.PathLink_Cinemachine::FindClosestPoint(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PathLink_Cinemachine_FindClosestPoint_m5A4AA7AEED134CC60417F2DC0E2D1262C78DBD6A (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, int32_t ___1_stepsPerSegment, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Cinemachine.CinemachinePathBase::EvaluateOrientationAtUnit(System.Single,Cinemachine.CinemachinePathBase/PositionUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CinemachinePathBase_EvaluateOrientationAtUnit_m28859D88DD40B298B14EE6D04A6358534E09C0A7 (CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* __this, float ___0_pos, int32_t ___1_units, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.CinemachinePathBase::EvaluatePositionAtUnit(System.Single,Cinemachine.CinemachinePathBase/PositionUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CinemachinePathBase_EvaluatePositionAtUnit_mCE1B51BBCAEFF5A65A68F1D3113390F7BC223843 (CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* __this, float ___0_pos, int32_t ___1_units, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.MalbersAnimationsExtensions::ClosestTimeOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MalbersAnimationsExtensions_ClosestTimeOnSegment_m54D9313857A218B26AB05A292A80AA6C5E193995 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_s0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Cinemachine.CinemachineSmoothPath>()
inline CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* Component_GetComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m4A2D8E5E55A0773E0533A73411B84FCF1BD7954B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Cinemachine.CinemachineSmoothPath>()
inline CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* GameObject_AddComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m003106AB75CD7F2AB0DBED8AB5AAEF3FBC1AD436 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void MalbersAnimations.CameraInputMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputMapper_Start_mDC7FB2F296509B255B8726CC25F777DAB72D54D1 (CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputMapper_GetInputAxis_m5588A0F062B1D1438F39B683CBA96F697AB0C2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CinemachineCore.GetInputAxis = GetInputAxis;
		AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* L_0 = (AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452*)il2cpp_codegen_object_new(AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AxisInputDelegate__ctor_m8D7FED117FA4DDE1BBDC08B5158E73E2FACFF7B6(L_0, __this, (intptr_t)((void*)CameraInputMapper_GetInputAxis_m5588A0F062B1D1438F39B683CBA96F697AB0C2FE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___GetInputAxis_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___GetInputAxis_3), (void*)L_0);
		// }
		return;
	}
}
// System.Single MalbersAnimations.CameraInputMapper::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraInputMapper_GetInputAxis_m5588A0F062B1D1438F39B683CBA96F697AB0C2FE (CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD* __this, String_t* ___0_axisName, const RuntimeMethod* method) 
{
	{
		// if (string.Equals(axisName, TouchXInputMapTo))
		String_t* L_0 = ___0_axisName;
		String_t* L_1 = __this->___TouchXInputMapTo_4;
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___delta_6);
		float L_4 = L_3->___x_0;
		return L_4;
	}

IL_001a:
	{
		// if (string.Equals(axisName, TouchYInputMapTo))
		String_t* L_5 = ___0_axisName;
		String_t* L_6 = __this->___TouchYInputMapTo_5;
		bool L_7;
		L_7 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return delta.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___delta_6);
		float L_9 = L_8->___y_1;
		return L_9;
	}

IL_0034:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void MalbersAnimations.CameraInputMapper::CameraInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputMapper_CameraInput_mAB591D18DDB1DCAACD45807CA7458820BF3611BF (CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public void CameraInput(Vector2 value) => delta = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___delta_6 = L_0;
		return;
	}
}
// System.Void MalbersAnimations.CameraInputMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputMapper__ctor_m30ECB34E5870596D601F9821E79437A6A7135048 (CameraInputMapper_t52C7BAEB660B11E4C3357201A085E129911265FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string TouchXInputMapTo = "Mouse X";
		__this->___TouchXInputMapTo_4 = _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TouchXInputMapTo_4), (void*)_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		// public string TouchYInputMapTo = "Mouse Y";
		__this->___TouchYInputMapTo_5 = _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TouchYInputMapTo_5), (void*)_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
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
// System.Single MalbersAnimations.ThirdPersonFollowTarget::get_InvertX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_get_InvertX_mF162897EBB688465952D7E62F6B64A28577D9EF3 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// private float InvertX => invertX.Value ? -1 : 1;
		BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* L_0 = __this->___invertX_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = BoolReference_get_Value_mDC6AFC1C5AF3D257E372398EE6D618DC785429DA(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = (-1);
	}

IL_0011:
	{
		return ((float)G_B3_0);
	}
}
// System.Single MalbersAnimations.ThirdPersonFollowTarget::get_InvertY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_get_InvertY_m50FB4FD3A712AFEC9F08146E8A1337C67BBF7B5B (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// private float InvertY => invertY.Value ? 1 : -1;
		BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* L_0 = __this->___invertY_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = BoolReference_get_Value_mDC6AFC1C5AF3D257E372398EE6D618DC785429DA(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		return ((float)G_B3_0);
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_Awake_mCFAD27113B4DE73723BF1BD527931ADB81D35A9E (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m323CE263A7D82DCC201D1BC1A4F441B86B4E858E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894);
		s_Il2CppMethodInitialized = true;
	}
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* V_0 = NULL;
	{
		// if (Pivot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Pivot_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// Pivot = new GameObject("Pivot").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___Pivot_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Pivot_5), (void*)L_3);
		// Pivot.parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___Pivot_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// Pivot.ResetLocal();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___Pivot_5;
		MalbersAnimationsExtensions_ResetLocal_mDE360CD7D6CF98C248FE4308D160740B8498F907(L_6, NULL);
	}

IL_003f:
	{
		// var Cam = GetComponent<CinemachineVirtualCamera>();
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_7;
		L_7 = Component_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m323CE263A7D82DCC201D1BC1A4F441B86B4E858E(__this, Component_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m323CE263A7D82DCC201D1BC1A4F441B86B4E858E_RuntimeMethod_var);
		V_0 = L_7;
		// if (Cam)
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// Cam.Follow = Pivot.transform;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___Pivot_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_10, L_12);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_FixedUpdate_m3611F1AF48F253F2322F9EFF58080CAC990707F9 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target.Value)
		TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* L_0 = __this->___Target_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = TransformReference_get_Value_mD153809A240211CF26A1DC65AB3E00484609FFCF(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Pivot.transform.position = Target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___Pivot_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* L_5 = __this->___Target_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = TransformReference_get_position_m78B9E34BD7F16555E351302FCDAC70E967344DF0(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
	}

IL_002d:
	{
		// CameraRotation();
		ThirdPersonFollowTarget_CameraRotation_mD5C79ADAD2329D4818B61FF8B8DD2E8DD7FB217F(__this, NULL);
		// }
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::SetLookX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_SetLookX_mDCEA4193E05661C18387BB83CB79B02B681A3AA9 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		// public void SetLookX(float x) => look.x = x;
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_0 = __this->___look_6;
		float L_1 = ___0_x;
		NullCheck(L_0);
		Vector2Reference_set_x_m1C420842325A07FC85EADD28175500A98D7E0604(L_0, L_1, NULL);
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::SetLookY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_SetLookY_m7BB69E7FCCECF2396DC183340020D57DC6A0E237 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, float ___0_y, const RuntimeMethod* method) 
{
	{
		// public void SetLookY(float y) => look.y = y;
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_0 = __this->___look_6;
		float L_1 = ___0_y;
		NullCheck(L_0);
		Vector2Reference_set_y_m28C8F396ED4B5B218B1B14B25B64AB0D9D7DF13B(L_0, L_1, NULL);
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::SetLook(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_SetLook_m27D8CBF587154DD831B304E8C3235AD495C7FD98 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_look, const RuntimeMethod* method) 
{
	{
		// public void SetLook(Vector2 look) => this.look.Value = look;
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_0 = __this->___look_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_look;
		NullCheck(L_0);
		Vector2Reference_set_Value_m1CDDBF3B4AC4BCBF03ECFE46AD664C3B7DF85021(L_0, L_1, NULL);
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_CameraRotation_mD5C79ADAD2329D4818B61FF8B8DD2E8DD7FB217F (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (look.Value.sqrMagnitude >= _threshold)
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_0 = __this->___look_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2Reference_get_Value_m4ED49A755F64475D570C51CEBFA30AB356030E0D(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		if ((!(((float)L_2) >= ((float)(9.99999975E-06f)))))
		{
			goto IL_007a;
		}
	}
	{
		// float deltaTimeMultiplier = 1;// Time.deltaTime;
		V_1 = (1.0f);
		// _cinemachineTargetYaw += look.x * deltaTimeMultiplier * InvertX * XMultiplier;
		float L_3 = __this->____cinemachineTargetYaw_13;
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_4 = __this->___look_6;
		NullCheck(L_4);
		float L_5;
		L_5 = Vector2Reference_get_x_m263B356DFA9840711DB603059A3BC3E7CCE10E97(L_4, NULL);
		float L_6 = V_1;
		float L_7;
		L_7 = ThirdPersonFollowTarget_get_InvertX_mF162897EBB688465952D7E62F6B64A28577D9EF3(__this, NULL);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_8 = __this->___XMultiplier_9;
		float L_9;
		L_9 = FloatReference_op_Implicit_m67D6DA821B11C9876C4D84CA5C78A3A709A38D11(L_8, NULL);
		__this->____cinemachineTargetYaw_13 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), L_9))));
		// _cinemachineTargetPitch += look.y * deltaTimeMultiplier * InvertY * YMultiplier;
		float L_10 = __this->____cinemachineTargetPitch_14;
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_11 = __this->___look_6;
		NullCheck(L_11);
		float L_12;
		L_12 = Vector2Reference_get_y_m72D0631C442B7D7C0553A2987AE89E8812BD8A62(L_11, NULL);
		float L_13 = V_1;
		float L_14;
		L_14 = ThirdPersonFollowTarget_get_InvertY_m50FB4FD3A712AFEC9F08146E8A1337C67BBF7B5B(__this, NULL);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_15 = __this->___YMultiplier_10;
		float L_16;
		L_16 = FloatReference_op_Implicit_m67D6DA821B11C9876C4D84CA5C78A3A709A38D11(L_15, NULL);
		__this->____cinemachineTargetPitch_14 = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14)), L_16))));
	}

IL_007a:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_17 = __this->____cinemachineTargetYaw_13;
		float L_18;
		L_18 = ThirdPersonFollowTarget_ClampAngle_mE51AEE9D05F52F8FBB9B13923987A236A9BBB30F(L_17, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		__this->____cinemachineTargetYaw_13 = L_18;
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_19 = __this->____cinemachineTargetPitch_14;
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_20 = __this->___BottomClamp_12;
		float L_21;
		L_21 = FloatReference_op_Implicit_m67D6DA821B11C9876C4D84CA5C78A3A709A38D11(L_20, NULL);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_22 = __this->___TopClamp_11;
		float L_23;
		L_23 = FloatReference_op_Implicit_m67D6DA821B11C9876C4D84CA5C78A3A709A38D11(L_22, NULL);
		float L_24;
		L_24 = ThirdPersonFollowTarget_ClampAngle_mE51AEE9D05F52F8FBB9B13923987A236A9BBB30F(L_19, L_21, L_23, NULL);
		__this->____cinemachineTargetPitch_14 = L_24;
		// Pivot.rotation = Quaternion.Euler(_cinemachineTargetPitch, _cinemachineTargetYaw, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___Pivot_5;
		float L_26 = __this->____cinemachineTargetPitch_14;
		float L_27 = __this->____cinemachineTargetYaw_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_26, L_27, (0.0f), NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_28, NULL);
		// }
		return;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget_SetTarget_m990B9E96DD7DA019EC9928CD6AC50FFE0D4BEB8A (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) 
{
	{
		// public void SetTarget(Transform target) => Target.Value = target;
		TransformReference_t380CD07613311DF7919FAA269A72FA9EC2B36CE1* L_0 = __this->___Target_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_target;
		NullCheck(L_0);
		TransformReference_set_Value_mB8583A80F2DF7A30313928773C25C1F74B67B0B1(L_0, L_1, NULL);
		return;
	}
}
// System.Single MalbersAnimations.ThirdPersonFollowTarget::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonFollowTarget_ClampAngle_mE51AEE9D05F52F8FBB9B13923987A236A9BBB30F (float ___0_lfAngle, float ___1_lfMin, float ___2_lfMax, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___0_lfAngle;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___0_lfAngle;
		___0_lfAngle = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___0_lfAngle;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___0_lfAngle;
		___0_lfAngle = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___0_lfAngle;
		float L_5 = ___1_lfMin;
		float L_6 = ___2_lfMax;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void MalbersAnimations.ThirdPersonFollowTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonFollowTarget__ctor_mDBE685B4795B729B46E00890328403242BCE1350 (ThirdPersonFollowTarget_t6D5F778D97AD5D1E181F797E70A0EAF2422D9952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Reference look = new();
		Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C* L_0 = (Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C*)il2cpp_codegen_object_new(Vector2Reference_tC1925B2A774AB59E8E4D06AACE55485CDF834E7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector2Reference__ctor_m28BB4BF2A0967F6BF848424E526EC87D718EB13D(L_0, NULL);
		__this->___look_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___look_6), (void*)L_0);
		// public BoolReference invertX = new();
		BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* L_1 = (BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761*)il2cpp_codegen_object_new(BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BoolReference__ctor_m96BF669B29266410224EA95DF8E2AAD327DDCC5E(L_1, NULL);
		__this->___invertX_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___invertX_7), (void*)L_1);
		// public BoolReference invertY = new();
		BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761* L_2 = (BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761*)il2cpp_codegen_object_new(BoolReference_t0B9AA20A5F8B91CB2E4BA194DE0AF9DF5ED5B761_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoolReference__ctor_m96BF669B29266410224EA95DF8E2AAD327DDCC5E(L_2, NULL);
		__this->___invertY_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___invertY_8), (void*)L_2);
		// public FloatReference XMultiplier = new(1);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_3 = (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1*)il2cpp_codegen_object_new(FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FloatReference__ctor_m5252EFD9CCEF9012C3C39F4ABD500901C85C6454(L_3, (1.0f), NULL);
		__this->___XMultiplier_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___XMultiplier_9), (void*)L_3);
		// public FloatReference YMultiplier = new(1);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_4 = (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1*)il2cpp_codegen_object_new(FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FloatReference__ctor_m5252EFD9CCEF9012C3C39F4ABD500901C85C6454(L_4, (1.0f), NULL);
		__this->___YMultiplier_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___YMultiplier_10), (void*)L_4);
		// public FloatReference TopClamp = new(70.0f);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_5 = (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1*)il2cpp_codegen_object_new(FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FloatReference__ctor_m5252EFD9CCEF9012C3C39F4ABD500901C85C6454(L_5, (70.0f), NULL);
		__this->___TopClamp_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TopClamp_11), (void*)L_5);
		// public FloatReference BottomClamp = new(-30.0f);
		FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1* L_6 = (FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1*)il2cpp_codegen_object_new(FloatReference_t77F4323478FBF859DF7563D85E81C652EAC268B1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FloatReference__ctor_m5252EFD9CCEF9012C3C39F4ABD500901C85C6454(L_6, (-30.0f), NULL);
		__this->___BottomClamp_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BottomClamp_12), (void*)L_6);
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
// UnityEngine.Vector3 MalbersAnimations.PathCreation.PathLink_Cinemachine::get_StartPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathLink_Cinemachine_get_StartPath_m4FA2F901C192AA43528B649948B3C6E8C67B6DFC (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 StartPath => GetPointAtTime(0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = PathLink_Cinemachine_GetPointAtTime_mBE9B204440BAEDBD42C1A2597C9A8FC2E6B0E4AC(__this, (0.0f), NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 MalbersAnimations.PathCreation.PathLink_Cinemachine::get_EndPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathLink_Cinemachine_get_EndPath_mB7B001924D1FA8C9ED2005F99428A3F520D60B8F (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndPath => GetPointAtTime(1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = PathLink_Cinemachine_GetPointAtTime_mBE9B204440BAEDBD42C1A2597C9A8FC2E6B0E4AC(__this, (1.0f), NULL);
		return L_0;
	}
}
// System.Boolean MalbersAnimations.PathCreation.PathLink_Cinemachine::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathLink_Cinemachine_get_IsClosed_m17C7299A7165A68469562A584F3322E5F471CEE1 (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsClosed => m_Path.Looped;
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_0 = __this->___m_Path_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Cinemachine.CinemachinePathBase::get_Looped() */, L_0);
		return L_1;
	}
}
// UnityEngine.Bounds MalbersAnimations.PathCreation.PathLink_Cinemachine::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 PathLink_Cinemachine_get_bounds_m56E728DAE7EF7E3E37E70045B9710F122B461456 (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	{
		// public Bounds bounds => CalculateBounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = PathLink_Cinemachine_CalculateBounds_mA17269772FAA756140BB855C141BF3BACF3321BD(__this, NULL);
		return L_0;
	}
}
// System.Single MalbersAnimations.PathCreation.PathLink_Cinemachine::GetClosestTimeOnPath(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PathLink_Cinemachine_GetClosestTimeOnPath_mCDF8B61C19550BE1363D885932C606858CBF1204 (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	{
		// return FindClosestPoint(position,  m_SearchResolution);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		int32_t L_1 = __this->___m_SearchResolution_5;
		float L_2;
		L_2 = PathLink_Cinemachine_FindClosestPoint_m5A4AA7AEED134CC60417F2DC0E2D1262C78DBD6A(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion MalbersAnimations.PathCreation.PathLink_Cinemachine::GetPathRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 PathLink_Cinemachine_GetPathRotation_mE89F1E777A716914E54139B3C0EFA5D64D848CA1 (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, float ___0_NormalizedTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Path.EvaluateOrientationAtUnit(NormalizedTime, Normalized);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_0 = __this->___m_Path_4;
		float L_1 = ___0_NormalizedTime;
		il2cpp_codegen_runtime_class_init_inline(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		int32_t L_2 = ((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = CinemachinePathBase_EvaluateOrientationAtUnit_m28859D88DD40B298B14EE6D04A6358534E09C0A7(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 MalbersAnimations.PathCreation.PathLink_Cinemachine::GetPointAtTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathLink_Cinemachine_GetPointAtTime_mBE9B204440BAEDBD42C1A2597C9A8FC2E6B0E4AC (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, float ___0_NormalizedTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Path.EvaluatePositionAtUnit(NormalizedTime, Normalized);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_0 = __this->___m_Path_4;
		float L_1 = ___0_NormalizedTime;
		il2cpp_codegen_runtime_class_init_inline(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		int32_t L_2 = ((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CinemachinePathBase_EvaluatePositionAtUnit_mCE1B51BBCAEFF5A65A68F1D3113390F7BC223843(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single MalbersAnimations.PathCreation.PathLink_Cinemachine::FindClosestPoint(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PathLink_Cinemachine_FindClosestPoint_m5A4AA7AEED134CC60417F2DC0E2D1262C78DBD6A (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, int32_t ___1_stepsPerSegment, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		// stepsPerSegment = Mathf.RoundToInt(Mathf.Clamp(stepsPerSegment, 1f, 100f));
		int32_t L_0 = ___1_stepsPerSegment;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)L_0), (1.0f), (100.0f), NULL);
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		___1_stepsPerSegment = L_2;
		// float stepSize = 1f / stepsPerSegment;
		int32_t L_3 = ___1_stepsPerSegment;
		V_0 = ((float)((1.0f)/((float)L_3)));
		// float start = 0;
		// float end = 1;
		V_1 = (1.0f);
		// float bestPos = 0;
		V_2 = (0.0f);
		// float bestDistance = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// int iterations = m_Path.DistanceCacheSampleStepsPerSegment;
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_4 = __this->___m_Path_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Cinemachine.CinemachinePathBase::get_DistanceCacheSampleStepsPerSegment() */, L_4);
		V_4 = L_5;
		// stepSize /= iterations;
		float L_6 = V_0;
		int32_t L_7 = V_4;
		V_0 = ((float)(L_6/((float)L_7)));
		// Vector3 v0 = m_Path.EvaluatePosition(0);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_8 = __this->___m_Path_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(8 /* UnityEngine.Vector3 Cinemachine.CinemachinePathBase::EvaluatePosition(System.Single) */, L_8, (0.0f));
		V_5 = L_9;
		// for (float f = start; f <= end; f += stepSize)
		V_6 = (0.0f);
		goto IL_00cd;
	}

IL_0061:
	{
		// float m_Position = m_Path.StandardizeUnit(f, Normalized);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_10 = __this->___m_Path_4;
		float L_11 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		int32_t L_12 = ((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6;
		NullCheck(L_10);
		float L_13;
		L_13 = VirtualFuncInvoker2< float, float, int32_t >::Invoke(15 /* System.Single Cinemachine.CinemachinePathBase::StandardizeUnit(System.Single,Cinemachine.CinemachinePathBase/PositionUnits) */, L_10, L_11, L_12);
		V_7 = L_13;
		// Vector3 v = m_Path.EvaluatePositionAtUnit(m_Position, Normalized);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_14 = __this->___m_Path_4;
		float L_15 = V_7;
		int32_t L_16 = ((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CinemachinePathBase_EvaluatePositionAtUnit_mCE1B51BBCAEFF5A65A68F1D3113390F7BC223843(L_14, L_15, L_16, NULL);
		V_8 = L_17;
		// float t = p.ClosestTimeOnSegment(v0, v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_8;
		float L_21;
		L_21 = MalbersAnimationsExtensions_ClosestTimeOnSegment_m54D9313857A218B26AB05A292A80AA6C5E193995(L_18, L_19, L_20, NULL);
		V_9 = L_21;
		// float d = Vector3.SqrMagnitude(p - Vector3.Lerp(v0, v, t));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_8;
		float L_25 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_26, NULL);
		float L_28;
		L_28 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_27, NULL);
		V_10 = L_28;
		// if (d < bestDistance)
		float L_29 = V_10;
		float L_30 = V_3;
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_00c3;
		}
	}
	{
		// bestDistance = d;
		float L_31 = V_10;
		V_3 = L_31;
		// bestPos = f - (1 - t) * stepSize;
		float L_32 = V_6;
		float L_33 = V_9;
		float L_34 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_32, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_33)), L_34))));
	}

IL_00c3:
	{
		// v0 = v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_8;
		V_5 = L_35;
		// for (float f = start; f <= end; f += stepSize)
		float L_36 = V_6;
		float L_37 = V_0;
		V_6 = ((float)il2cpp_codegen_add(L_36, L_37));
	}

IL_00cd:
	{
		// for (float f = start; f <= end; f += stepSize)
		float L_38 = V_6;
		float L_39 = V_1;
		if ((((float)L_38) <= ((float)L_39)))
		{
			goto IL_0061;
		}
	}
	{
		// return bestPos;
		float L_40 = V_2;
		return L_40;
	}
}
// UnityEngine.Bounds MalbersAnimations.PathCreation.PathLink_Cinemachine::CalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 PathLink_Cinemachine_CalculateBounds_mA17269772FAA756140BB855C141BF3BACF3321BD (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Bounds bounds = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// for (int i = 0; i <= 50; i++)
		V_1 = 0;
		goto IL_003c;
	}

IL_000c:
	{
		// var pos = m_Path.EvaluatePositionAtUnit(i / 10f, Normalized);
		CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* L_0 = __this->___m_Path_4;
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		int32_t L_2 = ((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CinemachinePathBase_EvaluatePositionAtUnit_mCE1B51BBCAEFF5A65A68F1D3113390F7BC223843(L_0, ((float)(((float)L_1)/(10.0f))), L_2, NULL);
		V_2 = L_3;
		// bounds.Encapsulate(transform.InverseTransformPoint(pos));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_4, L_5, NULL);
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F((&V_0), L_6, NULL);
		// for (int i = 0; i <= 50; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003c:
	{
		// for (int i = 0; i <= 50; i++)
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)50))))
		{
			goto IL_000c;
		}
	}
	{
		// return bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9 = V_0;
		return L_9;
	}
}
// System.Void MalbersAnimations.PathCreation.PathLink_Cinemachine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLink_Cinemachine_Reset_mE23D00EDC5C423E7CCE890917CC19A37E5820B2A (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m4A2D8E5E55A0773E0533A73411B84FCF1BD7954B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m003106AB75CD7F2AB0DBED8AB5AAEF3FBC1AD436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* V_0 = NULL;
	{
		// var p = GetComponent<CinemachineSmoothPath>();
		CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* L_0;
		L_0 = Component_GetComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m4A2D8E5E55A0773E0533A73411B84FCF1BD7954B(__this, Component_GetComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m4A2D8E5E55A0773E0533A73411B84FCF1BD7954B_RuntimeMethod_var);
		V_0 = L_0;
		// if (p == null)
		CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_Path = gameObject.AddComponent<CinemachineSmoothPath>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* L_4;
		L_4 = GameObject_AddComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m003106AB75CD7F2AB0DBED8AB5AAEF3FBC1AD436(L_3, GameObject_AddComponent_TisCinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE_m003106AB75CD7F2AB0DBED8AB5AAEF3FBC1AD436_RuntimeMethod_var);
		__this->___m_Path_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Path_4), (void*)L_4);
		return;
	}

IL_0022:
	{
		// m_Path = p;
		CinemachineSmoothPath_t15193270DF9D1EE946A41CBED50DC97A92D9DCDE* L_5 = V_0;
		__this->___m_Path_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Path_4), (void*)L_5);
		// }
		return;
	}
}
// System.Void MalbersAnimations.PathCreation.PathLink_Cinemachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLink_Cinemachine__ctor_mB85AF7027F05DDBA9DCA97DF147BC2ECAB0BF165 (PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082* __this, const RuntimeMethod* method) 
{
	{
		// [Min(1)]  public int m_SearchResolution = 50;
		__this->___m_SearchResolution_5 = ((int32_t)50);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MalbersAnimations.PathCreation.PathLink_Cinemachine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLink_Cinemachine__cctor_mB922590EFD17BA526DE899AD0DFB6D343F136CC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly CinemachinePathBase.PositionUnits Normalized = CinemachinePathBase.PositionUnits.Normalized;
		((PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_StaticFields*)il2cpp_codegen_static_fields_for(PathLink_Cinemachine_t70586D3E8CBEC697D51BE04EF1C5B9305FC9A082_il2cpp_TypeInfo_var))->___Normalized_6 = 2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
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
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
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
