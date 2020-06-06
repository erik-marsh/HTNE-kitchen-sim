// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/TextRenderComponent.h>
#include <Components/StaticMeshComponent.h>
#include "TextBox.generated.h"

UCLASS()
class KITCHEN_SIM_API ATextBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATextBox();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent * VisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextBox")
	UTextRenderComponent * TextComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
