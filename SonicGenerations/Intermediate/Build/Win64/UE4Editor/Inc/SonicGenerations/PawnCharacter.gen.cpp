// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SonicGenerations/PawnCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCharacter() {}
// Cross Module References
	SONICGENERATIONS_API UClass* Z_Construct_UClass_APawnCharacter_NoRegister();
	SONICGENERATIONS_API UClass* Z_Construct_UClass_APawnCharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SonicGenerations();
// End Cross Module References
	void APawnCharacter::StaticRegisterNativesAPawnCharacter()
	{
	}
	UClass* Z_Construct_UClass_APawnCharacter_NoRegister()
	{
		return APawnCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APawnCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SonicGenerations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PawnCharacter.h" },
		{ "ModuleRelativePath", "PawnCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnCharacter_Statics::ClassParams = {
		&APawnCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APawnCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APawnCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnCharacter, 3296538913);
	template<> SONICGENERATIONS_API UClass* StaticClass<APawnCharacter>()
	{
		return APawnCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnCharacter(Z_Construct_UClass_APawnCharacter, &APawnCharacter::StaticClass, TEXT("/Script/SonicGenerations"), TEXT("APawnCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
