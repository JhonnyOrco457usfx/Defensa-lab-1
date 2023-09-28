// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include <random>

// Sets default values
AZombie::AZombie()
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
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


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



	//-----------------------------------------------------

		//Generar un numero aleatorio
	// Configura el generador de números aleatorios
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 10);

	// Genera un número aleatorio entre 1 y 10
	int NumeroAleatorio = dis(gen);

	// Obtener posicion en X y Y
	FVector PosicionActual = GetActorLocation();
	float PosicionActualX = PosicionActual.X;
	float PosicionActualY = PosicionActual.Y;

	if (PosicionActualY == -550)
	{
		PosicionAnteriorY = 0.0;
	}


	if (DesplazamientoAcumulado >= grilla)
	{
		PosicionActual.X = -550 + NumeroAleatorio * grilla;
		SetActorLocation(PosicionActual);
		DesplazamientoAcumulado = 0.0;
	}

	PosicionActual = GetActorLocation();
	//Animar movimiento hacia x=0
	FVector UbicacionObjetivo = FVector(PosicionActualX, 550.0f, 100.0f);
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
	}

	DesplazamientoAcumulado += DeltaMove;


}

