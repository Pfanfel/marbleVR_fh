// Copyright 2018 Devlin Willis (ImmutableLambda). All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SceneComponent.h" // ERelativeTransformSpace

#include "QuaternionLibrary.generated.h"

struct FVector;
struct FRotator;
struct FQuat;
struct FTransform;

class AActor;
// class USceneComponent; // @note(devlinw): included above, commenting out as it we're explicitly including the type's header.

UENUM(BlueprintType)
enum class EQuaternionInterpMode : uint8
{
	/**	Uses plain linear interpolation, but doesn't normalize the result. */
	LerpNonNormalized,
	/**	Uses plain linear interpolation, and normalizes the result. */
	LerpNormalized,
	/**	Uses spherical linear interpolation, but doesn't normalize the result. */
	SlerpNonNormalized,
	/**	Uses spherical linear interpolation, and normalizes the result. */
	SlerpNormalized,
};

UENUM(BlueprintType)
enum class EAngleUnitType : uint8
{
	/**	Caller units specified in Radians. No conversion needed. */
	Radians,
	/**	Caller units specified in Degrees, but will be converted to/from Radians. */
	Degrees
};


UCLASS()
class BLUEPRINTQUATERNIONLIBRARY_API UQuaternionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/**
	 * Constructs a Quat, given the forward axis. Y and Z will be calculated.
	 * 
	 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make x quat fquat"))
	static FQuat MakeFromX(const FVector& XAxis);

	/**
	 * Constructs a Quat, given the right axis. X and Z will be calculated.
	 * 
	 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make y quat fquat"))
	static FQuat MakeFromY(const FVector& YAxis);

	/**
	 * Constructs a Quat, given the up axis. X and Y will be calculated.
	 * 
	 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized. 
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make z quat fquat"))
	static FQuat MakeFromZ(const FVector& ZAxis);

	/**
	 * Constructs a Quat given forward and right axes. The forward axis will remain fixed, but the right axis may be adjusted. 
	 * The Z axis will be calculated.
	 * 
	 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.
	 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make x xy quat fquat"))
	static FQuat MakeFromXY(const FVector& XAxis, const FVector& YAxis);

	/**
	 * Constructs a Quat given forward and up axes. The forward axis will remain fixed, but the up axis may be adjusted. 
	 * The Y axis will be calculated.
	 * 
	 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.
	 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make x xz quat fquat"))
	static FQuat MakeFromXZ(const FVector& XAxis, const FVector& ZAxis);

	/**
	 * Constructs a Quat given right and forward axes. The right axis will remain fixed, but the forward axis may be adjusted. 
	 * The Z axis will be calculated. 
	 * 
	 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.
	 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make y yx quat fquat"))
	static FQuat MakeFromYX(const FVector& YAxis, const FVector& XAxis);

	/**
	 * Constructs a Quat with given right and up axes. The right axis will remain fixed, but the up axis may be adjusted.
	 * The X axis will be calculated.
	 * 
	 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.
	 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make y yz quat fquat"))
	static FQuat MakeFromYZ(const FVector& YAxis, const FVector& ZAxis);

	/**
	 * Constructs a Quat with given up and forward axes. The up axis will remain fixed, but the forward axis may be adjusted.
	 * The Y axis will be calculated.
	 * 
	 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.
	 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make z zx quat fquat"))
	static FQuat MakeFromZX(const FVector& ZAxis, const FVector& XAxis);

	/**
	 * Constructs a Quat with given up and right axes. The up axis will remain fixed, but the right axis may be adjusted.
	 * The X axis will be calculated.
	 * 
	 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.
	 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Construction", meta = (Keywords = "make z zy quat fquat"))
	static FQuat MakeFromZY(FVector const& ZAxis, FVector const& YAxis);

	/**
	 * Gives the dot product between two Quats.
	 * 
	 * @param A - The first Quat.
	 * @param B - The second Quat.
	 * @return The dot product between the two.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (DisplayName = "Dot Product (Quat)", CompactNodeTitle = ".", Keywords = "dot quat product ."))
	static float DotProduct_FQuat_FQuat(const FQuat& A, const FQuat& B);
		
	/**
	 * Gives the dot product between the given Quat's forward vector and the given orientation vector. 
	 * 
	 * @param A - The Quat which provides one orientation vector.
	 * @param B - Another orientation vector.
	 * @return The dot product between the two.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (DisplayName = "Dot Product (Vector)", CompactNodeTitle = ".", Keywords = "dot vector fquat quat vec product ."))
	static float DotProduct_FQuat_FVector(const FQuat& A, const FVector& B);

	/**
	 * Gives the dot product between the given Quat's forward vector and the given rotator's orientation vector.
	 * 
	 * @param A - The Quat which provides one orientation vector.
	 * @param B - The Rotator which provides the other orientation vector.
	 * @return The dot product between the two.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (DisplayName = "Dot Product (Rotator)", CompactNodeTitle = ".", Keywords = "dot rot rotator rotator frotator quat fquat product ."))
	static float DotProduct_FQuat_FRotator(const FQuat& A, const FRotator& B);

	/**
	 * Gives the result of scaling (multiplication) a Quat by Scale.
	 * 
	 * @param Base - The Quat to scale - won't be modified.
	 * @param Scale - Amount to scale by.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get scale * float fl quat fquat copy result"))
	static FQuat GetScaleResult(const FQuat& Base, const float Scale);
	
	/**
	 * Scales the given Quat by multiplication.
	 * 
	 * @param Base - The Quat to scale - will be modified.
	 * @param Scale - Amount to scale by.
	 * @return Reference to the original Quat.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "scale * float fl quat fquat ref"))
	static FQuat& ScaleBy(UPARAM(Ref) FQuat& Base, const float Scale);

	/**
	 * Gives the result of scaling a Quat by Scale (division).
	 * 
	 * @param Base - The Quat to scale - won't be modified.
	 * @param Scale - Amount to scale by.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get scale / float fl quat fquat copy result"))
	static FQuat GetScaleResult_Division(const FQuat& Base, const float Scale);

	/**
	 * Scales the given Quat by division.
	 * 
	 * @param Base - The Quat to scale - will be modified.
	 * @param Scale - The amount to scale by.
	 * @return Reference to the original Quat.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "get scale / float fl quat fquat ref"))
	static FQuat& ScaleBy_Division(UPARAM(Ref) FQuat& Base, const float Scale);

	/**
	 * Gives the result of composing the two provided Quats. Order matters when composing Quats.
	 * 
	 * @param A - Quat applied as the first rotation.
	 * @param B - Quat applied as the second rotation.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "compose combine * quat fquat copy result"))
	static FQuat GetComposeResult(const FQuat& A, const FQuat& B);

	/**
	 * Composes the two Quats. Order matters when composing Quats.
	 * 
	 * @param A - The base of the compose - will be modified.
	 * @param B - Quat applied as the second rotation.
	 * @return Reference to the base (param A).
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "compose combine fquat * quat ref"))
	static FQuat& ComposeWtih(UPARAM(Ref) FQuat& A, const FQuat& B);

	/**
	 * Constructs a Quat from a Rotator.
	 * 
	 * @param From - Given Rotator to build the Quat from.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (CompactNodeTitle = "->", Keywords = "rot to rotator frotator get quat fquat", BlueprintAutocast, AutoCreateRefTerm="From"))
	static FQuat FromRotator(const FRotator& From);

	/**
	 * Gives the rotator form of the given Quat.
	 * 
	 * @param From - Given Quat to make a rotator from.
	 * @return The rotator form of the given Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (CompactNodeTitle = "->", Keywords = "quat to rot rotator frotator fquat", BlueprintAutocast))
	static FRotator ToRotator(const FQuat& From);

	/**
	 * Constructs a Quat from an axis and angle.
	 * 
	 * @param Axis - Axis of rotation.
	 * @param Angle - Angle (Radians) of rotation around that axis.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "deg degree rad radians angle axis around from quat fquat", AdvancedDisplay = "AngleType"))
	static FQuat FromAngleAxis(const FVector& Axis, const float Angle, EAngleUnitType AngleType = EAngleUnitType::Radians);

	/**
	 * Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.
	 * 
	 * @param From - Quat you want to have the angle and axis of.
	 * @param OutAxis - Axis of rotation.
	 * @param OutAngle - Angle (Radians) of rotation around that axis.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "deg degree rad radians angle axis around to quat fquat", AdvancedDisplay="AngleType"))
	static void ToAngleAxis(const FQuat& From, FVector& OutAxis, float& OutAngle, EAngleUnitType AngleType = EAngleUnitType::Radians);

	/**
	 * Constructs a Quat from an axis and angle.
	 * 
	 * @param Axis - Axis of rotation.
	 * @param AngleDeg - Angle (Degrees) of rotation around that axis.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "", DeprecatedFunction, DeprecationMessage="Superseded by FromAngleAxis now having an option for radians or degrees. Will be removed in the next release."))
	static FQuat FromAngleAxisDeg(const FVector& Axis, const float AngleDeg);

	/**
	 * Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.
	 * 
	 * @param From - Quat you want to have the angle and axis of.
	 * @param OutAxis - Axis of rotation.
	 * @param OutAngleDeg - Angle (Degrees) of rotation around that axis.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "", DeprecatedFunction, DeprecationMessage = "Superseded by ToAngleAxis now having an option for radians or degrees. Will be removed in the next release."))
	static void ToAngleAxisDeg(const FQuat& From, FVector& OutAxis, float& OutAngleDeg);	
	 
	/**
	 * Constructs a Quat from Euler angles.
	 * 
	 * @param Euler - Rotations around the unit axes.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "euler rot angle axes from quat fquat", AutoCreateRefTerm = "InEuler"))
	static FQuat FromEuler(const FVector& InEuler);

	/**
	 * Gives the Euler angle representation of the given Quat.
	 * 
	 * @param From - Source Quat.
	 * @return Euler angles the given Quat results in.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "euler rot angle axes to quat fquat"))
	static FVector ToEuler(const FQuat& From);

	/**
	 * Get the swing and twist decomposition of the quaternion given a direction.
	 * 
	 * @param From - Input Quat.
	 * @param InTwistAxis - Axis to which the decomposition should occur.
	 * @param OutSwing - The quaternion which would be required to "point" From along InTwistAxis.
	 * @param OutTwist - The rotation around InTwistAxis.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "quat fquat swing twist decomposition"))
	static void ToSwingTwist(const FQuat& From, const FVector& InTwistAxis, FQuat& OutSwing, FQuat& OutTwist);

	/**
	 * Normalizes the given Quat.
	 * 
	 * @param ToNormalize - This Quat will be normalized in-place.
	 * @param Tolerance - Tolerance to use while normalizing.
	 * @return Reference to the normalized Quat.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "normalize quat fquat result", AdvancedDisplay = "1"))
	static FQuat& Normalize(UPARAM(Ref) FQuat& ToNormalize, const float Tolerance = 0.00000001f);

	/**
	 * Returns the result of normalizing the given Quat.
	 * 
	 * @param ToNormalize - The Quat to be normalized.
	 * @param Tolerance - Tolerance to use while normalizing.
	 * @return Normalized Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get normalized quat fquat ref", AdvancedDisplay = "1"))
	static FQuat GetNormalized(const FQuat& ToNormalize, const float Tolerance = 0.00000001f);

	/**
	 * Inverts the given Quat.
	 * 
	 * @param ToInvert - The Quat which will be inverted in-place.
	 * @return Reference to the inverted Quat.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "invert flip negate quat fquat"))
	static FQuat& Invert(UPARAM(Ref) FQuat& ToInvert);

	/**
	 * Returns the inverse of the given Quat.
	 * 
	 * @param InverseOf - Quat to get the inverse of.
	 * @return Inverse of the given Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get invert flip negate quat fquat"))
	static FQuat GetInverse(const FQuat& InverseOf);

	/**
	 * Gives the smallest possible rotation between two orientation vectors.
	 * 
	 * @param A - First orientation vector.
	 * @param B - Second orientation vector.
	 * @return Smallest rotation, as a Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "rotation between two directions vector dirs angle quat fquat"))
	static FQuat FindBetweenOrientationVectors(const FVector& A, const FVector& B);

	/**
	 * Gives the angular distance between the Quats.
	 * 
	 * @param A - The first Quat.
	 * @param B - The second Quat.
	 * @parapm AngleType - 
	 * @return Angular Rotation between the two Quats.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "angular angle distance dis quat fquat", AdvancedDisplay="AngleType"))
	static float GetAngularDistance(const FQuat& A, const FQuat& B, EAngleUnitType AngleType = EAngleUnitType::Radians);

	/**
	 * Gives the Quat represented as a string for debugging purposes.
	 * 
	 * @param From - Quat to get a display string for.
	 * @return String formatted as "X=Val, Y=Val, Z=Val, W=Val".
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (CompactNodeTitle = "->", DisplayName = "To String", Keywords = "debug to string quat fquat", BlueprintAutocast))
	static FString ToString(const FQuat& From);

	/**
	 * Constructs a Quat by extracting the component values from a given string.
	 * String must be formatted as "X=Val, Y=Val, Z=Val, W=Val".
	 * 
	 * @param From - String to build from - must be formatted as "X=Val, Y=Val, Z=Val, W=Val".
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "make from string quat fquat"))
	static FQuat FromString(const FString& From = "X=0.0, Y=0.0, Z=0.0, W=1.0");

	/**
	 * Linear interpolation between A and B, by Alpha. 
	 * 
	 * @param A - The first Quat.
	 * @param B - The second Quat.
	 * @param Alpha - Ranges from 0..1, where 0 is A and 1 is B.
	 * @return Unnormalized result of the lerp.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (DisplayName = "Lerp", Keywords = "lerp fast interpolate quat fquat"))
	static FQuat FastLerp(const FQuat& A, const FQuat& B, const float Alpha);

	/**
	 * Bilinear interpolation between four rotations. In order to provide useful inputs to the function,
	 * imagine a unit square. The origin is 0,0 - and the upper bound is 1,1. If this is the case, 
	 * the variable names indicate "positions" of the Quats on this grid. 
	 * 
	 * FracX and FracY indicate how far along the "grid" for X and Y.
	 * 
	 * @param P00 - Position 0, 0. Or lower left.
	 * @param P10 - Position 1, 0. Or upper left.
	 * @param P01 - Position 0, 1. Or lower right.
	 * @param P11 - Position 1, 1. Or upper right.
	 * @param FracX - Alpha for X.
	 * @param FracY - Alpha for Y.
	 * @return Unnormalized result of the bilinear interpolation.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (DisplayName = "Bilerp", Keywords = "bilerp fast interpolate bilinear quat fquat"))
	static FQuat FastBilerp(const FQuat& P00, const FQuat& P10, const FQuat& P01, const FQuat& P11, const float FracX, const float FracY);

	/**
	 * Spherical interpolation between A and B, by Alpha.
	 * 
	 * @param A - The first Quat.
	 * @param B - The second Quat.
	 * @param SlerpBy - Ranges from 0..1, where 0 is A and 1 is B.
	 * @param bNormalize - Whether the return should be normalized.
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "slerp spherical interpolate quat fquat"))
	static FQuat Slerp(const FQuat& A, const FQuat& B, const float SlerpBy, const bool bNormalize = true);

	/**
	 * Given three Quaternions for context, calculate the tangent at the Current input.
	 * 
	 * @param Previous - Quaternion "prior" to the current.
	 * @param Current - The Quaternion for which the tangent is being calculated
	 * @param Next - Quaternion "after" the current.
	 * @param Tension - UNUSED:: present for whenever the underlying engine function uses it.
	 * @param Tangent - Calculated tangent at the Current point.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "tangent squad quat fquat"))
	static void CalcTangent(const FQuat& Previous, const FQuat& Current, const FQuat& Next, float Tension, FQuat& Tangent);

	/**
	 * Compute the point at Alpha between QuatA and QuatB, using the Squad algorithm.
	 * 
	 * @param QuatA - First Quaternion, or A.
	 * @param TangentA - Tangent at A.
	 * @param QuatB - Second Quaternion, or B.
	 * @param TangentB - Tangent at B.
	 * @param Alpha - Ranges from 0..1, where 0 is A and 1 is B.
	 * @return Normalized result of the calculation.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "squad tangent quat fquat"))
	static FQuat Squad(const FQuat& QuatA, const FQuat& TangentA, const FQuat& QuatB, const FQuat& TangentB, float Alpha);
	
	/**
	 * Interpolates smoothly from Current to Target, at a constant step.
	 * 
	 * @param Current - The current rotation you would like to interpolate from.
	 * @param Target  - The target rotation you would like to interpolate to.
	 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.
	 * @param InterpSpeed - The "speed" at which the interpolation occurs.
	 * @param Mode - The lerp mode to use.
	 * @param AngleType - The type of unit InterpSpeed is using.
	 * @return The newly calculated rotation - store for later use!!
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "ease in out dynamic hybrid interpolate to interp to quat fquat", AdvancedDisplay="Mode,AngleType"))
	static FQuat QInterpTo(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, EQuaternionInterpMode Mode = EQuaternionInterpMode::SlerpNormalized, EAngleUnitType AngleType = EAngleUnitType::Degrees);

	/**
	 * Interpolates smoothly from Current to Target.
	 * 
	 * If Current is still within EaseInDist from the start, the rate will be scaled by the distance to the start mapped to the range [0-EaseInDist].
	 * If Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].
	 * Otherwise, the rate is constant.
	 * 
	 * @param Origin - The start rotation, required for Ease In.
	 * @param Current - The current rotation you would like to interpolate from.
	 * @param Target  - The target rotation you would like to interpolate to.
	 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.
	 * @param InterpSpeed - The "speed" at which the interpolation occurs.
	 * @param EaseInDist - The distance which defines the end of the range [0-EaseInDist], used to scale speed. Same units as InterpSpeed.
	 * @param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.
	 * @param Mode - The lerp mode to use.
	 * @param AngleType - The type of unit InterpSpeed is using.
	 * @return The newly calculated rotation - store for later use!!
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "ease in out interpolate to interp to quat fquat", AdvancedDisplay="Mode,AngleType"))
	static FQuat QInterpToEaseInOut(const FQuat& Origin, const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, float EaseInDist =.2f, float EaseOutDist = .2f, EQuaternionInterpMode Mode = EQuaternionInterpMode::SlerpNormalized, EAngleUnitType AngleType = EAngleUnitType::Degrees);

	/**
	 * Interpolates smoothly from Current to Target.
	 *
	 * If Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].
	 * Otherwise, the rate is constant.
	 * 
	 * @param Current - The current rotation you would like to interpolate from.
	 * @param Target  - The target rotation you would like to interpolate to.
	 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.
	 * @param InterpSpeed - The "speed" at which the interpolation occurs.
	 * @param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.
	 * @param Mode - The lerp mode to use.
	 * @param AngleType - The type of unit InterpSpeed is using.
	 * @return The newly calculated rotation - store for later use!!
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "ease out interpolate to interp to quat fquat", AdvancedDisplay="Mode,AngleType"))
	static FQuat QInterpToEaseOut(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, float EaseOutDist = .2f, EQuaternionInterpMode Mode = EQuaternionInterpMode::SlerpNormalized, EAngleUnitType AngleType = EAngleUnitType::Degrees);

	/**
	 * Interpolates from Current to Target, but scaled by distance to target, so with a strong start and ease-out behavior.
	 * 
	 * @param Current - The current rotation you would like to interpolate from.
	 * @param Target  - The target rotation you would like to interpolate to.
	 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.
	 * @param InterpSpeed - The "speed" at which the interpolation occurs.
	 * @param Mode - The lerp mode to use.
	 * @param AngleType - The type of unit InterpSpeed is using.
	 * @return The newly calculated rotation - store for later use!!
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "const interpolate to interp to quat fquat", AdvancedDisplay = "Mode,AngleType"))
	static FQuat QInterpConstantTo(const FQuat& Current, const FQuat& Target, float DeltaTime, float InterpSpeed, EQuaternionInterpMode Mode = EQuaternionInterpMode::SlerpNormalized, EAngleUnitType AngleType = EAngleUnitType::Degrees);

	/**
	 * Compares the two Quaternions for equality.
	 * 
	 * @param A - The first quaternion.
	 * @param B - The second quaternion.
	 * @param Tolerance - Tolerance for the comparison.
	 * @param AngleType - Unit of Tolerance.
	 * @return - Whether the inputs are considered equal.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (DisplayName = "Nearly Equals (FQuat)",Keywords = "nearly approximate about eqauls == quat fquat", AdvancedDisplay = "Tolerance,AngleType"))
	static bool Equals_FQuat_FQuat(const FQuat& A, const FQuat& B, float Tolerance = 0.00001f, EAngleUnitType AngleType = EAngleUnitType::Radians);

	/**
	 * Compares the two rotations for equality.
	 * 
	 * @param A - Quaternion which is used in the comparison.
	 * @param B - Euler Rotator which will be converted to Quaternion and then compared to A..
	 * @param Tolerance - Tolerance for the comparison.
	 * @param AngleType - Unit of Tolerance.
	 * @return - Whether the inputs are considered equal.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (DisplayName = "Nearly Equals (FRotator)", Keywords ="nearly approximate about equals == rotator frotator quat fquat", AdvancedDisplay = "Tolerance,AngleType", AutoCreateRefTerm="B"))
	static bool Equals_FQuat_FRotator(const FQuat& A, const FRotator& B, float Tolerance = 0.00001f, EAngleUnitType AngleType = EAngleUnitType::Radians);
	
	/**
	 * Compares the Quaternions for equality.
	 * 
	 * @param A - The first quaternion.
	 * @param B - The second quaternion.
	 * @return - Whether the inputs are considered equal.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (CompactNodeTitle = "==", DisplayName = "Equals (FQuat)",Keywords = "eqauls == quat fquat"))
	static bool ExactEquals_FQuat_FQuat(const FQuat& A, const FQuat& B);

	/**
	 * Compares the two rotations for equality.
	 * 
	 * @param A - Quaternion which is used in the comparison.
	 * @param B - Euler Rotator which will be converted to Quaternion and then compared to A.
	 * @return - Whether the inputs are considered equal.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (CompactNodeTitle = "==", DisplayName = "Equals (FRotator)", Keywords ="equals == rotator frotator quat fquat", AutoCreateRefTerm="B"))
	static bool ExactEquals_FQuat_FRotator(const FQuat& A, const FRotator& B);

	/**
	 * Check if the provided Quat is the Identity Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return If the provided Quat is the Identity Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "check is identity quat fquat"))
	static bool IsIdentity(const FQuat& InQuat);

	/**
	 * Get the Identity Quat, or a rotation of zero.
	 *
	 * @return Identity Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "get identity quat fquat"))
	static FQuat GetIdentity() { return FQuat::Identity; }

	/**
	 * Get the size of the provided Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The size of the Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "size quat fquat"))
	static float Size(const FQuat& InQuat);

	/**
	 * Get the size of the provided Quat, squared.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The size of the Quat, squared.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "size sq squared quat fquat"))
	static float SizeSquared(const FQuat& InQuat);

	/**
	 * Get the forward axis of the provided Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The forward axis of the provided Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "x get forward quat fquat"))
	static FVector GetForwardAxis(const FQuat& InQuat);

	/**
	 * Get the right axis of the provided Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The right axis of the provided Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "y get right quat fquat"))
	static FVector GetRightAxis(const FQuat& InQuat);

	/**
	 * Get the up axis of the provided Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The up axis of the provided Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Query", meta = (Keywords = "z get up quat fquat"))
	static FVector GetUpAxis(const FQuat& InQuat);

	/**
	 * Get the forward axis of the provided Quat.
	 * 
	 * @param InQuat - The provided Quat.
	 * @return The orientation vector (X-Axis) of the provided Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "orientation vector quat fquat"))
	static FVector ToOrientationVector(const FQuat& From);

	/**
	 * Construct a Quat from an orientation vector.
	 * 
	 * @param InOrientationVector - The provided orientation vector (X-Axis).
	 * @return The resulting Quat.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Conversions", meta = (Keywords = "make from x orientation quat fquat"))
	static FQuat FromOrientationVector(const FVector& InOrientationVector);

	/**
	 * Gets the resulting direction vector if the given vector were rotated by the Quat, does not modify either.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param V - The provided direction vector.
	 * @return The resulting direction vector.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get rotate transform vector direction quat fquat"))
	static FVector GetRotatedOrientationVector(const FQuat& InQuat, const FVector& V);

	/**
	 * Rotates the direction vector by the given Quat, returns a reference for convenience.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param V - Direction vector to rotate - will be modified.
	 * @return Reference to the original Vector.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "ref rotate transform vector direction quat fquat"))
	static FVector& RotateOrientationVector(const FQuat& InQuat, UPARAM(Ref) FVector& V);

	/**
	 * Gets the resulting direction vector if the given vector were unrotated by the Quat, does not modify either.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param V - The provided direction vector.
	 * @return The resulting direction vector.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "get inverse negate rotate transform vector direction quat fquat"))
	static FVector GetUnrotatedOrientationVector(const FQuat& InQuat, const FVector& V);

	/**
	 * Inversely rotates the direction vector by the given Quat, returns a reference for convenience.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param V - Direction vector to unrotate - will be modified.
	 * @return Reference to the original Vector.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "get inverse negate rotate transform vector direction quat fquat"))
	static FVector& UnrotateOrientationVector(const FQuat& InQuat, UPARAM(Ref) FVector& V);

	/**
	 * Gets the resulting rotator if the given rotator were combined with the Quat, does not modify either.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param R - The provided Rotator, not a reference so that you can edit it in the node.
	 * @return The resulting Rotator.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "transform rotate rotation quat result"))
	static FRotator GetRotatedRotation(const FQuat& InQuat, const FRotator R);

	/**
	 * Combines the rotator with the given Quat, returns a reference for convenience.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param R - The Rotator to rotate - will be modified.
	 * @return Reference to the original Rotator.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "transform rotate rotator frotator rotation quat fquat"))
	static FRotator& RotateRotation(const FQuat& InQuat, UPARAM(Ref) FRotator& R);

	/**
	 * Gets the resulting rotator if the given rotator were inverted from the Quat, does not modify either.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param R - The provided Rotator, not a reference so that you can edit it in the node.
	 * @return The resulting Rotator.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Operations", meta = (Keywords = "inverse transform rotator frotator unrotate rotation quat result"))
	static FRotator GetUnrotatedRotation(const FQuat& InQuat, const FRotator R);

	/**
	 * Unrotates the given rotator from the Quat, returns a reference for convenience.
	 * 
	 * @param InQuat - The provided Quat.
	 * @param R - The Rotator to unrotate - will be modified.
	 * @return Reference to the original Rotator.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "inverse transform rotator frotator unrotate rotation quat fquat"))
	static FRotator& UnrotateRotation(const FQuat& InQuat, UPARAM(Ref) FRotator& R);
	
	/**
	 * Adds a rotational delta to this actor in local space. See the other AddActorLocalRotation for more detailed information.
	 * 
	 * @param Delta - The Quat to apply as a delta.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "add delta quat rot actor local relative", AdvancedDisplay = "2"))
	static void AddActorLocalRotation(AActor* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Adds a rotational delta to this actor in world space. See the other AddActorWorldRotation for more detailed information.
	 * 
	 * @param Delta - The Quat to apply as a delta.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "add delta quat rot actor world absolute", AdvancedDisplay = "2"))
	static void AddActorWorldRotation(AActor* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Adds a rotational delta to this component in local space. See the other AddLocalRotation for more detailed information.
	 * 
	 * @param Delta - The Quat to apply as a delta.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "add delta quat rot component local relative", AdvancedDisplay = "2"))
	static void AddComponentLocalRotation(USceneComponent* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Adds a rotational delta to this component in world space. See the other AddWorldRotation for more detailed information.
	 * 
	 * @param Delta - The Quat to apply as a delta.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "add delta quat rot component world absolute", AdvancedDisplay = "2"))
	static void AddComponentWorldRotation(USceneComponent* Target, const FQuat& Delta, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Sets the rotation of this actor in relative space. See the other SetActorRelativeRotation for more detailed information.
	 * 
	 * @param NewRotation - The Quat to apply as the new rotation.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "set quat rot actor local relative", AdvancedDisplay = "2"))
	static void SetActorRelativeRotation(AActor* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Sets the rotation of this actor in world space. See the other SetActorRotation for more detailed information.
	 *
	 * @param NewRotation - The Quat to apply as the new rotation.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "set quat rot actor world absolute", AdvancedDisplay = "2"))
	static void SetActorWorldRotation(AActor* Target, const FQuat& NewRotation, const bool bTeleport);
	
	/**
	 * Sets the rotation of this component in local space. See the other SetComponentRelativeRotation for more detailed information.
	 *
	 * @param NewRotation - The Quat to apply as the new rotation.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "set quat rot component local relative", AdvancedDisplay = "2"))
	static void SetComponentRelativeRotation(USceneComponent* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);
	
	/**
	 * Sets the rotation of this component in world space. See the other SetWorldRotation for more detailed information.
	 *
	 * @param NewRotation - The Quat to apply as the new rotation.
	 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.
	 * @param bTeleport - If the physics state should be unaffected by the move.
	 * @param SweepHitResult - If there was a sweep, the resulting HitResult.
	 */
	UFUNCTION(BlueprintCallable, Category = "Math|Quaternion|Operations", meta = (Keywords = "set quat rot component world absolute", AdvancedDisplay = "2"))
	static void SetComponentWorldRotation(USceneComponent* Target, const FQuat& NewRotation, const bool bSweep, const bool bTeleport, FHitResult& SweepHitResult);

	/**
	 * Get a Quat representing the provided Transform.
	 * 
	 * @param InTransform - The provided Transform, this is a reference because if you want to edit rotation values in the node you should
	 *						just convert via FromRotator.
	 * @return The Quat representing the provided Transform.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Accessors", meta = (CompactNodeTitle = "->", Keywords = "ue4 get quat from", BlueprintAutocast))
	static FQuat FromTransform(const FTransform& InTransform);

	/**
	 * Get a Quat representing the provided Actor's Transform.
	 * 
	 * @param InActor - The provided Actor.
	 * @return The Quat representing the provided Actor's Transform, or Identity if the Actor was nullptr.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Accessors", meta = (Keywords = "ue4 get quat from"))
	static FQuat FromActor(const AActor* InActor);

	/**
	 * Get a Quat representing the provided Component's Transform.
	 * 
	 * @param InComponent - The provided Component.
	 * @param Socket - Socket of the component to query, None (by default) results in just the component's transform.
	 * @param TransformSpace - The space the result should be in.
	 * @return The Quat representing the provided Component's Transform, or Identity if the Component was nullptr.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Quaternion|Accessors", meta = (Keywords = "ue4 get quat from", AdvancedDisplay = "1"))
	static FQuat FromComponent(const USceneComponent* InComponent, const FName Socket = NAME_None, const ERelativeTransformSpace TransformSpace = ERelativeTransformSpace::RTS_World);

private:
	static const float MinimumEaseSpeed;
};