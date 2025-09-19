// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	//Primary Attribute
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Strength"),
	FString("Increase physical damage")
	);
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Intelligence"),
	FString("Increase magical damage")
	);
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Resilience"),
	FString("Increase Armor and Armor Penetration")
	);
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Vigor"),
	FString("Increase Health and Mana")
	);

	//Secondary Attribute
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attribute.SecondaryAttribute.Armor"),
		FString("Reduces damage taken, improves Block Chance")
		);
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attribute.SecondaryAttribute.ArmorPenetration"),
		FString("Ignore Percent of enemy Armor,Increase Critical Hit Chance")
		);
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attribute.SecondaryAttribute.BlockChance"),
		FString("Chance to cut incoming damage in half")
		);
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.CriticalHitChance"),
	FString("Chance to double damage plus critical hit bonus")
	);
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.CriticalHitDamage"),
	FString("Bonus Damage added When a Critical Hit is scored")
	);
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.CriticalHitResistance"),
	FString("Reduces Critical Hit Chance of attacking enemies")
	);
	GameplayTags.Attributes_Secondary_HealthReGeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.HealthReGeneration"),
	FString("Amount of Health ReGenerated every 1 second")
	);
	GameplayTags.Attributes_Secondary_ManaReGeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.ManaReGeneration"),
	FString("Amount of Mana ReGenerated every 1 second")
	);
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.MaxHealth"),
	FString("Maximum amount of Health obtainable")
	);
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.SecondaryAttribute.MaxMana"),
	FString("Maximum amount of Mana obtainable")
	);
}
