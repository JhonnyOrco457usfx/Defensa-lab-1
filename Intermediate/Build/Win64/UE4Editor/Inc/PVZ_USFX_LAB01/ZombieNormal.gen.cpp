// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/ZombieNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieNormal() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieNormal_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UInterfazZombie_NoRegister();
// End Cross Module References
	void AZombieNormal::StaticRegisterNativesAZombieNormal()
	{
	}
	UClass* Z_Construct_UClass_AZombieNormal_NoRegister()
	{
		return AZombieNormal::StaticClass();
	}
	struct Z_Construct_UClass_AZombieNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectoZombie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AspectoZombie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieNormal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieNormal.h" },
		{ "ModuleRelativePath", "ZombieNormal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieNormal_Statics::NewProp_AspectoZombie_MetaData[] = {
		{ "Category", "ZombieNormal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZombieNormal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieNormal_Statics::NewProp_AspectoZombie = { "AspectoZombie", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieNormal, AspectoZombie), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieNormal_Statics::NewProp_AspectoZombie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNormal_Statics::NewProp_AspectoZombie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieNormal_Statics::NewProp_AspectoZombie,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieNormal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfazZombie_NoRegister, (int32)VTABLE_OFFSET(AZombieNormal, IInterfazZombie), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieNormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieNormal_Statics::ClassParams = {
		&AZombieNormal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieNormal_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNormal_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieNormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieNormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieNormal, 238927991);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombieNormal>()
	{
		return AZombieNormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieNormal(Z_Construct_UClass_AZombieNormal, &AZombieNormal::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombieNormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieNormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
