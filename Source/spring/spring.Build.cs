// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class spring : ModuleRules
{
	public spring(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.NoPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
