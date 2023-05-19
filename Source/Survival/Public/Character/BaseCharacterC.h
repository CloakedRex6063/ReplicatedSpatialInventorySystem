// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacterC.generated.h"

class UCustomCharacterMovementComponent;
UCLASS()
class ABaseCharacterC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacterC(const class FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintNativeEvent)
		void PhysNetCustom(float DeltaTime, int32 Iterations);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Smooth Network Movement")
		UCustomCharacterMovementComponent* GetMultiplayerMovementComponent() const;

	UFUNCTION(BlueprintNativeEvent)
		void OnMovementUpdatedCustom(float DeltaSeconds, const FVector& OldLocation, const FVector& OldVelocity);

};

