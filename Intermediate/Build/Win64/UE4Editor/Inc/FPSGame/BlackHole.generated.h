// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_BlackHole_generated_h
#error "BlackHole.generated.h already included, missing '#pragma once' in BlackHole.h"
#endif
#define FPSGAME_BlackHole_generated_h

#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_SPARSE_DATA
#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverLapInnerSphere);


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverLapInnerSphere);


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public:


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHole)


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABlackHole, MeshComp); } \
	FORCEINLINE static uint32 __PPO__InnerSphereComponent() { return STRUCT_OFFSET(ABlackHole, InnerSphereComponent); } \
	FORCEINLINE static uint32 __PPO__OuterSphereComponent() { return STRUCT_OFFSET(ABlackHole, OuterSphereComponent); }


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_12_PROLOG
#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_SPARSE_DATA \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_RPC_WRAPPERS \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_INCLASS \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_SPARSE_DATA \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
	STEALTH_GAME_Source_FPSGame_Public_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ABlackHole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STEALTH_GAME_Source_FPSGame_Public_BlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
