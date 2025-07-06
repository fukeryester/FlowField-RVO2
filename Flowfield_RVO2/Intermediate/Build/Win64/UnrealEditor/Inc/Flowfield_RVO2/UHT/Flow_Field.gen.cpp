// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flowfield_RVO2/Public/Flow_Field.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlow_Field() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_Agent_NoRegister();
FLOWFIELD_RVO2_API UClass* Z_Construct_UClass_AFlow_Field_NoRegister();
FLOWFIELD_RVO2_API UScriptStruct* Z_Construct_UScriptStruct_FFlowFieldCell();
UPackage* Z_Construct_UPackage__Script_Flowfield_RVO2();
// End Cross Module References

// Begin ScriptStruct FFlowFieldCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowFieldCell;
class UScriptStruct* FFlowFieldCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowFieldCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowFieldCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowFieldCell, (UObject*)Z_Construct_UPackage__Script_Flowfield_RVO2(), TEXT("FlowFieldCell"));
	}
	return Z_Registration_Info_UScriptStruct_FlowFieldCell.OuterSingleton;
}
template<> FLOWFIELD_RVO2_API UScriptStruct* StaticStruct<FFlowFieldCell>()
{
	return FFlowFieldCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowFieldCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "FlowField Cell" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObstacle_MetaData[] = {
		{ "Category", "FlowField Cell" },
		{ "Comment", "// -1\xe8\xa1\xa8\xe7\xa4\xba\xe6\x9c\xaa\xe8\xae\xbf\xe9\x97\xae\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "-1\xe8\xa1\xa8\xe7\xa4\xba\xe6\x9c\xaa\xe8\xae\xbf\xe9\x97\xae" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowVector_MetaData[] = {
		{ "Category", "FlowField Cell" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bIsObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObstacle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlowVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowFieldCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowFieldCell, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_bIsObstacle_SetBit(void* Obj)
{
	((FFlowFieldCell*)Obj)->bIsObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_bIsObstacle = { "bIsObstacle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowFieldCell), &Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_bIsObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObstacle_MetaData), NewProp_bIsObstacle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_FlowVector = { "FlowVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowFieldCell, FlowVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowVector_MetaData), NewProp_FlowVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowFieldCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_bIsObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewProp_FlowVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowFieldCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowFieldCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flowfield_RVO2,
	nullptr,
	&NewStructOps,
	"FlowFieldCell",
	Z_Construct_UScriptStruct_FFlowFieldCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowFieldCell_Statics::PropPointers),
	sizeof(FFlowFieldCell),
	alignof(FFlowFieldCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowFieldCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowFieldCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowFieldCell()
{
	if (!Z_Registration_Info_UScriptStruct_FlowFieldCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowFieldCell.InnerSingleton, Z_Construct_UScriptStruct_FFlowFieldCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowFieldCell.InnerSingleton;
}
// End ScriptStruct FFlowFieldCell

// Begin Class AFlow_Field Function CalculateObstacleRepulsionVector
struct Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics
{
	struct Flow_Field_eventCalculateObstacleRepulsionVector_Parms
	{
		FVector2D GridLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventCalculateObstacleRepulsionVector_Parms, GridLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLocation_MetaData), NewProp_GridLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventCalculateObstacleRepulsionVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::NewProp_GridLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "CalculateObstacleRepulsionVector", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::Flow_Field_eventCalculateObstacleRepulsionVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::Flow_Field_eventCalculateObstacleRepulsionVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execCalculateObstacleRepulsionVector)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->CalculateObstacleRepulsionVector(Z_Param_Out_GridLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function CalculateObstacleRepulsionVector

// Begin Class AFlow_Field Function DrawObstacleRepulsionVectors
struct Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "DrawObstacleRepulsionVectors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execDrawObstacleRepulsionVectors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawObstacleRepulsionVectors();
	P_NATIVE_END;
}
// End Class AFlow_Field Function DrawObstacleRepulsionVectors

// Begin Class AFlow_Field Function FindNearestNonObstacleLocation
struct Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics
{
	struct Flow_Field_eventFindNearestNonObstacleLocation_Parms
	{
		FVector2D GridLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventFindNearestNonObstacleLocation_Parms, GridLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLocation_MetaData), NewProp_GridLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventFindNearestNonObstacleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::NewProp_GridLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "FindNearestNonObstacleLocation", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::Flow_Field_eventFindNearestNonObstacleLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::Flow_Field_eventFindNearestNonObstacleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execFindNearestNonObstacleLocation)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->FindNearestNonObstacleLocation(Z_Param_Out_GridLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function FindNearestNonObstacleLocation

// Begin Class AFlow_Field Function GetFlowVectorAtLocation
struct Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics
{
	struct Flow_Field_eventGetFlowVectorAtLocation_Parms
	{
		FVector WorldLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGetFlowVectorAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGetFlowVectorAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "GetFlowVectorAtLocation", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::Flow_Field_eventGetFlowVectorAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::Flow_Field_eventGetFlowVectorAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execGetFlowVectorAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetFlowVectorAtLocation(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function GetFlowVectorAtLocation

// Begin Class AFlow_Field Function GridToIndex
struct Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics
{
	struct Flow_Field_eventGridToIndex_Parms
	{
		FVector2D GridLocation;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGridToIndex_Parms, GridLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLocation_MetaData), NewProp_GridLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGridToIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::NewProp_GridLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "GridToIndex", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::Flow_Field_eventGridToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::Flow_Field_eventGridToIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_GridToIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_GridToIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execGridToIndex)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GridToIndex(Z_Param_Out_GridLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function GridToIndex

// Begin Class AFlow_Field Function GridToWorld
struct Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics
{
	struct Flow_Field_eventGridToWorld_Parms
	{
		FVector2D GridLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGridToWorld_Parms, GridLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLocation_MetaData), NewProp_GridLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::NewProp_GridLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "GridToWorld", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::Flow_Field_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::Flow_Field_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execGridToWorld)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_Out_GridLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function GridToWorld

// Begin Class AFlow_Field Function IndexToGrid
struct Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics
{
	struct Flow_Field_eventIndexToGrid_Parms
	{
		int32 Index;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventIndexToGrid_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventIndexToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "IndexToGrid", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::Flow_Field_eventIndexToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::Flow_Field_eventIndexToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_IndexToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_IndexToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execIndexToGrid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->IndexToGrid(Z_Param_Index);
	P_NATIVE_END;
}
// End Class AFlow_Field Function IndexToGrid

// Begin Class AFlow_Field Function InitializeFlowField
struct Z_Construct_UFunction_AFlow_Field_InitializeFlowField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "Comment", "// \xe5\x85\xac\xe5\x85\xb1\xe6\x8e\xa5\xe5\x8f\xa3\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe5\x85\xac\xe5\x85\xb1\xe6\x8e\xa5\xe5\x8f\xa3" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_InitializeFlowField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "InitializeFlowField", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_InitializeFlowField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_InitializeFlowField_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_InitializeFlowField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_InitializeFlowField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execInitializeFlowField)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFlowField();
	P_NATIVE_END;
}
// End Class AFlow_Field Function InitializeFlowField

// Begin Class AFlow_Field Function IsGridIndexValid
struct Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics
{
	struct Flow_Field_eventIsGridIndexValid_Parms
	{
		FVector2D GridLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventIsGridIndexValid_Parms, GridLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLocation_MetaData), NewProp_GridLocation_MetaData) };
void Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Flow_Field_eventIsGridIndexValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Flow_Field_eventIsGridIndexValid_Parms), &Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_GridLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "IsGridIndexValid", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::Flow_Field_eventIsGridIndexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::Flow_Field_eventIsGridIndexValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_IsGridIndexValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_IsGridIndexValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execIsGridIndexValid)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGridIndexValid(Z_Param_Out_GridLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function IsGridIndexValid

// Begin Class AFlow_Field Function IsLocationValid
struct Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics
{
	struct Flow_Field_eventIsLocationValid_Parms
	{
		FVector WorldLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventIsLocationValid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
void Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Flow_Field_eventIsLocationValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Flow_Field_eventIsLocationValid_Parms), &Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "IsLocationValid", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::Flow_Field_eventIsLocationValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::Flow_Field_eventIsLocationValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_IsLocationValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_IsLocationValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execIsLocationValid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocationValid(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function IsLocationValid

// Begin Class AFlow_Field Function UpdateFlowField
struct Z_Construct_UFunction_AFlow_Field_UpdateFlowField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_UpdateFlowField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "UpdateFlowField", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_UpdateFlowField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_UpdateFlowField_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlow_Field_UpdateFlowField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_UpdateFlowField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execUpdateFlowField)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFlowField();
	P_NATIVE_END;
}
// End Class AFlow_Field Function UpdateFlowField

// Begin Class AFlow_Field Function WorldToGrid
struct Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics
{
	struct Flow_Field_eventWorldToGrid_Parms
	{
		FVector WorldLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlowField" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventWorldToGrid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flow_Field_eventWorldToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlow_Field, nullptr, "WorldToGrid", nullptr, nullptr, Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::Flow_Field_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::Flow_Field_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlow_Field_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlow_Field_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlow_Field::execWorldToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AFlow_Field Function WorldToGrid

// Begin Class AFlow_Field
void AFlow_Field::StaticRegisterNativesAFlow_Field()
{
	UClass* Class = AFlow_Field::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateObstacleRepulsionVector", &AFlow_Field::execCalculateObstacleRepulsionVector },
		{ "DrawObstacleRepulsionVectors", &AFlow_Field::execDrawObstacleRepulsionVectors },
		{ "FindNearestNonObstacleLocation", &AFlow_Field::execFindNearestNonObstacleLocation },
		{ "GetFlowVectorAtLocation", &AFlow_Field::execGetFlowVectorAtLocation },
		{ "GridToIndex", &AFlow_Field::execGridToIndex },
		{ "GridToWorld", &AFlow_Field::execGridToWorld },
		{ "IndexToGrid", &AFlow_Field::execIndexToGrid },
		{ "InitializeFlowField", &AFlow_Field::execInitializeFlowField },
		{ "IsGridIndexValid", &AFlow_Field::execIsGridIndexValid },
		{ "IsLocationValid", &AFlow_Field::execIsLocationValid },
		{ "UpdateFlowField", &AFlow_Field::execUpdateFlowField },
		{ "WorldToGrid", &AFlow_Field::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlow_Field);
UClass* Z_Construct_UClass_AFlow_Field_NoRegister()
{
	return AFlow_Field::StaticClass();
}
struct Z_Construct_UClass_AFlow_Field_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Flow_Field.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "Comment", "// \xe6\xb5\x81\xe5\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe6\xb5\x81\xe5\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDebugging_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugStrings_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableObstacleDetection_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDetectionRadius_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAggressiveObstacleDetection_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "Comment", "// \xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8d\x8a\xe5\xbe\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe7\xbd\x91\xe6\xa0\xbc\xe5\xa4\xa7\xe5\xb0\x8f\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8d\x8a\xe5\xbe\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe7\xbd\x91\xe6\xa0\xbc\xe5\xa4\xa7\xe5\xb0\x8f\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableObstacleRepulsion_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe6\xbf\x80\xe8\xbf\x9b\xe7\x9a\x84\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe6\xa3\x80\xe6\xb5\x8b\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf\xe5\x8f\xaa\xe6\x9c\x89\xe4\xb8\x80\xe7\x82\xb9\xe7\x82\xb9\xe9\x9a\x9c\xe7\xa2\x8d\xe4\xb9\x9f\xe6\xa0\x87\xe8\xae\xb0\xe4\xb8\xba\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\xbf\x80\xe8\xbf\x9b\xe7\x9a\x84\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe6\xa3\x80\xe6\xb5\x8b\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf\xe5\x8f\xaa\xe6\x9c\x89\xe4\xb8\x80\xe7\x82\xb9\xe7\x82\xb9\xe9\x9a\x9c\xe7\xa2\x8d\xe4\xb9\x9f\xe6\xa0\x87\xe8\xae\xb0\xe4\xb8\xba\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleRepulsionStrength_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "Comment", "// \xe5\x90\xaf\xe7\x94\xa8\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe5\x8f\x8d\xe5\x90\x91\xe5\x90\x91\xe9\x87\x8f\xe5\xa1\xab\xe5\x85\x85\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe5\x90\xaf\xe7\x94\xa8\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe5\x8f\x8d\xe5\x90\x91\xe5\x90\x91\xe9\x87\x8f\xe5\xa1\xab\xe5\x85\x85" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowFieldAgentClass_MetaData[] = {
		{ "Category", "FlowField Settings" },
		{ "Comment", "// \xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe5\x8f\x8d\xe5\x90\x91\xe5\x90\x91\xe9\x87\x8f\xe5\xbc\xba\xe5\xba\xa6\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x89\xa9\xe5\x8f\x8d\xe5\x90\x91\xe5\x90\x91\xe9\x87\x8f\xe5\xbc\xba\xe5\xba\xa6" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowFieldGrid_MetaData[] = {
		{ "Category", "FlowField Data" },
		{ "Comment", "// \xe6\xb5\x81\xe5\x9c\xba\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/Flow_Field.h" },
		{ "ToolTip", "\xe6\xb5\x81\xe5\x9c\xba\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static void NewProp_bIsDebugging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDebugging;
	static void NewProp_bShowDebugStrings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugStrings;
	static void NewProp_bEnableObstacleDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableObstacleDetection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDetectionRadius;
	static void NewProp_bUseAggressiveObstacleDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAggressiveObstacleDetection;
	static void NewProp_bEnableObstacleRepulsion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableObstacleRepulsion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleRepulsionStrength;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlowFieldAgentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlowFieldGrid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FlowFieldGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlow_Field_CalculateObstacleRepulsionVector, "CalculateObstacleRepulsionVector" }, // 3375195847
		{ &Z_Construct_UFunction_AFlow_Field_DrawObstacleRepulsionVectors, "DrawObstacleRepulsionVectors" }, // 2621077151
		{ &Z_Construct_UFunction_AFlow_Field_FindNearestNonObstacleLocation, "FindNearestNonObstacleLocation" }, // 308191250
		{ &Z_Construct_UFunction_AFlow_Field_GetFlowVectorAtLocation, "GetFlowVectorAtLocation" }, // 2125400357
		{ &Z_Construct_UFunction_AFlow_Field_GridToIndex, "GridToIndex" }, // 2548115010
		{ &Z_Construct_UFunction_AFlow_Field_GridToWorld, "GridToWorld" }, // 1773004166
		{ &Z_Construct_UFunction_AFlow_Field_IndexToGrid, "IndexToGrid" }, // 3143492167
		{ &Z_Construct_UFunction_AFlow_Field_InitializeFlowField, "InitializeFlowField" }, // 3846297152
		{ &Z_Construct_UFunction_AFlow_Field_IsGridIndexValid, "IsGridIndexValid" }, // 4148096837
		{ &Z_Construct_UFunction_AFlow_Field_IsLocationValid, "IsLocationValid" }, // 834868289
		{ &Z_Construct_UFunction_AFlow_Field_UpdateFlowField, "UpdateFlowField" }, // 3984562930
		{ &Z_Construct_UFunction_AFlow_Field_WorldToGrid, "WorldToGrid" }, // 375058128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlow_Field>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, UpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInterval_MetaData), NewProp_UpdateInterval_MetaData) };
void Z_Construct_UClass_AFlow_Field_Statics::NewProp_bIsDebugging_SetBit(void* Obj)
{
	((AFlow_Field*)Obj)->bIsDebugging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_bIsDebugging = { "bIsDebugging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field), &Z_Construct_UClass_AFlow_Field_Statics::NewProp_bIsDebugging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDebugging_MetaData), NewProp_bIsDebugging_MetaData) };
void Z_Construct_UClass_AFlow_Field_Statics::NewProp_bShowDebugStrings_SetBit(void* Obj)
{
	((AFlow_Field*)Obj)->bShowDebugStrings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_bShowDebugStrings = { "bShowDebugStrings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field), &Z_Construct_UClass_AFlow_Field_Statics::NewProp_bShowDebugStrings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugStrings_MetaData), NewProp_bShowDebugStrings_MetaData) };
void Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleDetection_SetBit(void* Obj)
{
	((AFlow_Field*)Obj)->bEnableObstacleDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleDetection = { "bEnableObstacleDetection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field), &Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableObstacleDetection_MetaData), NewProp_bEnableObstacleDetection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_ObstacleDetectionRadius = { "ObstacleDetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, ObstacleDetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDetectionRadius_MetaData), NewProp_ObstacleDetectionRadius_MetaData) };
void Z_Construct_UClass_AFlow_Field_Statics::NewProp_bUseAggressiveObstacleDetection_SetBit(void* Obj)
{
	((AFlow_Field*)Obj)->bUseAggressiveObstacleDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_bUseAggressiveObstacleDetection = { "bUseAggressiveObstacleDetection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field), &Z_Construct_UClass_AFlow_Field_Statics::NewProp_bUseAggressiveObstacleDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAggressiveObstacleDetection_MetaData), NewProp_bUseAggressiveObstacleDetection_MetaData) };
void Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleRepulsion_SetBit(void* Obj)
{
	((AFlow_Field*)Obj)->bEnableObstacleRepulsion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleRepulsion = { "bEnableObstacleRepulsion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlow_Field), &Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleRepulsion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableObstacleRepulsion_MetaData), NewProp_bEnableObstacleRepulsion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_ObstacleRepulsionStrength = { "ObstacleRepulsionStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, ObstacleRepulsionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleRepulsionStrength_MetaData), NewProp_ObstacleRepulsionStrength_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldAgentClass = { "FlowFieldAgentClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, FlowFieldAgentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFlow_Field_Agent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowFieldAgentClass_MetaData), NewProp_FlowFieldAgentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldGrid_Inner = { "FlowFieldGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowFieldCell, METADATA_PARAMS(0, nullptr) }; // 984787565
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldGrid = { "FlowFieldGrid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlow_Field, FlowFieldGrid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowFieldGrid_MetaData), NewProp_FlowFieldGrid_MetaData) }; // 984787565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlow_Field_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_UpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_bIsDebugging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_bShowDebugStrings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_ObstacleDetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_bUseAggressiveObstacleDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_bEnableObstacleRepulsion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_ObstacleRepulsionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldAgentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldGrid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlow_Field_Statics::NewProp_FlowFieldGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlow_Field_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flowfield_RVO2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlow_Field_Statics::ClassParams = {
	&AFlow_Field::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlow_Field_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlow_Field_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlow_Field_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlow_Field()
{
	if (!Z_Registration_Info_UClass_AFlow_Field.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlow_Field.OuterSingleton, Z_Construct_UClass_AFlow_Field_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlow_Field.OuterSingleton;
}
template<> FLOWFIELD_RVO2_API UClass* StaticClass<AFlow_Field>()
{
	return AFlow_Field::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlow_Field);
AFlow_Field::~AFlow_Field() {}
// End Class AFlow_Field

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowFieldCell::StaticStruct, Z_Construct_UScriptStruct_FFlowFieldCell_Statics::NewStructOps, TEXT("FlowFieldCell"), &Z_Registration_Info_UScriptStruct_FlowFieldCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowFieldCell), 984787565U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlow_Field, AFlow_Field::StaticClass, TEXT("AFlow_Field"), &Z_Registration_Info_UClass_AFlow_Field, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlow_Field), 749833583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_3197532188(TEXT("/Script/Flowfield_RVO2"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Flowfield_RVO2_Source_Flowfield_RVO2_Public_Flow_Field_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
