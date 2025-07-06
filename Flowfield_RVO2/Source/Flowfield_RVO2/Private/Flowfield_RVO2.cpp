// Copyright Epic Games, Inc. All Rights Reserved.

#include "Flowfield_RVO2.h"

#define LOCTEXT_NAMESPACE "FFlowfield_RVO2Module"

void FFlowfield_RVO2Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFlowfield_RVO2Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFlowfield_RVO2Module, Flowfield_RVO2)