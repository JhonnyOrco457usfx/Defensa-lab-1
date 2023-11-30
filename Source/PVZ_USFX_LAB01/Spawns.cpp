// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawns.h"
#include "Zombie.h"


// Sets default values
ASpawns::ASpawns()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	tiempoTranscurrido = 0.0f;
	posicion = 0.0f;   //esto es para las plantas creo
	posicionX = -550.0f;
	posicionY = 550.0f;
	SaltarDecorator = nullptr; // Inicializa la referencia a nullptr
	VelocidadDecorator = nullptr;
}

// Called when the game starts or when spawned
void ASpawns::BeginPlay()
{
	Super::BeginPlay();


	/*/---------------------------------------------------*/
	for (int32 i = 0; i < 15; i++)
	{

		// Instancia la planta
		APlant* NewPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), FVector(posicionX + i * grilla, posicionY, 100), FRotator::ZeroRotator);

		// Agrega la planta al TMap
		PlantMap.Add(i, NewPlant);
	}


	// Instanciando zombie
	Zombie1 = GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass(), FVector(-550.0f+grilla*6, -550.0f, 100.0f), FRotator::ZeroRotator);
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


	

	/*
	// Aplica el decorador después de 4 segundos y asegúrate de hacerlo solo una vez
	if (tiempoTranscurrido > 8.0f && estadoSaltar == true && !SaltarDecorator)
	{
		// Instancia el decorador de salto
		SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
		SaltarDecorator->DecorarZombie(Zombie1);

		estadoSaltar = false; // Asegura que la decoración se aplique solo una vez
	}

	// Mueve el decorador si está presente
	if (SaltarDecorator)
	{
		SaltarDecorator->movimiento();
	}

	// Verifica si ha pasado un tiempo suficiente para quitar el decorador
	if (SaltarDecorator && tiempoTranscurrido > 20.0f)
	{
		// Destruye el decorador
		SaltarDecorator->Destroy();
		SaltarDecorator = nullptr; // Establece la referencia a nullptr
	}
	*/

	tiempoTranscurrido += DeltaTime;

	/*
	if (tiempoTranscurrido >= 2.0f && tiempoTranscurrido<=6.0f)
		DecorarSaltar(Zombie1);
	if (tiempoTranscurrido > 6.0f && tiempoTranscurrido<=9.0f)
		EliminarDecorarSaltar(Zombie1);
	*/

	if (tiempoTranscurrido > 5.0f && tiempoTranscurrido <= 8.0f)
		DecorarVelocidad(Zombie1);
	if (tiempoTranscurrido > 8.0f)
		EliminarDecorarVelocidad(Zombie1);

}


void ASpawns::DecorarSaltar(AZombieNormal* Zombie)
{
	if (estadoDecoradorSaltar==false && SaltarDecorator==nullptr)
	{
		// Instancia el decorador de salto
		SaltarDecorator = GetWorld()->SpawnActor<ADecoradorSaltar>(ADecoradorSaltar::StaticClass());
		SaltarDecorator->DecorarZombie(Zombie);

		estadoDecoradorSaltar = true; // Asegura que la decoración se aplique solo una vez
	}
	if (SaltarDecorator != nullptr)
	{
		SaltarDecorator->movimiento();
	}
}

void ASpawns::EliminarDecorarSaltar(AZombieNormal* Zombie)
{
	if (SaltarDecorator!= nullptr)
	{
		// Destruye el decorador
		SaltarDecorator->Destroy();
		SaltarDecorator = nullptr; // Establece la referencia a nullptr
		estadoDecoradorSaltar = false;
	}
}

void ASpawns::DecorarVelocidad(AZombieNormal* Zombie)
{
	if (estadoDecoradorVelocidad == false && VelocidadDecorator == nullptr)
	{
		// Instancia el decorador de salto
		VelocidadDecorator = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass());
		VelocidadDecorator->DecorarZombie(Zombie);

		estadoDecoradorVelocidad = true; // Asegura que la decoración se aplique solo una vez
	}
	if (VelocidadDecorator != nullptr)
	{
		VelocidadDecorator->movimiento();
	}
}

void ASpawns::EliminarDecorarVelocidad(AZombieNormal* Zombie)
{
	if (VelocidadDecorator != nullptr)
	{
		// Destruye el decorador
		VelocidadDecorator->Destroy();
		VelocidadDecorator = nullptr; // Establece la referencia a nullptr
		estadoDecoradorVelocidad = false;
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
