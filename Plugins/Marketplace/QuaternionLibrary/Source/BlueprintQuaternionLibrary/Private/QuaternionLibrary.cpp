// Copyright 2018 Devlin Willis (ImmutableLambda). All Rights Reserved.

#include "QuaternionLibrary.h"

#include "../Launch/Resources/Version.h"

#define ENGINE_HAS_QINTERP_FUNCTION ENGINE_MINOR_VERSION >= 20

#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"
#include "Math/Quat.h"
#include "Math/RotationMatrix.h"
#include "Math/Rotator.h"

#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"

FQuat UQuaternionLibrary::MakeFromX(const FVector& XAxis)
{
	return FQuat(FRotationMatrix::MakeFromX(XAxis));
}

FQuat UQuaternionLibrary::MakeFromY(const FVector& YAxis)
{
	return FQuat(FRotationMatrix::MakeFromY(YAxis));
}

FQuat UQuaternionLibrary::MakeFromZ(const FVector& ZAxis)
{
	return FQuat(FRotationMatrix::MakeFromZ(ZAxis));
}

FQuat UQuaternionLibrary::MakeFromXY(const FVector& XAxis, const FVector& YAxis)
{
	return FQuat(FRotationMatrix::MakeFromXY(XAxis, YAxis));
}

FQuat UQuaternionLibrary::MakeFromXZ(const FVector& XAxis, const FVector& ZAxis)
{
	return FQuat(FRotationMatrix::MakeFromXZ(XAxis, ZAxis));
}

FQuat UQuaternionLibrary::MakeFromYX(const FVector& YAxis, const FVector& XAxis)
{
	return FQuat(FRotationMatrix::MakeFromYX(YAxis, XAxis));
}

FQuat UQuaternionLibrary::MakeFromYZ(const FVector& YAxis, const FVector& ZAxis)
{
	return FQuat(FRotationMatrix::MakeFromYZ(YAxis, ZAxis));
}

FQuat UQuaternionLibrary::MakeFromZX(const FVector& ZAxis, const FVector& XAxis)
{
	return FQuat(FRotationMatrix::MakeFromZX(ZAxis, XAxis));
}

FQuat UQuaternionLibrary::MakeFromZY(FVector const& ZAxis, FVector const& YAxis)
{
	return FQuat(FRotationMatrix::MakeFromZY(ZAxis, YAxis));
}

float UQuaternionLibrary::DotProduct_FQuat_FQuat(const FQuat& A, const FQuat& B)
{
	return A | B;
}

float UQuaternionLibrary::DotProduct_FQuat_FVector(const FQuat& A, const FVector& B)
{
	return A.Vector() | B;
}

float UQuaternionLibrary::DotProduct_FQuat_FRotator(const FQuat& A, const FRotator& B)
{
	return A.Vector() | B.Vector();
}

FQuat UQuaternionLibrary::GetScaleResult(const FQuat& Base, const float Scale)
{
	return Base * Scale;
}

FQuat& UQuaternionLibrary::ScaleBy(FQuat& Base, const float Scale)
{
	Base *= Scale;
	return Base;
}

FQuat UQuaternionLibrary::GetScaleResult_Division(const FQuat& Base, const float Scale)
{
	return Base / Scale;
}

FQuat& UQuaternionLibrary::ScaleBy_Division(FQuat& Base, const float Scale)
{
	Base /= Scale;
	return Base;
}

FQuat UQuaternionLibrary::GetComposeResult(const FQuat& A, const FQuat& B)
{
	return A * B;
}

FQuat& UQuaternionLibrary::ComposeWtih(FQuat& A, const FQuat& B)
{
	A *= B;
	return A;
}

FQuat UQuaternionLibrary::FromRotator(const FRotator& From)
{
	return From.Quaternion();
}

FRotator UQuaternionLibrary::ToRotator(const FQuat& From)
{
	return From.Rotator();
}

FQuat UQuaternionLibrary::FromAngleAxis(const FVector& Axis, const float Angle, EAngleUnitType AngleType /*= EAngleUnitType::Radians*/)
{
	if (AngleType != EAngleUnitType::Radians)
	{
		return FQuat(Axis, FMath::DegreesToRadians(Angle));
	}
	return FQuat(Axis, Angle);
}

void UQuaternionLibrary::ToAngleAxis(const FQuat& From, FVector& OutAxis, float& OutAngle, EAngleUnitType AngleType /*= EAngleUnitType::Radians*/)
{
	From.ToAxisAndAngle(OutAxis, OutAngle);

	if (AngleType == EAngleUnitType::Degrees) OutAngle = FMath::RadiansToDegrees(OutAngle);
}

FQuat UQuaternionLibrary::FromAngleAxisDeg(const FVector& Axis, const float AngleDeg)
{
	return FQuat(Axis, FMath::DegreesToRadians(AngleDeg));
}

void UQuaternionLibrary::ToAngleAxisDeg(const FQuat& From, FVector& OutAxis, float& OutAngleDeg)
{
	From.ToAxisAndAngle(OutAxis, OutAngleDeg);
	OutAngleDeg = FMath::RadiansToDegrees(OutAngleDeg);
}
 
FQuat UQuaternionLibrary::FromEuler(const FVector& InEuler)
{
	return FQuat::MakeFromEuler(InEuler);
}

FVector UQuaternionLibrary::ToEuler(const FQuat& From)
{
	return From.Euler();
}

void UQuaternionLibrary::ToSwingTwist(const FQuat& From, const FVector& InTwistAxis, FQuat& OutSwing, FQuat& OutTwist)
{
	From.ToSwingTwist(InTwistAxis, OutSwing, OutTwist);
}

FQuat& UQuaternionLibrary::Normalize(FQuat& ToNormalize, const float Tolerance /* = SMALL_NUMBER*/)
{
	ToNormalize.Normalize(Tolerance);
	return ToNormalize;
}

FQuat UQuaternionLibrary::GetNormalized(const FQuat& ToNormalize, const float Tolerance /*= SMALL_NUMBER*/)
{
	return ToNormalize.GetNormalized(Tolerance);
}

FQuat& UQuaternionLibrary::Invert(FQuat& ToInvert)
{
	ToInvert = ToInvert.Inverse();
	return ToInvert;
}

FQuat UQuaternionLibrary::GetInverse(const FQuat& InverseOf)
{
	return InverseOf.Inverse();
}

FQuat UQuaternionLibrary::FindBetweenOrientationVectors(const FVector& A, const FVector& B)
{
	return FQuat::FindBetween(A, B);
}

float UQuaternionLibrary::GetAngularDistance(const FQuat& A, const FQuat& B, EAngleUnitType AngleType/* = EAngleUnitType::Radians*/)
{
	if (AngleType == EAngleUnitType::Radians)
	{
		return A.AngularDistance(B);
	}
	else
	{
		return FMath::RadiansToDegrees(A.AngularDistance(B));
	}
}

FString UQuaternionLibrary::ToString(const FQuat& From)
{
	return From.ToString();
}

FQuat UQuaternionLibrary::FromString(const FString& From)
{
	FQuat Return;
	Return.InitFromString(From);
	return Return;
}

FQuat UQuaternionLibrary::FastLerp(const FQuat& A, const FQuat& B, const float Alpha)
{
	return FQuat::FastLerp(A, B, Alpha);
}

FQuat UQuaternionLibrary::FastBilerp(const FQuat& P00, const FQuat& P10, const FQuat& P01, const FQuat& P11, const float FracX, const float FracY)
{
	return FQuat::FastBilerp(P00, P10, P01, P11, FracX, FracY);
}

FQuat UQuaternionLibrary::Slerp(const FQuat& A, const FQuat& B, const float SlerpBy, const bool bNormalize /*= true*/)
{
	if (bNormalize)
	{
		return FQuat::Slerp(A, B, SlerpBy);
	}
	return FQuat::Slerp_NotNormalized(A, B, SlerpBy);
}

void UQuaternionLibrary::CalcTangent(const FQuat& Previous, const FQuat& Current, const FQuat& Next, float Tension, FQuat& Tangent)
{
	FQuat::CalcTangents(Previous, Current, Next, Tension, Tangent);
}

FQuat UQuaternionLibrary::Squad(const FQuat& QuatA, const FQuat& TangentA, const FQuat& QuatB, const FQuat& TangentB, float Alpha)
{
	return FQuat::Squad(QuatA, TangentA, QuatB, TangentB, Alpha);
}

FQuat UQuaternionLibrary::QInterpTo(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, EQuaternionInterpMode Mode /*= EQuaternionInterpMode::LerpNonNormalized*/, EAngleUnitType AngleType /*= EAngleUnitType::Degrees*/)
{
	float InterpSpeedRadians = AngleType == EAngleUnitType::Radians ? InterpSpeed : FMath::DegreesToRadians(InterpSpeed);

#if !ENGINE_HAS_QINTERP_FUNCTION
	if (Mode == EQuaternionInterpMode::SlerpNormalized) return FMath::QInterpTo(Current, Target, DeltaTime, InterpSpeed);
#endif

	if (InterpSpeed <= 0.f || Current.Equals(Target)) return Target;
	if (DeltaTime <= 0.f) return Current;

	float DeltaInterpSpeed = DeltaTime * InterpSpeedRadians;

	float ComputedAlpha = FMath::Clamp(DeltaInterpSpeed, 0.f, 1.f);

	switch (Mode)
	{
		case EQuaternionInterpMode::LerpNonNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::LerpNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha).GetNormalized();
		} // return inside

		case EQuaternionInterpMode::SlerpNonNormalized:
		{
			return FQuat::Slerp_NotNormalized(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::SlerpNormalized:
		default: return FQuat::Slerp(Current, Target, ComputedAlpha);
	}
}

const float UQuaternionLibrary::MinimumEaseSpeed = 0.1f;

FQuat UQuaternionLibrary::QInterpToEaseInOut(const FQuat& Origin, const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, float EaseInDist /*=.2f*/, float EaseOutDist /*= .2f*/, EQuaternionInterpMode Mode /*= EQuaternionInterpMode::LerpNonNormalized*/, EAngleUnitType AngleType /*= EAngleUnitType::Degrees*/)
{
	float InterpSpeedRadians = AngleType == EAngleUnitType::Radians ? InterpSpeed : FMath::DegreesToRadians(InterpSpeed);

	if (InterpSpeed <= 0.f || Current.Equals(Target)) return Target;
	if (DeltaTime <= 0.f) return Current;

	float DeltaInterpSpeed = DeltaTime * InterpSpeedRadians;

	float AngularDistanceToEnd = Target.AngularDistance(Current);
	float AngularDistanceFromStart = Origin.AngularDistance(Current);

	if (FMath::IsNearlyZero(AngularDistanceToEnd)) return Target;

	const float EaseInDistRad = AngleType == EAngleUnitType::Radians ? EaseInDist : FMath::DegreesToRadians(EaseInDist);
	const float EaseOutDistRad = AngleType == EAngleUnitType::Radians ? EaseOutDist : FMath::DegreesToRadians(EaseOutDist);
	float ComputedAlpha = FMath::Clamp(DeltaInterpSpeed / AngularDistanceToEnd, 0.f, 1.f);
	if (EaseInDistRad > 0.f && AngularDistanceFromStart < EaseInDistRad)
	{
		float Scale = FMath::Clamp(AngularDistanceFromStart / EaseInDistRad, MinimumEaseSpeed, 1.f);
		GEngine->AddOnScreenDebugMessage(156, DeltaTime, FColor::Purple, FString::Printf(TEXT("%s: EaseIn active, Scale: %f\tDist: %f"), ANSI_TO_TCHAR(__func__), Scale, AngularDistanceFromStart));
		ComputedAlpha *= Scale;//= FMath::Clamp(DeltaInterpSpeed * Scale, 0.f, 1.f);
	}
	else if (EaseOutDistRad > 0.f && AngularDistanceToEnd < EaseOutDistRad)
	{
		float Scale = FMath::Clamp(AngularDistanceToEnd / EaseOutDistRad, MinimumEaseSpeed, 1.f);
		GEngine->AddOnScreenDebugMessage(156, DeltaTime, FColor::Yellow, FString::Printf(TEXT("%s: EaseOut active, Scale: %f\tDist: %f"), ANSI_TO_TCHAR(__func__), Scale, AngularDistanceToEnd));
		ComputedAlpha *= Scale;//= FMath::Clamp(DeltaInterpSpeed * Scale, 0.f, 1.f);
	}
	else
	{
		// constant
		GEngine->AddOnScreenDebugMessage(156, DeltaTime, FColor::Orange, FString::Printf(TEXT("%s: ConstantStep active\tDist: %f"), ANSI_TO_TCHAR(__func__), AngularDistanceToEnd));		
	}	

	switch (Mode)
	{
		case EQuaternionInterpMode::LerpNonNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::LerpNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha).GetNormalized();
		} // return inside

		case EQuaternionInterpMode::SlerpNonNormalized:
		{
			return FQuat::Slerp_NotNormalized(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::SlerpNormalized:
		default: return FQuat::Slerp(Current, Target, ComputedAlpha);
	}
}

FQuat UQuaternionLibrary::QInterpToEaseOut(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, float EaseOutDist /*= .2f*/, EQuaternionInterpMode Mode /*= EQuaternionInterpMode::LerpNonNormalized*/, EAngleUnitType AngleType /*= EAngleUnitType::Degrees*/)
{
	float InterpSpeedRadians = AngleType == EAngleUnitType::Radians ? InterpSpeed : FMath::DegreesToRadians(InterpSpeed);

	if (InterpSpeed <= 0.f || Current.Equals(Target)) return Target;
	if (DeltaTime <= 0.f) return Current;

	float DeltaInterpSpeed = DeltaTime * InterpSpeedRadians;
	float AngularDistance = Target.AngularDistance(Current);

	const float EaseOutDistRad = AngleType == EAngleUnitType::Radians ? EaseOutDist : FMath::DegreesToRadians(EaseOutDist);
	float ComputedAlpha = FMath::Clamp(DeltaInterpSpeed / AngularDistance, 0.f, 1.f);

	if (EaseOutDistRad > 0.f && AngularDistance < EaseOutDistRad)
	{
		float Scale = FMath::Clamp(AngularDistance / EaseOutDistRad, MinimumEaseSpeed, 1.f);
		GEngine->AddOnScreenDebugMessage(123, DeltaTime, FColor::Green, FString::Printf(TEXT("%s: EaseOut active, Scale: %f\tDist: %f"), ANSI_TO_TCHAR(__func__), Scale, AngularDistance));
		ComputedAlpha *= Scale;// = FMath::Clamp(DeltaInterpSpeed * Scale, 0.f, 1.f);
	}
	else
	{
		// constant
		GEngine->AddOnScreenDebugMessage(123, DeltaTime, FColor::Blue, FString::Printf(TEXT("%s: ConstantStep active,\tDist: %f"), ANSI_TO_TCHAR(__func__), AngularDistance));		
	}

	switch (Mode)
	{
		case EQuaternionInterpMode::LerpNonNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::LerpNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha).GetNormalized();
		} // return inside

		case EQuaternionInterpMode::SlerpNonNormalized:
		{
			return FQuat::Slerp_NotNormalized(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::SlerpNormalized:
		default: return FQuat::Slerp(Current, Target, ComputedAlpha);
	}
}

FQuat UQuaternionLibrary::QInterpConstantTo(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, EQuaternionInterpMode Mode /*= EQuaternionInterpMode::LerpNonNormalized*/, EAngleUnitType AngleType /*= EAngleUnitType::Degrees*/)
{
	float InterpSpeedRadians = AngleType == EAngleUnitType::Radians ? InterpSpeed : FMath::DegreesToRadians(InterpSpeed);

#if !ENGINE_HAS_QINTERP_FUNCTION
	if (Mode == EQuaternionInterpMode::SlerpNormalized)	return FMath::QInterpConstantTo(Current, Target, DeltaTime, InterpSpeed);
#endif

	if (InterpSpeed <= 0.f || Current.Equals(Target)) return Target;
	if (DeltaTime <= 0.f) return Current;

	float DeltaInterpSpeed = DeltaTime * InterpSpeedRadians;
	float AngularDistance = Target.AngularDistance(Current);

	if (AngularDistance < SMALL_NUMBER) return Target;
	float ComputedAlpha = FMath::Clamp(DeltaInterpSpeed / AngularDistance, 0.f, 1.f);

	switch (Mode)
	{
		case EQuaternionInterpMode::LerpNonNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::LerpNormalized:
		{
			return FQuat::FastLerp(Current, Target, ComputedAlpha).GetNormalized();
		} // return inside

		case EQuaternionInterpMode::SlerpNonNormalized:
		{
			return FQuat::Slerp_NotNormalized(Current, Target, ComputedAlpha);
		} // return inside

		case EQuaternionInterpMode::SlerpNormalized:
		default: return FQuat::Slerp(Current, Target, ComputedAlpha);
	}
}

bool UQuaternionLibrary::Equals_FQuat_FQuat(const FQuat& A, const FQuat& B, float Tolerance /*= 0.00001f*/, EAngleUnitType AngleType /*= EAngleUnitType::Radians*/)
{
	if (AngleType == EAngleUnitType::Degrees) Tolerance = FMath::DegreesToRadians(Tolerance);

	return A.Equals(B, Tolerance);
}

bool UQuaternionLibrary::Equals_FQuat_FRotator(const FQuat& A, const FRotator& B, float Tolerance /*= 0.00001f*/, EAngleUnitType AngleType /*= EAngleUnitType::Radians*/)
{
	if (AngleType == EAngleUnitType::Degrees) Tolerance = FMath::DegreesToRadians(Tolerance);

	return A.Equals(B.Quaternion(), Tolerance);
}

bool UQuaternionLibrary::ExactEquals_FQuat_FQuat(const FQuat& A, const FQuat& B)
{
	return A == B;
}

bool UQuaternionLibrary::ExactEquals_FQuat_FRotator(const FQuat& A, const FRotator& B)
{
	return A == B.Quaternion();
}

bool UQuaternionLibrary::IsIdentity(const FQuat& InQuat)
{
	return InQuat.IsIdentity();
}

float UQuaternionLibrary::Size(const FQuat& InQuat)
{
	return InQuat.Size();
}

float UQuaternionLibrary::SizeSquared(const FQuat& InQuat)
{
	return InQuat.SizeSquared();
}

FVector UQuaternionLibrary::GetForwardAxis(const FQuat& InQuat)
{
	return InQuat.GetAxisX();
}

FVector UQuaternionLibrary::GetRightAxis(const FQuat& InQuat)
{
	return InQuat.GetAxisY();
}

FVector UQuaternionLibrary::GetUpAxis(const FQuat& InQuat)
{
	return InQuat.GetAxisZ();
}

FVector UQuaternionLibrary::ToOrientationVector(const FQuat& From)
{
	return UQuaternionLibrary::GetForwardAxis(From);
}

FQuat UQuaternionLibrary::FromOrientationVector(const FVector& InOrientationVector)
{
	return UQuaternionLibrary::MakeFromX(InOrientationVector);
}

FVector UQuaternionLibrary::GetRotatedOrientationVector(const FQuat& InQuat, const FVector& V)
{
	return InQuat.RotateVector(V);
}

FVector& UQuaternionLibrary::RotateOrientationVector(const FQuat& InQuat, FVector& V)
{
	V = InQuat.RotateVector(V);
	return V;
}

FVector UQuaternionLibrary::GetUnrotatedOrientationVector(const FQuat& InQuat, const FVector& V)
{
	return InQuat.UnrotateVector(V);
}

FVector& UQuaternionLibrary::UnrotateOrientationVector(const FQuat& InQuat, FVector& V)
{
	V = InQuat.UnrotateVector(V);
	return V;
}

FRotator UQuaternionLibrary::GetRotatedRotation(const FQuat& InQuat, const FRotator R)
{
	return (InQuat * R.Quaternion()).Rotator();
}

FRotator& UQuaternionLibrary::RotateRotation(const FQuat& InQuat, FRotator& R)
{
	R = (InQuat * R.Quaternion()).Rotator();
	return R;
}

FRotator UQuaternionLibrary::GetUnrotatedRotation(const FQuat& InQuat, const FRotator R)
{
	return (InQuat.Inverse() * R.Quaternion()).Rotator();
}

FRotator& UQuaternionLibrary::UnrotateRotation(const FQuat& InQuat, FRotator& R)
{
	R = (InQuat.Inverse() * R.Quaternion()).Rotator();
	return R;
}

void UQuaternionLibrary::AddActorLocalRotation(AActor* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->AddActorLocalRotation(Delta, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::AddActorWorldRotation(AActor* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->AddActorWorldRotation(Delta, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::AddComponentLocalRotation(USceneComponent* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->AddLocalRotation(Delta, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::AddComponentWorldRotation(USceneComponent* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->AddWorldRotation(Delta, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::SetActorRelativeRotation(AActor* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->SetActorRelativeRotation(NewRotation, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::SetActorWorldRotation(AActor* Target, const FQuat& NewRotation, const bool bTeleport)
{
	if (Target)
	{
		Target->SetActorRotation(NewRotation, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::SetComponentRelativeRotation(USceneComponent* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->SetRelativeRotation(NewRotation, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

void UQuaternionLibrary::SetComponentWorldRotation(USceneComponent* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult)
{
	if (Target)
	{
		Target->SetWorldRotation(NewRotation, bSweep, &SweepHitResult, bTeleport ? ETeleportType::TeleportPhysics : ETeleportType::None);
	}
}

FQuat UQuaternionLibrary::FromTransform(const FTransform& InTransform)
{
	return InTransform.GetRotation();
}

FQuat UQuaternionLibrary::FromActor(const AActor* InActor)
{
	return InActor ? InActor->GetActorTransform().GetRotation() : FQuat::Identity;
}

FQuat UQuaternionLibrary::FromComponent(const USceneComponent* InComponent, const FName Socket /*= NAME_None*/, const ERelativeTransformSpace TransformSpace /*= ERelativeTransformSpace::RTS_World*/)
{
	return InComponent ? InComponent->GetSocketTransform(Socket, TransformSpace).GetRotation() : FQuat::Identity;
}
#undef ENGINE_HAS_QINTERP_FUNCTION