#pragma once
// AIRace module - Mario Kart Wii PC Port
// StaticR.rel functions: 336
// main.dol Phase 3 functions: 58
// Total tracked functions: 394

#include "../types.h"

// === Named functions from main.dol Phase 3 ===

// 0x80523e94
void setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState(void);  // TODO: proper signature

// 0x80525988
void __ct__Q26System6KPadAIFv(void);  // TODO: proper signature

// 0x80526f40
void calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState(void);  // TODO: proper signature

// 0x807284c4
void __ct__Q25Enemy2AIFb(void);  // TODO: proper signature

// 0x80728570
void __dt__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807285f8
void init__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807286a0
void update__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807286ec
void getStick__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728734
void isCPU__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728778
void isRealLocal__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807287b8
void isRealLocalAndCPU__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728820
void isAICPU__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728824
void isGhost__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728868
void isSameTeam__Q25Enemy2AIFPQ25Enemy2AI(void);  // TODO: proper signature

// 0x80728890
void endRace__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728898
void onOutOfBounds__Q25Enemy2AIFRCQ26System17MapdataJugemPoint(void);  // TODO: proper signature

// 0x807288ac
void forceRecalculation__Q25Enemy2AIFb(void);  // TODO: proper signature

// 0x807288b4
void handleBump__Q25Enemy2AIFRCQ23EGG8Vector3fRCQ25Enemy2AI(void);  // TODO: proper signature

// 0x807289d0
void isOnGround__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807289e4
void isAllWheelsCollision__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x807289f8
void isDriftingOnGround__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728a0c
void isHopping__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728a20
void isAutoDrift__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x80728a34
void isInBullet__Q25Enemy2AIFv(void);  // TODO: proper signature

// 0x8072a6f4
void setDoNotSelectBackward__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072a6fc
void getAIProbability__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072aab0
void setBattleType__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c284
void __ct__Q25Enemy13AIControlBaseFRCQ25Enemy6AIInfo(void);  // TODO: proper signature

// 0x8072c400
void __dt__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c5d0
void init__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c790
void onOutOfBoundsInner__Q25Enemy13AIControlBaseFRCQ26System17MapdataJugemPoint(void);  // TODO: proper signature

// 0x8072c7d0
void onForceRecalculation__Q25Enemy13AIControlBaseFRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8072c7d8
void onPlayerGoal__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c7e0
void onCpuGoal__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c7f8
void setStartDashTypeToKart__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072c864
void setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(void);  // TODO: proper signature

// 0x8072ca58
void doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(void);  // TODO: proper signature

// 0x8072cb38
void __ct__Q25Enemy16AIAirtimeTrackerFRCQ25Enemy6AIInfo(void);  // TODO: proper signature

// 0x8072cb9c
void init__Q25Enemy16AIAirtimeTrackerFl(void);  // TODO: proper signature

// 0x8072cbc4
void update__Q25Enemy16AIAirtimeTrackerFv(void);  // TODO: proper signature

// 0x8072cc28
void __ct__Q25Enemy12AIPowAvoiderFRCQ25Enemy6AIInfo(void);  // TODO: proper signature

// 0x8072cc7c
void init__Q25Enemy12AIPowAvoiderFv(void);  // TODO: proper signature

// 0x8072cc88
void update__Q25Enemy12AIPowAvoiderFv(void);  // TODO: proper signature

// 0x8072cd2c
void isSameTeam__Q25Enemy12AIPowAvoiderFl(void);  // TODO: proper signature

// 0x8072cd74
void isAllStopAfterGoal__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072cd7c
void setAIRankTopOfPlayer__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072cd88
void getAIRank__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x8072cd90
void onRaceStart__Q25Enemy13AIControlBaseFv(void);  // TODO: proper signature

// 0x80734b60
void update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor(void);  // TODO: proper signature

// 0x80734b70
void forceRecalculation__Q25Enemy8AIEngineFb(void);  // TODO: proper signature

// 0x80734b78
void endRace__Q25Enemy8AIEngineFv(void);  // TODO: proper signature

// 0x8073569c
void __ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI(void);  // TODO: proper signature

// 0x8073578c
void __ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI(void);  // TODO: proper signature

// 0x807377e0
void avoidPow__Q25Enemy14AITrickHandlerFv(void);  // TODO: proper signature

// 0x807377f0
void allowTricking__Q25Enemy14AITrickHandlerFv(void);  // TODO: proper signature

// 0x80737830
void shouldTrick__Q25Enemy14AITrickHandlerFv(void);  // TODO: proper signature

// 0x80737938
void calc__Q25Enemy14AITrickHandlerFv(void);  // TODO: proper signature

// 0x8073794c
void update__Q25Enemy14AITrickHandlerFv(void);  // TODO: proper signature


// === Unnamed functions from main.dol Phase 3 ===
// Total: 0
