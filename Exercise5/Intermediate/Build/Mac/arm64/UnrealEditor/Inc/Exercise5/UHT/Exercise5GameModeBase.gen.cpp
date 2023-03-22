// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise5/Exercise5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExercise5GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	EXERCISE5_API UClass* Z_Construct_UClass_AExercise5GameModeBase();
	EXERCISE5_API UClass* Z_Construct_UClass_AExercise5GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Exercise5();
// End Cross Module References
	void AExercise5GameModeBase::StaticRegisterNativesAExercise5GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExercise5GameModeBase);
	UClass* Z_Construct_UClass_AExercise5GameModeBase_NoRegister()
	{
		return AExercise5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExercise5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExercise5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExercise5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Exercise5GameModeBase.h" },
		{ "ModuleRelativePath", "Exercise5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExercise5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExercise5GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExercise5GameModeBase_Statics::ClassParams = {
		&AExercise5GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExercise5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExercise5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExercise5GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AExercise5GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExercise5GameModeBase.OuterSingleton, Z_Construct_UClass_AExercise5GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExercise5GameModeBase.OuterSingleton;
	}
	template<> EXERCISE5_API UClass* StaticClass<AExercise5GameModeBase>()
	{
		return AExercise5GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExercise5GameModeBase);
	AExercise5GameModeBase::~AExercise5GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Exercise5_Source_Exercise5_Exercise5GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Exercise5_Source_Exercise5_Exercise5GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExercise5GameModeBase, AExercise5GameModeBase::StaticClass, TEXT("AExercise5GameModeBase"), &Z_Registration_Info_UClass_AExercise5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExercise5GameModeBase), 2779102913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Exercise5_Source_Exercise5_Exercise5GameModeBase_h_215164008(TEXT("/Script/Exercise5"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Exercise5_Source_Exercise5_Exercise5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Exercise5_Source_Exercise5_Exercise5GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
