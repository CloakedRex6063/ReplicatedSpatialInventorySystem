// Copyright 2021 Glitch Games.


#include "Character/BaseCharacterC.h"
#include "CustomCharacterMovementComponent.h"

// Sets default values
ABaseCharacterC::ABaseCharacterC(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCustomCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacterC::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABaseCharacterC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacterC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacterC::PhysNetCustom_Implementation(float DeltaTime, int32 Iterations)
{
	//This is made to be overridable in a c++ class. 
}

UCustomCharacterMovementComponent* ABaseCharacterC::GetMultiplayerMovementComponent() const
{
	UCustomCharacterMovementComponent* CustomCharacterMovementComponent = static_cast<UCustomCharacterMovementComponent*>(GetCharacterMovement());
	return CustomCharacterMovementComponent;
}

void ABaseCharacterC::OnMovementUpdatedCustom_Implementation(float DeltaSeconds, const FVector& OldLocation,
	const FVector& OldVelocity)
{
	//This is made to be overridable in a c++ class.
}




