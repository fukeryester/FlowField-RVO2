// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Flow_Field_Agent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFlow_Field;
class AFlow_Field_Agent;
struct FVelocityObstacle;
#ifdef FLOWFIELD_RVO2_Flow_Field_Agent_generated_h
#error "Flow_Field_Agent.generated.h already included, missing '#pragma once' in Flow_Field_Agent.h"
#endif
#define FLOWFIELD_RVO2_Flow_Field_Agent_generated_h

#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVelocityObstacle_Statics; \
	FLOWFIELD_RVO2_API static class UScriptStruct* StaticStruct();


template<> FLOWFIELD_RVO2_API UScriptStruct* StaticStruct<struct FVelocityObstacle>();

#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindBestVelocity); \
	DECLARE_FUNCTION(execIsVelocityInObstacle); \
	DECLARE_FUNCTION(execComputeVelocityObstacle); \
	DECLARE_FUNCTION(execGetNearbyAgents); \
	DECLARE_FUNCTION(execCalculateRVO2Velocity); \
	DECLARE_FUNCTION(execUpdateMeshScale); \
	DECLARE_FUNCTION(execGetOccupiedGridCells); \
	DECLARE_FUNCTION(execGetBilinearInterpolatedFlowVector); \
	DECLARE_FUNCTION(execUpdateMovementDirection); \
	DECLARE_FUNCTION(execSetFlowField);


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlow_Field_Agent(); \
	friend struct Z_Construct_UClass_AFlow_Field_Agent_Statics; \
public: \
	DECLARE_CLASS(AFlow_Field_Agent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flowfield_RVO2"), NO_API) \
	DECLARE_SERIALIZER(AFlow_Field_Agent)


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlow_Field_Agent(AFlow_Field_Agent&&); \
	AFlow_Field_Agent(const AFlow_Field_Agent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlow_Field_Agent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlow_Field_Agent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlow_Field_Agent) \
	NO_API virtual ~AFlow_Field_Agent();


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_40_PROLOG
#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWFIELD_RVO2_API UClass* StaticClass<class AFlow_Field_Agent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
