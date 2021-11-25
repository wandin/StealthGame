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
#ifdef FPSGAME_FPSExtractionZone_generated_h
#error "FPSExtractionZone.generated.h already included, missing '#pragma once' in FPSExtractionZone.h"
#endif
#define FPSGAME_FPSExtractionZone_generated_h

#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA
#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOVerlap);


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOVerlap);


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public:


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractionZone)


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSExtractionZone, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPSExtractionZone, DecalComp); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMissingSound() { return STRUCT_OFFSET(AFPSExtractionZone, ObjectiveMissingSound); }


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_11_PROLOG
#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
	STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STEALTH_GAME_Source_FPSGame_Public_FPSExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
