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
	/*
	// Obtener posicion en X
	FVector Posicion = GetActorLocation();
	float PosicionX = Posicion.X;

	//Animar movimiento hacia x=0
	FVector UbicacionObjetivo = FVector(PosicionX, 550.0f, 100.0f);
	FVector Direccion = (UbicacionObjetivo - this->GetActorLocation()).GetSafeNormal();
	float DistanciaObjetivo = FVector::Dist(UbicacionObjetivo, this->GetActorLocation());
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaObjetivo)
	{
		this->SetActorLocation(UbicacionObjetivo); //Actualiza instantaneamente la posicion del zombie a (UbicacionObjetivo)
	}
	else
	{
		this->AddActorWorldOffset(Direccion * DeltaMove); //Suma (Direccion * DeltaMove) a la posicion actual del zombie
	}*/


	// Lógica de movimiento del zombie base
	FVector NewLocation = GetActorLocation();
	NewLocation.X += Velocidad; // Puedes ajustar la velocidad base
	SetActorLocation(NewLocation);
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

	

}

