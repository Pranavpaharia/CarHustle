#pragma once

#include "PhysicsProxy/SingleParticlePhysicsProxy.h"

struct FVehiclePhysicsPhysicsInput : public Chaos::FSimCallbackInput
{
	TWeakObjectPtr<APawn> VehicleActor; //Has to be APawn to avoid circular references
	FBodyInstance* VehicleMeshBodyInstance;

	void Reset() //Required
	{
		VehicleActor = nullptr;
		VehicleMeshBodyInstance = nullptr;
	}
}; 
struct FVehiclePhysicsPhysicsOutput : public Chaos::FSimCallbackOutput
{
	float ChaosDeltaTime = 0.0f;
	
	void Reset() //Required
	{
		ChaosDeltaTime = 0.0f;
	}
};

class FVehiclePhysicsCallback : public Chaos::TSimCallbackObject<FVehiclePhysicsPhysicsInput, FVehiclePhysicsPhysicsOutput>
{
public:
	FSingleParticlePhysicsProxy* VehicleMesh;
	TArray<FSingleParticlePhysicsProxy*> WheelMeshes;
private:
	virtual void OnPreSimulate_Internal() override;
	virtual void OnContactModification_Internal(Chaos::FCollisionContactModifier& Modifier) override;
};