// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshesAndActors/MeshesAndActorsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshesAndActorsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MESHESANDACTORS_API UClass* Z_Construct_UClass_AMeshesAndActorsGameModeBase();
	MESHESANDACTORS_API UClass* Z_Construct_UClass_AMeshesAndActorsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshesAndActors();
// End Cross Module References
	void AMeshesAndActorsGameModeBase::StaticRegisterNativesAMeshesAndActorsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeshesAndActorsGameModeBase);
	UClass* Z_Construct_UClass_AMeshesAndActorsGameModeBase_NoRegister()
	{
		return AMeshesAndActorsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshesAndActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MeshesAndActorsGameModeBase.h" },
		{ "ModuleRelativePath", "MeshesAndActorsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshesAndActorsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::ClassParams = {
		&AMeshesAndActorsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshesAndActorsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMeshesAndActorsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeshesAndActorsGameModeBase.OuterSingleton, Z_Construct_UClass_AMeshesAndActorsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeshesAndActorsGameModeBase.OuterSingleton;
	}
	template<> MESHESANDACTORS_API UClass* StaticClass<AMeshesAndActorsGameModeBase>()
	{
		return AMeshesAndActorsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshesAndActorsGameModeBase);
	AMeshesAndActorsGameModeBase::~AMeshesAndActorsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_MeshesAndActors_Source_MeshesAndActors_MeshesAndActorsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MeshesAndActors_Source_MeshesAndActors_MeshesAndActorsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeshesAndActorsGameModeBase, AMeshesAndActorsGameModeBase::StaticClass, TEXT("AMeshesAndActorsGameModeBase"), &Z_Registration_Info_UClass_AMeshesAndActorsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeshesAndActorsGameModeBase), 2057560780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MeshesAndActors_Source_MeshesAndActors_MeshesAndActorsGameModeBase_h_1529904452(TEXT("/Script/MeshesAndActors"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_MeshesAndActors_Source_MeshesAndActors_MeshesAndActorsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MeshesAndActors_Source_MeshesAndActors_MeshesAndActorsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
