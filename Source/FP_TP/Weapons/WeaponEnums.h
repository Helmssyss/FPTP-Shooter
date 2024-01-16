#pragma once
#include "CoreMinimal.h"

enum class EWeaponTypes : uint8 {
	WEAPON_AR4,
	WEAPON_AK47,
	WEAPON_PISTOL
};

enum class EWeaponFireModes : uint8 {
	AUTO_MODE,
	SEMI_AUTO_MODE,
	SINGLE_MODE
};

enum class EWeaponMagazineType : uint8 {
	EMPTY,
	FULL
};

enum class EWeaponMuzzleType : uint8 {
	NORMAL,
	SUPPRESSOR
};

enum class EWeaponSightType : uint8 {
	IRON_SIGHT,
	RED_DOT
};