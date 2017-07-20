// gameDNA installer
// Created by Patryk Stepniewski
// Copyright (c) 2014-2017 gameDNA Ltd. All Rights Reserved.

#include "GameDNAinstallerSave.h"
#include "GameDNAinstaller.h"

UGameDNAinstallerSave::UGameDNAinstallerSave(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SaveSlotName = TEXT("GameDNAinstaller");
	UserIndex = 0;

	PluginsRevisions = TMap<FString, int32>();
}
