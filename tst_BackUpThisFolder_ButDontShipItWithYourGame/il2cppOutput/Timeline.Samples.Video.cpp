#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>
struct IEnumerable_1_t490607189D1B563A94211CFFE6E7D990C94D3F26;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCF360FA8155395D7F2E3092E355BE18C4A37F7E0;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_t8B327FA25AB9C1D8C585388D91DC4C08DD123020;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// System.String
struct String_t;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96;
// System.Type
struct Type_t;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// Timeline.Samples.VideoPlayableAsset
struct VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD;
// Timeline.Samples.VideoPlayableBehaviour
struct VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// Timeline.Samples.VideoSchedulerPlayableBehaviour
struct VideoSchedulerPlayableBehaviour_tEE04B51172A7D3800359D3D10480F5A9417EDAD6;
// Timeline.Samples.VideoTrack
struct VideoTrack_t278BEFA50341F428534B3FED975C6455A72501F3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t490607189D1B563A94211CFFE6E7D990C94D3F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9204CA80C36382EFB2750319BA6794C7D011EDE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_mDB986BB697DD70B5F6754B50EF264A5E6D283E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_mE370E3E0E49418F648206246038EB14869BC07B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m9EC7BE721B5CF522686E8AB23DF67C4B987864AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mF54D4D1D3B17C854722110A71DEB880ADCD4B4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_mDAC11EF9C5D9D7CB18334103727C4CA9EAD461C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m46882D4CDBD35DD93CA2728E6F1C9EC15436C61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mFA1C45D2775582B8E61875B34EDB6FADBDFEE0CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t061D12624E1CA97F90EDD699552D08EE88BD4773 
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
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

// UnityEngine.Timeline.TimelineClip
struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D  : public RuntimeObject
{
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;
};

struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D_StaticFields
{
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// UnityEngine.Timeline.DiscreteTime
struct DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 
{
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;
};

struct DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6_StaticFields
{
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___kMaxTime_1;
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

// UnityEngine.Timeline.MarkerList
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 
{
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_pinvoke
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects_0;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_com
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects_0;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
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

// Timeline.Samples.VideoPlayableBehaviour
struct VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// UnityEngine.Video.VideoPlayer Timeline.Samples.VideoPlayableBehaviour::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_0;
	// System.Double Timeline.Samples.VideoPlayableBehaviour::preloadTime
	double ___preloadTime_1;
	// System.Double Timeline.Samples.VideoPlayableBehaviour::clipInTime
	double ___clipInTime_2;
	// System.Double Timeline.Samples.VideoPlayableBehaviour::startTime
	double ___startTime_3;
	// System.Boolean Timeline.Samples.VideoPlayableBehaviour::preparing
	bool ___preparing_4;
};

// Timeline.Samples.VideoSchedulerPlayableBehaviour
struct VideoSchedulerPlayableBehaviour_tEE04B51172A7D3800359D3D10480F5A9417EDAD6  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
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

// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F 
{
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_pinvoke
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList_0;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList_1;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_com
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList_0;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList_1;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList_2;
};

// UnityEngine.ExposedReference`1<UnityEngine.AudioSource>
struct ExposedReference_1_tBE61B0F25343F9D87B22972711392F7407A184A5 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// UnityEngine.ExposedReference`1<UnityEngine.Camera>
struct ExposedReference_1_t530C035943F61951D6048CB5F2B3CD27D568B072 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// UnityEngine.ExposedReference`1<System.Object>
struct ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___m_NullPlayable_1;
};

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoPlayableBehaviour>
struct ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE ___m_NullPlayable_1;
};

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoSchedulerPlayableBehaviour>
struct ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C ___m_NullPlayable_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 ___m_Markers_27;
};

struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_StaticFields
{
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72* ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E* ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79* ___s_TrackBindingTypeAttributeCache_25;
};

// Timeline.Samples.VideoPlayableAsset
struct VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	// UnityEngine.Video.VideoClip Timeline.Samples.VideoPlayableAsset::videoClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___videoClip_4;
	// System.Boolean Timeline.Samples.VideoPlayableAsset::mute
	bool ___mute_5;
	// System.Boolean Timeline.Samples.VideoPlayableAsset::loop
	bool ___loop_6;
	// System.Double Timeline.Samples.VideoPlayableAsset::preloadTime
	double ___preloadTime_7;
	// UnityEngine.Video.VideoAspectRatio Timeline.Samples.VideoPlayableAsset::aspectRatio
	int32_t ___aspectRatio_8;
	// Timeline.Samples.VideoPlayableAsset/RenderMode Timeline.Samples.VideoPlayableAsset::renderMode
	int32_t ___renderMode_9;
	// UnityEngine.ExposedReference`1<UnityEngine.Camera> Timeline.Samples.VideoPlayableAsset::targetCamera
	ExposedReference_1_t530C035943F61951D6048CB5F2B3CD27D568B072 ___targetCamera_10;
	// UnityEngine.ExposedReference`1<UnityEngine.AudioSource> Timeline.Samples.VideoPlayableAsset::audioSource
	ExposedReference_1_tBE61B0F25343F9D87B22972711392F7407A184A5 ___audioSource_11;
	// System.Double Timeline.Samples.VideoPlayableAsset::<clipInTime>k__BackingField
	double ___U3CclipInTimeU3Ek__BackingField_12;
	// System.Double Timeline.Samples.VideoPlayableAsset::<startTime>k__BackingField
	double ___U3CstartTimeU3Ek__BackingField_13;
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Timeline.Samples.VideoTrack
struct VideoTrack_t278BEFA50341F428534B3FED975C6455A72501F3  : public TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared (ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___playable0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableExtensions::GetGraph<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputPort1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;

// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<UnityEngine.Camera>::Resolve(UnityEngine.IExposedPropertyTable)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ExposedReference_1_Resolve_mDB986BB697DD70B5F6754B50EF264A5E6D283E5E (ExposedReference_1_t530C035943F61951D6048CB5F2B3CD27D568B072* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (ExposedReference_1_t530C035943F61951D6048CB5F2B3CD27D568B072*, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared)(__this, ___resolver0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<UnityEngine.AudioSource>::Resolve(UnityEngine.IExposedPropertyTable)
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ExposedReference_1_Resolve_mE370E3E0E49418F648206246038EB14869BC07B2 (ExposedReference_1_tBE61B0F25343F9D87B22972711392F7407A184A5* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (ExposedReference_1_tBE61B0F25343F9D87B22972711392F7407A184A5*, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared)(__this, ___resolver0, method);
}
// UnityEngine.Video.VideoPlayer Timeline.Samples.VideoPlayableAsset::CreateVideoPlayer(UnityEngine.Camera,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* VideoPlayableAsset_CreateVideoPlayer_mAE23E92E784B34690A9DF2620617C76E03DDE5AD (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___targetAudioSource1, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_Create_m599EF0161E10B4244461F3335A6294AEBBA02123 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoPlayableBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE ScriptPlayable_1_Create_m9EC7BE721B5CF522686E8AB23DF67C4B987864AB (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared)(___graph0, ___inputCount1, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoPlayableBehaviour>::GetBehaviour()
inline VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B (ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* (*) (ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared)(__this, method);
}
// System.Double Timeline.Samples.VideoPlayableAsset::get_clipInTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_clipInTime_m5D41F3AA6CF95B4CAEF8E384350FAE062646B7B5_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) ;
// System.Double Timeline.Samples.VideoPlayableAsset::get_startTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_startTime_m3258DA0022548FE6049E24BD6AFE16BD9A1D9740_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoPlayableBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m46882D4CDBD35DD93CA2728E6F1C9EC15436C61A (ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___trackIndex0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source1, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.FrameData/EvaluationType UnityEngine.Playables.FrameData::get_evaluationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
inline double PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_gshared)(___playable0, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, double ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.VideoPlayableBehaviour::SyncVideoToPlayable(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_SyncVideoToPlayable_m12F6982687C2EE396EFA5BA8C459134AD65CC139 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.FrameData::get_effectiveWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_effectiveWeight_m16B485F641D81D986D1E798BCD00AB04DE469F90 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoAudioOutputMode UnityEngine.Video.VideoPlayer::get_audioOutputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___trackIndex0, float ___volume1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.FrameData::get_effectiveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableExtensions::GetGraph<UnityEngine.Playables.Playable>(U)
inline PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646_gshared)(___playable0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableGraph::GetRootPlayable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_gshared)(___playable0, ___inputPort1, method);
}
// System.Type UnityEngine.Playables.Playable::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_gshared)(___playable0, ___inputIndex1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoPlayableBehaviour>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE ScriptPlayable_1_op_Explicit_mDAC11EF9C5D9D7CB18334103727C4CA9EAD461C1 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared)(___playable0, method);
}
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.VideoPlayableBehaviour::PrepareVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_PrepareVideo_m062BFC65CFB450FC6E0A056D781517095A353DB8 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_gshared)(___playable0, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_GetClips_m467A7BE887049F3CC0F411AB220F488D1230FA76 (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Timeline.TimelineClip::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TimelineClip_get_asset_m49BF68F5E0C41EBA5145FCA0C97D7146DF016120_inline (TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Timeline.TimelineClip::get_clipIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimelineClip_get_clipIn_m0ABA66BE9CAD32C80313321C963C8FA9AB5FC1EB (TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* __this, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.VideoPlayableAsset::set_clipInTime(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_clipInTime_mA4D0F3361836D69A0F2B4773C85C4269655FBF1E_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Timeline.TimelineClip::get_start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m76BB53BEBD6B700D5A4197F72779A321DE55B296_inline (TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* __this, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.VideoPlayableAsset::set_startTime(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_startTime_m44E1C63F6813350C5924C64931E278BD05C78E83_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoSchedulerPlayableBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C ScriptPlayable_1_Create_mF54D4D1D3B17C854722110A71DEB880ADCD4B4BA (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared)(___graph0, ___inputCount1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.VideoSchedulerPlayableBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_mFA1C45D2775582B8E61875B34EDB6FADBDFEE0CE (ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) ;
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
// System.Double Timeline.Samples.VideoPlayableAsset::get_clipInTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_clipInTime_m5D41F3AA6CF95B4CAEF8E384350FAE062646B7B5 (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	{
		// public double clipInTime { get; set; }
		double L_0 = __this->___U3CclipInTimeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Timeline.Samples.VideoPlayableAsset::set_clipInTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_clipInTime_mA4D0F3361836D69A0F2B4773C85C4269655FBF1E (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double clipInTime { get; set; }
		double L_0 = ___value0;
		__this->___U3CclipInTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Double Timeline.Samples.VideoPlayableAsset::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_startTime_m3258DA0022548FE6049E24BD6AFE16BD9A1D9740 (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	{
		// public double startTime { get; set; }
		double L_0 = __this->___U3CstartTimeU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Timeline.Samples.VideoPlayableAsset::set_startTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_startTime_m44E1C63F6813350C5924C64931E278BD05C78E83 (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double startTime { get; set; }
		double L_0 = ___value0;
		__this->___U3CstartTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// UnityEngine.Playables.Playable Timeline.Samples.VideoPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F VideoPlayableAsset_CreatePlayable_m554BC2597556D32666E71D88BEF4D045B19B90DC (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedReference_1_Resolve_mDB986BB697DD70B5F6754B50EF264A5E6D283E5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedReference_1_Resolve_mE370E3E0E49418F648206246038EB14869BC07B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m9EC7BE721B5CF522686E8AB23DF67C4B987864AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m46882D4CDBD35DD93CA2728E6F1C9EC15436C61A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* V_1 = NULL;
	ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Camera camera = targetCamera.Resolve(graph.GetResolver());
		ExposedReference_1_t530C035943F61951D6048CB5F2B3CD27D568B072* L_0 = (&__this->___targetCamera_10);
		RuntimeObject* L_1;
		L_1 = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47((&___graph0), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = ExposedReference_1_Resolve_mDB986BB697DD70B5F6754B50EF264A5E6D283E5E(L_0, L_1, ExposedReference_1_Resolve_mDB986BB697DD70B5F6754B50EF264A5E6D283E5E_RuntimeMethod_var);
		V_0 = L_2;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_0 = L_5;
	}

IL_0022:
	{
		// VideoPlayer player = CreateVideoPlayer(camera, audioSource.Resolve(graph.GetResolver()));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = V_0;
		ExposedReference_1_tBE61B0F25343F9D87B22972711392F7407A184A5* L_7 = (&__this->___audioSource_11);
		RuntimeObject* L_8;
		L_8 = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47((&___graph0), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = ExposedReference_1_Resolve_mE370E3E0E49418F648206246038EB14869BC07B2(L_7, L_8, ExposedReference_1_Resolve_mE370E3E0E49418F648206246038EB14869BC07B2_RuntimeMethod_var);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_10;
		L_10 = VideoPlayableAsset_CreateVideoPlayer_mAE23E92E784B34690A9DF2620617C76E03DDE5AD(__this, L_6, L_9, NULL);
		V_1 = L_10;
		// if (player == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// return Playable.Create(graph);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_13 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_14;
		L_14 = Playable_Create_m599EF0161E10B4244461F3335A6294AEBBA02123(L_13, 0, NULL);
		return L_14;
	}

IL_004d:
	{
		// ScriptPlayable<VideoPlayableBehaviour> playable =
		//     ScriptPlayable<VideoPlayableBehaviour>.Create(graph);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_15 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE L_16;
		L_16 = ScriptPlayable_1_Create_m9EC7BE721B5CF522686E8AB23DF67C4B987864AB(L_15, 0, ScriptPlayable_1_Create_m9EC7BE721B5CF522686E8AB23DF67C4B987864AB_RuntimeMethod_var);
		V_2 = L_16;
		// VideoPlayableBehaviour playableBehaviour = playable.GetBehaviour();
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_17;
		L_17 = ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B((&V_2), ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B_RuntimeMethod_var);
		// playableBehaviour.videoPlayer = player;
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_18 = L_17;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_19 = V_1;
		NullCheck(L_18);
		L_18->___videoPlayer_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___videoPlayer_0), (void*)L_19);
		// playableBehaviour.preloadTime = preloadTime;
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_20 = L_18;
		double L_21 = __this->___preloadTime_7;
		NullCheck(L_20);
		L_20->___preloadTime_1 = L_21;
		// playableBehaviour.clipInTime = clipInTime;
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_22 = L_20;
		double L_23;
		L_23 = VideoPlayableAsset_get_clipInTime_m5D41F3AA6CF95B4CAEF8E384350FAE062646B7B5_inline(__this, NULL);
		NullCheck(L_22);
		L_22->___clipInTime_2 = L_23;
		// playableBehaviour.startTime = startTime;
		double L_24;
		L_24 = VideoPlayableAsset_get_startTime_m3258DA0022548FE6049E24BD6AFE16BD9A1D9740_inline(__this, NULL);
		NullCheck(L_22);
		L_22->___startTime_3 = L_24;
		// return playable;
		ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE L_25 = V_2;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_26;
		L_26 = ScriptPlayable_1_op_Implicit_m46882D4CDBD35DD93CA2728E6F1C9EC15436C61A(L_25, ScriptPlayable_1_op_Implicit_m46882D4CDBD35DD93CA2728E6F1C9EC15436C61A_RuntimeMethod_var);
		return L_26;
	}
}
// System.Double Timeline.Samples.VideoPlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_duration_m66ABC356DB47CDB981F3EB1BF3E3F0AF95611EB5 (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoClip == null)
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___videoClip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return base.duration;
		double L_2;
		L_2 = PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE(__this, NULL);
		return L_2;
	}

IL_0015:
	{
		// return videoClip.length;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_3 = __this->___videoClip_4;
		NullCheck(L_3);
		double L_4;
		L_4 = VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D(L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Timeline.ClipCaps Timeline.Samples.VideoPlayableAsset::get_clipCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayableAsset_get_clipCaps_m3B65D01F15D3D615D2CD1771348D580350FB2C71 (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var caps = ClipCaps.Blending | ClipCaps.ClipIn | ClipCaps.SpeedMultiplier;
		V_0 = ((int32_t)28);
		// if (loop)
		bool L_0 = __this->___loop_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// caps |= ClipCaps.Looping;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1|1));
	}

IL_000f:
	{
		// return caps;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Video.VideoPlayer Timeline.Samples.VideoPlayableAsset::CreateVideoPlayer(UnityEngine.Camera,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* VideoPlayableAsset_CreateVideoPlayer_mAE23E92E784B34690A9DF2620617C76E03DDE5AD (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___targetAudioSource1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* V_0 = NULL;
	uint16_t V_1 = 0;
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* G_B4_0 = NULL;
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* G_B5_1 = NULL;
	{
		// if (videoClip == null)
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___videoClip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*)NULL;
	}

IL_0010:
	{
		// GameObject gameObject = new GameObject(videoClip.name) { hideFlags = HideFlags.HideAndDontSave };
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_2 = __this->___videoClip_4;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)61), NULL);
		// VideoPlayer videoPlayer = gameObject.AddComponent<VideoPlayer>();
		NullCheck(L_5);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6;
		L_6 = GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D(L_5, GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		V_0 = L_6;
		// videoPlayer.playOnAwake = false;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = V_0;
		NullCheck(L_7);
		VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0(L_7, (bool)0, NULL);
		// videoPlayer.source = VideoSource.VideoClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = V_0;
		NullCheck(L_8);
		VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052(L_8, 0, NULL);
		// videoPlayer.clip = videoClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_9 = V_0;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_10 = __this->___videoClip_4;
		NullCheck(L_9);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_9, L_10, NULL);
		// videoPlayer.waitForFirstFrame = false;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_11 = V_0;
		NullCheck(L_11);
		VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA(L_11, (bool)0, NULL);
		// videoPlayer.skipOnDrop = true;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = V_0;
		NullCheck(L_12);
		VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9(L_12, (bool)1, NULL);
		// videoPlayer.targetCamera = camera;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_13 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___camera0;
		NullCheck(L_13);
		VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79(L_13, L_14, NULL);
		// videoPlayer.renderMode = renderMode == RenderMode.CameraFarPlane ? VideoRenderMode.CameraFarPlane : VideoRenderMode.CameraNearPlane;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_15 = V_0;
		int32_t L_16 = __this->___renderMode_9;
		G_B3_0 = L_15;
		if (!L_16)
		{
			G_B4_0 = L_15;
			goto IL_0069;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_006a;
	}

IL_0069:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_006a:
	{
		NullCheck(G_B5_1);
		VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0(G_B5_1, G_B5_0, NULL);
		// videoPlayer.aspectRatio = aspectRatio;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_17 = V_0;
		int32_t L_18 = __this->___aspectRatio_8;
		NullCheck(L_17);
		VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE(L_17, L_18, NULL);
		// videoPlayer.isLooping = loop;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_19 = V_0;
		bool L_20 = __this->___loop_6;
		NullCheck(L_19);
		VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E(L_19, L_20, NULL);
		// videoPlayer.audioOutputMode = VideoAudioOutputMode.Direct;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_21 = V_0;
		NullCheck(L_21);
		VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574(L_21, 2, NULL);
		// if (mute)
		bool L_22 = __this->___mute_5;
		if (!L_22)
		{
			goto IL_009f;
		}
	}
	{
		// videoPlayer.audioOutputMode = VideoAudioOutputMode.None;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_23 = V_0;
		NullCheck(L_23);
		VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574(L_23, 0, NULL);
		goto IL_00ce;
	}

IL_009f:
	{
		// else if (targetAudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = ___targetAudioSource1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		// videoPlayer.audioOutputMode = VideoAudioOutputMode.AudioSource;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_26 = V_0;
		NullCheck(L_26);
		VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574(L_26, 1, NULL);
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		V_1 = (uint16_t)0;
		goto IL_00c0;
	}

IL_00b3:
	{
		// videoPlayer.SetTargetAudioSource(i, targetAudioSource);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_27 = V_0;
		uint16_t L_28 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = ___targetAudioSource1;
		NullCheck(L_27);
		VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8(L_27, L_28, L_29, NULL);
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		uint16_t L_30 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, 1)));
	}

IL_00c0:
	{
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		uint16_t L_31 = V_1;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_32 = V_0;
		NullCheck(L_32);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_33;
		L_33 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_32, NULL);
		NullCheck(L_33);
		uint16_t L_34;
		L_34 = VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B(L_33, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_34)))
		{
			goto IL_00b3;
		}
	}

IL_00ce:
	{
		// return videoPlayer;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_35 = V_0;
		return L_35;
	}
}
// System.Void Timeline.Samples.VideoPlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableAsset__ctor_m77BE2B3E23A951A2D6C49FBFCD3DA36D548C019B (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	{
		// public bool loop = true;
		__this->___loop_6 = (bool)1;
		// public double preloadTime = 0.3;
		__this->___preloadTime_7 = (0.29999999999999999);
		// public VideoAspectRatio aspectRatio = VideoAspectRatio.FitHorizontally;
		__this->___aspectRatio_8 = 2;
		PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8(__this, NULL);
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
// System.Void Timeline.Samples.VideoPlayableBehaviour::PrepareVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_PrepareVideo_m062BFC65CFB450FC6E0A056D781517095A353DB8 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoPlayer == null || videoPlayer.isPrepared || preparing)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767(L_2, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		bool L_4 = __this->___preparing_4;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		// return;
		return;
	}

IL_0024:
	{
		// videoPlayer.targetCameraAlpha = 0.0f;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = __this->___videoPlayer_0;
		NullCheck(L_5);
		VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491(L_5, (0.0f), NULL);
		// videoPlayer.time = clipInTime;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___videoPlayer_0;
		double L_7 = __this->___clipInTime_2;
		NullCheck(L_6);
		VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056(L_6, L_7, NULL);
		// videoPlayer.Prepare();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = __this->___videoPlayer_0;
		NullCheck(L_8);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_8, NULL);
		// preparing = true;
		__this->___preparing_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_PrepareFrame_mEE4284857238FC8CF0977632D8A75B034131C489 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint16_t V_1 = 0;
	{
		// if (videoPlayer == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// bool shouldBePlaying = info.evaluationType == FrameData.EvaluationType.Playback;
		int32_t L_2;
		L_2 = FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842((&___info1), NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		// if (!videoPlayer.isLooping && playable.GetTime() >= videoPlayer.clip.length)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B(L_3, NULL);
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_5 = ___playable0;
		double L_6;
		L_6 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_5, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = __this->___videoPlayer_0;
		NullCheck(L_7);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_8;
		L_8 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_7, NULL);
		NullCheck(L_8);
		double L_9;
		L_9 = VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D(L_8, NULL);
		if ((!(((double)L_6) >= ((double)L_9))))
		{
			goto IL_0041;
		}
	}
	{
		// shouldBePlaying = false;
		V_0 = (bool)0;
	}

IL_0041:
	{
		// if (shouldBePlaying)
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// videoPlayer.timeReference = VideoTimeReference.ExternalTime;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_11 = __this->___videoPlayer_0;
		NullCheck(L_11);
		VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623(L_11, 2, NULL);
		// if (!videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = __this->___videoPlayer_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_12, NULL);
		if (L_13)
		{
			goto IL_0068;
		}
	}
	{
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_14 = __this->___videoPlayer_0;
		NullCheck(L_14);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_14, NULL);
	}

IL_0068:
	{
		// videoPlayer.externalReferenceTime = playable.GetTime() / videoPlayer.playbackSpeed;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_15 = __this->___videoPlayer_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_16 = ___playable0;
		double L_17;
		L_17 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_16, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_18 = __this->___videoPlayer_0;
		NullCheck(L_18);
		float L_19;
		L_19 = VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB(L_18, NULL);
		NullCheck(L_15);
		VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2(L_15, ((double)(L_17/((double)L_19))), NULL);
		goto IL_00b3;
	}

IL_0088:
	{
		// videoPlayer.timeReference = VideoTimeReference.Freerun;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_20 = __this->___videoPlayer_0;
		NullCheck(L_20);
		VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623(L_20, 0, NULL);
		// if (!videoPlayer.isPaused)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_21 = __this->___videoPlayer_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426(L_21, NULL);
		if (L_22)
		{
			goto IL_00ac;
		}
	}
	{
		// videoPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_23 = __this->___videoPlayer_0;
		NullCheck(L_23);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_23, NULL);
	}

IL_00ac:
	{
		// SyncVideoToPlayable(playable);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_24 = ___playable0;
		VideoPlayableBehaviour_SyncVideoToPlayable_m12F6982687C2EE396EFA5BA8C459134AD65CC139(__this, L_24, NULL);
	}

IL_00b3:
	{
		// videoPlayer.targetCameraAlpha = info.effectiveWeight;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_25 = __this->___videoPlayer_0;
		float L_26;
		L_26 = FrameData_get_effectiveWeight_m16B485F641D81D986D1E798BCD00AB04DE469F90((&___info1), NULL);
		NullCheck(L_25);
		VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491(L_25, L_26, NULL);
		// if (videoPlayer.audioOutputMode == VideoAudioOutputMode.Direct)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_27 = __this->___videoPlayer_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E(L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0102;
		}
	}
	{
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		V_1 = (uint16_t)0;
		goto IL_00ef;
	}

IL_00d7:
	{
		// videoPlayer.SetDirectAudioVolume(i, info.effectiveWeight);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_29 = __this->___videoPlayer_0;
		uint16_t L_30 = V_1;
		float L_31;
		L_31 = FrameData_get_effectiveWeight_m16B485F641D81D986D1E798BCD00AB04DE469F90((&___info1), NULL);
		NullCheck(L_29);
		VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8(L_29, L_30, L_31, NULL);
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		uint16_t L_32 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, 1)));
	}

IL_00ef:
	{
		// for (ushort i = 0; i < videoPlayer.clip.audioTrackCount; ++i)
		uint16_t L_33 = V_1;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_34 = __this->___videoPlayer_0;
		NullCheck(L_34);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_35;
		L_35 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_34, NULL);
		NullCheck(L_35);
		uint16_t L_36;
		L_36 = VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B(L_35, NULL);
		if ((((int32_t)L_33) < ((int32_t)L_36)))
		{
			goto IL_00d7;
		}
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_OnBehaviourPlay_m17EE5F4DD58070A6727647D78B6E1954B25A3AE1 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoPlayer == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// SyncVideoToPlayable(playable);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = ___playable0;
		VideoPlayableBehaviour_SyncVideoToPlayable_m12F6982687C2EE396EFA5BA8C459134AD65CC139(__this, L_2, NULL);
		// videoPlayer.playbackSpeed = Mathf.Clamp(info.effectiveSpeed, 1 / 10f, 10f);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_0;
		float L_4;
		L_4 = FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9((&___info1), NULL);
		float L_5;
		L_5 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, (0.100000001f), (10.0f), NULL);
		NullCheck(L_3);
		VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD(L_3, L_5, NULL);
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___videoPlayer_0;
		NullCheck(L_6);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_6, NULL);
		// preparing = false;
		__this->___preparing_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_OnBehaviourPause_m4EC64CD22EF490399DB9D80EFFEFAADF069E137B (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoPlayer == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// preparing = false;
		__this->___preparing_4 = (bool)0;
		// if (info.effectiveWeight <= 0)
		float L_2;
		L_2 = FrameData_get_effectiveWeight_m16B485F641D81D986D1E798BCD00AB04DE469F90((&___info1), NULL);
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// videoPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_0;
		NullCheck(L_3);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_3, NULL);
		return;
	}

IL_0030:
	{
		// videoPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = __this->___videoPlayer_0;
		NullCheck(L_4);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_4, NULL);
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_OnPlayableDestroy_mFE7506B0AB93450C0DCF0643BC11D14D9D5088A3 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoPlayer != null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// videoPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_0;
		NullCheck(L_2);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_2, NULL);
		// if (Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Object.Destroy(videoPlayer.gameObject);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = __this->___videoPlayer_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		return;
	}

IL_0031:
	{
		// Object.DestroyImmediate(videoPlayer.gameObject);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___videoPlayer_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_7, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::SyncVideoToPlayable(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour_SyncVideoToPlayable_m12F6982687C2EE396EFA5BA8C459134AD65CC139 (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoPlayer == null || videoPlayer.clip == null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_0;
		NullCheck(L_2);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_3;
		L_3 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// if (videoPlayer.isLooping)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = __this->___videoPlayer_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B(L_5, NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		// videoPlayer.time = playable.GetTime() % videoPlayer.clip.length;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = __this->___videoPlayer_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_8 = ___playable0;
		double L_9;
		L_9 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_8, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_10 = __this->___videoPlayer_0;
		NullCheck(L_10);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_11;
		L_11 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_10, NULL);
		NullCheck(L_11);
		double L_12;
		L_12 = VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D(L_11, NULL);
		NullCheck(L_7);
		VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056(L_7, (fmod(L_9, L_12)), NULL);
		return;
	}

IL_0052:
	{
		// videoPlayer.time = System.Math.Min(playable.GetTime(), videoPlayer.clip.length);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_13 = __this->___videoPlayer_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_14 = ___playable0;
		double L_15;
		L_15 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_14, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_16 = __this->___videoPlayer_0;
		NullCheck(L_16);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_17;
		L_17 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_16, NULL);
		NullCheck(L_17);
		double L_18;
		L_18 = VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_15, L_18, NULL);
		NullCheck(L_13);
		VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056(L_13, L_19, NULL);
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoPlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayableBehaviour__ctor_m3405A7E76A4C6450406B4D59A988C5B18068418E (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* __this, const RuntimeMethod* method) 
{
	{
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
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
// System.Void Timeline.Samples.VideoSchedulerPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSchedulerPlayableBehaviour_PrepareFrame_mD8AB1E0CE5E4A2C74331545F03BE63D2B153DC90 (VideoSchedulerPlayableBehaviour_tEE04B51172A7D3800359D3D10480F5A9417EDAD6* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Explicit_mDAC11EF9C5D9D7CB18334103727C4CA9EAD461C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_3;
	memset((&V_3), 0, sizeof(V_3));
	ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE V_4;
	memset((&V_4), 0, sizeof(V_4));
	VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* V_5 = NULL;
	double V_6 = 0.0;
	double V_7 = 0.0;
	{
		// var timelineTime = playable.GetGraph().GetRootPlayable(0).GetTime();
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ___playable0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1;
		L_1 = PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646(L_0, PlayableExtensions_GetGraph_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m17AC47D03FFA1D7E3A50E7D2E47FE00B93BEC646_RuntimeMethod_var);
		V_1 = L_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2;
		L_2 = PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C((&V_1), 0, NULL);
		double L_3;
		L_3 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_2, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < playable.GetInputCount(); i++)
		V_2 = 0;
		goto IL_0096;
	}

IL_0019:
	{
		// if (playable.GetInput(i).GetPlayableType() != typeof(VideoPlayableBehaviour))
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_4 = ___playable0;
		int32_t L_5 = V_2;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6;
		L_6 = PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F(L_4, L_5, PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		V_3 = L_6;
		Type_t* L_7;
		L_7 = Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43((&V_3), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0092;
		}
	}
	{
		// if (playable.GetInputWeight(i) <= 0.0f)
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_11 = ___playable0;
		int32_t L_12 = V_2;
		float L_13;
		L_13 = PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B(L_11, L_12, PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// ScriptPlayable<VideoPlayableBehaviour> scriptPlayable = (ScriptPlayable<VideoPlayableBehaviour>)playable.GetInput(i);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_14 = ___playable0;
		int32_t L_15 = V_2;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_16;
		L_16 = PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F(L_14, L_15, PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t082988EC831EFDC6C79127298E27F2056CA0F9CE L_17;
		L_17 = ScriptPlayable_1_op_Explicit_mDAC11EF9C5D9D7CB18334103727C4CA9EAD461C1(L_16, ScriptPlayable_1_op_Explicit_mDAC11EF9C5D9D7CB18334103727C4CA9EAD461C1_RuntimeMethod_var);
		V_4 = L_17;
		// VideoPlayableBehaviour videoPlayableBehaviour = scriptPlayable.GetBehaviour();
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_18;
		L_18 = ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B((&V_4), ScriptPlayable_1_GetBehaviour_m9AF856AD0C4B6861EBDB767AB7142BF4A843CF0B_RuntimeMethod_var);
		V_5 = L_18;
		// double preloadTime = Math.Max(0.0, videoPlayableBehaviour.preloadTime);
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_19 = V_5;
		NullCheck(L_19);
		double L_20 = L_19->___preloadTime_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), L_20, NULL);
		V_6 = L_21;
		// double clipStart = videoPlayableBehaviour.startTime;
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_22 = V_5;
		NullCheck(L_22);
		double L_23 = L_22->___startTime_3;
		V_7 = L_23;
		// if (timelineTime > clipStart - preloadTime && timelineTime <= clipStart)
		double L_24 = V_0;
		double L_25 = V_7;
		double L_26 = V_6;
		if ((!(((double)L_24) > ((double)((double)il2cpp_codegen_subtract(L_25, L_26))))))
		{
			goto IL_0092;
		}
	}
	{
		double L_27 = V_0;
		double L_28 = V_7;
		if ((!(((double)L_27) <= ((double)L_28))))
		{
			goto IL_0092;
		}
	}
	{
		// videoPlayableBehaviour.PrepareVideo();
		VideoPlayableBehaviour_t25404AF236E7E4F182E1B6A5E0A493F76CEF19D2* L_29 = V_5;
		NullCheck(L_29);
		VideoPlayableBehaviour_PrepareVideo_m062BFC65CFB450FC6E0A056D781517095A353DB8(L_29, NULL);
	}

IL_0092:
	{
		// for (int i = 0; i < playable.GetInputCount(); i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0096:
	{
		// for (int i = 0; i < playable.GetInputCount(); i++)
		int32_t L_31 = V_2;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_32 = ___playable0;
		int32_t L_33;
		L_33 = PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9(L_32, PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Timeline.Samples.VideoSchedulerPlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSchedulerPlayableBehaviour__ctor_mFC1CA94FECAD4274D43EAB35061D00123F3DEBAD (VideoSchedulerPlayableBehaviour_tEE04B51172A7D3800359D3D10480F5A9417EDAD6* __this, const RuntimeMethod* method) 
{
	{
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
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
// UnityEngine.Playables.Playable Timeline.Samples.VideoTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F VideoTrack_CreateTrackMixer_m37610BF7433AE7C8A21E5B28448C41FFAE5C9367 (VideoTrack_t278BEFA50341F428534B3FED975C6455A72501F3* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t490607189D1B563A94211CFFE6E7D990C94D3F26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9204CA80C36382EFB2750319BA6794C7D011EDE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_mF54D4D1D3B17C854722110A71DEB880ADCD4B4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_mFA1C45D2775582B8E61875B34EDB6FADBDFEE0CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* V_1 = NULL;
	VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* V_2 = NULL;
	{
		// foreach (var clip in GetClips())
		RuntimeObject* L_0;
		L_0 = TrackAsset_GetClips_m467A7BE887049F3CC0F411AB220F488D1230FA76(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>::GetEnumerator() */, IEnumerable_1_t490607189D1B563A94211CFFE6E7D990C94D3F26_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (var clip in GetClips())
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* L_5;
				L_5 = InterfaceFuncInvoker0< TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TimelineClip>::get_Current() */, IEnumerator_1_t9204CA80C36382EFB2750319BA6794C7D011EDE6_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// var asset = clip.asset as VideoPlayableAsset;
				TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* L_6 = V_1;
				NullCheck(L_6);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7;
				L_7 = TimelineClip_get_asset_m49BF68F5E0C41EBA5145FCA0C97D7146DF016120_inline(L_6, NULL);
				V_2 = ((VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD*)IsInstClass((RuntimeObject*)L_7, VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD_il2cpp_TypeInfo_var));
				// if (asset != null)
				VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* L_8 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_0042_1;
				}
			}
			{
				// asset.clipInTime = clip.clipIn;
				VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* L_10 = V_2;
				TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* L_11 = V_1;
				NullCheck(L_11);
				double L_12;
				L_12 = TimelineClip_get_clipIn_m0ABA66BE9CAD32C80313321C963C8FA9AB5FC1EB(L_11, NULL);
				NullCheck(L_10);
				VideoPlayableAsset_set_clipInTime_mA4D0F3361836D69A0F2B4773C85C4269655FBF1E_inline(L_10, L_12, NULL);
				// asset.startTime = clip.start;
				VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* L_13 = V_2;
				TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* L_14 = V_1;
				NullCheck(L_14);
				double L_15;
				L_15 = TimelineClip_get_start_m76BB53BEBD6B700D5A4197F72779A321DE55B296_inline(L_14, NULL);
				NullCheck(L_13);
				VideoPlayableAsset_set_startTime_m44E1C63F6813350C5924C64931E278BD05C78E83_inline(L_13, L_15, NULL);
			}

IL_0042_1:
			{
				// foreach (var clip in GetClips())
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// return ScriptPlayable<VideoSchedulerPlayableBehaviour>.Create(graph, inputCount);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_18 = ___graph0;
		int32_t L_19 = ___inputCount2;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tA6BF581239D059869D80D6D521543C3B9A1AB98C L_20;
		L_20 = ScriptPlayable_1_Create_mF54D4D1D3B17C854722110A71DEB880ADCD4B4BA(L_18, L_19, ScriptPlayable_1_Create_mF54D4D1D3B17C854722110A71DEB880ADCD4B4BA_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_21;
		L_21 = ScriptPlayable_1_op_Implicit_mFA1C45D2775582B8E61875B34EDB6FADBDFEE0CE(L_20, ScriptPlayable_1_op_Implicit_mFA1C45D2775582B8E61875B34EDB6FADBDFEE0CE_RuntimeMethod_var);
		return L_21;
	}
}
// System.Void Timeline.Samples.VideoTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrack__ctor_m873AB53E2BB5FB60ADE858412C249C47B0ECB724 (VideoTrack_t278BEFA50341F428534B3FED975C6455A72501F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var);
		TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_clipInTime_m5D41F3AA6CF95B4CAEF8E384350FAE062646B7B5_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	{
		// public double clipInTime { get; set; }
		double L_0 = __this->___U3CclipInTimeU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoPlayableAsset_get_startTime_m3258DA0022548FE6049E24BD6AFE16BD9A1D9740_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, const RuntimeMethod* method) 
{
	{
		// public double startTime { get; set; }
		double L_0 = __this->___U3CstartTimeU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TimelineClip_get_asset_m49BF68F5E0C41EBA5145FCA0C97D7146DF016120_inline (TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Asset; }
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_Asset_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_clipInTime_mA4D0F3361836D69A0F2B4773C85C4269655FBF1E_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double clipInTime { get; set; }
		double L_0 = ___value0;
		__this->___U3CclipInTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m76BB53BEBD6B700D5A4197F72779A321DE55B296_inline (TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Start; }
		double L_0 = __this->___m_Start_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoPlayableAsset_set_startTime_m44E1C63F6813350C5924C64931E278BD05C78E83_inline (VideoPlayableAsset_tF59D2288FB1EF00589017F59D3E17E0E59FB1FBD* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double startTime { get; set; }
		double L_0 = ___value0;
		__this->___U3CstartTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
