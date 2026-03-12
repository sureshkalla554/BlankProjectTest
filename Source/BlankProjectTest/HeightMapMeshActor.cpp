#include "HeightMapMeshActor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture2D.h"
#include "UObject/ConstructorHelpers.h"

AHeightMapMeshActor::AHeightMapMeshActor()
{
	PrimaryActorTick.bCanEverTick = false;

	ProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProcMesh"));
	RootComponent = ProcMesh;
}

void AHeightMapMeshActor::BeginPlay()
{
	Super::BeginPlay();

	GenerateMesh();
}

void AHeightMapMeshActor::GenerateMesh()
{
	if (!DepthTexture)
	{
		UE_LOG(LogTemp, Error, TEXT("DepthTexture is NULL!"));
		return;
	}

	if (!DepthTexture->PlatformData || DepthTexture->PlatformData->Mips.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("DepthTexture PlatformData invalid or has no mipmaps!"));
		return;
	}

	FTexture2DMipMap& Mip = DepthTexture->PlatformData->Mips[0];

	if (Mip.SizeX <= 0 || Mip.SizeY <= 0)
	{
		UE_LOG(LogTemp, Error, TEXT("DepthTexture has invalid dimensions!"));
		return;
	}

	FColor* Pixels = static_cast<FColor*>(Mip.BulkData.Lock(LOCK_READ_ONLY));
	if (!Pixels)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to lock DepthTexture pixels!"));
		Mip.BulkData.Unlock();
		return;
	}

	int32 Width = Mip.SizeX;
	int32 Height = Mip.SizeY;

	// Arrays
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> Tangents;
	TArray<FColor> VertexColors;

	Vertices.SetNum(Width * Height);
	UVs.SetNum(Width * Height);
	Normals.SetNum(Width * Height);
	Tangents.SetNum(Width * Height);
	VertexColors.SetNum(Width * Height);

	// Generate vertices
	for (int32 Y = 0; Y < Height; Y++)
	{
		for (int32 X = 0; X < Width; X++)
		{
			int32 Index = X + Y * Width;
			uint8 DepthValue = Pixels[Index].R; // Grayscale depth
			float Z = (DepthValue / 255.0f) * HeightScale;

			Vertices[Index] = FVector(X * MeshScale, Y * MeshScale, Z);
			UVs[Index] = FVector2D((float)X / (Width - 1), (float)Y / (Height - 1));
			VertexColors[Index] = FColor::White;
			Tangents[Index] = FProcMeshTangent(1, 0, 0);
		}
	}

	Mip.BulkData.Unlock();

	// Generate triangles
	for (int32 Y = 0; Y < Height - 1; Y++)
	{
		for (int32 X = 0; X < Width - 1; X++)
		{
			int32 I0 = X + Y * Width;
			int32 I1 = (X + 1) + Y * Width;
			int32 I2 = X + (Y + 1) * Width;
			int32 I3 = (X + 1) + (Y + 1) * Width;

			// First triangle
			Triangles.Add(I0);
			Triangles.Add(I2);
			Triangles.Add(I1);

			// Second triangle
			Triangles.Add(I1);
			Triangles.Add(I2);
			Triangles.Add(I3);
		}
	}

	// Smooth normals calculation
	for (int32 Y = 0; Y < Height; Y++)
	{
		for (int32 X = 0; X < Width; X++)
		{
			int32 Index = X + Y * Width;

			FVector Current = Vertices[Index];

			FVector Right = (X < Width - 1) ? Vertices[Index + 1] : Current;
			FVector Left = (X > 0) ? Vertices[Index - 1] : Current;
			FVector Down = (Y < Height - 1) ? Vertices[Index + Width] : Current;
			FVector Up = (Y > 0) ? Vertices[Index - Width] : Current;

			FVector Dx = Right - Left;
			FVector Dy = Down - Up;

			FVector Normal = FVector::CrossProduct(Dy, Dx).GetSafeNormal();
			if (!Normal.IsNearlyZero())
			{
				Normals[Index] = Normal;
			}
			else
			{
				Normals[Index] = FVector::UpVector;
			}
		}
	}

	// Create mesh
	ProcMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UVs, VertexColors, Tangents, true);

	// Apply color texture via dynamic material
	if (ColorTexture)
	{
		UMaterial* BaseMat = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/M_HeightMapTexture.M_HeightMapTexture'"));
		if (BaseMat)
		{
			UMaterialInstanceDynamic* DynMat = UMaterialInstanceDynamic::Create(BaseMat, this);
			DynMat->SetTextureParameterValue(FName("ColorTexture"), ColorTexture);
			ProcMesh->SetMaterial(0, DynMat);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to load material at runtime! Check path and name."));
		}
	}
}