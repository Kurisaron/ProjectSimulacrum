// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVRController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SIMULACRUM_API UClass* Z_Construct_UClass_AVRController();
SIMULACRUM_API UClass* Z_Construct_UClass_AVRController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulacrum();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVRController ************************************************************
void AVRController::StaticRegisterNativesAVRController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVRController;
UClass* AVRController::GetPrivateStaticClass()
{
	using TClass = AVRController;
	if (!Z_Registration_Info_UClass_AVRController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VRController"),
			Z_Registration_Info_UClass_AVRController.InnerSingleton,
			StaticRegisterNativesAVRController,
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
	return Z_Registration_Info_UClass_AVRController.InnerSingleton;
}
UClass* Z_Construct_UClass_AVRController_NoRegister()
{
	return AVRController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVRController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulacrum|VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player controller used for VR players\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controller used for VR players" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulacrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRController_Statics::ClassParams = {
	&AVRController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRController()
{
	if (!Z_Registration_Info_UClass_AVRController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRController.OuterSingleton, Z_Construct_UClass_AVRController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRController);
AVRController::~AVRController() {}
// ********** End Class AVRController **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_VRController_h__Script_Simulacrum_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRController, AVRController::StaticClass, TEXT("AVRController"), &Z_Registration_Info_UClass_AVRController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRController), 3697808861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_VRController_h__Script_Simulacrum_1480490317(TEXT("/Script/Simulacrum"),
	Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_VRController_h__Script_Simulacrum_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectSimulacrum_Simulacrum_Source_Simulacrum_Public_VRController_h__Script_Simulacrum_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
