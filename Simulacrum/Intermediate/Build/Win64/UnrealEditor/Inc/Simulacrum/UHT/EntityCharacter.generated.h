// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityCharacter.h"

#ifdef SIMULACRUM_EntityCharacter_generated_h
#error "EntityCharacter.generated.h already included, missing '#pragma once' in EntityCharacter.h"
#endif
#define SIMULACRUM_EntityCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEntityCharacter *********************************************************
SIMULACRUM_API UClass* Z_Construct_UClass_AEntityCharacter_NoRegister();

#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEntityCharacter(); \
	friend struct Z_Construct_UClass_AEntityCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULACRUM_API UClass* Z_Construct_UClass_AEntityCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEntityCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulacrum"), Z_Construct_UClass_AEntityCharacter_NoRegister) \
	DECLARE_SERIALIZER(AEntityCharacter)


#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEntityCharacter(AEntityCharacter&&) = delete; \
	AEntityCharacter(const AEntityCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEntityCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEntityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEntityCharacter) \
	NO_API virtual ~AEntityCharacter();


#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_11_PROLOG
#define FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEntityCharacter;

// ********** End Class AEntityCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
