#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Engine/Texture2D.h"
#include "HeightMapMeshActor.generated.h"

UCLASS()
class BLANKPROJECTTEST_API AHeightMapMeshActor : public AActor
{
	GENERATED_BODY()

public:
	AHeightMapMeshActor();

protected:
	virtual void BeginPlay() override;

public:

	// Color texture for mesh surface
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightMap")
	UTexture2D* ColorTexture;

	// Depth image for vertex heights
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightMap")
	UTexture2D* DepthTexture;

	// Vertical scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightMap")
	float HeightScale = 100.0f;

	// Horizontal scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightMap")
	float MeshScale = 1.0f;

private:
	UPROPERTY()
	UProceduralMeshComponent* ProcMesh;

	void GenerateMesh();
};