#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// Timeline.Samples.NoFoldOutAttribute
struct NoFoldOutAttribute_tEEFB91AFC062D3F1F03E8E7E10B58A4E00C5F866;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;

IL2CPP_EXTERN_C RuntimeClass* QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t06ECB01857417FFA7A0414B4667A9C6E3B832D46 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// Timeline.Samples.NoFoldOutAttribute
struct NoFoldOutAttribute_tEEFB91AFC062D3F1F03E8E7E10B58A4E00C5F866  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Scale(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Scale_mDF46B425F88ACC7DFF3B9A3B12E97BF263B76E3E (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, float ___scale1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Add(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Add_m12F2D5E0D1DF6587E2A82831A4144B1F711406BB (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
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
// System.Void Timeline.Samples.NoFoldOutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoFoldOutAttribute__ctor_m1C4F7D5FD38B4E7E8FC861121C30193F512352F3 (NoFoldOutAttribute_tEEFB91AFC062D3F1F03E8E7E10B58A4E00C5F866* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Scale(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Scale_mDF46B425F88ACC7DFF3B9A3B12E97BF263B76E3E (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// return new Quaternion(q.x * scale, q.y * scale, q.z * scale, q.w * scale);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		float L_1 = L_0.___x_0;
		float L_2 = ___scale1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___q0;
		float L_4 = L_3.___y_1;
		float L_5 = ___scale1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___q0;
		float L_7 = L_6.___z_2;
		float L_8 = ___scale1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___q0;
		float L_10 = L_9.___w_3;
		float L_11 = ___scale1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::NormalizeSafe(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_NormalizeSafe_m62A116D2B564022E504E2273DEBFBFE59CB4DE26 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float dot = Quaternion.Dot(q, q);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q0;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (dot > k_FloatMin)
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(1.00000001E-10f)))))
		{
			goto IL_0043;
		}
	}
	{
		// float rsqrt = 1.0f / Mathf.Sqrt(dot);
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		V_1 = ((float)((1.0f)/L_5));
		// return new Quaternion(q.x * rsqrt, q.y * rsqrt, q.z * rsqrt, q.w * rsqrt);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___q0;
		float L_7 = L_6.___x_0;
		float L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___q0;
		float L_10 = L_9.___y_1;
		float L_11 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___q0;
		float L_13 = L_12.___z_2;
		float L_14 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___q0;
		float L_16 = L_15.___w_3;
		float L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_18), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_17)), /*hidden argument*/NULL);
		return L_18;
	}

IL_0043:
	{
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		return L_19;
	}
}
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Blend(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Blend_mD4FD36C8D290B26687DFED50C1CD0611CDC4183B (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q10, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q21, float ___weight2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return q1.Add(q2.Scale(weight));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q21;
		float L_2 = ___weight2;
		il2cpp_codegen_runtime_class_init_inline(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = QuaternionUtils_Scale_mDF46B425F88ACC7DFF3B9A3B12E97BF263B76E3E(L_1, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = QuaternionUtils_Add_m12F2D5E0D1DF6587E2A82831A4144B1F711406BB(L_0, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion Timeline.Samples.QuaternionUtils::Add(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionUtils_Add_m12F2D5E0D1DF6587E2A82831A4144B1F711406BB (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float sign = Mathf.Sign(Quaternion.Dot(rhs, lhs));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___rhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___lhs1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_2, NULL);
		V_0 = L_3;
		// return new Quaternion(rhs.x + sign * lhs.x, rhs.y + sign * lhs.y, rhs.z + sign * lhs.z, rhs.w + sign * lhs.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___rhs0;
		float L_5 = L_4.___x_0;
		float L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___lhs1;
		float L_8 = L_7.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___rhs0;
		float L_10 = L_9.___y_1;
		float L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs1;
		float L_13 = L_12.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs0;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___lhs1;
		float L_18 = L_17.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = ___rhs0;
		float L_20 = L_19.___w_3;
		float L_21 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___lhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_24), ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_11, L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, L_18)))), ((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void Timeline.Samples.QuaternionUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionUtils__cctor_m52415F030E945F93E4F321D2B1068B9795DBEC64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Quaternion zero = new Quaternion(0f, 0f, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionUtils_t3DE71C085F0368C414E41B1AB561B32DFC4E21FC_il2cpp_TypeInfo_var))->___zero_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
