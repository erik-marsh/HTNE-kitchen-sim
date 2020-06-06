// Fill out your copyright notice in the Description page of Project Settings.


#include "TextBox.h"

// Sets default values
ATextBox::ATextBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = VisualMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	if (PlaneVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(PlaneVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		VisualMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	}

	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
	TextComponent->SetupAttachment(RootComponent);
	TextComponent->SetRelativeLocation(FVector(-26.0f, 48.5f, 0.01f));
	TextComponent->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	FColor color;
	color.A = 1.0f;
	color.R = 0.9f;
	color.B = 0.9f;
	color.G = 0.9f;
	TextComponent->TextRenderColor = color;
}

// Called when the game starts or when spawned
void ATextBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATextBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

