#pragma once
// RaceEngine module - Mario Kart Wii PC Port
// Phase 6: 216 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x80530074 (address_range)
int RaceFlow_validate_80530074(int, int);

// 0x0x80530120 (address_range)
void race_RaceFlow_80530120(int);

// 0x0x80530348 (address_range)
void race_RaceFlow_80530348(int, int);

// 0x0x80530614 (address_range)
int RaceFlow_validate_80530614(int, int);

// 0x0x805306d8 (address_range)
void race_RaceFlow_805306d8(int);

// 0x0x80530994 (address_range)
void race_RaceFlow_80530994(int, int);

// 0x0x80530b64 (address_range)
u32 * race_RaceFlow_80530b64(u32);

// 0x0x80530c7c (address_range)
int RaceFlow_validate_80530c7c(int, int);

// 0x0x80530d1c (address_range)
void race_RaceFlow_80530d1c(int);

// 0x0x80530ec8 (address_range)
void race_RaceFlow_80530ec8(int, int);

// 0x0x80531034 (address_range)
void RaceFlow_validate_80531034(u32);

// 0x0x80531164 (address_range)
u32 RaceFlow_validate_80531164(int);

// 0x0x80531210 (certain)
void RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario::postInitControllers(int);

// 0x0x805314c4 (address_range)
void race_RaceFlow_805314c4(int);

// 0x0x805315b4 (address_range)
void race_RaceFlow_805315b4(int, uint, u32, u32);

// 0x0x80531620 (address_range)
void race_RaceFlow_80531620(int, int);

// 0x0x805317e0 (address_range)
u32 * race_RaceFlow_805317e0(u32);

// 0x0x80531938 (address_range)
int RaceFlow_validate_80531938(int, int);

// 0x0x805319d8 (address_range)
void race_RaceFlow_805319d8(int);

// 0x0x80531bd0 (address_range)
void race_RaceFlow_80531bd0(int, u32);

// 0x0x80531c1c (address_range)
void race_RaceFlow_80531c1c(int, u32);

// 0x0x80531d64 (address_range)
u32 * race_RaceFlow_80531d64(u32);

// 0x0x80531de0 (address_range)
int RaceFlow_validate_80531de0(int, int);

// 0x0x80531e48 (address_range)
void race_RaceFlow_80531e48(int);

// 0x0x80531f1c (address_range)
void race_RaceFlow_80531f1c(int);

// 0x0x80532100 (address_range)
void race_RaceFlow_80532100(int);

// 0x0x80532b64 (address_range)
void race_RaceFlow_80532b64(int, u32);

// 0x0x80532d20 (address_range)
void race_RaceFlow_80532d20(int, u32);

// 0x0x80532e1c (address_range)
void race_RaceFlow_80532e1c(int, u32);

// 0x0x805331d8 (address_range)
void race_RaceFlow_805331d8(int);

// 0x0x80533308 (address_range)
void race_RaceFlow_80533308(int);

// 0x0x80533438 (address_range)
void race_RaceFlow_80533438(int);

// 0x0x805337fc (address_range)
void race_RaceFlow_805337fc(int);

// 0x0x805339c4 (address_range)
void race_RaceFlow_805339c4(void);

// 0x0x80533ab0 (address_range)
void RaceFlow_validate_80533ab0(int, u32, u32);

// 0x0x80533ae0 (address_range)
void RaceFlow_validate_80533ae0(int, u32, u32);

// 0x0x80533b10 (address_range)
void RaceFlow_validate_80533b10(int, u32, u32);

// 0x0x80533b40 (address_range)
void RaceFlow_validate_80533b40(int, u32, u32);

// 0x0x80533b70 (address_range)
void RaceFlow_validate_80533b70(int, u32, u32);

// 0x0x80533ba0 (address_range)
void RaceFlow_validate_80533ba0(int, u32);

// 0x0x80533bd0 (address_range)
void RaceFlow_validate_80533bd0(int, u32);

// 0x0x80533c00 (address_range)
void RaceFlow_validate_80533c00(int, u32);

// 0x0x80533c30 (address_range)
void RaceFlow_validate_80533c30(int, u32);

// 0x0x80533c60 (address_range)
void RaceFlow_validate_80533c60(int, u32);

// 0x0x80533c90 (address_range)
void RaceFlow_validate_80533c90(int, u32);

// 0x0x80533cf8 (address_range)
u32 * race_RaceFlow_80533cf8(u32);

// 0x0x80533d34 (address_range)
int RaceFlow_validate_80533d34(int, int);

// 0x0x80533d8c (address_range)
void RaceFlow_assertFail_80533d8c(void);

// 0x0x80533eb0 (address_range)
void race_RaceFlow_80533eb0(int);

// 0x0x80533ee8 (address_range)
void RaceFlow_validate_80533ee8(int, int);

// 0x0x80534094 (address_range)
void RaceFlow_validate_80534094(int, int);

// 0x0x805342f8 (address_range)
void RaceFlow_validate_805342f8(u32);

// 0x0x80534420 (address_range)
u32 RaceFlow_validate_80534420(int);

// 0x0x805344d4 (address_range)
void RaceFlow_assertFail_805344d4(void);

// 0x0x80534778 (address_range)
void race_RaceFlow_80534778(int);

// 0x0x805347c0 (address_range)
void race_RaceFlow_805347c0(int, int, int, int);

// 0x0x805348c8 (address_range)
void RaceFlow_validate_805348c8(int, int);

// 0x0x80534bd0 (address_range)
int RaceFlow_validate_80534bd0(int, int);

// 0x0x80534c10 (address_range)
void race_RaceFlow_80534c10(int, int, int, int);

// 0x0x80534d5c (address_range)
void RaceFlow_validate_80534d5c(int, int);

// 0x0x8053529c (address_range)
void race_RaceFlow_8053529c(u32, u32);

// 0x0x805352e8 (address_range)
void RaceFlow_validate_805352e8(u32);

// 0x0x80535370 (address_range)
int RaceFlow_validate_80535370(int, int);

// 0x0x805353b0 (address_range)
u32 RaceFlow_validate_805353b0(int);

// 0x0x80535418 (address_range)
int RaceFlow_validate_80535418(int, int);

// 0x0x805354a0 (address_range)
void race_RaceFlow_805354a0(int);

// 0x0x80535550 (address_range)
void race_RaceFlow_80535550(int);

// 0x0x8053569c (certain)
void RaceInfo_update(int);

// 0x0x805357f4 (address_range)
void race_RaceFlow_805357f4(int);

// 0x0x80535afc (address_range)
void race_RaceFlow_80535afc(int, u32, u32);

// 0x0x80535b08 (address_range)
void race_RaceFlow_80535b08(int, u32, u32);

// 0x0x80535d64 (address_range)
void race_RaceFlow_80535d64(int);

// 0x0x8053617c (address_range)
void race_RaceFlow_8053617c(int, u32, u32, int, u32, int);

// 0x0x8053652c (address_range)
void race_RaceFlow_8053652c(int);

// 0x0x80536644 (address_range)
void race_RaceFlow_80536644(int);

// 0x0x805367cc (address_range)
void RaceFlow_validate_805367cc(int, u32, u32);

// 0x0x805367fc (address_range)
void RaceFlow_validate_805367fc(int, u32);

// 0x0x80536854 (address_range)
void RaceFlow_assertFail_80536854(void);

// 0x0x805369cc (address_range)
int RaceFlow_validate_805369cc(int, int);

// 0x0x80536a74 (address_range)
void race_RaceFlow_80536a74(int);

// 0x0x80536c6c (address_range)
void race_RaceFlow_80536c6c(int, int, int);

// 0x0x80536d6c (address_range)
void race_RaceFlow_80536d6c(int, u32);

// 0x0x80536dc0 (address_range)
void race_RaceFlow_80536dc0(int, u32);

// 0x0x80536fb4 (address_range)
void race_RaceFlow_80536fb4(int, u32);

// 0x0x80537010 (address_range)
void race_RaceFlow_80537010(void);

// 0x0x805371e0 (address_range)
u32 * race_RaceFlow_805371e0(u32);

// 0x0x80537264 (address_range)
int RaceFlow_validate_80537264(int, int);

// 0x0x805372cc (address_range)
void race_RaceFlow_805372cc(int);

// 0x0x80537354 (address_range)
void race_RaceFlow_80537354(int, u32);

// 0x0x8053735c (address_range)
void RaceFlow_validate_8053735c(int);

// 0x0x80537b24 (address_range)
void RaceFlow_assertFail_80537b24(void);

// 0x0x8053851c (address_range)
void race_RaceFlow_8053851c(int);

// 0x0x80539a40 (address_range)
void race_RaceFlow_80539a40(int, u32, u32, u32);

// 0x0x80539b1c (address_range)
void race_RaceFlow_80539b1c(int);

// 0x0x80539c28 (address_range)
void race_RaceFlow_80539c28(int);

// 0x0x80539d54 (address_range)
void race_RaceFlow_80539d54(int);

// 0x0x8053a328 (address_range)
void RaceFlow_validate_8053a328(int);

// 0x0x8053a760 (address_range)
void RaceFlow_validate_8053a760(int);

// 0x0x8053a864 (address_range)
void race_RaceFlow_8053a864(int);

// 0x0x8053a97c (address_range)
void race_RaceFlow_8053a97c(int);

// 0x0x8053ab3c (address_range)
void race_RaceFlow_8053ab3c(int);

// 0x0x8053acf4 (address_range)
void race_RaceFlow_8053acf4(double);

// 0x0x8053ad80 (address_range)
void RaceFlow_validate_8053ad80(int, u32);

// 0x0x8053adb0 (address_range)
void RaceFlow_validate_8053adb0(int, u32, u32);

// 0x0x8053ade0 (address_range)
void RaceFlow_validate_8053ade0(int, u32);

// 0x0x8053ae2c (address_range)
void race_RaceFlow_8053ae2c(void);

// 0x0x8053af88 (address_range)
int * race_RaceFlow_8053af88(int);

// 0x0x8053afd8 (address_range)
int RaceFlow_validate_8053afd8(int, int);

// 0x0x8053b030 (address_range)
void race_RaceFlow_8053b030(int, int, int, int);

// 0x0x8053b20c (address_range)
void race_RaceFlow_8053b20c(void);

// 0x0x8053b6d4 (address_range)
void race_RaceFlow_8053b6d4(int);

// 0x0x8053b80c (address_range)
u32 race_RaceFlow_8053b80c(int);

// 0x0x8053b868 (address_range)
void race_RaceFlow_8053b868(void);

// 0x0x8053b9a0 (address_range)
int * race_RaceFlow_8053b9a0(int);

// 0x0x8053bab4 (address_range)
int RaceFlow_validate_8053bab4(int, int);

// 0x0x8053bb24 (address_range)
void RaceFlow_assertFail_8053bb24(void);

// 0x0x8053bf84 (address_range)
void race_RaceFlow_8053bf84(int);

// 0x0x8053c034 (address_range)
void race_RaceFlow_8053c034(int);

// 0x0x8053c8d8 (address_range)
void RaceFlow_assertFail_8053c8d8(void);

// 0x0x8053d0d4 (address_range)
void RaceFlow_validate_8053d0d4(int);

// 0x0x8053d238 (address_range)
void race_RaceFlow_8053d238(void);

// 0x0x8053d47c (address_range)
void race_RaceFlow_8053d47c(int, int);

// 0x0x8053d514 (address_range)
int * race_RaceFlow_8053d514(int);

// 0x0x8053d570 (address_range)
int RaceFlow_validate_8053d570(int, int);

// 0x0x8053d5cc (address_range)
void race_RaceFlow_8053d5cc(u32, u32, u32, u32);

// 0x0x8053d6fc (address_range)
u32 * race_RaceFlow_8053d6fc(u32);

// 0x0x8053d738 (address_range)
int RaceFlow_validate_8053d738(int, int);

// 0x0x8053d790 (address_range)
void race_RaceFlow_8053d790(int);

// 0x0x8053d810 (address_range)
void race_RaceFlow_8053d810(void);

// 0x0x8053d954 (address_range)
void race_RaceFlow_8053d954(void);

// 0x0x8053da00 (address_range)
void race_RaceFlow_8053da00(int);

// 0x0x8053da1c (address_range)
u32 * race_RaceFlow_8053da1c(u32);

// 0x0x8053da58 (address_range)
int RaceFlow_validate_8053da58(int, int);

// 0x0x8053dab0 (address_range)
void race_RaceFlow_8053dab0(int, int);

// 0x0x8053dc2c (address_range)
void race_RaceFlow_8053dc2c(int);

// 0x0x8053dcb8 (address_range)
void RaceFlow_assertFail_8053dcb8(void);

// 0x0x8053df20 (address_range)
void RaceFlow_validate_8053df20(int, u32, u32);

// 0x0x8053df50 (address_range)
void race_RaceFlow_8053df50(void);

// 0x0x8053dfa4 (address_range)
u32 * race_RaceFlow_8053dfa4(u32);

// 0x0x8053dfe4 (address_range)
int RaceFlow_validate_8053dfe4(int, int);

// 0x0x8053e040 (address_range)
void race_RaceFlow_8053e040(int, u32, u32, u32);

// 0x0x8053e050 (address_range)
void race_RaceFlow_8053e050(int, u32);

// 0x0x8053e238 (address_range)
void race_RaceFlow_8053e238(int, u32);

// 0x0x8053e258 (address_range)
void race_RaceFlow_8053e258(int);

// 0x0x8053e2a4 (address_range)
void race_RaceFlow_8053e2a4(void);

// 0x0x8053e544 (address_range)
void RaceFlow_validate_8053e544(int);

// 0x0x8053e560 (address_range)
void race_RaceFlow_8053e560(int);

// 0x0x8053e5d0 (address_range)
void race_RaceFlow_8053e5d0(int);

// 0x0x8053e824 (address_range)
void race_RaceFlow_8053e824(int, u32, int);

// 0x0x8053e914 (address_range)
double race_RaceFlow_8053e914(double, int);

// 0x0x8053ea04 (address_range)
double race_RaceFlow_8053ea04(int, u32);

// 0x0x8053ea4c (address_range)
int race_RaceFlow_8053ea4c(int, int);

// 0x0x8053eaec (address_range)
int race_RaceFlow_8053eaec(int, int);

// 0x0x8053eb8c (address_range)
u32 * race_RaceFlow_8053eb8c(u32);

// 0x0x8053ebd8 (address_range)
int RaceFlow_validate_8053ebd8(int, int);

// 0x0x8053ec38 (address_range)
void race_RaceFlow_8053ec38(int, int, int);

// 0x0x8053ee60 (address_range)
void race_RaceFlow_8053ee60(void);

// 0x0x8053f104 (address_range)
double race_RaceFlow_8053f104(int, int);

// 0x0x8053f188 (address_range)
u32 * race_RaceFlow_8053f188(u32);

// 0x0x8053f1d4 (address_range)
int RaceFlow_validate_8053f1d4(int, int);

// 0x0x8053f234 (address_range)
void race_RaceFlow_8053f234(int);

// 0x0x8053f3e4 (address_range)
double race_RaceFlow_8053f3e4(int, int);

// 0x0x8053f454 (address_range)
u32 * race_RaceFlow_8053f454(u32);

// 0x0x8053f4d8 (address_range)
int RaceFlow_validate_8053f4d8(int, int);

// 0x0x8053f54c (address_range)
void race_RaceFlow_8053f54c(int);

// 0x0x8053f5cc (address_range)
void RaceFlow_validate_8053f5cc(int);

// 0x0x8053f76c (address_range)
void race_RaceFlow_8053f76c(int);

// 0x0x8053fd88 (address_range)
void race_RaceFlow_8053fd88(int);

// 0x0x8052ffd8 (main.dol_phase3)
void computeGpRank__Q36System10RaceConfig6PlayerCFv(void);

// 0x0x80530228 (main.dol_phase3)
void init__Q26System10RaceConfigFv(void);

// 0x0x8053093c (main.dol_phase3)
void clear__Q26System10RaceConfigFv(void);

// 0x0x80530b50 (main.dol_phase3)
void clear__Q36System10RaceConfig8ScenarioFv(void);

// 0x0x80530c58 (main.dol_phase3)
void update__Q36System10RaceConfig8ScenarioFv(void);

// 0x0x80530d58 (main.dol_phase3)
void updateRating__Q26System10RaceConfigFUc(void);

// 0x0x805313d8 (main.dol_phase3)
void initGhost__Q36System10RaceConfig8ScenarioFUcSc(void);

// 0x0x8053154c (main.dol_phase3)
void initPlayers__Q36System10RaceConfig8ScenarioFUc(void);

// 0x0x805316c8 (main.dol_phase3)
void copyPrevPositions__Q36System10RaceConfig8ScenarioFv(void);

// 0x0x805319d0 (main.dol_phase3)
void initControllers__Q36System10RaceConfig8ScenarioFUc(void);

// 0x0x80531c70 (main.dol_phase3)
void computePlayerCounts__Q36System10RaceConfig8ScenarioFRUcRUcRUc(void);

// 0x0x80531e0c (main.dol_phase3)
void initRng__Q36System10RaceConfig8ScenarioFv(void);

// 0x0x80531ef4 (main.dol_phase3)
void initCompetitionSettings__Q36System10RaceConfig8ScenarioFv(void);

// 0x0x80532078 (main.dol_phase3)
void initRace__Q36System10RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario(void);

// 0x0x80532340 (main.dol_phase3)
void createInstance__Q26System10RaceConfigFv(void);

// 0x0x80532520 (main.dol_phase3)
void __dt__Q26System10RaceConfigFv(void);

// 0x0x80532644 (main.dol_phase3)
void __ct__Q26System10RaceConfigFv(void);

// 0x0x805327ac (main.dol_phase3)
void initRace__Q26System10RaceConfigFv(void);

// 0x0x80532a94 (main.dol_phase3)
void copy__Q36System10RaceConfig8ScenarioFRCQ36System10RaceConfig8Scenario(void);

// 0x0x80532d4c (main.dol_phase3)
void Racedata_initAwards(void);

// 0x0x80533418 (main.dol_phase3)
void setMii__Q36System10RaceConfig6PlayerFRCQ26System3Mii(void);

// 0x0x80533558 (main.dol_phase3)
void Racedata_initCredits(void);

// 0x0x805341cc (main.dol_phase3)
void update__Q26System10RaceConfigFv(void);

// 0x0x805342cc (main.dol_phase3)
void appendParamFile__Q36System10RaceConfig8ScenarioFPQ26System10RaceConfig(void);

// 0x0x80534670 (main.dol_phase3)
void Raceinfo_initGamemode(void);

// 0x0x80534c88 (main.dol_phase3)
void Raceinfo_construct(void);

// 0x0x80535470 (main.dol_phase3)
void Raceinfo_init(void);

// 0x0x805363c0 (main.dol_phase3)
void RaceinfoPlayer_construct(void);

// 0x0x8053667c (main.dol_phase3)
void RaceinfoPlayer_init(void);

// 0x0x80536cdc (main.dol_phase3)
void RaceinfoPlayer_endRace(void);

// 0x0x80536ea0 (main.dol_phase3)
void RaceinfoPlayer_endLap(void);

// 0x0x805372e0 (main.dol_phase3)
void RaceinfoPlayer_updateCheckpoint(void);

// 0x0x805377ec (main.dol_phase3)
void RaceinfoPlayer_update(void);

// 0x0x80537c14 (main.dol_phase3)
void RaceinfoPlayer_getLapSplit(void);

// 0x0x805381fc (main.dol_phase3)
void TimeAttackGamemode_canEndRace(void);

// 0x0x805387c4 (main.dol_phase3)
void Raceinfo_getInitialPosAndRotForPlayer(void);

// 0x0x80538de0 (main.dol_phase3)
void updateGpRankScore__Q26System17RaceManagerPlayerFv(void);

// 0x0x8058d680 (main.dol_phase3)
void RacedataHandler_processInputs(void);

// 0x0x8058f018 (main.dol_phase3)
void RacedataFactory_packRacedataRecord(void);

// 0x0x8063b488 (main.dol_phase3)
void TimeAttackBackPage_onActivate(void);

// 0x0x8063b634 (main.dol_phase3)
void TimeAttackBackPage_afterCalc(void);

// 0x0x8063b748 (main.dol_phase3)
void TimeAttackBackPage_onRefocus(void);

// 0x0x8063b8b0 (main.dol_phase3)
void TimeAttackBackPage_onReady(void);

// 0x0x807f1db8 (main.dol_phase3)
void CtrlRaceLap_load(void);

// 0x0x807fa154 (main.dol_phase3)
void CtrlRaceTime_initSelf(void);

// 0x0x807fa3a8 (main.dol_phase3)
void CtrlRaceTime_calcSelf(void);

// 0x0x807fa9a8 (main.dol_phase3)
void CtrlRaceTime_refresh(void);

// 0x0x80857bcc (main.dol_phase3)
void TimeAttackSplitsPage_ct(void);

#ifdef __cplusplus
}
#endif
