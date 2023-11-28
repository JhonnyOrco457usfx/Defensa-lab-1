// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfazZombie.h"
#include "DecoradorSaltar.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API ADecoradorSaltar : public AActor, public IInterfazZombie
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorSaltar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void DecorarZombie(AActor* Zombie) override;
	virtual void movimiento() override;
private: 
	AActor* DecoratedZombie;
	float SaltoAltura;
};
