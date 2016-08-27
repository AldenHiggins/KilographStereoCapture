// Copyright 2015 Kite & Lightning.  All rights reserved.

namespace UnrealBuildTool.Rules
{
	public class KilographStereoPanorama : ModuleRules
	{
		public KilographStereoPanorama( TargetInfo Target )
		{
			PrivateIncludePaths.AddRange(
				new string[] {
                    "Runtime/KilographStereoPanorama/Private",
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"ImageWrapper",
					"InputCore",
					"RenderCore",
					"ShaderCore",
					"RHI",
					"Slate",
				}
			);
		}
	}
}