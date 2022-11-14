// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CarHustle : ModuleRules
{
	public CarHustle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(new string[] { "VehicleSystemPlugin" });

        PublicDependencyModuleNames.AddRange(
                new string[] { 
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "InputCore",
                    "ChaosVehicles",
                    "PhysicsCore",
                    "OnlineSubsystem",
                    "OnlineSubsystemUtils",
                    "Voice",
                    "CoreOnline" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
