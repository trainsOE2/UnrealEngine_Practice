// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshesAndActors_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MeshesAndActors;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MeshesAndActors()
	{
		if (!Z_Registration_Info_UPackage__Script_MeshesAndActors.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MeshesAndActors",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7007C5A7,
				0x0988B545,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MeshesAndActors.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MeshesAndActors.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MeshesAndActors(Z_Construct_UPackage__Script_MeshesAndActors, TEXT("/Script/MeshesAndActors"), Z_Registration_Info_UPackage__Script_MeshesAndActors, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7007C5A7, 0x0988B545));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
