// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorVelocidad.h"

// Sets default values
ADecoradorVelocidad::ADecoradorVelocidad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AumentoVelocidad = 500.0f;
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
		// Obtener la posición actual del zombie decorado
		FVector PosicionActual = DecoratedZombie->GetActorLocation();

		// Calcular la posición objetivo en el eje Z (por ejemplo, aumentar la altura)
		FVector UbicacionObjetivo(PosicionActual.X, PosicionActual.Y + AumentoVelocidad, PosicionActual.Z);

		// Interpolar suavemente hacia la posición objetivo con una velocidad constante
		FVector NuevaPosicion = FMath::VInterpConstantTo(PosicionActual, UbicacionObjetivo, GetWorld()->GetDeltaSeconds(), AumentoVelocidad);

		// Establecer la nueva posición del zombie decorado
		DecoratedZombie->SetActorLocation(NuevaPosicion);
	}


}

void ADecoradorVelocidad::DecorarZombie(AActor* Zombie)
{
	if (Zombie)
	{
		DecoratedZombie = Zombie;
		UE_LOG(LogTemp, Warning, TEXT("Decorador VELOCIDAD aplicado con éxito"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Intento de aplicar Decorador VELOCIDAD nulo"));
	}
}



