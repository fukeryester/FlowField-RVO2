// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlowField_RVO2_Gamemode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWFIELD_RVO2_FlowField_RVO2_Gamemode_generated_h
#error "FlowField_RVO2_Gamemode.generated.h already included, missing '#pragma once' in FlowField_RVO2_Gamemode.h"
#endif
#define FLOWFIELD_RVO2_FlowField_RVO2_Gamemode_generated_h

#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleRVO2ForAllAgents); \
	DECLARE_FUNCTION(execSpawnTestAgents);


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlow_Field_GameMode(); \
	friend struct Z_Construct_UClass_AFlow_Field_GameMode_Statics; \
public: \
	DECLARE_CLASS(AFlow_Field_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flowfield_RVO2"), NO_API) \
	DECLARE_SERIALIZER(AFlow_Field_GameMode)


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlow_Field_GameMode(AFlow_Field_GameMode&&); \
	AFlow_Field_GameMode(const AFlow_Field_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlow_Field_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlow_Field_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlow_Field_GameMode) \
	NO_API virtual ~AFlow_Field_GameMode();


#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_7_PROLOG
#define FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWFIELD_RVO2_API UClass* StaticClass<class AFlow_Field_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
