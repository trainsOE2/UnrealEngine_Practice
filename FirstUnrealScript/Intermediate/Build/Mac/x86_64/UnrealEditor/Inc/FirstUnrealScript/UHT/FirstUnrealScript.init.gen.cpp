// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstUnrealScript_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstUnrealScript;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstUnrealScript()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstUnrealScript.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstUnrealScript",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x89ADC018,
				0x9BB35AE7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstUnrealScript.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstUnrealScript.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstUnrealScript(Z_Construct_UPackage__Script_FirstUnrealScript, TEXT("/Script/FirstUnrealScript"), Z_Registration_Info_UPackage__Script_FirstUnrealScript, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x89ADC018, 0x9BB35AE7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
