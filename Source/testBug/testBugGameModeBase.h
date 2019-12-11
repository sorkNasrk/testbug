// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "testBugGameModeBase.generated.h"


USTRUCT(BlueprintType)
struct FCharacterInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FString, FString> ClothList;
};


UCLASS()
class TESTBUG_API AtestBugGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
};
