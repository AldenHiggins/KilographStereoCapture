// Copyright 2015 Kite & Lightning.  All rights reserved.

#include "StereoPanoramaPrivatePCH.h"


TSharedPtr<FKilographStereoPanoramaManager> StereoPanoramaManager;


void FKilographStereoPanoramaModule::StartupModule()
{
	StereoPanoramaManager = MakeShareable(new FKilographStereoPanoramaManager());
}


void FKilographStereoPanoramaModule::ShutdownModule()
{
	if (StereoPanoramaManager.IsValid())
	{
		StereoPanoramaManager.Reset();
	}
}


TSharedPtr<FKilographStereoPanoramaManager> FKilographStereoPanoramaModule::Get()
{
	check(StereoPanoramaManager.IsValid());
	return StereoPanoramaManager;
}


IMPLEMENT_MODULE(FKilographStereoPanoramaModule, KilographStereoPanorama)
