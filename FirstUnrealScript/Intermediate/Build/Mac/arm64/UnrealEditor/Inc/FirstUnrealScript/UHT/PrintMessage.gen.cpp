// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstUnrealScript/PrintMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintMessage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FIRSTUNREALSCRIPT_API UClass* Z_Construct_UClass_APrintMessage();
	FIRSTUNREALSCRIPT_API UClass* Z_Construct_UClass_APrintMessage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstUnrealScript();
// End Cross Module References
	void APrintMessage::StaticRegisterNativesAPrintMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrintMessage);
	UClass* Z_Construct_UClass_APrintMessage_NoRegister()
	{
		return APrintMessage::StaticClass();
	}
	struct Z_Construct_UClass_APrintMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrintMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstUnrealScript,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrintMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PrintMessage.h" },
		{ "ModuleRelativePath", "PrintMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrintMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrintMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrintMessage_Statics::ClassParams = {
		&APrintMessage::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrintMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrintMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrintMessage()
	{
		if (!Z_Registration_Info_UClass_APrintMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrintMessage.OuterSingleton, Z_Construct_UClass_APrintMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrintMessage.OuterSingleton;
	}
	template<> FIRSTUNREALSCRIPT_API UClass* StaticClass<APrintMessage>()
	{
		return APrintMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrintMessage);
	APrintMessage::~APrintMessage() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_FirstUnrealScript_Source_FirstUnrealScript_PrintMessage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FirstUnrealScript_Source_FirstUnrealScript_PrintMessage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrintMessage, APrintMessage::StaticClass, TEXT("APrintMessage"), &Z_Registration_Info_UClass_APrintMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrintMessage), 57155059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FirstUnrealScript_Source_FirstUnrealScript_PrintMessage_h_2949876896(TEXT("/Script/FirstUnrealScript"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_FirstUnrealScript_Source_FirstUnrealScript_PrintMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FirstUnrealScript_Source_FirstUnrealScript_PrintMessage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
