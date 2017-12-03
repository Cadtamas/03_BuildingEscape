// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildingEscapeGameMode_BP.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameMode_BP() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_BP_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_BP();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ABuildingEscapeGameMode_BP::StaticRegisterNativesABuildingEscapeGameMode_BP()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode_BP_NoRegister()
	{
		return ABuildingEscapeGameMode_BP::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode_BP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = ABuildingEscapeGameMode_BP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABuildingEscapeGameMode_BP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuildingEscapeGameMode_BP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BuildingEscapeGameMode_BP.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscapeGameMode_BP, 2693513417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscapeGameMode_BP(Z_Construct_UClass_ABuildingEscapeGameMode_BP, &ABuildingEscapeGameMode_BP::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingEscapeGameMode_BP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameMode_BP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
