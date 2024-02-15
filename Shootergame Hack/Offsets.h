#pragma once
#include "globals.h"

namespace Offsets
{
	enum Offset : DWORD64
	{
		/*	general things	*/

		GWORLD = 0xB8,
		gameInstance = 0x2494,
		persistentLevel = 0x30,
		localPlayers = 0x38,
		actorsArray = 0xEA0,
		actorCount = 0xEA0,
		objectID = 0x0,

		/*	Actor specific		*/

		playerController = 0x30,
		APawn = 0x4,
		RootComponent = 0x198,


		/*	RootComponent specific	*/

		componentToWorld = 0x188,
		Translation = 0x0,	/*	(x, y, z)	*/


		/*	game pawn specific	*/

		pawnHealth = 0x0,
		CurrentWeapon = 0x0,
		RunningSpeedModifier = 0x1E8,
		IsTargeting = 0x1,// this is an int, & 1 to get the status //0x620


		/*	weapon specific		*/
		currentAmmo = 0x0,


		/*	Camera	Offsets		*/
		CameraManager = 0x358,
		cameraCachePrivate = 0x22C0,
		POV = 0x8090,
		cameraVector = 0x88,
		cameraRotation = 0x13720,
		cameraFOV = 0x2B8
	};
}