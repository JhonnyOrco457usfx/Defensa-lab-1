// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorVelocidad.h"

// Sets default values
ADecoradorVelocidad::ADecoradorVelocidad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AumentoVelocidad = 2.0f;
}

// Called when the game starts or when spawned
void ADecoradorVelocidad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorVelocidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorVelocidad::movimiento()
{
	if (DecoratedZombie)
	{
		FVector NewLocation = DecoratedZombie->GetActorLocation();
		NewLocation.X += AumentoVelocidad; // Aumento de velocidad en el eje X
		DecoratedZombie->SetActorLocation(NewLocation);
	}
}

void ADecoradorVelocidad::DecorarZombie(AActor* Zombie)
{
	DecoratedZombie = Zombie;
}

