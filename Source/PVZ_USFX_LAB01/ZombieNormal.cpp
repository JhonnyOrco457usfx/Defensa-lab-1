// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieNormal.h"

// Sets default values
AZombieNormal::AZombieNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;




	//Cambiando apariencia
	AspectoZombie = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Aspecto Zombie"));
	RootComponent = AspectoZombie;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshZombie1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	AspectoZombie->SetStaticMesh(MeshZombie1.Object);

	Velocidad = 50.0f;


	tiempoAcumulado = 0.0;
	tiempoAcumulado = 0.0;
	DesplazamientoAcumulado = 0.0;

	DecoratedZombie = this;
}

void AZombieNormal::movimiento()
{
	
	// Obtener la posición actual del zombie
	FVector PosicionActual = GetActorLocation();

	// Calcular la posición objetivo en el eje X
	FVector UbicacionObjetivo(PosicionActual.X, PosicionActual.Y+Velocidad, PosicionActual.Z);

	// Interpolar suavemente hacia la posición objetivo con una velocidad constante
	FVector NuevaPosicion = FMath::VInterpConstantTo(PosicionActual, UbicacionObjetivo, GetWorld()->GetDeltaSeconds(), Velocidad);

	// Establecer la nueva posición del zombie
	SetActorLocation(NuevaPosicion);
}

void AZombieNormal::DecorarZombie(AActor* Zombie)
{
}

// Called when the game starts or when spawned
void AZombieNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombieNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	movimiento();

	for (IInterfazZombie* Decorador : Decoradores)
	{
		// Llama al método de movimiento de cada decorador
		if (Decorador)
		{
			Decorador->movimiento();
		}
	}
}
