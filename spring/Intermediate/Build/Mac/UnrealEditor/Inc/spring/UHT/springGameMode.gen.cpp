// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "spring/Public/Game/SpringGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPRING_API UClass* Z_Construct_UClass_ASpringGameMode();
SPRING_API UClass* Z_Construct_UClass_ASpringGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_spring();
// End Cross Module References

// Begin Class ASpringGameMode
void ASpringGameMode::StaticRegisterNativesASpringGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpringGameMode);
UClass* Z_Construct_UClass_ASpringGameMode_NoRegister()
{
	return ASpringGameMode::StaticClass();
}
struct Z_Construct_UClass_ASpringGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/SpringGameMode.h" },
		{ "ModuleRelativePath", "Public/Game/SpringGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpringGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpringGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_spring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpringGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpringGameMode_Statics::ClassParams = {
	&ASpringGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpringGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpringGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpringGameMode()
{
	if (!Z_Registration_Info_UClass_ASpringGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpringGameMode.OuterSingleton, Z_Construct_UClass_ASpringGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpringGameMode.OuterSingleton;
}
template<> SPRING_API UClass* StaticClass<ASpringGameMode>()
{
	return ASpringGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpringGameMode);
ASpringGameMode::~ASpringGameMode() {}
// End Class ASpringGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_son_eunsu_Documents_Unreal_Projects_Spring_Winter_spring_Source_spring_Public_Game_SpringGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpringGameMode, ASpringGameMode::StaticClass, TEXT("ASpringGameMode"), &Z_Registration_Info_UClass_ASpringGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpringGameMode), 2798696270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_son_eunsu_Documents_Unreal_Projects_Spring_Winter_spring_Source_spring_Public_Game_SpringGameMode_h_3144100643(TEXT("/Script/spring"),
	Z_CompiledInDeferFile_FID_son_eunsu_Documents_Unreal_Projects_Spring_Winter_spring_Source_spring_Public_Game_SpringGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_son_eunsu_Documents_Unreal_Projects_Spring_Winter_spring_Source_spring_Public_Game_SpringGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
