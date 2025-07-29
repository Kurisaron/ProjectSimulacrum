// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Skill.h"

#ifdef SIMULACRUM_Skill_generated_h
#error "Skill.generated.h already included, missing '#pragma once' in Skill.h"
#endif
#define SIMULACRUM_Skill_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkill *******************************************************************
SIMULACRUM_API UClass* Z_Construct_UClass_USkill_NoRegister();

#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkill(); \
	friend struct Z_Construct_UClass_USkill_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULACRUM_API UClass* Z_Construct_UClass_USkill_NoRegister(); \
public: \
	DECLARE_CLASS2(USkill, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Simulacrum"), Z_Construct_UClass_USkill_NoRegister) \
	DECLARE_SERIALIZER(USkill)


#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkill(USkill&&) = delete; \
	USkill(const USkill&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkill); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkill) \
	NO_API virtual ~USkill();


#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_12_PROLOG
#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkill;

// ********** End Class USkill *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
