// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorSaltar.h"

// Sets default values
ADecoradorSaltar::ADecoradorSaltar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SaltoAltura = 10.0f;

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
    if (Zombie)
    {
        DecoratedZombie = Zombie;
        UE_LOG(LogTemp, Warning, TEXT("Decorador SALTAR aplicado con �xito"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Intento de aplicar Decorador SALTAR nulo"));
    }
}

void ADecoradorSaltar::movimiento()
{
    // L�gica de movimiento espec�fica del decorador saltar
    if (DecoratedZombie)
    {     
        // Obtener la posici�n actual del zombie decorado
        FVector PosicionActual = DecoratedZombie->GetActorLocation();

        // Calcular la posici�n objetivo en el eje Z (por ejemplo, aumentar la altura)
        FVector UbicacionObjetivo(PosicionActual.X, PosicionActual.Y, PosicionActual.Z+SaltoAltura);

        // Interpolar suavemente hacia la posici�n objetivo con una velocidad constante
        FVector NuevaPosicion = FMath::VInterpConstantTo(PosicionActual, UbicacionObjetivo, GetWorld()->GetDeltaSeconds(), SaltoAltura);

        // Establecer la nueva posici�n del zombie decorado
        DecoratedZombie->SetActorLocation(NuevaPosicion);
    }
}

