// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/DecoradorSaltar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorSaltar() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ADecoradorSaltar_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ADecoradorSaltar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UInterfazZombie_NoRegister();
// End Cross Module References
	void ADecoradorSaltar::StaticRegisterNativesADecoradorSaltar()
	{
	}
	UClass* Z_Construct_UClass_ADecoradorSaltar_NoRegister()
	{
		return ADecoradorSaltar::StaticClass();
	}
	struct Z_Construct_UClass_ADecoradorSaltar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoradorSaltar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoradorSaltar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorSaltar.h" },
		{ "ModuleRelativePath", "DecoradorSaltar.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoradorSaltar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfazZombie_NoRegister, (int32)VTABLE_OFFSET(ADecoradorSaltar, IInterfazZombie), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoradorSaltar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorSaltar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorSaltar_Statics::ClassParams = {
		&ADecoradorSaltar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecoradorSaltar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorSaltar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoradorSaltar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoradorSaltar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoradorSaltar, 1735844442);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<ADecoradorSaltar>()
	{
		return ADecoradorSaltar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoradorSaltar(Z_Construct_UClass_ADecoradorSaltar, &ADecoradorSaltar::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("ADecoradorSaltar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorSaltar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
