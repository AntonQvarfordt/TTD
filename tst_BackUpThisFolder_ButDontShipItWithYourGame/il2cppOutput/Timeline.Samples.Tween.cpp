#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tB645F646DB079054A9500B09427CB02A88372D3F;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCF360FA8155395D7F2E3092E355BE18C4A37F7E0;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_t8B327FA25AB9C1D8C585388D91DC4C08DD123020;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_tB7A05EB96DC9D20D8FE2EB89ECD2F7575BEA72BA;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
// System.String
struct String_t;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Timeline.Samples.TweenBehaviour
struct TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B;
// Timeline.Samples.TweenClip
struct TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4;
// Timeline.Samples.TweenMixerBehaviour
struct TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED;
// Timeline.Samples.TweenTrack
struct TweenTrack_tC17054F055B4C3716D7487881BA496502EAB7311;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37;
IL2CPP_EXTERN_C String_t* _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8;
IL2CPP_EXTERN_C String_t* _stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m5ED68DD6491991A2B70C5C2EB0D3EEF958EB3CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mBEC9C2208450C7943195FFD991886A609ED8E408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m2D3F7A1FE8185E44162EEF9BFF5342B5EF940B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m699E87FBCDD0B7332A656A3C01901989D6E6105F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m8A64BE4B8CBBC5C91578E9E9EF91B6D000D42786_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA03982D3011196582D30A83FA1D5ACE6174A42BC 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Timeline.Samples.TweenBehaviour
struct TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// UnityEngine.Transform Timeline.Samples.TweenBehaviour::startLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startLocation_0;
	// UnityEngine.Transform Timeline.Samples.TweenBehaviour::endLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endLocation_1;
	// System.Boolean Timeline.Samples.TweenBehaviour::shouldTweenPosition
	bool ___shouldTweenPosition_2;
	// System.Boolean Timeline.Samples.TweenBehaviour::shouldTweenRotation
	bool ___shouldTweenRotation_3;
	// UnityEngine.AnimationCurve Timeline.Samples.TweenBehaviour::curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve_4;
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

// UnityEngine.ExposedReference`1<System.Object>
struct ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// UnityEngine.ExposedReference`1<UnityEngine.Transform>
struct ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Timeline.Samples.QuaternionUtils
struct QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC  : public RuntimeObject
{
};

struct QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_StaticFields
{
	// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::zero
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___zero_1;
};

// Timeline.Samples.TweenMixerBehaviour
struct TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// System.Boolean Timeline.Samples.TweenMixerBehaviour::m_ShouldInitializeTransform
	bool ___m_ShouldInitializeTransform_1;
	// UnityEngine.Vector3 Timeline.Samples.TweenMixerBehaviour::m_InitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialPosition_2;
	// UnityEngine.Quaternion Timeline.Samples.TweenMixerBehaviour::m_InitialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InitialRotation_3;
};

struct TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_StaticFields
{
	// UnityEngine.AnimationCurve Timeline.Samples.TweenMixerBehaviour::s_DefaultCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___s_DefaultCurve_0;
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

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenBehaviour>
struct ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 ___m_NullPlayable_1;
};

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenMixerBehaviour>
struct ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 ___m_NullPlayable_1;
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___stopped_6;
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

// Timeline.Samples.TweenClip
struct TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	// UnityEngine.ExposedReference`1<UnityEngine.Transform> Timeline.Samples.TweenClip::startLocation
	ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3 ___startLocation_4;
	// UnityEngine.ExposedReference`1<UnityEngine.Transform> Timeline.Samples.TweenClip::endLocation
	ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3 ___endLocation_5;
	// System.Boolean Timeline.Samples.TweenClip::shouldTweenPosition
	bool ___shouldTweenPosition_6;
	// System.Boolean Timeline.Samples.TweenClip::shouldTweenRotation
	bool ___shouldTweenRotation_7;
	// UnityEngine.AnimationCurve Timeline.Samples.TweenClip::curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve_8;
};

// Timeline.Samples.TweenTrack
struct TweenTrack_tC17054F055B4C3716D7487881BA496502EAB7311  : public TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000* __this, const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared (ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___playable0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisIl2CppFullySharedGenericStruct_m7B5D7CD51C9A66553652AEBF07CDD8DB720544B8_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___playable0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisIl2CppFullySharedGenericStruct_m3CEADC01648FA107BF11ED2222F1876A1D2232EB_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisIl2CppFullySharedGenericStruct_mEA947CB32C0CDB278E24F452E996C7B17D393C13_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___playable0, int32_t ___inputPort1, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisIl2CppFullySharedGenericStruct_mD05F03E51AF27B85B505F92163FF5333881D4D67_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___playable0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisIl2CppFullySharedGenericStruct_m0CF211CF24480025701D6720DF74CF4E0C0A617C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___playable0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 ScriptPlayable_1_Create_m5ED68DD6491991A2B70C5C2EB0D3EEF958EB3CF0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared)(___graph0, ___inputCount1, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenBehaviour>::GetBehaviour()
inline TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956 (ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618* __this, const RuntimeMethod* method)
{
	return ((  TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* (*) (ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared)(__this, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<UnityEngine.Transform>::Resolve(UnityEngine.IExposedPropertyTable)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695 (ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3*, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared)(__this, ___resolver0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m8A64BE4B8CBBC5C91578E9E9EF91B6D000D42786 (ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.TweenMixerBehaviour::InitializeIfNecessary(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenMixerBehaviour_InitializeIfNecessary_m052C9272DDC81846FBAA36326C7ABA6708FFBCD2 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))PlayableExtensions_GetInputCount_TisIl2CppFullySharedGenericStruct_m7B5D7CD51C9A66553652AEBF07CDD8DB720544B8_gshared)((Il2CppFullySharedGenericStruct)&___playable0, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisIl2CppFullySharedGenericStruct_m3CEADC01648FA107BF11ED2222F1876A1D2232EB_gshared)((Il2CppFullySharedGenericStruct)&___playable0, ___inputIndex1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisIl2CppFullySharedGenericStruct_mEA947CB32C0CDB278E24F452E996C7B17D393C13_gshared)((Il2CppFullySharedGenericStruct)&___playable0, ___inputPort1, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
inline double PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))PlayableExtensions_GetTime_TisIl2CppFullySharedGenericStruct_mD05F03E51AF27B85B505F92163FF5333881D4D67_gshared)((Il2CppFullySharedGenericStruct)&___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(U)
inline double PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))PlayableExtensions_GetDuration_TisIl2CppFullySharedGenericStruct_m0CF211CF24480025701D6720DF74CF4E0C0A617C_gshared)((Il2CppFullySharedGenericStruct)&___playable0, method);
}
// Timeline.Samples.TweenBehaviour Timeline.Samples.TweenMixerBehaviour::GetTweenBehaviour(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* TweenMixerBehaviour_GetTweenBehaviour_mB998CD674CCEB07B4EEAAF6944F8B3D7661D96C2 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve Timeline.Samples.TweenMixerBehaviour::GetCurve(Timeline.Samples.TweenBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenMixerBehaviour_GetCurve_m6289A7B17C9AE6762D1A8120C0110BBA20342293 (TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tween0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Timeline.Samples.TweenMixerBehaviour::TweenPosition(Timeline.Samples.TweenBehaviour,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TweenMixerBehaviour_TweenPosition_m20CFC535A92300531C2229F73699BCD6FF784E3D (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tweenInput0, float ___progress1, float ___weight2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Timeline.Samples.TweenMixerBehaviour::TweenRotation(Timeline.Samples.TweenBehaviour,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenMixerBehaviour_TweenRotation_m54641E5D1173E16FCC0E58BEC3F40BB9B655FCD2 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tweenInput0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___accumRotation1, float ___progress2, float ___weight3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Blend(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Blend_mD4FD36C8D290B26687DFED50C1CD0611CDC4183B (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q10, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q21, float ___weight2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::NormalizeSafe(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_NormalizeSafe_m62A116D2B564022E504E2273DEBFBFE59CB4DE26 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenBehaviour>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 ScriptPlayable_1_op_Explicit_m2D3F7A1FE8185E44162EEF9BFF5342B5EF940B38 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared)(___playable0, method);
}
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_Linear_m9C6C4ECB6BF4F0515EBD4EFDA97CF623B92B1362 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenMixerBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 ScriptPlayable_1_Create_mBEC9C2208450C7943195FFD991886A609ED8E408 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared)(___graph0, ___inputCount1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TweenMixerBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m699E87FBCDD0B7332A656A3C01901989D6E6105F (ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void Timeline.Samples.TweenBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenBehaviour__ctor_m80A4CE3B103EC8A69B847A65586906657FD37184 (TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* __this, const RuntimeMethod* method) 
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
// UnityEngine.Timeline.ClipCaps Timeline.Samples.TweenClip::get_clipCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenClip_get_clipCaps_m23E8F60BA7C57A3DD8C85251109A64649C6A26F7 (TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4* __this, const RuntimeMethod* method) 
{
	{
		// get { return ClipCaps.Blending; }
		return (int32_t)(((int32_t)16));
	}
}
// UnityEngine.Playables.Playable Timeline.Samples.TweenClip::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TweenClip_CreatePlayable_mE3F6698D7084293D6B2DC9A7006D7F05C3D0EB47 (TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___owner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m5ED68DD6491991A2B70C5C2EB0D3EEF958EB3CF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m8A64BE4B8CBBC5C91578E9E9EF91B6D000D42786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScriptPlayable<TweenBehaviour> playable = ScriptPlayable<TweenBehaviour>.Create(graph);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 L_1;
		L_1 = ScriptPlayable_1_Create_m5ED68DD6491991A2B70C5C2EB0D3EEF958EB3CF0(L_0, 0, ScriptPlayable_1_Create_m5ED68DD6491991A2B70C5C2EB0D3EEF958EB3CF0_RuntimeMethod_var);
		V_0 = L_1;
		// TweenBehaviour tween = playable.GetBehaviour();
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_2;
		L_2 = ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956((&V_0), ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956_RuntimeMethod_var);
		// tween.startLocation = startLocation.Resolve(graph.GetResolver());
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_3 = L_2;
		ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3* L_4 = (&__this->___startLocation_4);
		RuntimeObject* L_5;
		L_5 = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47((&___graph0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695(L_4, L_5, ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___startLocation_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___startLocation_0), (void*)L_6);
		// tween.endLocation = endLocation.Resolve(graph.GetResolver());
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_7 = L_3;
		ExposedReference_1_tFA03C932285760D652292A5C24D3A3FF53479AE3* L_8 = (&__this->___endLocation_5);
		RuntimeObject* L_9;
		L_9 = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47((&___graph0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695(L_8, L_9, ExposedReference_1_Resolve_m79E00C3F8BE5011461754726FC7625CA78BF6695_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___endLocation_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___endLocation_1), (void*)L_10);
		// tween.curve = curve;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_11 = L_7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___curve_8;
		NullCheck(L_11);
		L_11->___curve_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___curve_4), (void*)L_12);
		// tween.shouldTweenPosition = shouldTweenPosition;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_13 = L_11;
		bool L_14 = __this->___shouldTweenPosition_6;
		NullCheck(L_13);
		L_13->___shouldTweenPosition_2 = L_14;
		// tween.shouldTweenRotation = shouldTweenRotation;
		bool L_15 = __this->___shouldTweenRotation_7;
		NullCheck(L_13);
		L_13->___shouldTweenRotation_3 = L_15;
		// return playable;
		ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 L_16 = V_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_17;
		L_17 = ScriptPlayable_1_op_Implicit_m8A64BE4B8CBBC5C91578E9E9EF91B6D000D42786(L_16, ScriptPlayable_1_op_Implicit_m8A64BE4B8CBBC5C91578E9E9EF91B6D000D42786_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Timeline.Samples.TweenClip::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenClip_GatherProperties_m0F4DD69E222ABCACE18D2E6E235C4ED168F27D80 (TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4* __this, PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// driver.AddFromName<Transform>(kLocalPosition + ".x");
		RuntimeObject* L_0 = ___driver1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_0, _stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE);
		// driver.AddFromName<Transform>(kLocalPosition + ".y");
		RuntimeObject* L_1 = ___driver1;
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_1, _stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37);
		// driver.AddFromName<Transform>(kLocalPosition + ".z");
		RuntimeObject* L_2 = ___driver1;
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_2, _stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8);
		// driver.AddFromName<Transform>(kLocalRotation + ".x");
		RuntimeObject* L_3 = ___driver1;
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_3, _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		// driver.AddFromName<Transform>(kLocalRotation + ".y");
		RuntimeObject* L_4 = ___driver1;
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_4, _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		// driver.AddFromName<Transform>(kLocalRotation + ".z");
		RuntimeObject* L_5 = ___driver1;
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_5, _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		// driver.AddFromName<Transform>(kLocalRotation + ".w");
		RuntimeObject* L_6 = ___driver1;
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB85549C2F4B3A68503F1779F5AD6E6AE1D89D80B_RuntimeMethod_var, L_6, _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TweenClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenClip__ctor_m196D18C6929F816EC1A4699D6162B3AFAEB8D600 (TweenClip_t4641368AF2814D8C149E086D052E2BFF9AC03ED4* __this, const RuntimeMethod* method) 
{
	{
		// public bool shouldTweenPosition = true;
		__this->___shouldTweenPosition_6 = (bool)1;
		// public bool shouldTweenRotation = true;
		__this->___shouldTweenRotation_7 = (bool)1;
		// public AnimationCurve curve = AnimationCurve.EaseInOut(0.0f, 0.0f, 1.0f, 1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___curve_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curve_8), (void*)L_0);
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
// System.Void Timeline.Samples.TweenMixerBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenMixerBehaviour_ProcessFrame_m0CCF514FE2CAF9C1FC333D6BA22C3F39B344C588 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, RuntimeObject* ___playerData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* V_10 = NULL;
	float V_11 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// Transform trackBinding = playerData as Transform;
		RuntimeObject* L_0 = ___playerData2;
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)IsInstClass((RuntimeObject*)L_0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		// if (trackBinding == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
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
		// InitializeIfNecessary(trackBinding);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		TweenMixerBehaviour_InitializeIfNecessary_m052C9272DDC81846FBAA36326C7ABA6708FFBCD2(__this, L_3, NULL);
		// Vector3 accumPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_1 = L_4;
		// Quaternion accumRotation = QuaternionUtils.zero;
		il2cpp_codegen_runtime_class_init_inline(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ((QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var))->___zero_1;
		V_2 = L_5;
		// float totalPositionWeight = 0.0f;
		V_3 = (0.0f);
		// float totalRotationWeight = 0.0f;
		V_4 = (0.0f);
		// int inputCount = playable.GetInputCount();
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6 = ___playable0;
		int32_t L_7;
		L_7 = PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9(L_6, PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		V_5 = L_7;
		// for (int i = 0; i < inputCount; i++)
		V_6 = 0;
		goto IL_00ce;
	}

IL_0041:
	{
		// float inputWeight = playable.GetInputWeight(i);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_8 = ___playable0;
		int32_t L_9 = V_6;
		float L_10;
		L_10 = PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B(L_8, L_9, PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		V_7 = L_10;
		// if (inputWeight <= 0)
		float L_11 = V_7;
		if ((((float)L_11) <= ((float)(0.0f))))
		{
			goto IL_00c8;
		}
	}
	{
		// Playable input = playable.GetInput(i);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_12 = ___playable0;
		int32_t L_13 = V_6;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_14;
		L_14 = PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F(L_12, L_13, PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		V_8 = L_14;
		// float normalizedInputTime = (float)(input.GetTime() / input.GetDuration());
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_15 = V_8;
		double L_16;
		L_16 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_15, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_17 = V_8;
		double L_18;
		L_18 = PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B(L_17, PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var);
		V_9 = ((float)((double)(L_16/L_18)));
		// TweenBehaviour tweenInput = GetTweenBehaviour(input);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_19 = V_8;
		il2cpp_codegen_runtime_class_init_inline(TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var);
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_20;
		L_20 = TweenMixerBehaviour_GetTweenBehaviour_mB998CD674CCEB07B4EEAAF6944F8B3D7661D96C2(L_19, NULL);
		V_10 = L_20;
		// float tweenProgress = GetCurve(tweenInput).Evaluate(normalizedInputTime);
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_21 = V_10;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22;
		L_22 = TweenMixerBehaviour_GetCurve_m6289A7B17C9AE6762D1A8120C0110BBA20342293(L_21, NULL);
		float L_23 = V_9;
		NullCheck(L_22);
		float L_24;
		L_24 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_22, L_23, NULL);
		V_11 = L_24;
		// if (tweenInput.shouldTweenPosition)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_25 = V_10;
		NullCheck(L_25);
		bool L_26 = L_25->___shouldTweenPosition_2;
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		// totalPositionWeight += inputWeight;
		float L_27 = V_3;
		float L_28 = V_7;
		V_3 = ((float)il2cpp_codegen_add(L_27, L_28));
		// accumPosition += TweenPosition(tweenInput, tweenProgress, inputWeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_30 = V_10;
		float L_31 = V_11;
		float L_32 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = TweenMixerBehaviour_TweenPosition_m20CFC535A92300531C2229F73699BCD6FF784E3D(__this, L_30, L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_33, NULL);
		V_1 = L_34;
	}

IL_00aa:
	{
		// if (tweenInput.shouldTweenRotation)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_35 = V_10;
		NullCheck(L_35);
		bool L_36 = L_35->___shouldTweenRotation_3;
		if (!L_36)
		{
			goto IL_00c8;
		}
	}
	{
		// totalRotationWeight += inputWeight;
		float L_37 = V_4;
		float L_38 = V_7;
		V_4 = ((float)il2cpp_codegen_add(L_37, L_38));
		// accumRotation = TweenRotation(tweenInput, accumRotation, tweenProgress, inputWeight);
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_39 = V_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = V_2;
		float L_41 = V_11;
		float L_42 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = TweenMixerBehaviour_TweenRotation_m54641E5D1173E16FCC0E58BEC3F40BB9B655FCD2(__this, L_39, L_40, L_41, L_42, NULL);
		V_2 = L_43;
	}

IL_00c8:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ce:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_45 = V_6;
		int32_t L_46 = V_5;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0041;
		}
	}
	{
		// trackBinding.position = accumPosition + m_InitialPosition * (1.0f - totalPositionWeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___m_InitialPosition_2;
		float L_50 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_49, ((float)il2cpp_codegen_subtract((1.0f), L_50)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_48, L_51, NULL);
		NullCheck(L_47);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_52, NULL);
		// trackBinding.rotation = accumRotation.Blend(m_InitialRotation, 1.0f - totalRotationWeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = __this->___m_InitialRotation_3;
		float L_56 = V_4;
		il2cpp_codegen_runtime_class_init_inline(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = QuaternionUtils_Blend_mD4FD36C8D290B26687DFED50C1CD0611CDC4183B(L_54, L_55, ((float)il2cpp_codegen_subtract((1.0f), L_56)), NULL);
		NullCheck(L_53);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_53, L_57, NULL);
		// trackBinding.rotation.Normalize();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = V_0;
		NullCheck(L_58);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_58, NULL);
		V_12 = L_59;
		Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline((&V_12), NULL);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TweenMixerBehaviour::InitializeIfNecessary(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenMixerBehaviour_InitializeIfNecessary_m052C9272DDC81846FBAA36326C7ABA6708FFBCD2 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	{
		// if (m_ShouldInitializeTransform)
		bool L_0 = __this->___m_ShouldInitializeTransform_1;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// m_InitialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___m_InitialPosition_2 = L_2;
		// m_InitialRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		__this->___m_InitialRotation_3 = L_4;
		// m_ShouldInitializeTransform = false;
		__this->___m_ShouldInitializeTransform_1 = (bool)0;
	}

IL_0027:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Timeline.Samples.TweenMixerBehaviour::TweenPosition(Timeline.Samples.TweenBehaviour,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TweenMixerBehaviour_TweenPosition_m20CFC535A92300531C2229F73699BCD6FF784E3D (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tweenInput0, float ___progress1, float ___weight2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 startPosition = m_InitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_InitialPosition_2;
		V_0 = L_0;
		// if (tweenInput.startLocation != null)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_1 = ___tweenInput0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1->___startLocation_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// startPosition = tweenInput.startLocation.position;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_4 = ___tweenInput0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___startLocation_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		// Vector3 endPosition = m_InitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___m_InitialPosition_2;
		V_1 = L_7;
		// if (tweenInput.endLocation != null)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_8 = ___tweenInput0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___endLocation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// endPosition = tweenInput.endLocation.position;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_11 = ___tweenInput0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___endLocation_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_1 = L_13;
	}

IL_0042:
	{
		// return Vector3.Lerp(startPosition, endPosition, progress) * weight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = ___progress1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_14, L_15, L_16, NULL);
		float L_18 = ___weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_17, L_18, NULL);
		return L_19;
	}
}
// UnityEngine.Quaternion Timeline.Samples.TweenMixerBehaviour::TweenRotation(Timeline.Samples.TweenBehaviour,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenMixerBehaviour_TweenRotation_m54641E5D1173E16FCC0E58BEC3F40BB9B655FCD2 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tweenInput0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___accumRotation1, float ___progress2, float ___weight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Quaternion startRotation = m_InitialRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_InitialRotation_3;
		V_0 = L_0;
		// if (tweenInput.startLocation != null)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_1 = ___tweenInput0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1->___startLocation_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// startRotation = tweenInput.startLocation.rotation;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_4 = ___tweenInput0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___startLocation_0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		// Quaternion endRotation = m_InitialRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = __this->___m_InitialRotation_3;
		V_1 = L_7;
		// if (tweenInput.endLocation != null)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_8 = ___tweenInput0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___endLocation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// endRotation = tweenInput.endLocation.rotation;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_11 = ___tweenInput0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___endLocation_1;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		V_1 = L_13;
	}

IL_0042:
	{
		// Quaternion desiredRotation = Quaternion.Lerp(startRotation, endRotation, progress);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		float L_16 = ___progress2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_14, L_15, L_16, NULL);
		V_2 = L_17;
		// return accumRotation.Blend(desiredRotation.NormalizeSafe(), weight);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___accumRotation1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = QuaternionUtils_NormalizeSafe_m62A116D2B564022E504E2273DEBFBFE59CB4DE26(L_19, NULL);
		float L_21 = ___weight3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = QuaternionUtils_Blend_mD4FD36C8D290B26687DFED50C1CD0611CDC4183B(L_18, L_20, L_21, NULL);
		return L_22;
	}
}
// Timeline.Samples.TweenBehaviour Timeline.Samples.TweenMixerBehaviour::GetTweenBehaviour(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* TweenMixerBehaviour_GetTweenBehaviour_mB998CD674CCEB07B4EEAAF6944F8B3D7661D96C2 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Explicit_m2D3F7A1FE8185E44162EEF9BFF5342B5EF940B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScriptPlayable<TweenBehaviour> tweenInput = (ScriptPlayable<TweenBehaviour>)playable;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ___playable0;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tCD2A7A95857B2ED3D8CDF157AB863C19279F1618 L_1;
		L_1 = ScriptPlayable_1_op_Explicit_m2D3F7A1FE8185E44162EEF9BFF5342B5EF940B38(L_0, ScriptPlayable_1_op_Explicit_m2D3F7A1FE8185E44162EEF9BFF5342B5EF940B38_RuntimeMethod_var);
		V_0 = L_1;
		// return tweenInput.GetBehaviour();
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_2;
		L_2 = ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956((&V_0), ScriptPlayable_1_GetBehaviour_mAC09A36E0F6616129EABA817D4F34B2F9FEC1956_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.AnimationCurve Timeline.Samples.TweenMixerBehaviour::GetCurve(Timeline.Samples.TweenBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenMixerBehaviour_GetCurve_m6289A7B17C9AE6762D1A8120C0110BBA20342293 (TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* ___tween0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tween == null || tween.curve == null)
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_0 = ___tween0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_1 = ___tween0;
		NullCheck(L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = L_1->___curve_4;
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		// return s_DefaultCurve;
		il2cpp_codegen_runtime_class_init_inline(TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ((TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_StaticFields*)il2cpp_codegen_static_fields_for(TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var))->___s_DefaultCurve_0;
		return L_3;
	}

IL_0011:
	{
		// return tween.curve;
		TweenBehaviour_t62E3BB3A30D8CB1109506751090CF1939E64A98B* L_4 = ___tween0;
		NullCheck(L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = L_4->___curve_4;
		return L_5;
	}
}
// System.Void Timeline.Samples.TweenMixerBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenMixerBehaviour__ctor_mA93DF3E0EF9D51751F9F708181A13FBC7D037EC4 (TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED* __this, const RuntimeMethod* method) 
{
	{
		// bool m_ShouldInitializeTransform = true;
		__this->___m_ShouldInitializeTransform_1 = (bool)1;
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
		return;
	}
}
// System.Void Timeline.Samples.TweenMixerBehaviour::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenMixerBehaviour__cctor_m58DB0D3404A248034B866D8402F937864C937283 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static AnimationCurve s_DefaultCurve = AnimationCurve.Linear(0.0f, 0.0f, 1.0f, 1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_Linear_m9C6C4ECB6BF4F0515EBD4EFDA97CF623B92B1362((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		((TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_StaticFields*)il2cpp_codegen_static_fields_for(TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var))->___s_DefaultCurve_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_StaticFields*)il2cpp_codegen_static_fields_for(TweenMixerBehaviour_tD89C4CFA025CA152513B417BBE4261891CB128ED_il2cpp_TypeInfo_var))->___s_DefaultCurve_0), (void*)L_0);
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
// UnityEngine.Playables.Playable Timeline.Samples.TweenTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TweenTrack_CreateTrackMixer_mE37FD8376ED58CEDE03FE8CF8439D0B3979B35DC (TweenTrack_tC17054F055B4C3716D7487881BA496502EAB7311* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_mBEC9C2208450C7943195FFD991886A609ED8E408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m699E87FBCDD0B7332A656A3C01901989D6E6105F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScriptPlayable<TweenMixerBehaviour>.Create(graph, inputCount);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount2;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t869B63D9ED9145B7C50D18FBF5A01D003EA08DE3 L_2;
		L_2 = ScriptPlayable_1_Create_mBEC9C2208450C7943195FFD991886A609ED8E408(L_0, L_1, ScriptPlayable_1_Create_mBEC9C2208450C7943195FFD991886A609ED8E408_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = ScriptPlayable_1_op_Implicit_m699E87FBCDD0B7332A656A3C01901989D6E6105F(L_2, ScriptPlayable_1_op_Implicit_m699E87FBCDD0B7332A656A3C01901989D6E6105F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Timeline.Samples.TweenTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenTrack__ctor_mBF5D840733BD3445C94E0D542BF5E7CA4CE7263C (TweenTrack_tC17054F055B4C3716D7487881BA496502EAB7311* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_Normalize_m0CB5FAED5332234E3F6267F5A4C99B6A6A79CBE1_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline(L_0, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q0;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = sqrtf(L_2);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_2 = L_7;
		goto IL_004a;
	}

IL_0022:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___x_0;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___q0;
		float L_12 = L_11.___y_1;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___q0;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___q0;
		float L_18 = L_17.___w_3;
		float L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_20), ((float)(L_9/L_10)), ((float)(L_12/L_13)), ((float)(L_15/L_16)), ((float)(L_18/L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_004a;
	}

IL_004a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
