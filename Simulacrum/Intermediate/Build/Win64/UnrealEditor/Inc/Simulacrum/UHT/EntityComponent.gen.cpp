// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntityComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMULACRUM_API UClass* Z_Construct_UClass_UEntityComponent();
SIMULACRUM_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulacrum();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEntityComponent *********************************************************
void UEntityComponent::StaticRegisterNativesUEntityComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEntityComponent;
UClass* UEntityComponent::GetPrivateStaticClass()
{
	using TClass = UEntityComponent;
	if (!Z_Registration_Info_UClass_UEntityComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EntityComponent"),
			Z_Registration_Info_UClass_UEntityComponent.InnerSingleton,
			StaticRegisterNativesUEntityComponent,
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
	return Z_Registration_Info_UClass_UEntityComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEntityComponent_NoRegister()
{
	return UEntityComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EntityComponent.h" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulacrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponent_Statics::ClassParams = {
	&UEntityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityComponent()
{
	if (!Z_Registration_Info_UClass_UEntityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponent.OuterSingleton, Z_Construct_UClass_UEntityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponent);
UEntityComponent::~UEntityComponent() {}
// ********** End Class UEntityComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityComponent_h__Script_Simulacrum_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponent, UEntityComponent::StaticClass, TEXT("UEntityComponent"), &Z_Registration_Info_UClass_UEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponent), 2370227960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityComponent_h__Script_Simulacrum_1305221258(TEXT("/Script/Simulacrum"),
	Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityComponent_h__Script_Simulacrum_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_EntityComponent_h__Script_Simulacrum_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
