// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntityCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEntityCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SIMULACRUM_API UClass* Z_Construct_UClass_AEntityCharacter();
SIMULACRUM_API UClass* Z_Construct_UClass_AEntityCharacter_NoRegister();
SIMULACRUM_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulacrum();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEntityCharacter *********************************************************
void AEntityCharacter::StaticRegisterNativesAEntityCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEntityCharacter;
UClass* AEntityCharacter::GetPrivateStaticClass()
{
	using TClass = AEntityCharacter;
	if (!Z_Registration_Info_UClass_AEntityCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EntityCharacter"),
			Z_Registration_Info_UClass_AEntityCharacter.InnerSingleton,
			StaticRegisterNativesAEntityCharacter,
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
	return Z_Registration_Info_UClass_AEntityCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEntityCharacter_NoRegister()
{
	return AEntityCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEntityCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EntityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Entity Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntityCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntityCharacter_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEntityCharacter, EntityComponent), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponent_MetaData), NewProp_EntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEntityCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntityCharacter_Statics::NewProp_EntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEntityCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulacrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEntityCharacter_Statics::ClassParams = {
	&AEntityCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEntityCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEntityCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEntityCharacter()
{
	if (!Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton, Z_Construct_UClass_AEntityCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEntityCharacter);
AEntityCharacter::~AEntityCharacter() {}
// ********** End Class AEntityCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h__Script_Simulacrum_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEntityCharacter, AEntityCharacter::StaticClass, TEXT("AEntityCharacter"), &Z_Registration_Info_UClass_AEntityCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEntityCharacter), 3112632505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h__Script_Simulacrum_1855030412(TEXT("/Script/Simulacrum"),
	Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h__Script_Simulacrum_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityCharacter_h__Script_Simulacrum_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
