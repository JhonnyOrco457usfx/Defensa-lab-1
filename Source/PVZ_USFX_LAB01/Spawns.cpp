// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawns.h"
#include "Zombie.h"


// Sets default values
ASpawns::ASpawns()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	tiempoTranscurrido = 0.0;
	posicion = 0.0;

	SaltarDecorator = nullptr; // Inicializa la referencia a nullptr
}

// Called when the game starts or when spawned
void ASpawns::BeginPlay()
{
	Super::BeginPlay();




	posicionX = -550;
	posicionY = 550;
	/*/---------------------------------------------------*/
	for (int32 i = 0; i < 15; i++)
	{

		// Instancia la planta
		APlant* NewPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), FVector(posicionX + i * grilla, posicionY, 100), FRotator::ZeroRotator);

		// Agrega la planta al TMap
		PlantMap.Add(i, NewPlant);
	}


	//Instanciando Zombie
	//FVector LocZombie = FVector(-550 + grilla * 6, -550, 100.0);
	//AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), FVector(LocZombie), FRotator::ZeroRotator);

	Zombie1 = GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass(), FVector(posicionX, posicionY, 100), FRotator::ZeroRotator);
	//AZombieNormal* Zombie = GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass(), FVector(posicionX, posicionY, 100), FRotator::ZeroRotator);
	SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
	SaltarDecorator->DecorarZombie(Zombie1);
}





// Called every frame
void ASpawns::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//DestroyPlant(5);
	/*tiempoTranscurrido += DeltaTime;
	if (tiempoTranscurrido > 2.0)
	{
		if (posicion < 15)
		{
			DestroyPlant(posicion);
			posicion++;
		}
		tiempoTranscurrido = 0;
	}
	*/


	tiempoTranscurrido += DeltaTime;

	// Aplica el decorador después de 4 segundos y asegúrate de hacerlo solo una vez
	if (tiempoTranscurrido > 4.0f && estado == true && !SaltarDecorator)
	{
		// Instancia el decorador de salto
		SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
		SaltarDecorator->DecorarZombie(Zombie1);

		estado = false; // Asegura que la decoración se aplique solo una vez
	}

	// Mueve el decorador (debería contener la lógica de movimiento del salto)
	if (SaltarDecorator)
	{
		SaltarDecorator->movimiento();
	}

	// Verifica si ha pasado un tiempo suficiente para quitar el decorador
	if (tiempoTranscurrido > 8.0f && SaltarDecorator)
	{
		// Destruye el decorador
		SaltarDecorator->Destroy();
		SaltarDecorator = nullptr; // Establece la referencia a nullptr
	}

}

void ASpawns::DecorarZombie(AZombieNormal* Zombie)
{
	// Aplica el decorador de salto
	//ADecoradorSaltar* SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
	//SaltarDecorator->DecorarZombie(Zombie);

	/*
	// Aplica el decorador de velocidad al zombie decorado con salto
	ADecoradorVelocidad* VelocidadDecorator = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass());
	VelocidadDecorator->DecorarZombie(SaltarDecorator);
	*/



	if (!SaltarDecorator)
	{
		// Si no hay decorador, crea uno y almacena la referencia
		SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
		SaltarDecorator->DecorarZombie(Zombie);
	}

}


void ASpawns::DestroyPlant(int32 PlantIndex)
{
	if (PlantMap.Contains(PlantIndex))
	{
		APlant* PlantToRemove = PlantMap[PlantIndex];
		PlantMap.Remove(PlantIndex);
		if (PlantToRemove)
		{
			PlantToRemove->Destroy();
		}
	}
}

void ASpawns::SpawnDecoratedZombie()
{
	/*
	// Instancia un zombie normal
    AZombieNormal* ZombieBase = GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass(), FVector(0.0f, 0.0f, 100.0f), FRotator::ZeroRotator);

    // Aplica decoradores
    ADecoradorSaltar* ZombieSaltarin = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    ZombieSaltarin->DecorarZombie(ZombieBase);

    ADecoradorVelocidad* ZombieVeloz = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    ZombieVeloz->DecorarZombie(ZombieSaltarin);

	*/


	DecorarZombie(Zombie1);
}