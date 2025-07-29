// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Skill.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSkill() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMULACRUM_API UClass* Z_Construct_UClass_USkill();
SIMULACRUM_API UClass* Z_Construct_UClass_USkill_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulacrum();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USkill *******************************************************************
void USkill::StaticRegisterNativesUSkill()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USkill;
UClass* USkill::GetPrivateStaticClass()
{
	using TClass = USkill;
	if (!Z_Registration_Info_UClass_USkill.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Skill"),
			Z_Registration_Info_UClass_USkill.InnerSingleton,
			StaticRegisterNativesUSkill,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USkill.InnerSingleton;
}
UClass* Z_Construct_UClass_USkill_NoRegister()
{
	return USkill::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Skill.h" },
		{ "ModuleRelativePath", "Public/Skill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCoreSkill_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_bIsCoreSkill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCoreSkill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UClass_USkill_Statics::NewProp_bIsCoreSkill_SetBit(void* Obj)
{
	((USkill*)Obj)->bIsCoreSkill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_bIsCoreSkill = { "bIsCoreSkill", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkill), &Z_Construct_UClass_USkill_Statics::NewProp_bIsCoreSkill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCoreSkill_MetaData), NewProp_bIsCoreSkill_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_bIsCoreSkill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulacrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkill_Statics::ClassParams = {
	&USkill::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USkill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::Class_MetaDataParams), Z_Construct_UClass_USkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkill()
{
	if (!Z_Registration_Info_UClass_USkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkill.OuterSingleton, Z_Construct_UClass_USkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkill.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkill);
USkill::~USkill() {}
// ********** End Class USkill *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h__Script_Simulacrum_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkill, USkill::StaticClass, TEXT("USkill"), &Z_Registration_Info_UClass_USkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkill), 2527785813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h__Script_Simulacrum_1153626223(TEXT("/Script/Simulacrum"),
	Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h__Script_Simulacrum_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_Skill_h__Script_Simulacrum_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
