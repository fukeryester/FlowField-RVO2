// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Flow_Field.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWFIELD_RVO2_Flow_Field_generated_h
#error "Flow_Field.generated.h already included, missing '#pragma once' in Flow_Field.h"
#endif
#define FLOWFIELD_RVO2_Flow_Field_generated_h

#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowFieldCell_Statics; \
	FLOWFIELD_RVO2_API static class UScriptStruct* StaticStruct();


template<> FLOWFIELD_RVO2_API UScriptStruct* StaticStruct<struct FFlowFieldCell>();

#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindNearestNonObstacleLocation); \
	DECLARE_FUNCTION(execDrawObstacleRepulsionVectors); \
	DECLARE_FUNCTION(execCalculateObstacleRepulsionVector); \
	DECLARE_FUNCTION(execIsGridIndexValid); \
	DECLARE_FUNCTION(execIndexToGrid); \
	DECLARE_FUNCTION(execGridToIndex); \
	DECLARE_FUNCTION(execGridToWorld); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execIsLocationValid); \
	DECLARE_FUNCTION(execGetFlowVectorAtLocation); \
	DECLARE_FUNCTION(execUpdateFlowField); \
	DECLARE_FUNCTION(execInitializeFlowField);


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlow_Field(); \
	friend struct Z_Construct_UClass_AFlow_Field_Statics; \
public: \
	DECLARE_CLASS(AFlow_Field, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flowfield_RVO2"), NO_API) \
	DECLARE_SERIALIZER(AFlow_Field)


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlow_Field(AFlow_Field&&); \
	AFlow_Field(const AFlow_Field&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlow_Field); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlow_Field); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlow_Field) \
	NO_API virtual ~AFlow_Field();


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_33_PROLOG
#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWFIELD_RVO2_API UClass* StaticClass<class AFlow_Field>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
