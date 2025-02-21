#ifndef GUARD_TRAINER_LOADOUTS_H
#define GUARD_TRAINER_LOADOUTS_H

// This is just going to setup an array function so I can say something like "IV_Perfect_All" instead of [15, 15, 15, 15, 15, 15, 15, 15];
#define	TL_ALL			0
#define	TL_BULKY		1
#define	TL_SWEEPER		2
#define	TL_TANK			3
#define	TL_SORCERER		4
#define	TL_SPY			5
#define	TL_DRAGON		6
#define	TL_COWBOY		7
#define	TL_BARBARIAN	8
#define TL_WARLOCK		9
#define	TL_PANDA		10
#define	TL_GUARD		11
#define	TL_ASSASSIN		12
#define TL_SCOUT		13
#define TL_ROCK			14
#define TL_PSYCHIC		15
#define TL_KNIGHT		16
#define TL_RABBIT		17
#define TL_BOXER		18
#define TL_RANGER		19
#define TL_FIGHTER		20
#define TL_UNICORN		21
#define TL_WIZARD		22
#define TL_NONE			23

/*
static u32 trainerLoadoutIVs(u16 loadout, u8 min, u8 max){
	switch (loadout) {
		case TL_ALL:
			return TRAINER_PARTY_IVS(max, max, max, max, max, max, max, max);
		break;
		default:
			return TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0, 0, 0);
	}
}
*/

#endif // GUARD_TRAINER_LOADOUTS_H
