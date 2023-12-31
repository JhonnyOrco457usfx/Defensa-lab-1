// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API AZombie : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//Cambiando apariencia
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* AspectoZombie;

	//Para ir a x=0
	float Velocidad;
	float grilla = 126.0;

	// Lab
	float tiempoAcumulado;
	float DesplazamientoAcumulado;
	float PosicionAnteriorY;

	//
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

