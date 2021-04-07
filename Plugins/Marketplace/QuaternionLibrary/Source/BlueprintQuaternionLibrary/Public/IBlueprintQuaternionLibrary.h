// Copyright 2018 Devlin Willis (ImmutableLambda). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class IBlueprintQuaternionLibrary : public IModuleInterface
{

public:

	static inline IBlueprintQuaternionLibrary& Get()
	{
		return FModuleManager::LoadModuleChecked< IBlueprintQuaternionLibrary >("BlueprintQuaternionLibrary");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("BlueprintQuaternionLibrary");
	}
};