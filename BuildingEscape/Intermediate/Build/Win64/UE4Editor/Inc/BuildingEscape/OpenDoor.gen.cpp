// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UFunction* Z_Construct_UFunction_UOpenDoor_GetDoorOpenDirection();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoorEvent__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
		UClass* Class = UOpenDoor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDoorOpenDirection", (Native)&UOpenDoor::execGetDoorOpenDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UOpenDoor_GetDoorOpenDirection()
	{
		struct OpenDoor_eventGetDoorOpenDirection_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenDoor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDoorOpenDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(OpenDoor_eventGetDoorOpenDirection_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, OpenDoor_eventGetDoorOpenDirection_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = UOpenDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UOpenDoor_GetDoorOpenDirection());

				UProperty* NewProp_DoorOpenDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorOpenDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(DoorOpenDirection, UOpenDoor), 0x0040000000000001);
				UProperty* NewProp_TriggerMass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggerMass"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TriggerMass, UOpenDoor), 0x0040000000000001);
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UOpenDoor), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_OnClose = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClose"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClose, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature());
				UProperty* NewProp_OnOpen = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnOpen"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnOpen, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenDoor_GetDoorOpenDirection(), "GetDoorOpenDirection"); // 3780512855
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_DoorOpenDirection, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_DoorOpenDirection, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnClose, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnOpen, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 2283019517);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
