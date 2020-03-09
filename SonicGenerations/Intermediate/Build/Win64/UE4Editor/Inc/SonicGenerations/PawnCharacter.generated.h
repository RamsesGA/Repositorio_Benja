// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SONICGENERATIONS_PawnCharacter_generated_h
#error "PawnCharacter.generated.h already included, missing '#pragma once' in PawnCharacter.h"
#endif
#define SONICGENERATIONS_PawnCharacter_generated_h

#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_RPC_WRAPPERS
#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnCharacter(); \
	friend struct Z_Construct_UClass_APawnCharacter_Statics; \
public: \
	DECLARE_CLASS(APawnCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SonicGenerations"), NO_API) \
	DECLARE_SERIALIZER(APawnCharacter)


#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPawnCharacter(); \
	friend struct Z_Construct_UClass_APawnCharacter_Statics; \
public: \
	DECLARE_CLASS(APawnCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SonicGenerations"), NO_API) \
	DECLARE_SERIALIZER(APawnCharacter)


#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnCharacter(APawnCharacter&&); \
	NO_API APawnCharacter(const APawnCharacter&); \
public:


#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnCharacter(APawnCharacter&&); \
	NO_API APawnCharacter(const APawnCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnCharacter)


#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_9_PROLOG
#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_RPC_WRAPPERS \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_INCLASS \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SonicGenerations_Source_SonicGenerations_PawnCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SONICGENERATIONS_API UClass* StaticClass<class APawnCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SonicGenerations_Source_SonicGenerations_PawnCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
