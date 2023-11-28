// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorSaltar.h"

// Sets default values
ADecoradorSaltar::ADecoradorSaltar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SaltoAltura = 100.0f;

}

// Called when the game starts or when spawned
void ADecoradorSaltar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorSaltar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorSaltar::DecorarZombie(AActor* Zombie)
{
    DecoratedZombie = Zombie;
}

void ADecoradorSaltar::movimiento()
{
    // Lógica de movimiento específica del decorador saltar
    if (DecoratedZombie)
    {
        FVector NewLocation = DecoratedZombie->GetActorLocation();
        NewLocation.Z += SaltoAltura;
        DecoratedZombie->SetActorLocation(NewLocation);
    }
}

