// Fill out your copyright notice in the Description page of Project Settings.

//#include "CollisionPlayer.h"
//#include "BasicClasses.h"


//// Sets default values for this component's properties
//UCollisionPlayer::UCollisionPlayer()
//{
//	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
//	// off to improve performance if you don't need them.
//	PrimaryComponentTick.bCanEverTick = true;
//
//	// ...
//}
//
//
//// Called when the game starts
//void UCollisionPlayer::BeginPlay()
//{
//	Super::BeginPlay();
//
//	// ...
//	
//	startPosition = GetOwner()->GetActorLocation;
//}
//
//
//// Called every frame
//void UCollisionPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//
//	AActor* owner = GetOwner();//	owner->FindComponentByClass<U>();
//}
//
//
//void UCollisionPlayer::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
//	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor->ActorHasTag("hazardous"))
//	{
//		GetOwner()->GetActorTransform().SetLocation(startPosition);
//	}
//}