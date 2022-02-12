#pragma once
#include <Windows.h>

namespace S2_4 //UE 4.20
{
	#define GObjects ("48 8B 05 ? ? ? ? 48 8D 1C C8 81 4B ? ? ? ? ? 49 63 76 30");
#define FName_ToString ("48 89 5C 24 ? 57 48 83 EC 40 83 79 04 00 48 8B DA 48 8B F9");
	#define GetFirstPlayerController ("83 B9 ? ? ? ? ? 7E ? 48 8B 89 ? ? ? ? E9");
#define SpawnActorFromClass ("40 53 56 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 0F 28 1D ? ? ? ? 0F 57 D2 48 8B B4 24 ? ? ? ? 0F 28 CB");
	#define ConstructObject ("4C 89 44 24 ? 53 55 56 57 41 54 41 56 41 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ?");
#define LoadObject ("4C 89 4C 24 ? 48 89 54 24 ? 48 89 4C 24 ? 55 53 56 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 33 D2");
	#define Free ("48 85 C9 74 1D 4C 8B 05 ? ? ? ? 4D 85 C0");
}

namespace S5_6 //UE 4.21	
{
	#define GObjects ("48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB 03 48 8B ? 81 48 08 ? ? ? 40 49");
#define FName_ToString ("48 89 5C 24 ? 57 48 83 EC 30 83 79 04 00 48 8B DA 48 8B F9");
	#define GetFirstPlayerController ("83 B9 ? ? ? ? ? 7E ? 48 8B 89 ? ? ? ? E9");
#define SpawnActorFromClass ("40 53 56 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 0F 28 1D ? ? ? ? 0F 57 D2 48 8B B4 24 ? ? ? ? 0F 28 CB");
	#define ConstructObject ("48 89 5C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 44 8B A5 ? ? ? ? 48 8D 05 ? ? ? ?");
#define LoadObject ("4C 89 4C 24 ? 48 89 54 24 ? 48 89 4C 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC 78 45 33 F6");
	#define Free ("48 85 C9 74 2E 53 48 83 EC 20 48 8B D9");
}


namespace CL9380822//Season X
{
#define GEngine "0x65A40A0";
#define GWorld "0x65A5CF0";
#define StaticConstructObject_Internal "0x22FA300";
#define UObjectArray "0x64A0090";
#define Free "0x2084780";
#define GetNameByIndex "0x215F700";
#define	GetObjectName "0x312EF50";
#define ProcessEvent "0x22F2990";
#define GetFirstPlayerController "0x34CE850";
}

namespace S15 //Chapter 2 15.30
{
#define GWORLD_PATTERN "48 89 05 ? ? ? ? 48 8B B6 ? ? ? ?"  // (+ 0x3)
#define GOBJECT_PATTERN "49 63 C8 48 8D 14 40 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1" // (+ 0xA)
#define FMEMORYFREE_PATTERN "48 85 C9 74 2E 53"
#define GETOBJNAME_PATTERN "40 53 48 83 EC 20 48 8B D9 48 85 D2 75 45 33 C0 48 89 01 48 89 41 08 8D 50 05 E8 ? ? ? ? 8B 53 08 8D 42 05 89 43 08 3B 43 0C 7E 08 48 8B CB E8 ? ? ? ? 48 8B 0B 48 8D 15 ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ? 48 8B C3 48 83 C4 20 5B C3 48 8B 42 18"
#define GETFIRSTPLAYERCONTROLLER_PATTERN "83 B9 ? ? ? ? ? 7E ? 48 8B 89 ? ? ? ? E9"
#define PROCESSEVENT_PATTERN "40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 48 8D 6C 24 ? 48 89 9D ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C5 48 89 85 ? ? ? ? 8B 41 0C 45 33 F6 3B 05 ? ? ? ? 4D 8B F8 48 8B F2 4C 8B E1 41 B8 ? ? ? ? 7D 2A"
#define STATICCONSTRUCTOBJECTINTERNAL_PATTERN "4C 89 44 24 18 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4"
#define GETNAMEBYINDEX_PATTERN "48 89 5C 24 ? 55 56 57 48 8B EC 48 83 EC 30 8B" // replace with 90 90 90 90 90 90 48 85 DB 0F 84
#define SPAWNACTOR_PATTERN "53 56 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 60 0F 28 1D ? ? ? ? 0F 57 D2 48 8B B4 24 B0"
#define STATICLOADOBJECT_PATTERN "40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 8B 85 ? ? ? ? ? 8B FA"
#define SPRINTPATCH_PATTERN "88 91 ? ? ? ? 48 85 DB 0F 84"
#define WEAPONPATCH_PATTERN "0F 84 ? ? ? ? 0F 2F F7 0F 86 ? ? ? ? 48 8B 00" // replace with 0F 85 ? ? ? ? 0F 2F F7 0F 8D ? ? ? ? 48 8B 00
#define PLAYEMOTEITEM_PATTERN "48 85 D2 0F 84 ? ? ? ? 48 89 74 24 20 57 48 83 EC 50"
#define CROUCH_PATTERN "40 53 48 83 EC 20 48 83 B9 ? ? ? ? 00 48 8B D9 74 ? 48 8B 01 FF 90 ? ? ? ? 84 C0 74 ? 48 8B 83"
#define ATHENA_GAMEMODE_CRASH_PATTERN "48 8B 05 ? ? ? ? 48 8B DA 48 8B F9 48 85 C0 0F 84"
}


namespace C3 //have no idea if these are correct or not
{
	 __int64 GameViewport = 0x780;
	 __int64 ConsoleClass = 0x0F8;
	 __int64 GameInstance = 0x80;
	__int64 World = 0x78;
	__int64 ViewportConsole = 0x40;
	 __int64 LocalPlayers = 0x38;
	  __int64 PlayerController = 0x30;
	   __int64 Pawn = 0x250;
	   __int64 CheatManager = 0x338;
	   __int64 PlayerState = 0x228;
	   __int64 AcknowledgedPawn = 0x2A0;
	   __int64 PlayerInput = 0x348;
	    __int64 PersistentLevel = 0x30;
	    __int64 GameState = 0x128;
	    __int64 AuthorityGameMode = 0x120;
	    __int64 OwningGameInstance = 0x188;
		 __int64 CharacterData = 0x4F8;
		 __int64 Parts = 0x08;
		 __int64 PlayerState = 0x240;
		 __int64 Inventory = 0x230;
		 __int64 ReplicatedEntries = 0x108;
		 __int64 ItemInstances = 0x168;
		 __int64 Count = 0xC;
		 __int64 ItemGuid = 0x68;
		 __int64 ItemDefinition = 0x18;
		 __int64 LoadedAmmo = 0x2C;
		 __int64 ItemEntry = 0xE0;
		 __int64 CharacterParts = 0x238;
		 __int64 CurrentMovementStyle = 0x563;
		 __int64 CurrentHealth = 0xD34;
		 __int64 MaxHealth = 0xD38;
		 __int64 CurrentSheild = 0xD3C;
		 __int64 MaxSheild = 0xD40;
		 __int64 Mesh = 0x280;
}

namespace UnknownOffsets // I have no idea what version these go to....
{

#define ProcessEventAddress "\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\x00\x00\x00\x00\x48\x8D\x6C\x24\x00\x48\x89\x9D\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC5\x48\x89\x85\x00\x00\x00\x00\x48\x63\x41\x0C", "xxxxxxxxxxxxxxx????xxxx?xxx????xxx????xxxxxx????xxxx";//if im correct this is Season 1?
#define GEngine "\x48\x89\x74\x24\x20\xE8\x00\x00\x00\x00\x48\x8B\x4C\x24\x40\x48\x89\x05xxxxxx????xxxxxxxx";
#define SCOI "\x4C\x89\x44\x24\x18\x55\x53\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\xAC\x24\x00\x00\x00\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4xxxxxxxxxxxxxxxxxxxxx????xxx????xxx????xxx";
}


