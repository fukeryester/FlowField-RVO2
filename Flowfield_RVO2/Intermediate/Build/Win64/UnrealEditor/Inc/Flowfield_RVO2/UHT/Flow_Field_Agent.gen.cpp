// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flowfield_RVO2/Public/Flow_Field_Agent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlow_Field_Agent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_Agent();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_Agent_NoRegister();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_NoRegister();
FLOWFIELD_RVO2_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityObstacle();
UPackage* Z_Construct_UPackage__Script_Flowfield_RVO2();
// End Cross Module References

// Begin ScriptStruct FVelocityObstacle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VelocityObstacle;
class UScriptStruct* FVelocityObstacle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityObstacle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VelocityObstacle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVelocityObstacle, (UObject*)Z_Construct_UPackage__Script_Flowfield_RVO2(), TEXT("VelocityObstacle"));
	}
	return Z_Registration_Info_UScriptStruct_VelocityObstacle.OuterSingleton;
}
template<> FLOWFIELD_RVO2_API UScriptStruct* StaticStruct<FVelocityObstacle>()
{
	return FVelocityObstacle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVelocityObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// RVO2\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "RVO2\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Apex_MetaData[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLeg_MetaData[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLeg_MetaData[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Apex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightLeg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVelocityObstacle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_Apex = { "Apex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityObstacle, Apex), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Apex_MetaData), NewProp_Apex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_LeftLeg = { "LeftLeg", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityObstacle, LeftLeg), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLeg_MetaData), NewProp_LeftLeg_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_RightLeg = { "RightLeg", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityObstacle, RightLeg), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLeg_MetaData), NewProp_RightLeg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVelocityObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_Apex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_LeftLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewProp_RightLeg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityObstacle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVelocityObstacle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flowfield_RVO2,
	nullptr,
	&NewStructOps,
	"VelocityObstacle",
	Z_Construct_UScriptStruct_FVelocityObstacle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityObstacle_Statics::PropPointers),
	sizeof(FVelocityObstacle),
	alignof(FVelocityObstacle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityObstacle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVelocityObstacle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVelocityObstacle()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityObstacle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VelocityObstacle.InnerSingleton, Z_Construct_UScriptStruct_FVelocityObstacle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VelocityObstacle.InnerSingleton;
}
// End ScriptStruct FVelocityObstacle

// Begin Class AFlow_Field_Agent Function CalculateRVO2Velocity
struct Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics
{
	struct Flow_Field_Agent_eventCalculateRVO2Velocity_Parms
	{
		FVector2D PreferredVelocity;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2" },
		{ "Comment", "// RVO2\xe9\x81\xbf\xe9\x9a\x9c\xe6\x8e\xa5\xe5\x8f\xa3\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "RVO2\xe9\x81\xbf\xe9\x9a\x9c\xe6\x8e\xa5\xe5\x8f\xa3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::NewProp_PreferredVelocity = { "PreferredVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventCalculateRVO2Velocity_Parms, PreferredVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredVelocity_MetaData), NewProp_PreferredVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventCalculateRVO2Velocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::NewProp_PreferredVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "CalculateRVO2Velocity", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::Flow_Field_Agent_eventCalculateRVO2Velocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::Flow_Field_Agent_eventCalculateRVO2Velocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execCalculateRVO2Velocity)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PreferredVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->CalculateRVO2Velocity(Z_Param_Out_PreferredVelocity);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function CalculateRVO2Velocity

// Begin Class AFlow_Field_Agent Function ComputeVelocityObstacle
struct Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics
{
	struct Flow_Field_Agent_eventComputeVelocityObstacle_Parms
	{
		const AFlow_Field_Agent* OtherAgent;
		FVelocityObstacle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherAgent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherAgent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::NewProp_OtherAgent = { "OtherAgent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventComputeVelocityObstacle_Parms, OtherAgent), Z_Construct_UClass_AFlow_Field_Agent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherAgent_MetaData), NewProp_OtherAgent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventComputeVelocityObstacle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVelocityObstacle, METADATA_PARAMS(0, nullptr) }; // 3202330558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::NewProp_OtherAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "ComputeVelocityObstacle", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::Flow_Field_Agent_eventComputeVelocityObstacle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::Flow_Field_Agent_eventComputeVelocityObstacle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execComputeVelocityObstacle)
{
	P_GET_OBJECT(AFlow_Field_Agent,Z_Param_OtherAgent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVelocityObstacle*)Z_Param__Result=P_THIS->ComputeVelocityObstacle(Z_Param_OtherAgent);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function ComputeVelocityObstacle

// Begin Class AFlow_Field_Agent Function FindBestVelocity
struct Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics
{
	struct Flow_Field_Agent_eventFindBestVelocity_Parms
	{
		FVector2D PreferredVelocity;
		TArray<FVelocityObstacle> Obstacles;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obstacles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Obstacles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Obstacles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_PreferredVelocity = { "PreferredVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventFindBestVelocity_Parms, PreferredVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredVelocity_MetaData), NewProp_PreferredVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_Obstacles_Inner = { "Obstacles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVelocityObstacle, METADATA_PARAMS(0, nullptr) }; // 3202330558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_Obstacles = { "Obstacles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventFindBestVelocity_Parms, Obstacles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obstacles_MetaData), NewProp_Obstacles_MetaData) }; // 3202330558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventFindBestVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_PreferredVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_Obstacles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_Obstacles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "FindBestVelocity", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::Flow_Field_Agent_eventFindBestVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::Flow_Field_Agent_eventFindBestVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execFindBestVelocity)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PreferredVelocity);
	P_GET_TARRAY_REF(FVelocityObstacle,Z_Param_Out_Obstacles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->FindBestVelocity(Z_Param_Out_PreferredVelocity,Z_Param_Out_Obstacles);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function FindBestVelocity

// Begin Class AFlow_Field_Agent Function GetBilinearInterpolatedFlowVector
struct Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics
{
	struct Flow_Field_Agent_eventGetBilinearInterpolatedFlowVector_Parms
	{
		FVector WorldLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField Agent" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventGetBilinearInterpolatedFlowVector_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventGetBilinearInterpolatedFlowVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "GetBilinearInterpolatedFlowVector", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::Flow_Field_Agent_eventGetBilinearInterpolatedFlowVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::Flow_Field_Agent_eventGetBilinearInterpolatedFlowVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execGetBilinearInterpolatedFlowVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetBilinearInterpolatedFlowVector(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function GetBilinearInterpolatedFlowVector

// Begin Class AFlow_Field_Agent Function GetNearbyAgents
struct Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics
{
	struct Flow_Field_Agent_eventGetNearbyAgents_Parms
	{
		TArray<AFlow_Field_Agent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFlow_Field_Agent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventGetNearbyAgents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "GetNearbyAgents", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::Flow_Field_Agent_eventGetNearbyAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::Flow_Field_Agent_eventGetNearbyAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execGetNearbyAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AFlow_Field_Agent*>*)Z_Param__Result=P_THIS->GetNearbyAgents();
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function GetNearbyAgents

// Begin Class AFlow_Field_Agent Function GetOccupiedGridCells
struct Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics
{
	struct Flow_Field_Agent_eventGetOccupiedGridCells_Parms
	{
		FVector WorldLocation;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField Agent" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventGetOccupiedGridCells_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventGetOccupiedGridCells_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "GetOccupiedGridCells", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::Flow_Field_Agent_eventGetOccupiedGridCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::Flow_Field_Agent_eventGetOccupiedGridCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execGetOccupiedGridCells)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetOccupiedGridCells(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function GetOccupiedGridCells

// Begin Class AFlow_Field_Agent Function IsVelocityInObstacle
struct Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics
{
	struct Flow_Field_Agent_eventIsVelocityInObstacle_Parms
	{
		FVector2D Velocity;
		FVelocityObstacle Obstacle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO2" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obstacle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Obstacle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventIsVelocityInObstacle_Parms, Velocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_Obstacle = { "Obstacle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventIsVelocityInObstacle_Parms, Obstacle), Z_Construct_UScriptStruct_FVelocityObstacle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obstacle_MetaData), NewProp_Obstacle_MetaData) }; // 3202330558
void Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Flow_Field_Agent_eventIsVelocityInObstacle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Flow_Field_Agent_eventIsVelocityInObstacle_Parms), &Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_Obstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "IsVelocityInObstacle", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::Flow_Field_Agent_eventIsVelocityInObstacle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::Flow_Field_Agent_eventIsVelocityInObstacle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execIsVelocityInObstacle)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Velocity);
	P_GET_STRUCT_REF(FVelocityObstacle,Z_Param_Out_Obstacle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVelocityInObstacle(Z_Param_Out_Velocity,Z_Param_Out_Obstacle);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function IsVelocityInObstacle

// Begin Class AFlow_Field_Agent Function SetFlowField
struct Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics
{
	struct Flow_Field_Agent_eventSetFlowField_Parms
	{
		AFlow_Field* NewFlowField;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField Agent" },
		{ "Comment", "// \xe5\x85\xac\xe5\x85\xb1\xe6\x8e\xa5\xe5\x8f\xa3\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "\xe5\x85\xac\xe5\x85\xb1\xe6\x8e\xa5\xe5\x8f\xa3" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFlowField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::NewProp_NewFlowField = { "NewFlowField", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_Agent_eventSetFlowField_Parms, NewFlowField), Z_Construct_UClass_AFlow_Field_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::NewProp_NewFlowField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "SetFlowField", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::Flow_Field_Agent_eventSetFlowField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::Flow_Field_Agent_eventSetFlowField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execSetFlowField)
{
	P_GET_OBJECT(AFlow_Field,Z_Param_NewFlowField);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlowField(Z_Param_NewFlowField);
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function SetFlowField

// Begin Class AFlow_Field_Agent Function UpdateMeshScale
struct Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField Agent" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "UpdateMeshScale", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execUpdateMeshScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeshScale();
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function UpdateMeshScale

// Begin Class AFlow_Field_Agent Function UpdateMovementDirection
struct Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField Agent" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field_Agent, nullptr, "UpdateMovementDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field_Agent::execUpdateMovementDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovementDirection();
	P_NATIVE_END;
}
// End Class AFlow_Field_Agent Function UpdateMovementDirection

// Begin Class AFlow_Field_Agent
void AFlow_Field_Agent::StaticRegisterNativesAFlow_Field_Agent()
{
	UClass* Class = AFlow_Field_Agent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateRVO2Velocity", &AFlow_Field_Agent::execCalculateRVO2Velocity },
		{ "ComputeVelocityObstacle", &AFlow_Field_Agent::execComputeVelocityObstacle },
		{ "FindBestVelocity", &AFlow_Field_Agent::execFindBestVelocity },
		{ "GetBilinearInterpolatedFlowVector", &AFlow_Field_Agent::execGetBilinearInterpolatedFlowVector },
		{ "GetNearbyAgents", &AFlow_Field_Agent::execGetNearbyAgents },
		{ "GetOccupiedGridCells", &AFlow_Field_Agent::execGetOccupiedGridCells },
		{ "IsVelocityInObstacle", &AFlow_Field_Agent::execIsVelocityInObstacle },
		{ "SetFlowField", &AFlow_Field_Agent::execSetFlowField },
		{ "UpdateMeshScale", &AFlow_Field_Agent::execUpdateMeshScale },
		{ "UpdateMovementDirection", &AFlow_Field_Agent::execUpdateMovementDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlow_Field_Agent);
UClass* Z_Construct_UClass_AFlow_Field_Agent_NoRegister()
{
	return AFlow_Field_Agent::StaticClass();
}
struct Z_Construct_UClass_AFlow_Field_Agent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Flow_Field_Agent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Agent Settings" },
		{ "Comment", "// \xe5\x8d\x95\xe4\xbd\x8d\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Agent Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateDirectionInterval_MetaData[] = {
		{ "Category", "Agent Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugStrings_MetaData[] = {
		{ "Category", "Agent Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborRadius_MetaData[] = {
		{ "Category", "RVO2 Settings" },
		{ "Comment", "// RVO2\xe9\x81\xbf\xe9\x9a\x9c\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "RVO2\xe9\x81\xbf\xe9\x9a\x9c\xe5\x8f\x82\xe6\x95\xb0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeHorizon_MetaData[] = {
		{ "Category", "RVO2 Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "RVO2 Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRVO2_MetaData[] = {
		{ "Category", "RVO2 Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRVO2Debug_MetaData[] = {
		{ "Category", "RVO2 Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowField_MetaData[] = {
		{ "Category", "Agent Settings" },
		{ "Comment", "// \xe6\xb5\x81\xe5\x9c\xba\xe5\xbc\x95\xe7\x94\xa8\n" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "\xe6\xb5\x81\xe5\x9c\xba\xe5\xbc\x95\xe7\x94\xa8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// \xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flow_Field_Agent.h" },
		{ "ToolTip", "\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateDirectionInterval;
	static void NewProp_bShowDebugStrings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugStrings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHorizon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static void NewProp_bEnableRVO2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRVO2;
	static void NewProp_bShowRVO2Debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRVO2Debug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlowField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlow_Field_Agent_CalculateRVO2Velocity, "CalculateRVO2Velocity" }, // 744996164
		{ &Z_Construct_UFunction_AFlow_Field_Agent_ComputeVelocityObstacle, "ComputeVelocityObstacle" }, // 4172563597
		{ &Z_Construct_UFunction_AFlow_Field_Agent_FindBestVelocity, "FindBestVelocity" }, // 3402676937
		{ &Z_Construct_UFunction_AFlow_Field_Agent_GetBilinearInterpolatedFlowVector, "GetBilinearInterpolatedFlowVector" }, // 3928971849
		{ &Z_Construct_UFunction_AFlow_Field_Agent_GetNearbyAgents, "GetNearbyAgents" }, // 3384344875
		{ &Z_Construct_UFunction_AFlow_Field_Agent_GetOccupiedGridCells, "GetOccupiedGridCells" }, // 1639229605
		{ &Z_Construct_UFunction_AFlow_Field_Agent_IsVelocityInObstacle, "IsVelocityInObstacle" }, // 2011915806
		{ &Z_Construct_UFunction_AFlow_Field_Agent_SetFlowField, "SetFlowField" }, // 1815440224
		{ &Z_Construct_UFunction_AFlow_Field_Agent_UpdateMeshScale, "UpdateMeshScale" }, // 2467243883
		{ &Z_Construct_UFunction_AFlow_Field_Agent_UpdateMovementDirection, "UpdateMovementDirection" }, // 1268450341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlow_Field_Agent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, AgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadius_MetaData), NewProp_AgentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_UpdateDirectionInterval = { "UpdateDirectionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, UpdateDirectionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateDirectionInterval_MetaData), NewProp_UpdateDirectionInterval_MetaData) };
void Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowDebugStrings_SetBit(void* Obj)
{
	((AFlow_Field_Agent*)Obj)->bShowDebugStrings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowDebugStrings = { "bShowDebugStrings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field_Agent), &Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowDebugStrings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugStrings_MetaData), NewProp_bShowDebugStrings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_NeighborRadius = { "NeighborRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, NeighborRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborRadius_MetaData), NewProp_NeighborRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_TimeHorizon = { "TimeHorizon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, TimeHorizon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeHorizon_MetaData), NewProp_TimeHorizon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
void Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bEnableRVO2_SetBit(void* Obj)
{
	((AFlow_Field_Agent*)Obj)->bEnableRVO2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bEnableRVO2 = { "bEnableRVO2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field_Agent), &Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bEnableRVO2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRVO2_MetaData), NewProp_bEnableRVO2_MetaData) };
void Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowRVO2Debug_SetBit(void* Obj)
{
	((AFlow_Field_Agent*)Obj)->bShowRVO2Debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowRVO2Debug = { "bShowRVO2Debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field_Agent), &Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowRVO2Debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRVO2Debug_MetaData), NewProp_bShowRVO2Debug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_FlowField = { "FlowField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, FlowField), Z_Construct_UClass_AFlow_Field_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowField_MetaData), NewProp_FlowField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field_Agent, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlow_Field_Agent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_AgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_UpdateDirectionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowDebugStrings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_NeighborRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_TimeHorizon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bEnableRVO2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_bShowRVO2Debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_FlowField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Agent_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Agent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlow_Field_Agent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flowfield_RVO2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Agent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlow_Field_Agent_Statics::ClassParams = {
	&AFlow_Field_Agent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlow_Field_Agent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Agent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Agent_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlow_Field_Agent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlow_Field_Agent()
{
	if (!Z_Registration_Info_UClass_AFlow_Field_Agent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlow_Field_Agent.OuterSingleton, Z_Construct_UClass_AFlow_Field_Agent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlow_Field_Agent.OuterSingleton;
}
template<> FLOWFIELD_RVO2_API UClass* StaticClass<AFlow_Field_Agent>()
{
	return AFlow_Field_Agent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlow_Field_Agent);
AFlow_Field_Agent::~AFlow_Field_Agent() {}
// End Class AFlow_Field_Agent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVelocityObstacle::StaticStruct, Z_Construct_UScriptStruct_FVelocityObstacle_Statics::NewStructOps, TEXT("VelocityObstacle"), &Z_Registration_Info_UScriptStruct_VelocityObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVelocityObstacle), 3202330558U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlow_Field_Agent, AFlow_Field_Agent::StaticClass, TEXT("AFlow_Field_Agent"), &Z_Registration_Info_UClass_AFlow_Field_Agent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlow_Field_Agent), 2631343128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_2008744547(TEXT("/Script/Flowfield_RVO2"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_Agent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
