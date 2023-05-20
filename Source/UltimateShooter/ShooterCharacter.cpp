// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"


// Sets default values
AShooterCharacter::AShooterCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* Create a spring arm (pull ub towards the character if there is a collision) */
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	// SpringArmComponent->SetupAttachment(RootComponent.Get());
	// SpringArmComponent2->TargetArmLength = 300.0f;  // The camera follows at this distance behind the Character
	// SpringArmComponent2->bUsePawnControlRotation = true;  // Rotate the arm based on the Controller
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	FString TestString;
	UE_LOG(LogTemp, Warning, TEXT("%s"), *TestString);
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

