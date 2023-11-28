// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/ZombieMago.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieMago() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieMago_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieMago();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AZombieMago::StaticRegisterNativesAZombieMago()
	{
	}
	UClass* Z_Construct_UClass_AZombieMago_NoRegister()
	{
		return AZombieMago::StaticClass();
	}
	struct Z_Construct_UClass_AZombieMago_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieMago_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieMago_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieMago.h" },
		{ "ModuleRelativePath", "ZombieMago.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieMago_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieMago>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieMago_Statics::ClassParams = {
		&AZombieMago::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieMago_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieMago_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieMago()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieMago_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieMago, 2547485058);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombieMago>()
	{
		return AZombieMago::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieMago(Z_Construct_UClass_AZombieMago, &AZombieMago::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombieMago"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieMago);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
