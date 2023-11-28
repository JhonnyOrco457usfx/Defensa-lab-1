// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/DecoradorVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorVelocidad() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ADecoradorVelocidad_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ADecoradorVelocidad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UInterfazZombie_NoRegister();
// End Cross Module References
	void ADecoradorVelocidad::StaticRegisterNativesADecoradorVelocidad()
	{
	}
	UClass* Z_Construct_UClass_ADecoradorVelocidad_NoRegister()
	{
		return ADecoradorVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_ADecoradorVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoradorVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoradorVelocidad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorVelocidad.h" },
		{ "ModuleRelativePath", "DecoradorVelocidad.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoradorVelocidad_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfazZombie_NoRegister, (int32)VTABLE_OFFSET(ADecoradorVelocidad, IInterfazZombie), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoradorVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorVelocidad_Statics::ClassParams = {
		&ADecoradorVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoradorVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoradorVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoradorVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoradorVelocidad, 299652946);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<ADecoradorVelocidad>()
	{
		return ADecoradorVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoradorVelocidad(Z_Construct_UClass_ADecoradorVelocidad, &ADecoradorVelocidad::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("ADecoradorVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
