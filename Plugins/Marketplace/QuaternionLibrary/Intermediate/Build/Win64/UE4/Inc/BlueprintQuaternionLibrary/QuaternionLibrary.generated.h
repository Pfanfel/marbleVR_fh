// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FQuat;
class AActor;
struct FTransform;
struct FHitResult;
struct FRotator;
struct FVector;
enum class EAngleUnitType : uint8;
enum class EQuaternionInterpMode : uint8;
#ifdef BLUEPRINTQUATERNIONLIBRARY_QuaternionLibrary_generated_h
#error "QuaternionLibrary.generated.h already included, missing '#pragma once' in QuaternionLibrary.h"
#endif
#define BLUEPRINTQUATERNIONLIBRARY_QuaternionLibrary_generated_h

#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_SPARSE_DATA
#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFromComponent); \
	DECLARE_FUNCTION(execFromActor); \
	DECLARE_FUNCTION(execFromTransform); \
	DECLARE_FUNCTION(execSetComponentWorldRotation); \
	DECLARE_FUNCTION(execSetComponentRelativeRotation); \
	DECLARE_FUNCTION(execSetActorWorldRotation); \
	DECLARE_FUNCTION(execSetActorRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentWorldRotation); \
	DECLARE_FUNCTION(execAddComponentLocalRotation); \
	DECLARE_FUNCTION(execAddActorWorldRotation); \
	DECLARE_FUNCTION(execAddActorLocalRotation); \
	DECLARE_FUNCTION(execUnrotateRotation); \
	DECLARE_FUNCTION(execGetUnrotatedRotation); \
	DECLARE_FUNCTION(execRotateRotation); \
	DECLARE_FUNCTION(execGetRotatedRotation); \
	DECLARE_FUNCTION(execUnrotateOrientationVector); \
	DECLARE_FUNCTION(execGetUnrotatedOrientationVector); \
	DECLARE_FUNCTION(execRotateOrientationVector); \
	DECLARE_FUNCTION(execGetRotatedOrientationVector); \
	DECLARE_FUNCTION(execFromOrientationVector); \
	DECLARE_FUNCTION(execToOrientationVector); \
	DECLARE_FUNCTION(execGetUpAxis); \
	DECLARE_FUNCTION(execGetRightAxis); \
	DECLARE_FUNCTION(execGetForwardAxis); \
	DECLARE_FUNCTION(execSizeSquared); \
	DECLARE_FUNCTION(execSize); \
	DECLARE_FUNCTION(execGetIdentity); \
	DECLARE_FUNCTION(execIsIdentity); \
	DECLARE_FUNCTION(execExactEquals_FQuat_FRotator); \
	DECLARE_FUNCTION(execExactEquals_FQuat_FQuat); \
	DECLARE_FUNCTION(execEquals_FQuat_FRotator); \
	DECLARE_FUNCTION(execEquals_FQuat_FQuat); \
	DECLARE_FUNCTION(execQInterpConstantTo); \
	DECLARE_FUNCTION(execQInterpToEaseOut); \
	DECLARE_FUNCTION(execQInterpToEaseInOut); \
	DECLARE_FUNCTION(execQInterpTo); \
	DECLARE_FUNCTION(execSquad); \
	DECLARE_FUNCTION(execCalcTangent); \
	DECLARE_FUNCTION(execSlerp); \
	DECLARE_FUNCTION(execFastBilerp); \
	DECLARE_FUNCTION(execFastLerp); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execGetAngularDistance); \
	DECLARE_FUNCTION(execFindBetweenOrientationVectors); \
	DECLARE_FUNCTION(execGetInverse); \
	DECLARE_FUNCTION(execInvert); \
	DECLARE_FUNCTION(execGetNormalized); \
	DECLARE_FUNCTION(execNormalize); \
	DECLARE_FUNCTION(execToSwingTwist); \
	DECLARE_FUNCTION(execToEuler); \
	DECLARE_FUNCTION(execFromEuler); \
	DECLARE_FUNCTION(execToAngleAxisDeg); \
	DECLARE_FUNCTION(execFromAngleAxisDeg); \
	DECLARE_FUNCTION(execToAngleAxis); \
	DECLARE_FUNCTION(execFromAngleAxis); \
	DECLARE_FUNCTION(execToRotator); \
	DECLARE_FUNCTION(execFromRotator); \
	DECLARE_FUNCTION(execComposeWtih); \
	DECLARE_FUNCTION(execGetComposeResult); \
	DECLARE_FUNCTION(execScaleBy_Division); \
	DECLARE_FUNCTION(execGetScaleResult_Division); \
	DECLARE_FUNCTION(execScaleBy); \
	DECLARE_FUNCTION(execGetScaleResult); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FRotator); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FVector); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FQuat); \
	DECLARE_FUNCTION(execMakeFromZY); \
	DECLARE_FUNCTION(execMakeFromZX); \
	DECLARE_FUNCTION(execMakeFromYZ); \
	DECLARE_FUNCTION(execMakeFromYX); \
	DECLARE_FUNCTION(execMakeFromXZ); \
	DECLARE_FUNCTION(execMakeFromXY); \
	DECLARE_FUNCTION(execMakeFromZ); \
	DECLARE_FUNCTION(execMakeFromY); \
	DECLARE_FUNCTION(execMakeFromX);


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFromComponent); \
	DECLARE_FUNCTION(execFromActor); \
	DECLARE_FUNCTION(execFromTransform); \
	DECLARE_FUNCTION(execSetComponentWorldRotation); \
	DECLARE_FUNCTION(execSetComponentRelativeRotation); \
	DECLARE_FUNCTION(execSetActorWorldRotation); \
	DECLARE_FUNCTION(execSetActorRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentWorldRotation); \
	DECLARE_FUNCTION(execAddComponentLocalRotation); \
	DECLARE_FUNCTION(execAddActorWorldRotation); \
	DECLARE_FUNCTION(execAddActorLocalRotation); \
	DECLARE_FUNCTION(execUnrotateRotation); \
	DECLARE_FUNCTION(execGetUnrotatedRotation); \
	DECLARE_FUNCTION(execRotateRotation); \
	DECLARE_FUNCTION(execGetRotatedRotation); \
	DECLARE_FUNCTION(execUnrotateOrientationVector); \
	DECLARE_FUNCTION(execGetUnrotatedOrientationVector); \
	DECLARE_FUNCTION(execRotateOrientationVector); \
	DECLARE_FUNCTION(execGetRotatedOrientationVector); \
	DECLARE_FUNCTION(execFromOrientationVector); \
	DECLARE_FUNCTION(execToOrientationVector); \
	DECLARE_FUNCTION(execGetUpAxis); \
	DECLARE_FUNCTION(execGetRightAxis); \
	DECLARE_FUNCTION(execGetForwardAxis); \
	DECLARE_FUNCTION(execSizeSquared); \
	DECLARE_FUNCTION(execSize); \
	DECLARE_FUNCTION(execGetIdentity); \
	DECLARE_FUNCTION(execIsIdentity); \
	DECLARE_FUNCTION(execExactEquals_FQuat_FRotator); \
	DECLARE_FUNCTION(execExactEquals_FQuat_FQuat); \
	DECLARE_FUNCTION(execEquals_FQuat_FRotator); \
	DECLARE_FUNCTION(execEquals_FQuat_FQuat); \
	DECLARE_FUNCTION(execQInterpConstantTo); \
	DECLARE_FUNCTION(execQInterpToEaseOut); \
	DECLARE_FUNCTION(execQInterpToEaseInOut); \
	DECLARE_FUNCTION(execQInterpTo); \
	DECLARE_FUNCTION(execSquad); \
	DECLARE_FUNCTION(execCalcTangent); \
	DECLARE_FUNCTION(execSlerp); \
	DECLARE_FUNCTION(execFastBilerp); \
	DECLARE_FUNCTION(execFastLerp); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execGetAngularDistance); \
	DECLARE_FUNCTION(execFindBetweenOrientationVectors); \
	DECLARE_FUNCTION(execGetInverse); \
	DECLARE_FUNCTION(execInvert); \
	DECLARE_FUNCTION(execGetNormalized); \
	DECLARE_FUNCTION(execNormalize); \
	DECLARE_FUNCTION(execToSwingTwist); \
	DECLARE_FUNCTION(execToEuler); \
	DECLARE_FUNCTION(execFromEuler); \
	DECLARE_FUNCTION(execToAngleAxisDeg); \
	DECLARE_FUNCTION(execFromAngleAxisDeg); \
	DECLARE_FUNCTION(execToAngleAxis); \
	DECLARE_FUNCTION(execFromAngleAxis); \
	DECLARE_FUNCTION(execToRotator); \
	DECLARE_FUNCTION(execFromRotator); \
	DECLARE_FUNCTION(execComposeWtih); \
	DECLARE_FUNCTION(execGetComposeResult); \
	DECLARE_FUNCTION(execScaleBy_Division); \
	DECLARE_FUNCTION(execGetScaleResult_Division); \
	DECLARE_FUNCTION(execScaleBy); \
	DECLARE_FUNCTION(execGetScaleResult); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FRotator); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FVector); \
	DECLARE_FUNCTION(execDotProduct_FQuat_FQuat); \
	DECLARE_FUNCTION(execMakeFromZY); \
	DECLARE_FUNCTION(execMakeFromZX); \
	DECLARE_FUNCTION(execMakeFromYZ); \
	DECLARE_FUNCTION(execMakeFromYX); \
	DECLARE_FUNCTION(execMakeFromXZ); \
	DECLARE_FUNCTION(execMakeFromXY); \
	DECLARE_FUNCTION(execMakeFromZ); \
	DECLARE_FUNCTION(execMakeFromY); \
	DECLARE_FUNCTION(execMakeFromX);


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuaternionLibrary(); \
	friend struct Z_Construct_UClass_UQuaternionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuaternionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintQuaternionLibrary"), NO_API) \
	DECLARE_SERIALIZER(UQuaternionLibrary)


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUQuaternionLibrary(); \
	friend struct Z_Construct_UClass_UQuaternionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuaternionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintQuaternionLibrary"), NO_API) \
	DECLARE_SERIALIZER(UQuaternionLibrary)


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternionLibrary(UQuaternionLibrary&&); \
	NO_API UQuaternionLibrary(const UQuaternionLibrary&); \
public:


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternionLibrary(UQuaternionLibrary&&); \
	NO_API UQuaternionLibrary(const UQuaternionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternionLibrary)


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_41_PROLOG
#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_SPARSE_DATA \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_INCLASS \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_SPARSE_DATA \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTQUATERNIONLIBRARY_API UClass* StaticClass<class UQuaternionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintQuaternionLibrary_Source_BlueprintQuaternionLibrary_Public_QuaternionLibrary_h


#define FOREACH_ENUM_EANGLEUNITTYPE(op) \
	op(EAngleUnitType::Radians) \
	op(EAngleUnitType::Degrees) 

enum class EAngleUnitType : uint8;
template<> BLUEPRINTQUATERNIONLIBRARY_API UEnum* StaticEnum<EAngleUnitType>();

#define FOREACH_ENUM_EQUATERNIONINTERPMODE(op) \
	op(EQuaternionInterpMode::LerpNonNormalized) \
	op(EQuaternionInterpMode::LerpNormalized) \
	op(EQuaternionInterpMode::SlerpNonNormalized) \
	op(EQuaternionInterpMode::SlerpNormalized) 

enum class EQuaternionInterpMode : uint8;
template<> BLUEPRINTQUATERNIONLIBRARY_API UEnum* StaticEnum<EQuaternionInterpMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
