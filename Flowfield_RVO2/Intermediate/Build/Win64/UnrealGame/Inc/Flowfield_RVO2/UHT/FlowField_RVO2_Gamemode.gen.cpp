// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flowfield_RVO2/Public/FlowField_RVO2_Gamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowField_RVO2_Gamemode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_Agent_NoRegister();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_GameMode();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Flowfield_RVO2();
// End Cross Module References

// Begin Class AFlow_Field_GameMode Function SpawnTestAgents
struct Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2 Test" },
		{ "Comment", "// \xe6\xb5\x8b\xe8\xaf\x95\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_GameMode, nullptr, "SpawnTestAgents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_GameMode::execSpawnTestAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTestAgents();
	P_NATIVE_END;
}
// End Class AFlow_Field_GameMode Function SpawnTestAgents

// Begin Class AFlow_Field_GameMode Function ToggleRVO2ForAllAgents
struct Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2 Test" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_GameMode, nullptr, "ToggleRVO2ForAllAgents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_GameMode::execToggleRVO2ForAllAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleRVO2ForAllAgents();
	P_NATIVE_END;
}
// End Class AFlow_Field_GameMode Function ToggleRVO2ForAllAgents

// Begin Class AFlow_Field_GameMode
void AFlow_Field_GameMode::StaticRegisterNativesAFlow_Field_GameMode()
{
	UClass* Class = AFlow_Field_GameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnTestAgents", &AFlow_Field_GameMode::execSpawnTestAgents },
		{ "ToggleRVO2ForAllAgents", &AFlow_Field_GameMode::execToggleRVO2ForAllAgents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlow_Field_GameMode);
UClass* Z_Construct_UClass_AFlow_Field_GameMode_NoRegister()
{
	return AFlow_Field_GameMode::StaticClass();
}
struct Z_Construct_UClass_AFlow_Field_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FlowField_RVO2_Gamemode.h" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAgents_MetaData[] = {
		{ "Category", "RVO2 Test" },
		{ "Comment", "// \xe6\xb5\x8b\xe8\xaf\x95RVO2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95RVO2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "RVO2 Test" },
		{ "Comment", "// \xe9\xbb\x98\xe8\xae\xa4\xe7\x94\x9f\xe6\x88\x90""50\xe4\xb8\xaa""Agent\n" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe7\x94\x9f\xe6\x88\x90""50\xe4\xb8\xaa""Agent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentClass_MetaData[] = {
		{ "Category", "RVO2 Test" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnAgentsOnBeginPlay_MetaData[] = {
		{ "Category", "RVO2 Test" },
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedAgents_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowField_RVO2_Gamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAgents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AgentClass;
	static void NewProp_bSpawnAgentsOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnAgentsOnBeginPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedAgents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedAgents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlow_Field_GameMode_SpawnTestAgents, "SpawnTestAgents" }, // 3328508032
		{ &Z_Construct_UFunction_AFlow_Field_GameMode_ToggleRVO2ForAllAgents, "ToggleRVO2ForAllAgents" }, // 3692122310
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlow_Field_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_NumAgents = { "NumAgents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_GameMode, NumAgents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAgents_MetaData), NewProp_NumAgents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_GameMode, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_AgentClass = { "AgentClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_GameMode, AgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFlow_Field_Agent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentClass_MetaData), NewProp_AgentClass_MetaData) };
void Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_bSpawnAgentsOnBeginPlay_SetBit(void* Obj)
{
	((AFlow_Field_GameMode*)Obj)->bSpawnAgentsOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_bSpawnAgentsOnBeginPlay = { "bSpawnAgentsOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field_GameMode), &Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_bSpawnAgentsOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnAgentsOnBeginPlay_MetaData), NewProp_bSpawnAgentsOnBeginPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnedAgents_Inner = { "SpawnedAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFlow_Field_Agent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnedAgents = { "SpawnedAgents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_GameMode, SpawnedAgents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedAgents_MetaData), NewProp_SpawnedAgents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlow_Field_GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_NumAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_AgentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_bSpawnAgentsOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnedAgents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_GameMode_Statics::NewProp_SpawnedAgents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlow_Field_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Flowfield_RVO2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlow_Field_GameMode_Statics::ClassParams = {
	&AFlow_Field_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlow_Field_GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_GameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlow_Field_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlow_Field_GameMode()
{
	if (!Z_Registration_Info_UClass_AFlow_Field_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlow_Field_GameMode.OuterSingleton, Z_Construct_UClass_AFlow_Field_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlow_Field_GameMode.OuterSingleton;
}
template<> FLOWFIELD_RVO2_API UClass* StaticClass<AFlow_Field_GameMode>()
{
	return AFlow_Field_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlow_Field_GameMode);
AFlow_Field_GameMode::~AFlow_Field_GameMode() {}
// End Class AFlow_Field_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlow_Field_GameMode, AFlow_Field_GameMode::StaticClass, TEXT("AFlow_Field_GameMode"), &Z_Registration_Info_UClass_AFlow_Field_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlow_Field_GameMode), 3373149055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_2887126294(TEXT("/Script/Flowfield_RVO2"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_FlowField_RVO2_Gamemode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
