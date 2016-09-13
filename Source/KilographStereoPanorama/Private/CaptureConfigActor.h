#pragma once

#include "GameFramework/Actor.h"
#include "CaptureConfigActor.generated.h"

UCLASS()
class  ACaptureConfigActor : public AActor
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CaptureSettings)
	bool renderEyesToSameImage = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CaptureSettings)
	TArray<AActor *> onlyRenderTheseActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CaptureSettings)
	TArray<AActor *> hiddenActors;
};