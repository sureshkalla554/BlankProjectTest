// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlankProjectTest/BlankProjectTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlankProjectTestGameModeBase() {}
// Cross Module References
	BLANKPROJECTTEST_API UClass* Z_Construct_UClass_ABlankProjectTestGameModeBase_NoRegister();
	BLANKPROJECTTEST_API UClass* Z_Construct_UClass_ABlankProjectTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BlankProjectTest();
// End Cross Module References
	void ABlankProjectTestGameModeBase::StaticRegisterNativesABlankProjectTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABlankProjectTestGameModeBase_NoRegister()
	{
		return ABlankProjectTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlankProjectTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BlankProjectTestGameModeBase.h" },
		{ "ModuleRelativePath", "BlankProjectTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlankProjectTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::ClassParams = {
		&ABlankProjectTestGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlankProjectTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlankProjectTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlankProjectTestGameModeBase, 1412925843);
	template<> BLANKPROJECTTEST_API UClass* StaticClass<ABlankProjectTestGameModeBase>()
	{
		return ABlankProjectTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlankProjectTestGameModeBase(Z_Construct_UClass_ABlankProjectTestGameModeBase, &ABlankProjectTestGameModeBase::StaticClass, TEXT("/Script/BlankProjectTest"), TEXT("ABlankProjectTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlankProjectTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
