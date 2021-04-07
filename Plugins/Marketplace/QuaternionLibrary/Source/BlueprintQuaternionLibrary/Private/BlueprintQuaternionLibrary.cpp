// Copyright 2018 Devlin Willis (ImmutableLambda). All Rights Reserved.

#include "BlueprintQuaternionLibrary.h"

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IBlueprintQuaternionLibrary.h"

class FBlueprintQuaternionLibrary : public IBlueprintQuaternionLibrary
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FBlueprintQuaternionLibrary, BlueprintQuaternionLibrary)

void FBlueprintQuaternionLibrary::StartupModule()
{
}


void FBlueprintQuaternionLibrary::ShutdownModule()
{
}