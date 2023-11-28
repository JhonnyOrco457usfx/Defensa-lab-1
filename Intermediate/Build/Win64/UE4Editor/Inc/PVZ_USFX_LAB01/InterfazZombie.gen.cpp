// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/InterfazZombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfazZombie() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UInterfazZombie_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UInterfazZombie();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void UInterfazZombie::StaticRegisterNativesUInterfazZombie()
	{
	}
	UClass* Z_Construct_UClass_UInterfazZombie_NoRegister()
	{
		return UInterfazZombie::StaticClass();
	}
	struct Z_Construct_UClass_UInterfazZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfazZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazZombie_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfazZombie.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfazZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfazZombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfazZombie_Statics::ClassParams = {
		&UInterfazZombie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfazZombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazZombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfazZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfazZombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfazZombie, 1447340854);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<UInterfazZombie>()
	{
		return UInterfazZombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfazZombie(Z_Construct_UClass_UInterfazZombie, &UInterfazZombie::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("UInterfazZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfazZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
