// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlankProjectTest/HeightMapMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapMeshActor() {}
// Cross Module References
	BLANKPROJECTTEST_API UClass* Z_Construct_UClass_AHeightMapMeshActor_NoRegister();
	BLANKPROJECTTEST_API UClass* Z_Construct_UClass_AHeightMapMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BlankProjectTest();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AHeightMapMeshActor::StaticRegisterNativesAHeightMapMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AHeightMapMeshActor_NoRegister()
	{
		return AHeightMapMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AHeightMapMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeightMapMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BlankProjectTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeightMapMeshActor.h" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ColorTexture_MetaData[] = {
		{ "Category", "HeightMap" },
		{ "Comment", "// Color texture for mesh surface\n" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
		{ "ToolTip", "Color texture for mesh surface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeightMapMeshActor, ColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ColorTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ColorTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_DepthTexture_MetaData[] = {
		{ "Category", "HeightMap" },
		{ "Comment", "// Depth image for vertex heights\n" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
		{ "ToolTip", "Depth image for vertex heights" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_DepthTexture = { "DepthTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeightMapMeshActor, DepthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_DepthTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_DepthTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_HeightScale_MetaData[] = {
		{ "Category", "HeightMap" },
		{ "Comment", "// Vertical scale\n" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
		{ "ToolTip", "Vertical scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeightMapMeshActor, HeightScale), METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_HeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_MeshScale_MetaData[] = {
		{ "Category", "HeightMap" },
		{ "Comment", "// Horizontal scale\n" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
		{ "ToolTip", "Horizontal scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeightMapMeshActor, MeshScale), METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_MeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ProcMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeightMapMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ProcMesh = { "ProcMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeightMapMeshActor, ProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ProcMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeightMapMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ColorTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_DepthTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_HeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_MeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapMeshActor_Statics::NewProp_ProcMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeightMapMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeightMapMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeightMapMeshActor_Statics::ClassParams = {
		&AHeightMapMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHeightMapMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeightMapMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeightMapMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeightMapMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeightMapMeshActor, 1958300554);
	template<> BLANKPROJECTTEST_API UClass* StaticClass<AHeightMapMeshActor>()
	{
		return AHeightMapMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeightMapMeshActor(Z_Construct_UClass_AHeightMapMeshActor, &AHeightMapMeshActor::StaticClass, TEXT("/Script/BlankProjectTest"), TEXT("AHeightMapMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeightMapMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
