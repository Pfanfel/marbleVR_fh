// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintQuaternionLibrary/Public/QuaternionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuaternionLibrary() {}
// Cross Module References
	BLUEPRINTQUATERNIONLIBRARY_API UEnum* Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType();
	UPackage* Z_Construct_UPackage__Script_BlueprintQuaternionLibrary();
	BLUEPRINTQUATERNIONLIBRARY_API UEnum* Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode();
	BLUEPRINTQUATERNIONLIBRARY_API UClass* Z_Construct_UClass_UQuaternionLibrary_NoRegister();
	BLUEPRINTQUATERNIONLIBRARY_API UClass* Z_Construct_UClass_UQuaternionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EAngleUnitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, Z_Construct_UPackage__Script_BlueprintQuaternionLibrary(), TEXT("EAngleUnitType"));
		}
		return Singleton;
	}
	template<> BLUEPRINTQUATERNIONLIBRARY_API UEnum* StaticEnum<EAngleUnitType>()
	{
		return EAngleUnitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAngleUnitType(EAngleUnitType_StaticEnum, TEXT("/Script/BlueprintQuaternionLibrary"), TEXT("EAngleUnitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType_Hash() { return 2363983593U; }
	UEnum* Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintQuaternionLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAngleUnitType"), 0, Get_Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAngleUnitType::Radians", (int64)EAngleUnitType::Radians },
				{ "EAngleUnitType::Degrees", (int64)EAngleUnitType::Degrees },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Degrees.Comment", "/**\x09""Caller units specified in Degrees, but will be converted to/from Radians. */" },
				{ "Degrees.Name", "EAngleUnitType::Degrees" },
				{ "Degrees.ToolTip", "Caller units specified in Degrees, but will be converted to/from Radians." },
				{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
				{ "Radians.Comment", "/**\x09""Caller units specified in Radians. No conversion needed. */" },
				{ "Radians.Name", "EAngleUnitType::Radians" },
				{ "Radians.ToolTip", "Caller units specified in Radians. No conversion needed." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintQuaternionLibrary,
				nullptr,
				"EAngleUnitType",
				"EAngleUnitType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuaternionInterpMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode, Z_Construct_UPackage__Script_BlueprintQuaternionLibrary(), TEXT("EQuaternionInterpMode"));
		}
		return Singleton;
	}
	template<> BLUEPRINTQUATERNIONLIBRARY_API UEnum* StaticEnum<EQuaternionInterpMode>()
	{
		return EQuaternionInterpMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuaternionInterpMode(EQuaternionInterpMode_StaticEnum, TEXT("/Script/BlueprintQuaternionLibrary"), TEXT("EQuaternionInterpMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode_Hash() { return 3181771748U; }
	UEnum* Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintQuaternionLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuaternionInterpMode"), 0, Get_Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuaternionInterpMode::LerpNonNormalized", (int64)EQuaternionInterpMode::LerpNonNormalized },
				{ "EQuaternionInterpMode::LerpNormalized", (int64)EQuaternionInterpMode::LerpNormalized },
				{ "EQuaternionInterpMode::SlerpNonNormalized", (int64)EQuaternionInterpMode::SlerpNonNormalized },
				{ "EQuaternionInterpMode::SlerpNormalized", (int64)EQuaternionInterpMode::SlerpNormalized },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// class USceneComponent; // @note(devlinw): included above, commenting out as it we're explicitly including the type's header.\n" },
				{ "LerpNonNormalized.Comment", "/**\x09Uses plain linear interpolation, but doesn't normalize the result. */" },
				{ "LerpNonNormalized.Name", "EQuaternionInterpMode::LerpNonNormalized" },
				{ "LerpNonNormalized.ToolTip", "Uses plain linear interpolation, but doesn't normalize the result." },
				{ "LerpNormalized.Comment", "/**\x09Uses plain linear interpolation, and normalizes the result. */" },
				{ "LerpNormalized.Name", "EQuaternionInterpMode::LerpNormalized" },
				{ "LerpNormalized.ToolTip", "Uses plain linear interpolation, and normalizes the result." },
				{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
				{ "SlerpNonNormalized.Comment", "/**\x09Uses spherical linear interpolation, but doesn't normalize the result. */" },
				{ "SlerpNonNormalized.Name", "EQuaternionInterpMode::SlerpNonNormalized" },
				{ "SlerpNonNormalized.ToolTip", "Uses spherical linear interpolation, but doesn't normalize the result." },
				{ "SlerpNormalized.Comment", "/**\x09Uses spherical linear interpolation, and normalizes the result. */" },
				{ "SlerpNormalized.Name", "EQuaternionInterpMode::SlerpNormalized" },
				{ "SlerpNormalized.ToolTip", "Uses spherical linear interpolation, and normalizes the result." },
				{ "ToolTip", "class USceneComponent;  @note(devlinw): included above, commenting out as it we're explicitly including the type's header." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintQuaternionLibrary,
				nullptr,
				"EQuaternionInterpMode",
				"EQuaternionInterpMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
		P_GET_PROPERTY(FByteProperty,Z_Param_TransformSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromComponent(Z_Param_InComponent,Z_Param_Socket,ERelativeTransformSpace(Z_Param_TransformSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromActor(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromTransform(Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSetComponentWorldRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::SetComponentWorldRotation(Z_Param_Target,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSetComponentRelativeRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::SetComponentRelativeRotation(Z_Param_Target,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSetActorWorldRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::SetActorWorldRotation(Z_Param_Target,Z_Param_Out_NewRotation,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSetActorRelativeRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::SetActorRelativeRotation(Z_Param_Target,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execAddComponentWorldRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::AddComponentWorldRotation(Z_Param_Target,Z_Param_Out_Delta,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execAddComponentLocalRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::AddComponentLocalRotation(Z_Param_Target,Z_Param_Out_Delta,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execAddActorWorldRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::AddActorWorldRotation(Z_Param_Target,Z_Param_Out_Delta,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execAddActorLocalRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::AddActorLocalRotation(Z_Param_Target,Z_Param_Out_Delta,Z_Param_bSweep,Z_Param_bTeleport,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execUnrotateRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_R);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UQuaternionLibrary::UnrotateRotation(Z_Param_Out_InQuat,Z_Param_Out_R);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetUnrotatedRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT(FRotator,Z_Param_R);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UQuaternionLibrary::GetUnrotatedRotation(Z_Param_Out_InQuat,Z_Param_R);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execRotateRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_R);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UQuaternionLibrary::RotateRotation(Z_Param_Out_InQuat,Z_Param_Out_R);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetRotatedRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT(FRotator,Z_Param_R);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UQuaternionLibrary::GetRotatedRotation(Z_Param_Out_InQuat,Z_Param_R);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execUnrotateOrientationVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::UnrotateOrientationVector(Z_Param_Out_InQuat,Z_Param_Out_V);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetUnrotatedOrientationVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::GetUnrotatedOrientationVector(Z_Param_Out_InQuat,Z_Param_Out_V);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execRotateOrientationVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::RotateOrientationVector(Z_Param_Out_InQuat,Z_Param_Out_V);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetRotatedOrientationVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::GetRotatedOrientationVector(Z_Param_Out_InQuat,Z_Param_Out_V);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromOrientationVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InOrientationVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromOrientationVector(Z_Param_Out_InOrientationVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToOrientationVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::ToOrientationVector(Z_Param_Out_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetUpAxis)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::GetUpAxis(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetRightAxis)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::GetRightAxis(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetForwardAxis)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::GetForwardAxis(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSizeSquared)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::SizeSquared(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSize)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::Size(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetIdentity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetIdentity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execIsIdentity)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuaternionLibrary::IsIdentity(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execExactEquals_FQuat_FRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuaternionLibrary::ExactEquals_FQuat_FRotator(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execExactEquals_FQuat_FQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuaternionLibrary::ExactEquals_FQuat_FQuat(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execEquals_FQuat_FRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuaternionLibrary::Equals_FQuat_FRotator(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Tolerance,EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execEquals_FQuat_FQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuaternionLibrary::Equals_FQuat_FQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Tolerance,EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execQInterpConstantTo)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_ENUM(EQuaternionInterpMode,Z_Param_Mode);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::QInterpConstantTo(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed,EQuaternionInterpMode(Z_Param_Mode),EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execQInterpToEaseOut)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EaseOutDist);
		P_GET_ENUM(EQuaternionInterpMode,Z_Param_Mode);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::QInterpToEaseOut(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed,Z_Param_EaseOutDist,EQuaternionInterpMode(Z_Param_Mode),EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execQInterpToEaseInOut)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EaseInDist);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EaseOutDist);
		P_GET_ENUM(EQuaternionInterpMode,Z_Param_Mode);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::QInterpToEaseInOut(Z_Param_Out_Origin,Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed,Z_Param_EaseInDist,Z_Param_EaseOutDist,EQuaternionInterpMode(Z_Param_Mode),EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execQInterpTo)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_ENUM(EQuaternionInterpMode,Z_Param_Mode);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::QInterpTo(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed,EQuaternionInterpMode(Z_Param_Mode),EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSquad)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_QuatA);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_TangentA);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_QuatB);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_TangentB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::Squad(Z_Param_Out_QuatA,Z_Param_Out_TangentA,Z_Param_Out_QuatB,Z_Param_Out_TangentB,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execCalcTangent)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Previous);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Next);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tension);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Tangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::CalcTangent(Z_Param_Out_Previous,Z_Param_Out_Current,Z_Param_Out_Next,Z_Param_Tension,Z_Param_Out_Tangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execSlerp)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SlerpBy);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::Slerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_SlerpBy,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFastBilerp)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P00);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P10);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P01);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P11);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FracX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FracY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FastBilerp(Z_Param_Out_P00,Z_Param_Out_P10,Z_Param_Out_P01,Z_Param_Out_P11,Z_Param_FracX,Z_Param_FracY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFastLerp)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FastLerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromString(Z_Param_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToString)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuaternionLibrary::ToString(Z_Param_Out_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetAngularDistance)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::GetAngularDistance(Z_Param_Out_A,Z_Param_Out_B,EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFindBetweenOrientationVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FindBetweenOrientationVectors(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetInverse)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InverseOf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetInverse(Z_Param_Out_InverseOf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execInvert)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_ToInvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::Invert(Z_Param_Out_ToInvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetNormalized)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_ToNormalize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetNormalized(Z_Param_Out_ToNormalize,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execNormalize)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_ToNormalize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::Normalize(Z_Param_Out_ToNormalize,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToSwingTwist)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InTwistAxis);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutSwing);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutTwist);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::ToSwingTwist(Z_Param_Out_From,Z_Param_Out_InTwistAxis,Z_Param_Out_OutSwing,Z_Param_Out_OutTwist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToEuler)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UQuaternionLibrary::ToEuler(Z_Param_Out_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromEuler)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InEuler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromEuler(Z_Param_Out_InEuler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToAngleAxisDeg)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::ToAngleAxisDeg(Z_Param_Out_From,Z_Param_Out_OutAxis,Z_Param_Out_OutAngleDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromAngleAxisDeg)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromAngleAxisDeg(Z_Param_Out_Axis,Z_Param_AngleDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToAngleAxis)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionLibrary::ToAngleAxis(Z_Param_Out_From,Z_Param_Out_OutAxis,Z_Param_Out_OutAngle,EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromAngleAxis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_ENUM(EAngleUnitType,Z_Param_AngleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromAngleAxis(Z_Param_Out_Axis,Z_Param_Angle,EAngleUnitType(Z_Param_AngleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execToRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UQuaternionLibrary::ToRotator(Z_Param_Out_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execFromRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::FromRotator(Z_Param_Out_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execComposeWtih)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::ComposeWtih(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetComposeResult)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetComposeResult(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execScaleBy_Division)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Base);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::ScaleBy_Division(Z_Param_Out_Base,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetScaleResult_Division)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Base);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetScaleResult_Division(Z_Param_Out_Base,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execScaleBy)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Base);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::ScaleBy(Z_Param_Out_Base,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execGetScaleResult)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Base);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::GetScaleResult(Z_Param_Out_Base,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execDotProduct_FQuat_FRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::DotProduct_FQuat_FRotator(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execDotProduct_FQuat_FVector)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::DotProduct_FQuat_FVector(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execDotProduct_FQuat_FQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuaternionLibrary::DotProduct_FQuat_FQuat(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromZY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ZAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromZY(Z_Param_Out_ZAxis,Z_Param_Out_YAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromZX)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ZAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromZX(Z_Param_Out_ZAxis,Z_Param_Out_XAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromYZ)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromYZ(Z_Param_Out_YAxis,Z_Param_Out_ZAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromYX)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromYX(Z_Param_Out_YAxis,Z_Param_Out_XAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromXZ)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromXZ(Z_Param_Out_XAxis,Z_Param_Out_ZAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromXY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromXY(Z_Param_Out_XAxis,Z_Param_Out_YAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromZ)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromZ(Z_Param_Out_ZAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromY(Z_Param_Out_YAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionLibrary::execMakeFromX)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionLibrary::MakeFromX(Z_Param_Out_XAxis);
		P_NATIVE_END;
	}
	void UQuaternionLibrary::StaticRegisterNativesUQuaternionLibrary()
	{
		UClass* Class = UQuaternionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorLocalRotation", &UQuaternionLibrary::execAddActorLocalRotation },
			{ "AddActorWorldRotation", &UQuaternionLibrary::execAddActorWorldRotation },
			{ "AddComponentLocalRotation", &UQuaternionLibrary::execAddComponentLocalRotation },
			{ "AddComponentWorldRotation", &UQuaternionLibrary::execAddComponentWorldRotation },
			{ "CalcTangent", &UQuaternionLibrary::execCalcTangent },
			{ "ComposeWtih", &UQuaternionLibrary::execComposeWtih },
			{ "DotProduct_FQuat_FQuat", &UQuaternionLibrary::execDotProduct_FQuat_FQuat },
			{ "DotProduct_FQuat_FRotator", &UQuaternionLibrary::execDotProduct_FQuat_FRotator },
			{ "DotProduct_FQuat_FVector", &UQuaternionLibrary::execDotProduct_FQuat_FVector },
			{ "Equals_FQuat_FQuat", &UQuaternionLibrary::execEquals_FQuat_FQuat },
			{ "Equals_FQuat_FRotator", &UQuaternionLibrary::execEquals_FQuat_FRotator },
			{ "ExactEquals_FQuat_FQuat", &UQuaternionLibrary::execExactEquals_FQuat_FQuat },
			{ "ExactEquals_FQuat_FRotator", &UQuaternionLibrary::execExactEquals_FQuat_FRotator },
			{ "FastBilerp", &UQuaternionLibrary::execFastBilerp },
			{ "FastLerp", &UQuaternionLibrary::execFastLerp },
			{ "FindBetweenOrientationVectors", &UQuaternionLibrary::execFindBetweenOrientationVectors },
			{ "FromActor", &UQuaternionLibrary::execFromActor },
			{ "FromAngleAxis", &UQuaternionLibrary::execFromAngleAxis },
			{ "FromAngleAxisDeg", &UQuaternionLibrary::execFromAngleAxisDeg },
			{ "FromComponent", &UQuaternionLibrary::execFromComponent },
			{ "FromEuler", &UQuaternionLibrary::execFromEuler },
			{ "FromOrientationVector", &UQuaternionLibrary::execFromOrientationVector },
			{ "FromRotator", &UQuaternionLibrary::execFromRotator },
			{ "FromString", &UQuaternionLibrary::execFromString },
			{ "FromTransform", &UQuaternionLibrary::execFromTransform },
			{ "GetAngularDistance", &UQuaternionLibrary::execGetAngularDistance },
			{ "GetComposeResult", &UQuaternionLibrary::execGetComposeResult },
			{ "GetForwardAxis", &UQuaternionLibrary::execGetForwardAxis },
			{ "GetIdentity", &UQuaternionLibrary::execGetIdentity },
			{ "GetInverse", &UQuaternionLibrary::execGetInverse },
			{ "GetNormalized", &UQuaternionLibrary::execGetNormalized },
			{ "GetRightAxis", &UQuaternionLibrary::execGetRightAxis },
			{ "GetRotatedOrientationVector", &UQuaternionLibrary::execGetRotatedOrientationVector },
			{ "GetRotatedRotation", &UQuaternionLibrary::execGetRotatedRotation },
			{ "GetScaleResult", &UQuaternionLibrary::execGetScaleResult },
			{ "GetScaleResult_Division", &UQuaternionLibrary::execGetScaleResult_Division },
			{ "GetUnrotatedOrientationVector", &UQuaternionLibrary::execGetUnrotatedOrientationVector },
			{ "GetUnrotatedRotation", &UQuaternionLibrary::execGetUnrotatedRotation },
			{ "GetUpAxis", &UQuaternionLibrary::execGetUpAxis },
			{ "Invert", &UQuaternionLibrary::execInvert },
			{ "IsIdentity", &UQuaternionLibrary::execIsIdentity },
			{ "MakeFromX", &UQuaternionLibrary::execMakeFromX },
			{ "MakeFromXY", &UQuaternionLibrary::execMakeFromXY },
			{ "MakeFromXZ", &UQuaternionLibrary::execMakeFromXZ },
			{ "MakeFromY", &UQuaternionLibrary::execMakeFromY },
			{ "MakeFromYX", &UQuaternionLibrary::execMakeFromYX },
			{ "MakeFromYZ", &UQuaternionLibrary::execMakeFromYZ },
			{ "MakeFromZ", &UQuaternionLibrary::execMakeFromZ },
			{ "MakeFromZX", &UQuaternionLibrary::execMakeFromZX },
			{ "MakeFromZY", &UQuaternionLibrary::execMakeFromZY },
			{ "Normalize", &UQuaternionLibrary::execNormalize },
			{ "QInterpConstantTo", &UQuaternionLibrary::execQInterpConstantTo },
			{ "QInterpTo", &UQuaternionLibrary::execQInterpTo },
			{ "QInterpToEaseInOut", &UQuaternionLibrary::execQInterpToEaseInOut },
			{ "QInterpToEaseOut", &UQuaternionLibrary::execQInterpToEaseOut },
			{ "RotateOrientationVector", &UQuaternionLibrary::execRotateOrientationVector },
			{ "RotateRotation", &UQuaternionLibrary::execRotateRotation },
			{ "ScaleBy", &UQuaternionLibrary::execScaleBy },
			{ "ScaleBy_Division", &UQuaternionLibrary::execScaleBy_Division },
			{ "SetActorRelativeRotation", &UQuaternionLibrary::execSetActorRelativeRotation },
			{ "SetActorWorldRotation", &UQuaternionLibrary::execSetActorWorldRotation },
			{ "SetComponentRelativeRotation", &UQuaternionLibrary::execSetComponentRelativeRotation },
			{ "SetComponentWorldRotation", &UQuaternionLibrary::execSetComponentWorldRotation },
			{ "Size", &UQuaternionLibrary::execSize },
			{ "SizeSquared", &UQuaternionLibrary::execSizeSquared },
			{ "Slerp", &UQuaternionLibrary::execSlerp },
			{ "Squad", &UQuaternionLibrary::execSquad },
			{ "ToAngleAxis", &UQuaternionLibrary::execToAngleAxis },
			{ "ToAngleAxisDeg", &UQuaternionLibrary::execToAngleAxisDeg },
			{ "ToEuler", &UQuaternionLibrary::execToEuler },
			{ "ToOrientationVector", &UQuaternionLibrary::execToOrientationVector },
			{ "ToRotator", &UQuaternionLibrary::execToRotator },
			{ "ToString", &UQuaternionLibrary::execToString },
			{ "ToSwingTwist", &UQuaternionLibrary::execToSwingTwist },
			{ "UnrotateOrientationVector", &UQuaternionLibrary::execUnrotateOrientationVector },
			{ "UnrotateRotation", &UQuaternionLibrary::execUnrotateRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics
	{
		struct QuaternionLibrary_eventAddActorLocalRotation_Parms
		{
			AActor* Target;
			FQuat Delta;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorLocalRotation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorLocalRotation_Parms, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddActorLocalRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddActorLocalRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddActorLocalRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddActorLocalRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorLocalRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Adds a rotational delta to this actor in local space. See the other AddActorLocalRotation for more detailed information.\n\x09 * \n\x09 * @param Delta - The Quat to apply as a delta.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "add delta quat rot actor local relative" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Adds a rotational delta to this actor in local space. See the other AddActorLocalRotation for more detailed information.\n\n@param Delta - The Quat to apply as a delta.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "AddActorLocalRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventAddActorLocalRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics
	{
		struct QuaternionLibrary_eventAddActorWorldRotation_Parms
		{
			AActor* Target;
			FQuat Delta;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorWorldRotation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorWorldRotation_Parms, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddActorWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddActorWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddActorWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddActorWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddActorWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Adds a rotational delta to this actor in world space. See the other AddActorWorldRotation for more detailed information.\n\x09 * \n\x09 * @param Delta - The Quat to apply as a delta.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "add delta quat rot actor world absolute" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Adds a rotational delta to this actor in world space. See the other AddActorWorldRotation for more detailed information.\n\n@param Delta - The Quat to apply as a delta.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "AddActorWorldRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventAddActorWorldRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics
	{
		struct QuaternionLibrary_eventAddComponentLocalRotation_Parms
		{
			USceneComponent* Target;
			FQuat Delta;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentLocalRotation_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentLocalRotation_Parms, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddComponentLocalRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddComponentLocalRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddComponentLocalRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddComponentLocalRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentLocalRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Adds a rotational delta to this component in local space. See the other AddLocalRotation for more detailed information.\n\x09 * \n\x09 * @param Delta - The Quat to apply as a delta.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "add delta quat rot component local relative" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Adds a rotational delta to this component in local space. See the other AddLocalRotation for more detailed information.\n\n@param Delta - The Quat to apply as a delta.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "AddComponentLocalRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventAddComponentLocalRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics
	{
		struct QuaternionLibrary_eventAddComponentWorldRotation_Parms
		{
			USceneComponent* Target;
			FQuat Delta;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentWorldRotation_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentWorldRotation_Parms, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddComponentWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddComponentWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventAddComponentWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventAddComponentWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventAddComponentWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Adds a rotational delta to this component in world space. See the other AddWorldRotation for more detailed information.\n\x09 * \n\x09 * @param Delta - The Quat to apply as a delta.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "add delta quat rot component world absolute" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Adds a rotational delta to this component in world space. See the other AddWorldRotation for more detailed information.\n\n@param Delta - The Quat to apply as a delta.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "AddComponentWorldRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventAddComponentWorldRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics
	{
		struct QuaternionLibrary_eventCalcTangent_Parms
		{
			FQuat Previous;
			FQuat Current;
			FQuat Next;
			float Tension;
			FQuat Tangent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Previous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tension;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Previous_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventCalcTangent_Parms, Previous), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Previous_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Previous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventCalcTangent_Parms, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Next_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventCalcTangent_Parms, Next), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Next_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Next_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Tension = { "Tension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventCalcTangent_Parms, Tension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventCalcTangent_Parms, Tangent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Previous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Tension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::NewProp_Tangent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Given three Quaternions for context, calculate the tangent at the Current input.\n\x09 * \n\x09 * @param Previous - Quaternion \"prior\" to the current.\n\x09 * @param Current - The Quaternion for which the tangent is being calculated\n\x09 * @param Next - Quaternion \"after\" the current.\n\x09 * @param Tension - UNUSED:: present for whenever the underlying engine function uses it.\n\x09 * @param Tangent - Calculated tangent at the Current point.\n\x09 */" },
		{ "Keywords", "tangent squad quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Given three Quaternions for context, calculate the tangent at the Current input.\n\n@param Previous - Quaternion \"prior\" to the current.\n@param Current - The Quaternion for which the tangent is being calculated\n@param Next - Quaternion \"after\" the current.\n@param Tension - UNUSED:: present for whenever the underlying engine function uses it.\n@param Tangent - Calculated tangent at the Current point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "CalcTangent", nullptr, nullptr, sizeof(QuaternionLibrary_eventCalcTangent_Parms), Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_CalcTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_CalcTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics
	{
		struct QuaternionLibrary_eventComposeWtih_Parms
		{
			FQuat A;
			FQuat B;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventComposeWtih_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventComposeWtih_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventComposeWtih_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Composes the two Quats. Order matters when composing Quats.\n\x09 * \n\x09 * @param A - The base of the compose - will be modified.\n\x09 * @param B - Quat applied as the second rotation.\n\x09 * @return Reference to the base (param A).\n\x09 */" },
		{ "Keywords", "compose combine fquat * quat ref" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Composes the two Quats. Order matters when composing Quats.\n\n@param A - The base of the compose - will be modified.\n@param B - Quat applied as the second rotation.\n@return Reference to the base (param A)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ComposeWtih", nullptr, nullptr, sizeof(QuaternionLibrary_eventComposeWtih_Parms), Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics
	{
		struct QuaternionLibrary_eventDotProduct_FQuat_FQuat_Parms
		{
			FQuat A;
			FQuat B;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FQuat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the dot product between two Quats.\n\x09 * \n\x09 * @param A - The first Quat.\n\x09 * @param B - The second Quat.\n\x09 * @return The dot product between the two.\n\x09 */" },
		{ "CompactNodeTitle", "." },
		{ "DisplayName", "Dot Product (Quat)" },
		{ "Keywords", "dot quat product ." },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the dot product between two Quats.\n\n@param A - The first Quat.\n@param B - The second Quat.\n@return The dot product between the two." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "DotProduct_FQuat_FQuat", nullptr, nullptr, sizeof(QuaternionLibrary_eventDotProduct_FQuat_FQuat_Parms), Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics
	{
		struct QuaternionLibrary_eventDotProduct_FQuat_FRotator_Parms
		{
			FQuat A;
			FRotator B;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FRotator_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FRotator_Parms, B), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FRotator_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the dot product between the given Quat's forward vector and the given rotator's orientation vector.\n\x09 * \n\x09 * @param A - The Quat which provides one orientation vector.\n\x09 * @param B - The Rotator which provides the other orientation vector.\n\x09 * @return The dot product between the two.\n\x09 */" },
		{ "CompactNodeTitle", "." },
		{ "DisplayName", "Dot Product (Rotator)" },
		{ "Keywords", "dot rot rotator rotator frotator quat fquat product ." },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the dot product between the given Quat's forward vector and the given rotator's orientation vector.\n\n@param A - The Quat which provides one orientation vector.\n@param B - The Rotator which provides the other orientation vector.\n@return The dot product between the two." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "DotProduct_FQuat_FRotator", nullptr, nullptr, sizeof(QuaternionLibrary_eventDotProduct_FQuat_FRotator_Parms), Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics
	{
		struct QuaternionLibrary_eventDotProduct_FQuat_FVector_Parms
		{
			FQuat A;
			FVector B;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FVector_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventDotProduct_FQuat_FVector_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the dot product between the given Quat's forward vector and the given orientation vector. \n\x09 * \n\x09 * @param A - The Quat which provides one orientation vector.\n\x09 * @param B - Another orientation vector.\n\x09 * @return The dot product between the two.\n\x09 */" },
		{ "CompactNodeTitle", "." },
		{ "DisplayName", "Dot Product (Vector)" },
		{ "Keywords", "dot vector fquat quat vec product ." },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the dot product between the given Quat's forward vector and the given orientation vector.\n\n@param A - The Quat which provides one orientation vector.\n@param B - Another orientation vector.\n@return The dot product between the two." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "DotProduct_FQuat_FVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventDotProduct_FQuat_FVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics
	{
		struct QuaternionLibrary_eventEquals_FQuat_FQuat_Parms
		{
			FQuat A;
			FQuat B;
			float Tolerance;
			EAngleUnitType AngleType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventEquals_FQuat_FQuat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms), &Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Tolerance,AngleType" },
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Compares the two Quaternions for equality.\n\x09 * \n\x09 * @param A - The first quaternion.\n\x09 * @param B - The second quaternion.\n\x09 * @param Tolerance - Tolerance for the comparison.\n\x09 * @param AngleType - Unit of Tolerance.\n\x09 * @return - Whether the inputs are considered equal.\n\x09 */" },
		{ "CPP_Default_AngleType", "Radians" },
		{ "CPP_Default_Tolerance", "0.000010" },
		{ "DisplayName", "Nearly Equals (FQuat)" },
		{ "Keywords", "nearly approximate about eqauls == quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Compares the two Quaternions for equality.\n\n@param A - The first quaternion.\n@param B - The second quaternion.\n@param Tolerance - Tolerance for the comparison.\n@param AngleType - Unit of Tolerance.\n@return - Whether the inputs are considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Equals_FQuat_FQuat", nullptr, nullptr, sizeof(QuaternionLibrary_eventEquals_FQuat_FQuat_Parms), Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics
	{
		struct QuaternionLibrary_eventEquals_FQuat_FRotator_Parms
		{
			FQuat A;
			FRotator B;
			float Tolerance;
			EAngleUnitType AngleType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms, B), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventEquals_FQuat_FRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms), &Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Tolerance,AngleType" },
		{ "AutoCreateRefTerm", "B" },
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Compares the two rotations for equality.\n\x09 * \n\x09 * @param A - Quaternion which is used in the comparison.\n\x09 * @param B - Euler Rotator which will be converted to Quaternion and then compared to A..\n\x09 * @param Tolerance - Tolerance for the comparison.\n\x09 * @param AngleType - Unit of Tolerance.\n\x09 * @return - Whether the inputs are considered equal.\n\x09 */" },
		{ "CPP_Default_AngleType", "Radians" },
		{ "CPP_Default_Tolerance", "0.000010" },
		{ "DisplayName", "Nearly Equals (FRotator)" },
		{ "Keywords", "nearly approximate about equals == rotator frotator quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Compares the two rotations for equality.\n\n@param A - Quaternion which is used in the comparison.\n@param B - Euler Rotator which will be converted to Quaternion and then compared to A..\n@param Tolerance - Tolerance for the comparison.\n@param AngleType - Unit of Tolerance.\n@return - Whether the inputs are considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Equals_FQuat_FRotator", nullptr, nullptr, sizeof(QuaternionLibrary_eventEquals_FQuat_FRotator_Parms), Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics
	{
		struct QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms
		{
			FQuat A;
			FQuat B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms), &Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Compares the Quaternions for equality.\n\x09 * \n\x09 * @param A - The first quaternion.\n\x09 * @param B - The second quaternion.\n\x09 * @return - Whether the inputs are considered equal.\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals (FQuat)" },
		{ "Keywords", "eqauls == quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Compares the Quaternions for equality.\n\n@param A - The first quaternion.\n@param B - The second quaternion.\n@return - Whether the inputs are considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ExactEquals_FQuat_FQuat", nullptr, nullptr, sizeof(QuaternionLibrary_eventExactEquals_FQuat_FQuat_Parms), Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics
	{
		struct QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms
		{
			FQuat A;
			FRotator B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms, B), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms), &Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "B" },
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Compares the two rotations for equality.\n\x09 * \n\x09 * @param A - Quaternion which is used in the comparison.\n\x09 * @param B - Euler Rotator which will be converted to Quaternion and then compared to A.\n\x09 * @return - Whether the inputs are considered equal.\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals (FRotator)" },
		{ "Keywords", "equals == rotator frotator quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Compares the two rotations for equality.\n\n@param A - Quaternion which is used in the comparison.\n@param B - Euler Rotator which will be converted to Quaternion and then compared to A.\n@return - Whether the inputs are considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ExactEquals_FQuat_FRotator", nullptr, nullptr, sizeof(QuaternionLibrary_eventExactEquals_FQuat_FRotator_Parms), Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics
	{
		struct QuaternionLibrary_eventFastBilerp_Parms
		{
			FQuat P00;
			FQuat P10;
			FQuat P01;
			FQuat P11;
			float FracX;
			float FracY;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P00_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P10_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P11_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FracX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FracX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FracY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FracY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P00_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P00 = { "P00", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, P00), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P00_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P10_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P10 = { "P10", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, P10), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P10_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P01 = { "P01", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, P01), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P11_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P11 = { "P11", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, P11), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P11_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracX = { "FracX", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, FracX), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracY = { "FracY", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, FracY), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracY_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastBilerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_P11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_FracY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Bilinear interpolation between four rotations. In order to provide useful inputs to the function,\n\x09 * imagine a unit square. The origin is 0,0 - and the upper bound is 1,1. If this is the case, \n\x09 * the variable names indicate \"positions\" of the Quats on this grid. \n\x09 * \n\x09 * FracX and FracY indicate how far along the \"grid\" for X and Y.\n\x09 * \n\x09 * @param P00 - Position 0, 0. Or lower left.\n\x09 * @param P10 - Position 1, 0. Or upper left.\n\x09 * @param P01 - Position 0, 1. Or lower right.\n\x09 * @param P11 - Position 1, 1. Or upper right.\n\x09 * @param FracX - Alpha for X.\n\x09 * @param FracY - Alpha for Y.\n\x09 * @return Unnormalized result of the bilinear interpolation.\n\x09 */" },
		{ "DisplayName", "Bilerp" },
		{ "Keywords", "bilerp fast interpolate bilinear quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Bilinear interpolation between four rotations. In order to provide useful inputs to the function,\nimagine a unit square. The origin is 0,0 - and the upper bound is 1,1. If this is the case,\nthe variable names indicate \"positions\" of the Quats on this grid.\n\nFracX and FracY indicate how far along the \"grid\" for X and Y.\n\n@param P00 - Position 0, 0. Or lower left.\n@param P10 - Position 1, 0. Or upper left.\n@param P01 - Position 0, 1. Or lower right.\n@param P11 - Position 1, 1. Or upper right.\n@param FracX - Alpha for X.\n@param FracY - Alpha for Y.\n@return Unnormalized result of the bilinear interpolation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FastBilerp", nullptr, nullptr, sizeof(QuaternionLibrary_eventFastBilerp_Parms), Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FastBilerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FastBilerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics
	{
		struct QuaternionLibrary_eventFastLerp_Parms
		{
			FQuat A;
			FQuat B;
			float Alpha;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastLerp_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastLerp_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastLerp_Parms, Alpha), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFastLerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Linear interpolation between A and B, by Alpha. \n\x09 * \n\x09 * @param A - The first Quat.\n\x09 * @param B - The second Quat.\n\x09 * @param Alpha - Ranges from 0..1, where 0 is A and 1 is B.\n\x09 * @return Unnormalized result of the lerp.\n\x09 */" },
		{ "DisplayName", "Lerp" },
		{ "Keywords", "lerp fast interpolate quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Linear interpolation between A and B, by Alpha.\n\n@param A - The first Quat.\n@param B - The second Quat.\n@param Alpha - Ranges from 0..1, where 0 is A and 1 is B.\n@return Unnormalized result of the lerp." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FastLerp", nullptr, nullptr, sizeof(QuaternionLibrary_eventFastLerp_Parms), Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FastLerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FastLerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics
	{
		struct QuaternionLibrary_eventFindBetweenOrientationVectors_Parms
		{
			FVector A;
			FVector B;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFindBetweenOrientationVectors_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFindBetweenOrientationVectors_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFindBetweenOrientationVectors_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the smallest possible rotation between two orientation vectors.\n\x09 * \n\x09 * @param A - First orientation vector.\n\x09 * @param B - Second orientation vector.\n\x09 * @return Smallest rotation, as a Quat.\n\x09 */" },
		{ "Keywords", "rotation between two directions vector dirs angle quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the smallest possible rotation between two orientation vectors.\n\n@param A - First orientation vector.\n@param B - Second orientation vector.\n@return Smallest rotation, as a Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FindBetweenOrientationVectors", nullptr, nullptr, sizeof(QuaternionLibrary_eventFindBetweenOrientationVectors_Parms), Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics
	{
		struct QuaternionLibrary_eventFromActor_Parms
		{
			const AActor* InActor;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_InActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_InActor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Accessors" },
		{ "Comment", "/**\n\x09 * Get a Quat representing the provided Actor's Transform.\n\x09 * \n\x09 * @param InActor - The provided Actor.\n\x09 * @return The Quat representing the provided Actor's Transform, or Identity if the Actor was nullptr.\n\x09 */" },
		{ "Keywords", "ue4 get quat from" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get a Quat representing the provided Actor's Transform.\n\n@param InActor - The provided Actor.\n@return The Quat representing the provided Actor's Transform, or Identity if the Actor was nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromActor", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromActor_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics
	{
		struct QuaternionLibrary_eventFromAngleAxis_Parms
		{
			FVector Axis;
			float Angle;
			EAngleUnitType AngleType;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxis_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxis_Parms, Angle), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Angle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxis_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AngleType" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Constructs a Quat from an axis and angle.\n\x09 * \n\x09 * @param Axis - Axis of rotation.\n\x09 * @param Angle - Angle (Radians) of rotation around that axis.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "CPP_Default_AngleType", "Radians" },
		{ "Keywords", "deg degree rad radians angle axis around from quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat from an axis and angle.\n\n@param Axis - Axis of rotation.\n@param Angle - Angle (Radians) of rotation around that axis.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromAngleAxis", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromAngleAxis_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics
	{
		struct QuaternionLibrary_eventFromAngleAxisDeg_Parms
		{
			FVector Axis;
			float AngleDeg;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleDeg;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxisDeg_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_AngleDeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_AngleDeg = { "AngleDeg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxisDeg_Parms, AngleDeg), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_AngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_AngleDeg_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromAngleAxisDeg_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_AngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Constructs a Quat from an axis and angle.\n\x09 * \n\x09 * @param Axis - Axis of rotation.\n\x09 * @param AngleDeg - Angle (Degrees) of rotation around that axis.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Superseded by FromAngleAxis now having an option for radians or degrees. Will be removed in the next release." },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat from an axis and angle.\n\n@param Axis - Axis of rotation.\n@param AngleDeg - Angle (Degrees) of rotation around that axis.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromAngleAxisDeg", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromAngleAxisDeg_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics
	{
		struct QuaternionLibrary_eventFromComponent_Parms
		{
			const USceneComponent* InComponent;
			FName Socket;
			TEnumAsByte<ERelativeTransformSpace> TransformSpace;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromComponent_Parms, InComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_InComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromComponent_Parms, Socket), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_TransformSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromComponent_Parms, TransformSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_TransformSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_TransformSpace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_InComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_Socket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Math|Quaternion|Accessors" },
		{ "Comment", "/**\n\x09 * Get a Quat representing the provided Component's Transform.\n\x09 * \n\x09 * @param InComponent - The provided Component.\n\x09 * @param Socket - Socket of the component to query, None (by default) results in just the component's transform.\n\x09 * @param TransformSpace - The space the result should be in.\n\x09 * @return The Quat representing the provided Component's Transform, or Identity if the Component was nullptr.\n\x09 */" },
		{ "CPP_Default_Socket", "None" },
		{ "CPP_Default_TransformSpace", "RTS_World" },
		{ "Keywords", "ue4 get quat from" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get a Quat representing the provided Component's Transform.\n\n@param InComponent - The provided Component.\n@param Socket - Socket of the component to query, None (by default) results in just the component's transform.\n@param TransformSpace - The space the result should be in.\n@return The Quat representing the provided Component's Transform, or Identity if the Component was nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromComponent", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromComponent_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics
	{
		struct QuaternionLibrary_eventFromEuler_Parms
		{
			FVector InEuler;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEuler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEuler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_InEuler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_InEuler = { "InEuler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromEuler_Parms, InEuler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_InEuler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_InEuler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromEuler_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_InEuler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InEuler" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Constructs a Quat from Euler angles.\n\x09 * \n\x09 * @param Euler - Rotations around the unit axes.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "euler rot angle axes from quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat from Euler angles.\n\n@param Euler - Rotations around the unit axes.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromEuler", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromEuler_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromEuler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromEuler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics
	{
		struct QuaternionLibrary_eventFromOrientationVector_Parms
		{
			FVector InOrientationVector;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOrientationVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOrientationVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_InOrientationVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_InOrientationVector = { "InOrientationVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromOrientationVector_Parms, InOrientationVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_InOrientationVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_InOrientationVector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_InOrientationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Construct a Quat from an orientation vector.\n\x09 * \n\x09 * @param InOrientationVector - The provided orientation vector (X-Axis).\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make from x orientation quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Construct a Quat from an orientation vector.\n\n@param InOrientationVector - The provided orientation vector (X-Axis).\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics
	{
		struct QuaternionLibrary_eventFromRotator_Parms
		{
			FRotator From;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromRotator_Parms, From), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "From" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Constructs a Quat from a Rotator.\n\x09 * \n\x09 * @param From - Given Rotator to build the Quat from.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "Keywords", "rot to rotator frotator get quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat from a Rotator.\n\n@param From - Given Rotator to build the Quat from.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromRotator", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromRotator_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics
	{
		struct QuaternionLibrary_eventFromString_Parms
		{
			FString From;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromString_Parms, From), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Constructs a Quat by extracting the component values from a given string.\n\x09 * String must be formatted as \"X=Val, Y=Val, Z=Val, W=Val\".\n\x09 * \n\x09 * @param From - String to build from - must be formatted as \"X=Val, Y=Val, Z=Val, W=Val\".\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "CPP_Default_From", "X=0.0, Y=0.0, Z=0.0, W=1.0" },
		{ "Keywords", "make from string quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat by extracting the component values from a given string.\nString must be formatted as \"X=Val, Y=Val, Z=Val, W=Val\".\n\n@param From - String to build from - must be formatted as \"X=Val, Y=Val, Z=Val, W=Val\".\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromString", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromString_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics
	{
		struct QuaternionLibrary_eventFromTransform_Parms
		{
			FTransform InTransform;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventFromTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Math|Quaternion|Accessors" },
		{ "Comment", "/**\n\x09 * Get a Quat representing the provided Transform.\n\x09 * \n\x09 * @param InTransform - The provided Transform, this is a reference because if you want to edit rotation values in the node you should\n\x09 *\x09\x09\x09\x09\x09\x09just convert via FromRotator.\n\x09 * @return The Quat representing the provided Transform.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "Keywords", "ue4 get quat from" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get a Quat representing the provided Transform.\n\n@param InTransform - The provided Transform, this is a reference because if you want to edit rotation values in the node you should\n                                             just convert via FromRotator.\n@return The Quat representing the provided Transform." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "FromTransform", nullptr, nullptr, sizeof(QuaternionLibrary_eventFromTransform_Parms), Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_FromTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_FromTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics
	{
		struct QuaternionLibrary_eventGetAngularDistance_Parms
		{
			FQuat A;
			FQuat B;
			EAngleUnitType AngleType;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetAngularDistance_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetAngularDistance_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetAngularDistance_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetAngularDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AngleType" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the angular distance between the Quats.\n\x09 * \n\x09 * @param A - The first Quat.\n\x09 * @param B - The second Quat.\n\x09 * @parapm AngleType - \n\x09 * @return Angular Rotation between the two Quats.\n\x09 */" },
		{ "CPP_Default_AngleType", "Radians" },
		{ "Keywords", "angular angle distance dis quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the angular distance between the Quats.\n\n@param A - The first Quat.\n@param B - The second Quat.\n@parapm AngleType -\n@return Angular Rotation between the two Quats." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetAngularDistance", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetAngularDistance_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics
	{
		struct QuaternionLibrary_eventGetComposeResult_Parms
		{
			FQuat A;
			FQuat B;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetComposeResult_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetComposeResult_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetComposeResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the result of composing the two provided Quats. Order matters when composing Quats.\n\x09 * \n\x09 * @param A - Quat applied as the first rotation.\n\x09 * @param B - Quat applied as the second rotation.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "compose combine * quat fquat copy result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the result of composing the two provided Quats. Order matters when composing Quats.\n\n@param A - Quat applied as the first rotation.\n@param B - Quat applied as the second rotation.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetComposeResult", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetComposeResult_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics
	{
		struct QuaternionLibrary_eventGetForwardAxis_Parms
		{
			FQuat InQuat;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetForwardAxis_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetForwardAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the forward axis of the provided Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The forward axis of the provided Quat.\n\x09 */" },
		{ "Keywords", "x get forward quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the forward axis of the provided Quat.\n\n@param InQuat - The provided Quat.\n@return The forward axis of the provided Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetForwardAxis", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetForwardAxis_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics
	{
		struct QuaternionLibrary_eventGetIdentity_Parms
		{
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetIdentity_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the Identity Quat, or a rotation of zero.\n\x09 *\n\x09 * @return Identity Quat.\n\x09 */" },
		{ "Keywords", "get identity quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the Identity Quat, or a rotation of zero.\n\n@return Identity Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetIdentity", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetIdentity_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics
	{
		struct QuaternionLibrary_eventGetInverse_Parms
		{
			FQuat InverseOf;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InverseOf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_InverseOf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_InverseOf = { "InverseOf", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetInverse_Parms, InverseOf), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_InverseOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_InverseOf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetInverse_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_InverseOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Returns the inverse of the given Quat.\n\x09 * \n\x09 * @param InverseOf - Quat to get the inverse of.\n\x09 * @return Inverse of the given Quat.\n\x09 */" },
		{ "Keywords", "get invert flip negate quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Returns the inverse of the given Quat.\n\n@param InverseOf - Quat to get the inverse of.\n@return Inverse of the given Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetInverse", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetInverse_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetInverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetInverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics
	{
		struct QuaternionLibrary_eventGetNormalized_Parms
		{
			FQuat ToNormalize;
			float Tolerance;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToNormalize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToNormalize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ToNormalize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ToNormalize = { "ToNormalize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetNormalized_Parms, ToNormalize), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ToNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ToNormalize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetNormalized_Parms, Tolerance), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_Tolerance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetNormalized_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ToNormalize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Returns the result of normalizing the given Quat.\n\x09 * \n\x09 * @param ToNormalize - The Quat to be normalized.\n\x09 * @param Tolerance - Tolerance to use while normalizing.\n\x09 * @return Normalized Quat.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "Keywords", "get normalized quat fquat ref" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Returns the result of normalizing the given Quat.\n\n@param ToNormalize - The Quat to be normalized.\n@param Tolerance - Tolerance to use while normalizing.\n@return Normalized Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetNormalized", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetNormalized_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics
	{
		struct QuaternionLibrary_eventGetRightAxis_Parms
		{
			FQuat InQuat;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRightAxis_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRightAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the right axis of the provided Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The right axis of the provided Quat.\n\x09 */" },
		{ "Keywords", "y get right quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the right axis of the provided Quat.\n\n@param InQuat - The provided Quat.\n@return The right axis of the provided Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetRightAxis", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetRightAxis_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics
	{
		struct QuaternionLibrary_eventGetRotatedOrientationVector_Parms
		{
			FQuat InQuat;
			FVector V;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedOrientationVector_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_InQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedOrientationVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_V_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_V_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gets the resulting direction vector if the given vector were rotated by the Quat, does not modify either.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param V - The provided direction vector.\n\x09 * @return The resulting direction vector.\n\x09 */" },
		{ "Keywords", "get rotate transform vector direction quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gets the resulting direction vector if the given vector were rotated by the Quat, does not modify either.\n\n@param InQuat - The provided Quat.\n@param V - The provided direction vector.\n@return The resulting direction vector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetRotatedOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetRotatedOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics
	{
		struct QuaternionLibrary_eventGetRotatedRotation_Parms
		{
			FQuat InQuat;
			FRotator R;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedRotation_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_InQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_R_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedRotation_Parms, R), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetRotatedRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gets the resulting rotator if the given rotator were combined with the Quat, does not modify either.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param R - The provided Rotator, not a reference so that you can edit it in the node.\n\x09 * @return The resulting Rotator.\n\x09 */" },
		{ "Keywords", "transform rotate rotation quat result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gets the resulting rotator if the given rotator were combined with the Quat, does not modify either.\n\n@param InQuat - The provided Quat.\n@param R - The provided Rotator, not a reference so that you can edit it in the node.\n@return The resulting Rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetRotatedRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetRotatedRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics
	{
		struct QuaternionLibrary_eventGetScaleResult_Parms
		{
			FQuat Base;
			float Scale;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Base_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Parms, Base), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Parms, Scale), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the result of scaling (multiplication) a Quat by Scale.\n\x09 * \n\x09 * @param Base - The Quat to scale - won't be modified.\n\x09 * @param Scale - Amount to scale by.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "get scale * float fl quat fquat copy result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the result of scaling (multiplication) a Quat by Scale.\n\n@param Base - The Quat to scale - won't be modified.\n@param Scale - Amount to scale by.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetScaleResult", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetScaleResult_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics
	{
		struct QuaternionLibrary_eventGetScaleResult_Division_Parms
		{
			FQuat Base;
			float Scale;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Base_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Division_Parms, Base), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Division_Parms, Scale), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetScaleResult_Division_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gives the result of scaling a Quat by Scale (division).\n\x09 * \n\x09 * @param Base - The Quat to scale - won't be modified.\n\x09 * @param Scale - Amount to scale by.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "get scale / float fl quat fquat copy result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the result of scaling a Quat by Scale (division).\n\n@param Base - The Quat to scale - won't be modified.\n@param Scale - Amount to scale by.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetScaleResult_Division", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetScaleResult_Division_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics
	{
		struct QuaternionLibrary_eventGetUnrotatedOrientationVector_Parms
		{
			FQuat InQuat;
			FVector V;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedOrientationVector_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_InQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedOrientationVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_V_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_V_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gets the resulting direction vector if the given vector were unrotated by the Quat, does not modify either.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param V - The provided direction vector.\n\x09 * @return The resulting direction vector.\n\x09 */" },
		{ "Keywords", "get inverse negate rotate transform vector direction quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gets the resulting direction vector if the given vector were unrotated by the Quat, does not modify either.\n\n@param InQuat - The provided Quat.\n@param V - The provided direction vector.\n@return The resulting direction vector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetUnrotatedOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetUnrotatedOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics
	{
		struct QuaternionLibrary_eventGetUnrotatedRotation_Parms
		{
			FQuat InQuat;
			FRotator R;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedRotation_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_InQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_R_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedRotation_Parms, R), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUnrotatedRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Gets the resulting rotator if the given rotator were inverted from the Quat, does not modify either.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param R - The provided Rotator, not a reference so that you can edit it in the node.\n\x09 * @return The resulting Rotator.\n\x09 */" },
		{ "Keywords", "inverse transform rotator frotator unrotate rotation quat result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gets the resulting rotator if the given rotator were inverted from the Quat, does not modify either.\n\n@param InQuat - The provided Quat.\n@param R - The provided Rotator, not a reference so that you can edit it in the node.\n@return The resulting Rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetUnrotatedRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetUnrotatedRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics
	{
		struct QuaternionLibrary_eventGetUpAxis_Parms
		{
			FQuat InQuat;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUpAxis_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventGetUpAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the up axis of the provided Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The up axis of the provided Quat.\n\x09 */" },
		{ "Keywords", "z get up quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the up axis of the provided Quat.\n\n@param InQuat - The provided Quat.\n@return The up axis of the provided Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "GetUpAxis", nullptr, nullptr, sizeof(QuaternionLibrary_eventGetUpAxis_Parms), Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics
	{
		struct QuaternionLibrary_eventInvert_Parms
		{
			FQuat ToInvert;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToInvert;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::NewProp_ToInvert = { "ToInvert", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventInvert_Parms, ToInvert), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventInvert_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::NewProp_ToInvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Inverts the given Quat.\n\x09 * \n\x09 * @param ToInvert - The Quat which will be inverted in-place.\n\x09 * @return Reference to the inverted Quat.\n\x09 */" },
		{ "Keywords", "invert flip negate quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Inverts the given Quat.\n\n@param ToInvert - The Quat which will be inverted in-place.\n@return Reference to the inverted Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Invert", nullptr, nullptr, sizeof(QuaternionLibrary_eventInvert_Parms), Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Invert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Invert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics
	{
		struct QuaternionLibrary_eventIsIdentity_Parms
		{
			FQuat InQuat;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventIsIdentity_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_InQuat_MetaData)) };
	void Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventIsIdentity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventIsIdentity_Parms), &Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Check if the provided Quat is the Identity Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return If the provided Quat is the Identity Quat.\n\x09 */" },
		{ "Keywords", "check is identity quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Check if the provided Quat is the Identity Quat.\n\n@param InQuat - The provided Quat.\n@return If the provided Quat is the Identity Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "IsIdentity", nullptr, nullptr, sizeof(QuaternionLibrary_eventIsIdentity_Parms), Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_IsIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_IsIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics
	{
		struct QuaternionLibrary_eventMakeFromX_Parms
		{
			FVector XAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromX_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_XAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromX_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat, given the forward axis. Y and Z will be calculated.\n\x09 * \n\x09 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make x quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat, given the forward axis. Y and Z will be calculated.\n\n@param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromX", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromX_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics
	{
		struct QuaternionLibrary_eventMakeFromXY_Parms
		{
			FVector XAxis;
			FVector YAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXY_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_XAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXY_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_YAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat given forward and right axes. The forward axis will remain fixed, but the right axis may be adjusted. \n\x09 * The Z axis will be calculated.\n\x09 * \n\x09 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make x xy quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat given forward and right axes. The forward axis will remain fixed, but the right axis may be adjusted.\nThe Z axis will be calculated.\n\n@param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n@param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromXY", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromXY_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics
	{
		struct QuaternionLibrary_eventMakeFromXZ_Parms
		{
			FVector XAxis;
			FVector ZAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXZ_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_XAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ZAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXZ_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ZAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromXZ_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat given forward and up axes. The forward axis will remain fixed, but the up axis may be adjusted. \n\x09 * The Y axis will be calculated.\n\x09 * \n\x09 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make x xz quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat given forward and up axes. The forward axis will remain fixed, but the up axis may be adjusted.\nThe Y axis will be calculated.\n\n@param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n@param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromXZ", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromXZ_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics
	{
		struct QuaternionLibrary_eventMakeFromY_Parms
		{
			FVector YAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromY_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_YAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromY_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat, given the right axis. X and Z will be calculated.\n\x09 * \n\x09 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make y quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat, given the right axis. X and Z will be calculated.\n\n@param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromY", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromY_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics
	{
		struct QuaternionLibrary_eventMakeFromYX_Parms
		{
			FVector YAxis;
			FVector XAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYX_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_YAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYX_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_XAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYX_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat given right and forward axes. The right axis will remain fixed, but the forward axis may be adjusted. \n\x09 * The Z axis will be calculated. \n\x09 * \n\x09 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make y yx quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat given right and forward axes. The right axis will remain fixed, but the forward axis may be adjusted.\nThe Z axis will be calculated.\n\n@param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n@param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromYX", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromYX_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics
	{
		struct QuaternionLibrary_eventMakeFromYZ_Parms
		{
			FVector YAxis;
			FVector ZAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYZ_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_YAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ZAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYZ_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ZAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromYZ_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat with given right and up axes. The right axis will remain fixed, but the up axis may be adjusted.\n\x09 * The X axis will be calculated.\n\x09 * \n\x09 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make y yz quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat with given right and up axes. The right axis will remain fixed, but the up axis may be adjusted.\nThe X axis will be calculated.\n\n@param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n@param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromYZ", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromYZ_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics
	{
		struct QuaternionLibrary_eventMakeFromZ_Parms
		{
			FVector ZAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ZAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZ_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ZAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZ_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat, given the up axis. X and Y will be calculated.\n\x09 * \n\x09 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized. \n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make z quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat, given the up axis. X and Y will be calculated.\n\n@param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromZ", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromZ_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics
	{
		struct QuaternionLibrary_eventMakeFromZX_Parms
		{
			FVector ZAxis;
			FVector XAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ZAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZX_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZX_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_XAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZX_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat with given up and forward axes. The up axis will remain fixed, but the forward axis may be adjusted.\n\x09 * The Y axis will be calculated.\n\x09 * \n\x09 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make z zx quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat with given up and forward axes. The up axis will remain fixed, but the forward axis may be adjusted.\nThe Y axis will be calculated.\n\n@param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n@param XAxis - The forward axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromZX", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromZX_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics
	{
		struct QuaternionLibrary_eventMakeFromZY_Parms
		{
			FVector ZAxis;
			FVector YAxis;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ZAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZY_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZY_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_YAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventMakeFromZY_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Construction" },
		{ "Comment", "/**\n\x09 * Constructs a Quat with given up and right axes. The up axis will remain fixed, but the right axis may be adjusted.\n\x09 * The X axis will be calculated.\n\x09 * \n\x09 * @param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "Keywords", "make z zy quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Constructs a Quat with given up and right axes. The up axis will remain fixed, but the right axis may be adjusted.\nThe X axis will be calculated.\n\n@param ZAxis - The up axis of the desired Quat. Doesn't have to be normalized.\n@param YAxis - The right axis of the desired Quat. Doesn't have to be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "MakeFromZY", nullptr, nullptr, sizeof(QuaternionLibrary_eventMakeFromZY_Parms), Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics
	{
		struct QuaternionLibrary_eventNormalize_Parms
		{
			FQuat ToNormalize;
			float Tolerance;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToNormalize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_ToNormalize = { "ToNormalize", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventNormalize_Parms, ToNormalize), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventNormalize_Parms, Tolerance), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_Tolerance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventNormalize_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_ToNormalize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Normalizes the given Quat.\n\x09 * \n\x09 * @param ToNormalize - This Quat will be normalized in-place.\n\x09 * @param Tolerance - Tolerance to use while normalizing.\n\x09 * @return Reference to the normalized Quat.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "Keywords", "normalize quat fquat result" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Normalizes the given Quat.\n\n@param ToNormalize - This Quat will be normalized in-place.\n@param Tolerance - Tolerance to use while normalizing.\n@return Reference to the normalized Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Normalize", nullptr, nullptr, sizeof(QuaternionLibrary_eventNormalize_Parms), Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Normalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Normalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics
	{
		struct QuaternionLibrary_eventQInterpConstantTo_Parms
		{
			FQuat Current;
			FQuat Target;
			float DeltaTime;
			float InterpSpeed;
			EQuaternionInterpMode Mode;
			EAngleUnitType AngleType;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, Mode), Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpConstantTo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Mode,AngleType" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Interpolates from Current to Target, but scaled by distance to target, so with a strong start and ease-out behavior.\n\x09 * \n\x09 * @param Current - The current rotation you would like to interpolate from.\n\x09 * @param Target  - The target rotation you would like to interpolate to.\n\x09 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n\x09 * @param InterpSpeed - The \"speed\" at which the interpolation occurs.\n\x09 * @param Mode - The lerp mode to use.\n\x09 * @param AngleType - The type of unit InterpSpeed is using.\n\x09 * @return The newly calculated rotation - store for later use!!\n\x09 */" },
		{ "CPP_Default_AngleType", "Degrees" },
		{ "CPP_Default_Mode", "SlerpNormalized" },
		{ "Keywords", "const interpolate to interp to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Interpolates from Current to Target, but scaled by distance to target, so with a strong start and ease-out behavior.\n\n@param Current - The current rotation you would like to interpolate from.\n@param Target  - The target rotation you would like to interpolate to.\n@param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n@param InterpSpeed - The \"speed\" at which the interpolation occurs.\n@param Mode - The lerp mode to use.\n@param AngleType - The type of unit InterpSpeed is using.\n@return The newly calculated rotation - store for later use!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "QInterpConstantTo", nullptr, nullptr, sizeof(QuaternionLibrary_eventQInterpConstantTo_Parms), Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics
	{
		struct QuaternionLibrary_eventQInterpTo_Parms
		{
			FQuat Current;
			FQuat Target;
			float DeltaTime;
			float InterpSpeed;
			EQuaternionInterpMode Mode;
			EAngleUnitType AngleType;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, Mode), Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpTo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Mode,AngleType" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Interpolates smoothly from Current to Target, at a constant step.\n\x09 * \n\x09 * @param Current - The current rotation you would like to interpolate from.\n\x09 * @param Target  - The target rotation you would like to interpolate to.\n\x09 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n\x09 * @param InterpSpeed - The \"speed\" at which the interpolation occurs.\n\x09 * @param Mode - The lerp mode to use.\n\x09 * @param AngleType - The type of unit InterpSpeed is using.\n\x09 * @return The newly calculated rotation - store for later use!!\n\x09 */" },
		{ "CPP_Default_AngleType", "Degrees" },
		{ "CPP_Default_Mode", "SlerpNormalized" },
		{ "Keywords", "ease in out dynamic hybrid interpolate to interp to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Interpolates smoothly from Current to Target, at a constant step.\n\n@param Current - The current rotation you would like to interpolate from.\n@param Target  - The target rotation you would like to interpolate to.\n@param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n@param InterpSpeed - The \"speed\" at which the interpolation occurs.\n@param Mode - The lerp mode to use.\n@param AngleType - The type of unit InterpSpeed is using.\n@return The newly calculated rotation - store for later use!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "QInterpTo", nullptr, nullptr, sizeof(QuaternionLibrary_eventQInterpTo_Parms), Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_QInterpTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_QInterpTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics
	{
		struct QuaternionLibrary_eventQInterpToEaseInOut_Parms
		{
			FQuat Origin;
			FQuat Current;
			FQuat Target;
			float DeltaTime;
			float InterpSpeed;
			float EaseInDist;
			float EaseOutDist;
			EQuaternionInterpMode Mode;
			EAngleUnitType AngleType;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EaseInDist;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EaseOutDist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, Origin), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_EaseInDist = { "EaseInDist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, EaseInDist), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_EaseOutDist = { "EaseOutDist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, EaseOutDist), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, Mode), Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseInOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_EaseInDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_EaseOutDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Mode,AngleType" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Interpolates smoothly from Current to Target.\n\x09 * \n\x09 * If Current is still within EaseInDist from the start, the rate will be scaled by the distance to the start mapped to the range [0-EaseInDist].\n\x09 * If Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].\n\x09 * Otherwise, the rate is constant.\n\x09 * \n\x09 * @param Origin - The start rotation, required for Ease In.\n\x09 * @param Current - The current rotation you would like to interpolate from.\n\x09 * @param Target  - The target rotation you would like to interpolate to.\n\x09 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n\x09 * @param InterpSpeed - The \"speed\" at which the interpolation occurs.\n\x09 * @param EaseInDist - The distance which defines the end of the range [0-EaseInDist], used to scale speed. Same units as InterpSpeed.\n\x09 * @param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.\n\x09 * @param Mode - The lerp mode to use.\n\x09 * @param AngleType - The type of unit InterpSpeed is using.\n\x09 * @return The newly calculated rotation - store for later use!!\n\x09 */" },
		{ "CPP_Default_AngleType", "Degrees" },
		{ "CPP_Default_EaseInDist", "0.200000" },
		{ "CPP_Default_EaseOutDist", "0.200000" },
		{ "CPP_Default_Mode", "SlerpNormalized" },
		{ "Keywords", "ease in out interpolate to interp to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Interpolates smoothly from Current to Target.\n\nIf Current is still within EaseInDist from the start, the rate will be scaled by the distance to the start mapped to the range [0-EaseInDist].\nIf Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].\nOtherwise, the rate is constant.\n\n@param Origin - The start rotation, required for Ease In.\n@param Current - The current rotation you would like to interpolate from.\n@param Target  - The target rotation you would like to interpolate to.\n@param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n@param InterpSpeed - The \"speed\" at which the interpolation occurs.\n@param EaseInDist - The distance which defines the end of the range [0-EaseInDist], used to scale speed. Same units as InterpSpeed.\n@param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.\n@param Mode - The lerp mode to use.\n@param AngleType - The type of unit InterpSpeed is using.\n@return The newly calculated rotation - store for later use!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "QInterpToEaseInOut", nullptr, nullptr, sizeof(QuaternionLibrary_eventQInterpToEaseInOut_Parms), Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics
	{
		struct QuaternionLibrary_eventQInterpToEaseOut_Parms
		{
			FQuat Current;
			FQuat Target;
			float DeltaTime;
			float InterpSpeed;
			float EaseOutDist;
			EQuaternionInterpMode Mode;
			EAngleUnitType AngleType;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EaseOutDist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_EaseOutDist = { "EaseOutDist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, EaseOutDist), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, Mode), Z_Construct_UEnum_BlueprintQuaternionLibrary_EQuaternionInterpMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventQInterpToEaseOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_EaseOutDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_AngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Mode,AngleType" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Interpolates smoothly from Current to Target.\n\x09 *\n\x09 * If Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].\n\x09 * Otherwise, the rate is constant.\n\x09 * \n\x09 * @param Current - The current rotation you would like to interpolate from.\n\x09 * @param Target  - The target rotation you would like to interpolate to.\n\x09 * @param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n\x09 * @param InterpSpeed - The \"speed\" at which the interpolation occurs.\n\x09 * @param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.\n\x09 * @param Mode - The lerp mode to use.\n\x09 * @param AngleType - The type of unit InterpSpeed is using.\n\x09 * @return The newly calculated rotation - store for later use!!\n\x09 */" },
		{ "CPP_Default_AngleType", "Degrees" },
		{ "CPP_Default_EaseOutDist", "0.200000" },
		{ "CPP_Default_Mode", "SlerpNormalized" },
		{ "Keywords", "ease out interpolate to interp to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Interpolates smoothly from Current to Target.\n\nIf Current is now within EaseOutDist from the end, the rate will be scaled by the distance to the end mapped to the range [0-EaseOutDist].\nOtherwise, the rate is constant.\n\n@param Current - The current rotation you would like to interpolate from.\n@param Target  - The target rotation you would like to interpolate to.\n@param DeltaTime - The amount of time to calculate the interpolation for; normally time since last call.\n@param InterpSpeed - The \"speed\" at which the interpolation occurs.\n@param EaseOutDist - The distance which defines the start of the range [0-EaseOutDist], used to scale speed. Same units as InterpSpeed.\n@param Mode - The lerp mode to use.\n@param AngleType - The type of unit InterpSpeed is using.\n@return The newly calculated rotation - store for later use!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "QInterpToEaseOut", nullptr, nullptr, sizeof(QuaternionLibrary_eventQInterpToEaseOut_Parms), Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics
	{
		struct QuaternionLibrary_eventRotateOrientationVector_Parms
		{
			FQuat InQuat;
			FVector V;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateOrientationVector_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateOrientationVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Rotates the direction vector by the given Quat, returns a reference for convenience.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param V - Direction vector to rotate - will be modified.\n\x09 * @return Reference to the original Vector.\n\x09 */" },
		{ "Keywords", "ref rotate transform vector direction quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Rotates the direction vector by the given Quat, returns a reference for convenience.\n\n@param InQuat - The provided Quat.\n@param V - Direction vector to rotate - will be modified.\n@return Reference to the original Vector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "RotateOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventRotateOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics
	{
		struct QuaternionLibrary_eventRotateRotation_Parms
		{
			FQuat InQuat;
			FRotator R;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateRotation_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateRotation_Parms, R), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventRotateRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Combines the rotator with the given Quat, returns a reference for convenience.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param R - The Rotator to rotate - will be modified.\n\x09 * @return Reference to the original Rotator.\n\x09 */" },
		{ "Keywords", "transform rotate rotator frotator rotation quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Combines the rotator with the given Quat, returns a reference for convenience.\n\n@param InQuat - The provided Quat.\n@param R - The Rotator to rotate - will be modified.\n@return Reference to the original Rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "RotateRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventRotateRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_RotateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_RotateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics
	{
		struct QuaternionLibrary_eventScaleBy_Parms
		{
			FQuat Base;
			float Scale;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Parms, Base), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Parms, Scale), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Scales the given Quat by multiplication.\n\x09 * \n\x09 * @param Base - The Quat to scale - will be modified.\n\x09 * @param Scale - Amount to scale by.\n\x09 * @return Reference to the original Quat.\n\x09 */" },
		{ "Keywords", "scale * float fl quat fquat ref" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Scales the given Quat by multiplication.\n\n@param Base - The Quat to scale - will be modified.\n@param Scale - Amount to scale by.\n@return Reference to the original Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ScaleBy", nullptr, nullptr, sizeof(QuaternionLibrary_eventScaleBy_Parms), Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ScaleBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics
	{
		struct QuaternionLibrary_eventScaleBy_Division_Parms
		{
			FQuat Base;
			float Scale;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Division_Parms, Base), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Division_Parms, Scale), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventScaleBy_Division_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Scales the given Quat by division.\n\x09 * \n\x09 * @param Base - The Quat to scale - will be modified.\n\x09 * @param Scale - The amount to scale by.\n\x09 * @return Reference to the original Quat.\n\x09 */" },
		{ "Keywords", "get scale / float fl quat fquat ref" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Scales the given Quat by division.\n\n@param Base - The Quat to scale - will be modified.\n@param Scale - The amount to scale by.\n@return Reference to the original Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ScaleBy_Division", nullptr, nullptr, sizeof(QuaternionLibrary_eventScaleBy_Division_Parms), Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics
	{
		struct QuaternionLibrary_eventSetActorRelativeRotation_Parms
		{
			AActor* Target;
			FQuat NewRotation;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetActorRelativeRotation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetActorRelativeRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetActorRelativeRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetActorRelativeRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetActorRelativeRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetActorRelativeRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetActorRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Sets the rotation of this actor in relative space. See the other SetActorRelativeRotation for more detailed information.\n\x09 * \n\x09 * @param NewRotation - The Quat to apply as the new rotation.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "set quat rot actor local relative" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Sets the rotation of this actor in relative space. See the other SetActorRelativeRotation for more detailed information.\n\n@param NewRotation - The Quat to apply as the new rotation.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "SetActorRelativeRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventSetActorRelativeRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics
	{
		struct QuaternionLibrary_eventSetActorWorldRotation_Parms
		{
			AActor* Target;
			FQuat NewRotation;
			bool bTeleport;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetActorWorldRotation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetActorWorldRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetActorWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetActorWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Sets the rotation of this actor in world space. See the other SetActorRotation for more detailed information.\n\x09 *\n\x09 * @param NewRotation - The Quat to apply as the new rotation.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 */" },
		{ "Keywords", "set quat rot actor world absolute" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Sets the rotation of this actor in world space. See the other SetActorRotation for more detailed information.\n\n@param NewRotation - The Quat to apply as the new rotation.\n@param bTeleport - If the physics state should be unaffected by the move." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "SetActorWorldRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventSetActorWorldRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics
	{
		struct QuaternionLibrary_eventSetComponentRelativeRotation_Parms
		{
			USceneComponent* Target;
			FQuat NewRotation;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentRelativeRotation_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentRelativeRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetComponentRelativeRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetComponentRelativeRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetComponentRelativeRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetComponentRelativeRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Sets the rotation of this component in local space. See the other SetComponentRelativeRotation for more detailed information.\n\x09 *\n\x09 * @param NewRotation - The Quat to apply as the new rotation.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "set quat rot component local relative" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Sets the rotation of this component in local space. See the other SetComponentRelativeRotation for more detailed information.\n\n@param NewRotation - The Quat to apply as the new rotation.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "SetComponentRelativeRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventSetComponentRelativeRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics
	{
		struct QuaternionLibrary_eventSetComponentWorldRotation_Parms
		{
			USceneComponent* Target;
			FQuat NewRotation;
			bool bSweep;
			bool bTeleport;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentWorldRotation_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentWorldRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetComponentWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetComponentWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSetComponentWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSetComponentWorldRotation_Parms), &Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSetComponentWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Sets the rotation of this component in world space. See the other SetWorldRotation for more detailed information.\n\x09 *\n\x09 * @param NewRotation - The Quat to apply as the new rotation.\n\x09 * @param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n\x09 * @param bTeleport - If the physics state should be unaffected by the move.\n\x09 * @param SweepHitResult - If there was a sweep, the resulting HitResult.\n\x09 */" },
		{ "Keywords", "set quat rot component world absolute" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Sets the rotation of this component in world space. See the other SetWorldRotation for more detailed information.\n\n@param NewRotation - The Quat to apply as the new rotation.\n@param bSweep - If there should be a sweep, meaning collision will be tested along the way which can stop the rotation short.\n@param bTeleport - If the physics state should be unaffected by the move.\n@param SweepHitResult - If there was a sweep, the resulting HitResult." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "SetComponentWorldRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventSetComponentWorldRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Size_Statics
	{
		struct QuaternionLibrary_eventSize_Parms
		{
			FQuat InQuat;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSize_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the size of the provided Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The size of the Quat.\n\x09 */" },
		{ "Keywords", "size quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the size of the provided Quat.\n\n@param InQuat - The provided Quat.\n@return The size of the Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Size", nullptr, nullptr, sizeof(QuaternionLibrary_eventSize_Parms), Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Size()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Size_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics
	{
		struct QuaternionLibrary_eventSizeSquared_Parms
		{
			FQuat InQuat;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSizeSquared_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSizeSquared_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Query" },
		{ "Comment", "/**\n\x09 * Get the size of the provided Quat, squared.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The size of the Quat, squared.\n\x09 */" },
		{ "Keywords", "size sq squared quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the size of the provided Quat, squared.\n\n@param InQuat - The provided Quat.\n@return The size of the Quat, squared." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "SizeSquared", nullptr, nullptr, sizeof(QuaternionLibrary_eventSizeSquared_Parms), Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_SizeSquared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_SizeSquared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics
	{
		struct QuaternionLibrary_eventSlerp_Parms
		{
			FQuat A;
			FQuat B;
			float SlerpBy;
			bool bNormalize;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlerpBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlerpBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[];
#endif
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSlerp_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSlerp_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_SlerpBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_SlerpBy = { "SlerpBy", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSlerp_Parms, SlerpBy), METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_SlerpBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_SlerpBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((QuaternionLibrary_eventSlerp_Parms*)Obj)->bNormalize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuaternionLibrary_eventSlerp_Parms), &Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSlerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_SlerpBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_bNormalize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Spherical interpolation between A and B, by Alpha.\n\x09 * \n\x09 * @param A - The first Quat.\n\x09 * @param B - The second Quat.\n\x09 * @param SlerpBy - Ranges from 0..1, where 0 is A and 1 is B.\n\x09 * @param bNormalize - Whether the return should be normalized.\n\x09 * @return The resulting Quat.\n\x09 */" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "slerp spherical interpolate quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Spherical interpolation between A and B, by Alpha.\n\n@param A - The first Quat.\n@param B - The second Quat.\n@param SlerpBy - Ranges from 0..1, where 0 is A and 1 is B.\n@param bNormalize - Whether the return should be normalized.\n@return The resulting Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Slerp", nullptr, nullptr, sizeof(QuaternionLibrary_eventSlerp_Parms), Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Slerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Slerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics
	{
		struct QuaternionLibrary_eventSquad_Parms
		{
			FQuat QuatA;
			FQuat TangentA;
			FQuat QuatB;
			FQuat TangentB;
			float Alpha;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuatA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuatA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuatB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuatB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentB;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatA = { "QuatA", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, QuatA), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentA = { "TangentA", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, TangentA), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatB = { "QuatB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, QuatB), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentB = { "TangentB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, TangentB), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentB_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventSquad_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_QuatB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_TangentB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Compute the point at Alpha between QuatA and QuatB, using the Squad algorithm.\n\x09 * \n\x09 * @param QuatA - First Quaternion, or A.\n\x09 * @param TangentA - Tangent at A.\n\x09 * @param QuatB - Second Quaternion, or B.\n\x09 * @param TangentB - Tangent at B.\n\x09 * @param Alpha - Ranges from 0..1, where 0 is A and 1 is B.\n\x09 * @return Normalized result of the calculation.\n\x09 */" },
		{ "Keywords", "squad tangent quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Compute the point at Alpha between QuatA and QuatB, using the Squad algorithm.\n\n@param QuatA - First Quaternion, or A.\n@param TangentA - Tangent at A.\n@param QuatB - Second Quaternion, or B.\n@param TangentB - Tangent at B.\n@param Alpha - Ranges from 0..1, where 0 is A and 1 is B.\n@return Normalized result of the calculation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "Squad", nullptr, nullptr, sizeof(QuaternionLibrary_eventSquad_Parms), Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_Squad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_Squad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics
	{
		struct QuaternionLibrary_eventToAngleAxis_Parms
		{
			FQuat From;
			FVector OutAxis;
			float OutAngle;
			EAngleUnitType AngleType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxis_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_OutAxis = { "OutAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxis_Parms, OutAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxis_Parms, OutAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_AngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_AngleType = { "AngleType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxis_Parms, AngleType), Z_Construct_UEnum_BlueprintQuaternionLibrary_EAngleUnitType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_OutAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_OutAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_AngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::NewProp_AngleType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AngleType" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.\n\x09 * \n\x09 * @param From - Quat you want to have the angle and axis of.\n\x09 * @param OutAxis - Axis of rotation.\n\x09 * @param OutAngle - Angle (Radians) of rotation around that axis.\n\x09 */" },
		{ "CPP_Default_AngleType", "Radians" },
		{ "Keywords", "deg degree rad radians angle axis around to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.\n\n@param From - Quat you want to have the angle and axis of.\n@param OutAxis - Axis of rotation.\n@param OutAngle - Angle (Radians) of rotation around that axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToAngleAxis", nullptr, nullptr, sizeof(QuaternionLibrary_eventToAngleAxis_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics
	{
		struct QuaternionLibrary_eventToAngleAxisDeg_Parms
		{
			FQuat From;
			FVector OutAxis;
			float OutAngleDeg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAngleDeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxisDeg_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_OutAxis = { "OutAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxisDeg_Parms, OutAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_OutAngleDeg = { "OutAngleDeg", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToAngleAxisDeg_Parms, OutAngleDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_OutAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::NewProp_OutAngleDeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.\n\x09 * \n\x09 * @param From - Quat you want to have the angle and axis of.\n\x09 * @param OutAxis - Axis of rotation.\n\x09 * @param OutAngleDeg - Angle (Degrees) of rotation around that axis.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Superseded by ToAngleAxis now having an option for radians or degrees. Will be removed in the next release." },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the axis of rotation and the angle of rotation around that axis necessary to result in the given Quat.\n\n@param From - Quat you want to have the angle and axis of.\n@param OutAxis - Axis of rotation.\n@param OutAngleDeg - Angle (Degrees) of rotation around that axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToAngleAxisDeg", nullptr, nullptr, sizeof(QuaternionLibrary_eventToAngleAxisDeg_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics
	{
		struct QuaternionLibrary_eventToEuler_Parms
		{
			FQuat From;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToEuler_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToEuler_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Gives the Euler angle representation of the given Quat.\n\x09 * \n\x09 * @param From - Source Quat.\n\x09 * @return Euler angles the given Quat results in.\n\x09 */" },
		{ "Keywords", "euler rot angle axes to quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the Euler angle representation of the given Quat.\n\n@param From - Source Quat.\n@return Euler angles the given Quat results in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToEuler", nullptr, nullptr, sizeof(QuaternionLibrary_eventToEuler_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToEuler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToEuler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics
	{
		struct QuaternionLibrary_eventToOrientationVector_Parms
		{
			FQuat From;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToOrientationVector_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Get the forward axis of the provided Quat.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @return The orientation vector (X-Axis) of the provided Quat.\n\x09 */" },
		{ "Keywords", "orientation vector quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the forward axis of the provided Quat.\n\n@param InQuat - The provided Quat.\n@return The orientation vector (X-Axis) of the provided Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventToOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics
	{
		struct QuaternionLibrary_eventToRotator_Parms
		{
			FQuat From;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToRotator_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Gives the rotator form of the given Quat.\n\x09 * \n\x09 * @param From - Given Quat to make a rotator from.\n\x09 * @return The rotator form of the given Quat.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "Keywords", "quat to rot rotator frotator fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the rotator form of the given Quat.\n\n@param From - Given Quat to make a rotator from.\n@return The rotator form of the given Quat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToRotator", nullptr, nullptr, sizeof(QuaternionLibrary_eventToRotator_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics
	{
		struct QuaternionLibrary_eventToString_Parms
		{
			FQuat From;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToString_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Gives the Quat represented as a string for debugging purposes.\n\x09 * \n\x09 * @param From - Quat to get a display string for.\n\x09 * @return String formatted as \"X=Val, Y=Val, Z=Val, W=Val\".\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String" },
		{ "Keywords", "debug to string quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Gives the Quat represented as a string for debugging purposes.\n\n@param From - Quat to get a display string for.\n@return String formatted as \"X=Val, Y=Val, Z=Val, W=Val\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToString", nullptr, nullptr, sizeof(QuaternionLibrary_eventToString_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics
	{
		struct QuaternionLibrary_eventToSwingTwist_Parms
		{
			FQuat From;
			FVector InTwistAxis;
			FQuat OutSwing;
			FQuat OutTwist;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTwistAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSwing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTwist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToSwingTwist_Parms, From), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_InTwistAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_InTwistAxis = { "InTwistAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToSwingTwist_Parms, InTwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_InTwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_InTwistAxis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_OutSwing = { "OutSwing", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToSwingTwist_Parms, OutSwing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_OutTwist = { "OutTwist", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventToSwingTwist_Parms, OutTwist), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_InTwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_OutSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::NewProp_OutTwist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Conversions" },
		{ "Comment", "/**\n\x09 * Get the swing and twist decomposition of the quaternion given a direction.\n\x09 * \n\x09 * @param From - Input Quat.\n\x09 * @param InTwistAxis - Axis to which the decomposition should occur.\n\x09 * @param OutSwing - The quaternion which would be required to \"point\" From along InTwistAxis.\n\x09 * @param OutTwist - The rotation around InTwistAxis.\n\x09 */" },
		{ "Keywords", "quat fquat swing twist decomposition" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Get the swing and twist decomposition of the quaternion given a direction.\n\n@param From - Input Quat.\n@param InTwistAxis - Axis to which the decomposition should occur.\n@param OutSwing - The quaternion which would be required to \"point\" From along InTwistAxis.\n@param OutTwist - The rotation around InTwistAxis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "ToSwingTwist", nullptr, nullptr, sizeof(QuaternionLibrary_eventToSwingTwist_Parms), Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics
	{
		struct QuaternionLibrary_eventUnrotateOrientationVector_Parms
		{
			FQuat InQuat;
			FVector V;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateOrientationVector_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateOrientationVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateOrientationVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Inversely rotates the direction vector by the given Quat, returns a reference for convenience.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param V - Direction vector to unrotate - will be modified.\n\x09 * @return Reference to the original Vector.\n\x09 */" },
		{ "Keywords", "get inverse negate rotate transform vector direction quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Inversely rotates the direction vector by the given Quat, returns a reference for convenience.\n\n@param InQuat - The provided Quat.\n@param V - Direction vector to unrotate - will be modified.\n@return Reference to the original Vector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "UnrotateOrientationVector", nullptr, nullptr, sizeof(QuaternionLibrary_eventUnrotateOrientationVector_Parms), Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics
	{
		struct QuaternionLibrary_eventUnrotateRotation_Parms
		{
			FQuat InQuat;
			FRotator R;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateRotation_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateRotation_Parms, R), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionLibrary_eventUnrotateRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Quaternion|Operations" },
		{ "Comment", "/**\n\x09 * Unrotates the given rotator from the Quat, returns a reference for convenience.\n\x09 * \n\x09 * @param InQuat - The provided Quat.\n\x09 * @param R - The Rotator to unrotate - will be modified.\n\x09 * @return Reference to the original Rotator.\n\x09 */" },
		{ "Keywords", "inverse transform rotator frotator unrotate rotation quat fquat" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
		{ "ToolTip", "Unrotates the given rotator from the Quat, returns a reference for convenience.\n\n@param InQuat - The provided Quat.\n@param R - The Rotator to unrotate - will be modified.\n@return Reference to the original Rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionLibrary, nullptr, "UnrotateRotation", nullptr, nullptr, sizeof(QuaternionLibrary_eventUnrotateRotation_Parms), Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuaternionLibrary_NoRegister()
	{
		return UQuaternionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuaternionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuaternionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintQuaternionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuaternionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuaternionLibrary_AddActorLocalRotation, "AddActorLocalRotation" }, // 1630245667
		{ &Z_Construct_UFunction_UQuaternionLibrary_AddActorWorldRotation, "AddActorWorldRotation" }, // 2436112894
		{ &Z_Construct_UFunction_UQuaternionLibrary_AddComponentLocalRotation, "AddComponentLocalRotation" }, // 1248652382
		{ &Z_Construct_UFunction_UQuaternionLibrary_AddComponentWorldRotation, "AddComponentWorldRotation" }, // 27866138
		{ &Z_Construct_UFunction_UQuaternionLibrary_CalcTangent, "CalcTangent" }, // 1345781891
		{ &Z_Construct_UFunction_UQuaternionLibrary_ComposeWtih, "ComposeWtih" }, // 3917602612
		{ &Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FQuat, "DotProduct_FQuat_FQuat" }, // 3436950575
		{ &Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FRotator, "DotProduct_FQuat_FRotator" }, // 2559065677
		{ &Z_Construct_UFunction_UQuaternionLibrary_DotProduct_FQuat_FVector, "DotProduct_FQuat_FVector" }, // 2250485016
		{ &Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FQuat, "Equals_FQuat_FQuat" }, // 2297416347
		{ &Z_Construct_UFunction_UQuaternionLibrary_Equals_FQuat_FRotator, "Equals_FQuat_FRotator" }, // 2606633134
		{ &Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FQuat, "ExactEquals_FQuat_FQuat" }, // 2305058292
		{ &Z_Construct_UFunction_UQuaternionLibrary_ExactEquals_FQuat_FRotator, "ExactEquals_FQuat_FRotator" }, // 559924755
		{ &Z_Construct_UFunction_UQuaternionLibrary_FastBilerp, "FastBilerp" }, // 4195817512
		{ &Z_Construct_UFunction_UQuaternionLibrary_FastLerp, "FastLerp" }, // 1704826161
		{ &Z_Construct_UFunction_UQuaternionLibrary_FindBetweenOrientationVectors, "FindBetweenOrientationVectors" }, // 887145193
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromActor, "FromActor" }, // 3516998154
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxis, "FromAngleAxis" }, // 3889460686
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromAngleAxisDeg, "FromAngleAxisDeg" }, // 1762377684
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromComponent, "FromComponent" }, // 3374649776
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromEuler, "FromEuler" }, // 1196122449
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromOrientationVector, "FromOrientationVector" }, // 1628797039
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromRotator, "FromRotator" }, // 3424630334
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromString, "FromString" }, // 3189694550
		{ &Z_Construct_UFunction_UQuaternionLibrary_FromTransform, "FromTransform" }, // 3929918753
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetAngularDistance, "GetAngularDistance" }, // 1531980885
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetComposeResult, "GetComposeResult" }, // 1486726094
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetForwardAxis, "GetForwardAxis" }, // 3551945522
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetIdentity, "GetIdentity" }, // 3835167826
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetInverse, "GetInverse" }, // 3106735063
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetNormalized, "GetNormalized" }, // 1191339391
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetRightAxis, "GetRightAxis" }, // 1974012110
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetRotatedOrientationVector, "GetRotatedOrientationVector" }, // 229898697
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetRotatedRotation, "GetRotatedRotation" }, // 3963304536
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult, "GetScaleResult" }, // 2653891060
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetScaleResult_Division, "GetScaleResult_Division" }, // 1363483448
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedOrientationVector, "GetUnrotatedOrientationVector" }, // 2289689165
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetUnrotatedRotation, "GetUnrotatedRotation" }, // 2212003557
		{ &Z_Construct_UFunction_UQuaternionLibrary_GetUpAxis, "GetUpAxis" }, // 480917199
		{ &Z_Construct_UFunction_UQuaternionLibrary_Invert, "Invert" }, // 2663433882
		{ &Z_Construct_UFunction_UQuaternionLibrary_IsIdentity, "IsIdentity" }, // 3835282804
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromX, "MakeFromX" }, // 2578593654
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromXY, "MakeFromXY" }, // 1392293926
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromXZ, "MakeFromXZ" }, // 798115107
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromY, "MakeFromY" }, // 119118513
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromYX, "MakeFromYX" }, // 4285484134
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromYZ, "MakeFromYZ" }, // 1877078368
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromZ, "MakeFromZ" }, // 1080587651
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromZX, "MakeFromZX" }, // 2070860847
		{ &Z_Construct_UFunction_UQuaternionLibrary_MakeFromZY, "MakeFromZY" }, // 2458540981
		{ &Z_Construct_UFunction_UQuaternionLibrary_Normalize, "Normalize" }, // 3633338253
		{ &Z_Construct_UFunction_UQuaternionLibrary_QInterpConstantTo, "QInterpConstantTo" }, // 3726491577
		{ &Z_Construct_UFunction_UQuaternionLibrary_QInterpTo, "QInterpTo" }, // 3016030565
		{ &Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseInOut, "QInterpToEaseInOut" }, // 1168112945
		{ &Z_Construct_UFunction_UQuaternionLibrary_QInterpToEaseOut, "QInterpToEaseOut" }, // 1595849051
		{ &Z_Construct_UFunction_UQuaternionLibrary_RotateOrientationVector, "RotateOrientationVector" }, // 1881562662
		{ &Z_Construct_UFunction_UQuaternionLibrary_RotateRotation, "RotateRotation" }, // 3064764549
		{ &Z_Construct_UFunction_UQuaternionLibrary_ScaleBy, "ScaleBy" }, // 1628680486
		{ &Z_Construct_UFunction_UQuaternionLibrary_ScaleBy_Division, "ScaleBy_Division" }, // 3765502510
		{ &Z_Construct_UFunction_UQuaternionLibrary_SetActorRelativeRotation, "SetActorRelativeRotation" }, // 246695116
		{ &Z_Construct_UFunction_UQuaternionLibrary_SetActorWorldRotation, "SetActorWorldRotation" }, // 4038090507
		{ &Z_Construct_UFunction_UQuaternionLibrary_SetComponentRelativeRotation, "SetComponentRelativeRotation" }, // 2717267136
		{ &Z_Construct_UFunction_UQuaternionLibrary_SetComponentWorldRotation, "SetComponentWorldRotation" }, // 1382522905
		{ &Z_Construct_UFunction_UQuaternionLibrary_Size, "Size" }, // 2129936659
		{ &Z_Construct_UFunction_UQuaternionLibrary_SizeSquared, "SizeSquared" }, // 3667561181
		{ &Z_Construct_UFunction_UQuaternionLibrary_Slerp, "Slerp" }, // 530856820
		{ &Z_Construct_UFunction_UQuaternionLibrary_Squad, "Squad" }, // 2667989382
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxis, "ToAngleAxis" }, // 2468246519
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToAngleAxisDeg, "ToAngleAxisDeg" }, // 3771993526
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToEuler, "ToEuler" }, // 850374718
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToOrientationVector, "ToOrientationVector" }, // 822422146
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToRotator, "ToRotator" }, // 1826066763
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToString, "ToString" }, // 3494608528
		{ &Z_Construct_UFunction_UQuaternionLibrary_ToSwingTwist, "ToSwingTwist" }, // 2871380882
		{ &Z_Construct_UFunction_UQuaternionLibrary_UnrotateOrientationVector, "UnrotateOrientationVector" }, // 860433538
		{ &Z_Construct_UFunction_UQuaternionLibrary_UnrotateRotation, "UnrotateRotation" }, // 3346580968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuaternionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuaternionLibrary.h" },
		{ "ModuleRelativePath", "Public/QuaternionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuaternionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuaternionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuaternionLibrary_Statics::ClassParams = {
		&UQuaternionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuaternionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuaternionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuaternionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuaternionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuaternionLibrary, 3944335223);
	template<> BLUEPRINTQUATERNIONLIBRARY_API UClass* StaticClass<UQuaternionLibrary>()
	{
		return UQuaternionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuaternionLibrary(Z_Construct_UClass_UQuaternionLibrary, &UQuaternionLibrary::StaticClass, TEXT("/Script/BlueprintQuaternionLibrary"), TEXT("UQuaternionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuaternionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
