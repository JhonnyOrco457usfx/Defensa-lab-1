// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfazZombie.h"
#include "DecoradorVelocidad.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API ADecoradorVelocidad : public AActor, public IInterfazZombie
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorVelocidad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	virtual void movimiento() override;
	virtual void DecorarZombie(AActor* Zombie) override;
private:
	AActor* DecoratedZombie;
	float AumentoVelocidad;

};
