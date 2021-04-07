// Copyright 2018 Devlin Willis (ImmutableLambda). All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class BlueprintQuaternionLibrary : ModuleRules
{
	public BlueprintQuaternionLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));			
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
		});
	}
}
