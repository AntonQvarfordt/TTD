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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tB645F646DB079054A9500B09427CB02A88372D3F;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
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
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C;
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
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_tB7A05EB96DC9D20D8FE2EB89ECD2F7575BEA72BA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Timeline.Samples.TextPlayableAsset
struct TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5;
// Timeline.Samples.TextPlayableBehaviour
struct TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF;
// Timeline.Samples.TextTrack
struct TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513;
// Timeline.Samples.TextTrackMixerBehaviour
struct TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E;
IL2CPP_EXTERN_C String_t* _stringLiteral247A552A2DA9B9582E31F2E010964110C077923B;
IL2CPP_EXTERN_C String_t* _stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m9A3FF0635277C8A7CF91E8C1D36F699E957AB7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mC8A281D89069778AE61D077408E2590129136077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_mE2A23761D86391E86D3CAD3B2DA501A03F23EEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m114DF0EDD72DDA72706CCC0736620D4487DA7496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m79453B7EBFB51DFE17F34098BB7BCFCC5C5827AF_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB929F5422740F27B477C4DB88CF7180DA27481EC 
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Timeline.Samples.TextPlayableBehaviour
struct TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// UnityEngine.Color Timeline.Samples.TextPlayableBehaviour::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Int32 Timeline.Samples.TextPlayableBehaviour::fontSize
	int32_t ___fontSize_1;
	// System.String Timeline.Samples.TextPlayableBehaviour::text
	String_t* ___text_2;
};

// Timeline.Samples.TextTrackMixerBehaviour
struct TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// UnityEngine.Color Timeline.Samples.TextTrackMixerBehaviour::m_DefaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DefaultColor_0;
	// System.Single Timeline.Samples.TextTrackMixerBehaviour::m_DefaultFontSize
	float ___m_DefaultFontSize_1;
	// System.String Timeline.Samples.TextTrackMixerBehaviour::m_DefaultText
	String_t* ___m_DefaultText_2;
	// TMPro.TMP_Text Timeline.Samples.TextTrackMixerBehaviour::m_TrackBinding
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TrackBinding_3;
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

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextPlayableBehaviour>
struct ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ___m_NullPlayable_1;
};

// UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextTrackMixerBehaviour>
struct ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ___m_NullPlayable_1;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// Timeline.Samples.TextPlayableAsset
struct TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	// Timeline.Samples.TextPlayableBehaviour Timeline.Samples.TextPlayableAsset::template
	TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ___template_4;
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

// Timeline.Samples.TextTrack
struct TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513  : public TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_mCAF6C1AE93353CC333626F054FE86F022BFCB9FA_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, RuntimeObject* ___template1, int32_t ___inputCount2, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___playable0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputPort1, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000* __this, const RuntimeMethod* method) ;

// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextPlayableBehaviour>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
inline ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ScriptPlayable_1_Create_mC8A281D89069778AE61D077408E2590129136077 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF*, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCAF6C1AE93353CC333626F054FE86F022BFCB9FA_gshared)(___graph0, ___template1, ___inputCount2, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextPlayableBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m79453B7EBFB51DFE17F34098BB7BCFCC5C5827AF (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// System.Void Timeline.Samples.TextPlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479 (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextTrackMixerBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ScriptPlayable_1_Create_m9A3FF0635277C8A7CF91E8C1D36F699E957AB7B2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mA469AA7F23C196EEFBE59D8AD1D800EE8E7B6DB1_gshared)(___graph0, ___inputCount1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextTrackMixerBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m114DF0EDD72DDA72706CCC0736620D4487DA7496 (ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetGenericBinding(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PlayableDirector_GetGenericBinding_mEA8A86CEFAD08BEC596E06C3E1B1E0095E69D020 (PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Timeline.TrackAsset::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset_GatherProperties_m09C1A335FCE1ABA158748583AF4A641FF2EBB09D (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.TextTrackMixerBehaviour::SetDefaults(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_gshared)(___playable0, method);
}
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_gshared)(___playable0, ___inputIndex1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_gshared)(___playable0, ___inputPort1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextPlayableBehaviour>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ScriptPlayable_1_op_Explicit_mE2A23761D86391E86D3CAD3B2DA501A03F23EEF1 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m338A0D445285A5BB298742C0ECEC3D707DF671F9_gshared)(___playable0, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<Timeline.Samples.TextPlayableBehaviour>::GetBehaviour()
inline TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348* __this, const RuntimeMethod* method)
{
	return ((  TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* (*) (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Timeline.Samples.TextTrackMixerBehaviour::RestoreDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// UnityEngine.Timeline.ClipCaps Timeline.Samples.TextPlayableAsset::get_clipCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextPlayableAsset_get_clipCaps_m1FDCDE5A7C4A7A5FEA95CAFA737FB66A9FF639F1 (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, const RuntimeMethod* method) 
{
	{
		// get { return ClipCaps.Blending; }
		return (int32_t)(((int32_t)16));
	}
}
// UnityEngine.Playables.Playable Timeline.Samples.TextPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TextPlayableAsset_CreatePlayable_mA7FA91555DDB697F95EB6E5D008D966EF6FCF82E (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___owner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_mC8A281D89069778AE61D077408E2590129136077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m79453B7EBFB51DFE17F34098BB7BCFCC5C5827AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScriptPlayable<TextPlayableBehaviour>.Create(graph, template);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_1 = __this->___template_4;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 L_2;
		L_2 = ScriptPlayable_1_Create_mC8A281D89069778AE61D077408E2590129136077(L_0, L_1, 0, ScriptPlayable_1_Create_mC8A281D89069778AE61D077408E2590129136077_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = ScriptPlayable_1_op_Implicit_m79453B7EBFB51DFE17F34098BB7BCFCC5C5827AF(L_2, ScriptPlayable_1_op_Implicit_m79453B7EBFB51DFE17F34098BB7BCFCC5C5827AF_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Timeline.Samples.TextPlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableAsset__ctor_m0B11B1C7A2BE93D132488BD3A681D51DC99ACBB8 (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextPlayableBehaviour template = new TextPlayableBehaviour();
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_0 = (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF*)il2cpp_codegen_object_new(TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479(L_0, NULL);
		__this->___template_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___template_4), (void*)L_0);
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
// System.Void Timeline.Samples.TextPlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479 (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___color_0 = L_0;
		// public int fontSize = 14;
		__this->___fontSize_1 = ((int32_t)14);
		// public string text = "";
		__this->___text_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// UnityEngine.Playables.Playable Timeline.Samples.TextTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TextTrack_CreateTrackMixer_m6CAF01C6FF890D88ED8ECBB8FADDBF14DEC06F31 (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m9A3FF0635277C8A7CF91E8C1D36F699E957AB7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m114DF0EDD72DDA72706CCC0736620D4487DA7496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScriptPlayable<TextTrackMixerBehaviour>.Create(graph, inputCount);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount2;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B L_2;
		L_2 = ScriptPlayable_1_Create_m9A3FF0635277C8A7CF91E8C1D36F699E957AB7B2(L_0, L_1, ScriptPlayable_1_Create_m9A3FF0635277C8A7CF91E8C1D36F699E957AB7B2_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = ScriptPlayable_1_op_Implicit_m114DF0EDD72DDA72706CCC0736620D4487DA7496(L_2, ScriptPlayable_1_op_Implicit_m114DF0EDD72DDA72706CCC0736620D4487DA7496_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Timeline.Samples.TextTrack::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrack_GatherProperties_m36C2DE7FC562DECC83C35EE952228573661CEC94 (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A552A2DA9B9582E31F2E010964110C077923B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		// TMP_Text trackBinding = director.GetGenericBinding(this) as TMP_Text;
		PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* L_0 = ___director0;
		NullCheck(L_0);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = PlayableDirector_GetGenericBinding_mEA8A86CEFAD08BEC596E06C3E1B1E0095E69D020(L_0, __this, NULL);
		V_0 = ((TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)IsInstClass((RuntimeObject*)L_1, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var));
		// if (trackBinding == null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
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
		// driver.AddFromName<TMP_Text>(trackBinding.gameObject, "m_text");
		RuntimeObject* L_4 = ___driver1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_4, L_6, _stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07);
		// driver.AddFromName<TMP_Text>(trackBinding.gameObject, "m_fontSize");
		RuntimeObject* L_7 = ___driver1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_7);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_7, L_9, _stringLiteral247A552A2DA9B9582E31F2E010964110C077923B);
		// driver.AddFromName<TMP_Text>(trackBinding.gameObject, "m_fontColor");
		RuntimeObject* L_10 = ___driver1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_10);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_10, L_12, _stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E);
		// base.GatherProperties(director, driver);
		PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* L_13 = ___director0;
		RuntimeObject* L_14 = ___driver1;
		TrackAsset_GatherProperties_m09C1A335FCE1ABA158748583AF4A641FF2EBB09D(__this, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TextTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrack__ctor_mA740D3C94175546CFFDD2A0C6723F20E7841A46E (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timeline.Samples.TextTrackMixerBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_ProcessFrame_mA241225864E82C32B4439FA6D884BEF15B2DF75D (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, RuntimeObject* ___playerData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Explicit_mE2A23761D86391E86D3CAD3B2DA501A03F23EEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* V_9 = NULL;
	{
		// SetDefaults(playerData as TMP_Text);
		RuntimeObject* L_0 = ___playerData2;
		TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88(__this, ((TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)IsInstClass((RuntimeObject*)L_0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var)), NULL);
		// if (m_TrackBinding == null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TrackBinding_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// int inputCount = playable.GetInputCount();
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3 = ___playable0;
		int32_t L_4;
		L_4 = PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9(L_3, PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m772B13877349239BF55A96EA7D68F336E9807DE9_RuntimeMethod_var);
		V_0 = L_4;
		// Color blendedColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		V_1 = L_5;
		// float blendedFontSize = 0f;
		V_2 = (0.0f);
		// float totalWeight = 0f;
		V_3 = (0.0f);
		// float greatestWeight = 0f;
		V_4 = (0.0f);
		// string text = m_DefaultText;
		String_t* L_6 = __this->___m_DefaultText_2;
		V_5 = L_6;
		// for (int i = 0; i < inputCount; i++)
		V_6 = 0;
		goto IL_00ab;
	}

IL_0048:
	{
		// float inputWeight = playable.GetInputWeight(i);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = ___playable0;
		int32_t L_8 = V_6;
		float L_9;
		L_9 = PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B(L_7, L_8, PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m4F6B7FA5420EA769FBD0AB1E4B27450FE1A3A84B_RuntimeMethod_var);
		V_7 = L_9;
		// ScriptPlayable<TextPlayableBehaviour> inputPlayable = (ScriptPlayable<TextPlayableBehaviour>)playable.GetInput(i);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = ___playable0;
		int32_t L_11 = V_6;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_12;
		L_12 = PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F(L_10, L_11, PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m158A295DC663053FFE765BC7905AD8754138043F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 L_13;
		L_13 = ScriptPlayable_1_op_Explicit_mE2A23761D86391E86D3CAD3B2DA501A03F23EEF1(L_12, ScriptPlayable_1_op_Explicit_mE2A23761D86391E86D3CAD3B2DA501A03F23EEF1_RuntimeMethod_var);
		V_8 = L_13;
		// TextPlayableBehaviour input = inputPlayable.GetBehaviour();
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_14;
		L_14 = ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD((&V_8), ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var);
		V_9 = L_14;
		// blendedColor += input.color * inputWeight;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_1;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_16 = V_9;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___color_0;
		float L_18 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline(L_17, L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline(L_15, L_19, NULL);
		V_1 = L_20;
		// blendedFontSize += input.fontSize * inputWeight;
		float L_21 = V_2;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_22 = V_9;
		NullCheck(L_22);
		int32_t L_23 = L_22->___fontSize_1;
		float L_24 = V_7;
		V_2 = ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(((float)L_23), L_24))));
		// totalWeight += inputWeight;
		float L_25 = V_3;
		float L_26 = V_7;
		V_3 = ((float)il2cpp_codegen_add(L_25, L_26));
		// if (inputWeight > greatestWeight)
		float L_27 = V_7;
		float L_28 = V_4;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_00a5;
		}
	}
	{
		// text = input.text;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_29 = V_9;
		NullCheck(L_29);
		String_t* L_30 = L_29->___text_2;
		V_5 = L_30;
		// greatestWeight = inputWeight;
		float L_31 = V_7;
		V_4 = L_31;
	}

IL_00a5:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_33 = V_6;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		// m_TrackBinding.color = Color.Lerp(m_DefaultColor, blendedColor, totalWeight);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_35 = __this->___m_TrackBinding_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___m_DefaultColor_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = V_1;
		float L_38 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_36, L_37, L_38, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_39);
		// m_TrackBinding.fontSize = Mathf.RoundToInt(Mathf.Lerp(m_DefaultFontSize, blendedFontSize, totalWeight));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40 = __this->___m_TrackBinding_3;
		float L_41 = __this->___m_DefaultFontSize_1;
		float L_42 = V_2;
		float L_43 = V_3;
		float L_44;
		L_44 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_41, L_42, L_43, NULL);
		int32_t L_45;
		L_45 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(L_44, NULL);
		NullCheck(L_40);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_40, ((float)L_45), NULL);
		// m_TrackBinding.text = text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = __this->___m_TrackBinding_3;
		String_t* L_47 = V_5;
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_46, L_47);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TextTrackMixerBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_OnPlayableDestroy_mA2AC8887DEE34D5C11CCB554E3AA76B57F086063 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		// RestoreDefaults();
		TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TextTrackMixerBehaviour::SetDefaults(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (text == m_TrackBinding)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___text0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TrackBinding_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (!L_2)
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
		// RestoreDefaults();
		TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A(__this, NULL);
		// m_TrackBinding = text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = ___text0;
		__this->___m_TrackBinding_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackBinding_3), (void*)L_3);
		// if (m_TrackBinding != null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_TrackBinding_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// m_DefaultColor = m_TrackBinding.color;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___m_TrackBinding_3;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___m_DefaultColor_0 = L_7;
		// m_DefaultFontSize = m_TrackBinding.fontSize;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___m_TrackBinding_3;
		NullCheck(L_8);
		float L_9;
		L_9 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_8, NULL);
		__this->___m_DefaultFontSize_1 = L_9;
		// m_DefaultText = m_TrackBinding.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___m_TrackBinding_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_10);
		__this->___m_DefaultText_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultText_2), (void*)L_11);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Timeline.Samples.TextTrackMixerBehaviour::RestoreDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_TrackBinding == null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TrackBinding_3;
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
		// m_TrackBinding.color = m_DefaultColor;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___m_TrackBinding_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_DefaultColor_0;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// m_TrackBinding.fontSize = m_DefaultFontSize;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_TrackBinding_3;
		float L_5 = __this->___m_DefaultFontSize_1;
		NullCheck(L_4);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_4, L_5, NULL);
		// m_TrackBinding.text = m_DefaultText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___m_TrackBinding_3;
		String_t* L_7 = __this->___m_DefaultText_2;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void Timeline.Samples.TextTrackMixerBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour__ctor_m2472CFF503F9A05B6DE9644845388138D177E63A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) 
{
	{
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSize; }
		float L_0 = __this->___m_fontSize_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
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
