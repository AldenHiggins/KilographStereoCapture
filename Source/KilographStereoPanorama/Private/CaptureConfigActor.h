#pragma once

#include "GameFramework/Actor.h"
#include "CaptureConfigActor.generated.h"

UCLASS()
class  ACaptureConfigActor : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CaptureSettings)
	float exposureBias;
};