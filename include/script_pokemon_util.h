#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16, u8, u16);
u8 ScriptGiveEgg(u16);
void CreateScriptedWildMon(u16, u8, u16);
void CreateScriptedDoubleWildMon(u16, u8, u16, u16, u8, u16);
void ScriptSetMonMoveSlot(u8, u16, u8);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonHPSpeedEVs(void);
void Script_GetChosenMonAtkDefEVs(void);
void Script_GetChosenMonSpAtkSpDefEVs(void);
void Script_GetChosenMonReactAwareEVs(void);
void Script_GetChosenMonHPSpeedIVs(void);
void Script_GetChosenMonAtkDefIVs(void);
void Script_GetChosenMonSpAtkSpDefIVs(void);
void Script_GetChosenMonReactAwareIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
