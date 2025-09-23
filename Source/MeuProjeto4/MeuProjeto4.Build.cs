// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MeuProjeto4 : ModuleRules
{
	public MeuProjeto4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
