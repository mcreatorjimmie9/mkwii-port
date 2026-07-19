#pragma once
// Physics module - Mario Kart Wii PC Port
// StaticR.rel functions: 161
// main.dol Phase 3 functions: 301
// Total tracked functions: 462

#include "../types.h"

// === Named functions from main.dol Phase 3 ===

// 0x80575a44
void PlayerTrick_ctor(void);  // TODO: proper signature

// 0x80575aa8
void PlayerTrick_dtor(void);  // TODO: proper signature

// 0x80575b38
void PlayerTrick_updateNext(void);  // TODO: proper signature

// 0x80575d7c
void PlayerTrick_tryStart(void);  // TODO: proper signature

// 0x80575ee8
void PlayerTrick_start(void);  // TODO: proper signature

// 0x8057616c
void PlayerTrick_startInner(void);  // TODO: proper signature

// 0x805763e4
void PlayerTrick_update(void);  // TODO: proper signature

// 0x805764fc
void PlayerTrick_updateRot(void);  // TODO: proper signature

// 0x805766b8
void PlayerTrick_end(void);  // TODO: proper signature

// 0x80576758
void PlayerTrickBike_start(void);  // TODO: proper signature

// 0x8057689c
void PlayerTrickBike_startInner(void);  // TODO: proper signature

// 0x80576994
void PlayerTrickBike_updateRot(void);  // TODO: proper signature

// 0x80576afc
void PlayerTrickBike_dtor(void);  // TODO: proper signature

// 0x80577fc4
void PlayerSub10_ctor(void);  // TODO: proper signature

// 0x8057811c
void PlayerBoost_dtor(void);  // TODO: proper signature

// 0x8057829c
void setTurnParams(void);  // TODO: proper signature

// 0x805784d4
void PlayerSub10_init(void);  // TODO: proper signature

// 0x805788dc
void PlayerSub10_update(void);  // TODO: proper signature

// 0x8057a140
void updateDir(void);  // TODO: proper signature

// 0x8057a8b4
void updateTurn(void);  // TODO: proper signature

// 0x8057ab68
void updateVehicleSpeed(void);  // TODO: proper signature

// 0x8057b9bc
void updateAcceleration(void);  // TODO: proper signature

// 0x8057c3d4
void updateOffroad(void);  // TODO: proper signature


// === Unnamed functions from main.dol Phase 3 ===
// Total: 278

// 0x8056731c: sub_8056731c
// 0x80567514: sub_80567514
// 0x80567594: sub_80567594
// 0x805675f8: sub_805675f8
// 0x80567648: sub_80567648
// 0x8056774c: sub_8056774c
// 0x805677cc: sub_805677cc
// 0x805678b4: sub_805678b4
// 0x80567920: sub_80567920
// 0x80567978: sub_80567978
// 0x805679d0: sub_805679d0
// 0x80567b58: sub_80567b58
// 0x80567bac: sub_80567bac
// 0x80567c10: sub_80567c10
// 0x80567c88: sub_80567c88
// 0x80567d00: sub_80567d00
// 0x80567fac: sub_80567fac
// 0x80567fec: sub_80567fec
// 0x8056802c: sub_8056802c
// 0x8056806c: sub_8056806c
// 0x805680ac: sub_805680ac
// 0x8056819c: sub_8056819c
// 0x80568284: sub_80568284
// 0x8056836c: sub_8056836c
// 0x80568454: sub_80568454
// 0x80568504: sub_80568504
// 0x805685b4: sub_805685b4
// 0x8057c5e8: sub_8057c5e8
// 0x8057c69c: sub_8057c69c
// 0x8057cdd4: sub_8057cdd4
// 0x8057cf0c: sub_8057cf0c
// 0x8057d1d4: sub_8057d1d4
// 0x8057d398: sub_8057d398
// 0x8057d888: sub_8057d888
// 0x8057da5c: sub_8057da5c
// 0x8057dc44: sub_8057dc44
// 0x8057e0dc: sub_8057e0dc
// 0x8057e3f4: sub_8057e3f4
// 0x8057e638: sub_8057e638
// 0x8057e6f4: sub_8057e6f4
// 0x8057e77c: sub_8057e77c
// 0x8057e804: sub_8057e804
// 0x8057e99c: sub_8057e99c
// 0x8057eab8: sub_8057eab8
// 0x8057ec28: sub_8057ec28
// 0x8057f090: sub_8057f090
// 0x8057f1d0: sub_8057f1d0
// 0x8057f3d8: sub_8057f3d8
// 0x8057f630: sub_8057f630
// 0x8057f7a8: sub_8057f7a8
// 0x8057f96c: sub_8057f96c
// 0x8057fb6c: sub_8057fb6c
// 0x8057fd18: sub_8057fd18
// 0x805800bc: sub_805800bc
// 0x80580268: sub_80580268
// 0x80580438: sub_80580438
// 0x8058051c: sub_8058051c
// 0x805805ec: sub_805805ec
// 0x80580648: sub_80580648
// 0x805806a4: sub_805806a4
// 0x80580778: sub_80580778
// 0x80580998: sub_80580998
// 0x80580a84: sub_80580a84
// 0x80580b14: sub_80580b14
// 0x80580cdc: sub_80580cdc
// 0x80580dc0: sub_80580dc0
// 0x80580f28: sub_80580f28
// 0x80580f9c: sub_80580f9c
// 0x80581034: sub_80581034
// 0x805810a8: sub_805810a8
// 0x805813e8: sub_805813e8
// 0x8058160c: sub_8058160c
// 0x8058173c: sub_8058173c
// 0x80581778: sub_80581778
// 0x80581824: sub_80581824
// 0x8058196c: sub_8058196c
// 0x805819a8: sub_805819a8
// 0x80581a58: sub_80581a58
// 0x80581b1c: sub_80581b1c
// 0x80581c90: sub_80581c90
// 0x8058212c: sub_8058212c
// 0x80582278: sub_80582278
// 0x805823a4: sub_805823a4
// 0x80582530: sub_80582530
// 0x80582694: sub_80582694
// 0x80582804: sub_80582804
// 0x805828cc: sub_805828cc
// 0x80582dd8: sub_80582dd8
// 0x80582e34: sub_80582e34
// 0x80582f9c: sub_80582f9c
// 0x805832e4: sub_805832e4
// 0x80583424: sub_80583424
// 0x8058348c: sub_8058348c
// 0x80583658: sub_80583658
// 0x805837cc: sub_805837cc
// 0x80583b88: sub_80583b88
// 0x80583f2c: sub_80583f2c
// 0x80583f6c: sub_80583f6c
// 0x80584084: sub_80584084
// 0x80584374: sub_80584374
// 0x80584688: sub_80584688
// 0x8058477c: sub_8058477c
// 0x80584970: sub_80584970
// 0x805849cc: sub_805849cc
// 0x80584d98: sub_80584d98
// 0x80585308: sub_80585308
// 0x805853dc: sub_805853dc
// 0x805855fc: sub_805855fc
// 0x805858ec: sub_805858ec
// 0x80585a44: sub_80585a44
// 0x80585a68: sub_80585a68
// 0x80585ae0: sub_80585ae0
// 0x80585b38: sub_80585b38
// 0x805860fc: sub_805860fc
// 0x805867bc: sub_805867bc
// 0x80586a1c: sub_80586a1c
// 0x80586df4: sub_80586df4
// 0x80586ed0: sub_80586ed0
// 0x80586fe8: sub_80586fe8
// 0x80587500: sub_80587500
// 0x805875d0: sub_805875d0
// 0x805879e4: sub_805879e4
// 0x80587b70: sub_80587b70
// 0x80587bb8: sub_80587bb8
// 0x80587bf8: sub_80587bf8
// 0x80587c94: sub_80587c94
// 0x80587d40: sub_80587d40
// 0x80587da8: sub_80587da8
// 0x80588390: sub_80588390
// 0x80588434: sub_80588434
// 0x805887d8: sub_805887d8
// 0x80588990: sub_80588990
// 0x80588b98: sub_80588b98
// 0x80588cec: sub_80588cec
// 0x80588e64: sub_80588e64
// 0x8058909c: sub_8058909c
// 0x805890f0: sub_805890f0
// 0x80589158: sub_80589158
// 0x80589200: sub_80589200
// 0x805892ac: sub_805892ac
// 0x80589348: sub_80589348
// 0x80589440: sub_80589440
// 0x80589480: sub_80589480
// 0x805894c0: sub_805894c0
// 0x80589554: sub_80589554
// 0x805895ac: sub_805895ac
// 0x8058960c: sub_8058960c
// 0x8058966c: sub_8058966c
// 0x80589704: sub_80589704
// 0x80589744: sub_80589744
// 0x80589798: sub_80589798
// 0x805897d8: sub_805897d8
// 0x80589818: sub_80589818
// 0x8058989c: sub_8058989c
// 0x80589924: sub_80589924
// 0x80589964: sub_80589964
// 0x805899cc: sub_805899cc
// 0x80589fa4: sub_80589fa4
// 0x8058a7b4: sub_8058a7b4
// 0x8058a7f4: sub_8058a7f4
// 0x8058a834: sub_8058a834
// 0x8058a874: sub_8058a874
// 0x8058a8b4: sub_8058a8b4
// 0x8058a8f4: sub_8058a8f4
// 0x8058a934: sub_8058a934
// 0x8058a974: sub_8058a974
// 0x8058a9b4: sub_8058a9b4
// 0x8058a9f4: sub_8058a9f4
// 0x8058aa34: sub_8058aa34
// 0x8058aa74: sub_8058aa74
// 0x8058aab4: sub_8058aab4
// 0x8058aaf4: sub_8058aaf4
// 0x8058ab34: sub_8058ab34
// 0x8058ab74: sub_8058ab74
// 0x8058abb4: sub_8058abb4
// 0x8058abf4: sub_8058abf4
// 0x8058ac48: sub_8058ac48
// 0x8058ac9c: sub_8058ac9c
// 0x8058acf0: sub_8058acf0
// 0x8058ad44: sub_8058ad44
// 0x8058ad98: sub_8058ad98
// 0x8058ae20: sub_8058ae20
// 0x8058ae90: sub_8058ae90
// 0x8058af00: sub_8058af00
// 0x8058af70: sub_8058af70
// 0x8058afe0: sub_8058afe0
// 0x8058b050: sub_8058b050
// 0x8058b0c0: sub_8058b0c0
// 0x8058b184: sub_8058b184
// 0x8058b1d8: sub_8058b1d8
// 0x8058b4d4: sub_8058b4d4
// 0x8058b8e8: sub_8058b8e8
// 0x8058ba38: sub_8058ba38
// 0x8058be20: sub_8058be20
// 0x8058be60: sub_8058be60
// 0x8058c0cc: sub_8058c0cc
// 0x8058c11c: sub_8058c11c
// 0x8058c418: sub_8058c418
// 0x8058c500: sub_8058c500
// 0x8058c73c: sub_8058c73c
// 0x8058c7a0: sub_8058c7a0
// 0x8058c804: sub_8058c804
// 0x8058c868: sub_8058c868
// 0x8058c8cc: sub_8058c8cc
// 0x8058c930: sub_8058c930
// 0x8058c994: sub_8058c994
// 0x8058c9f8: sub_8058c9f8
// 0x8058ca68: sub_8058ca68
// 0x8058cab4: sub_8058cab4
// 0x8058cafc: sub_8058cafc
// 0x8058cb70: sub_8058cb70
// 0x8058d40c: sub_8058d40c
// 0x8058d454: sub_8058d454
// 0x8058d4e0: sub_8058d4e0
// 0x8058d51c: sub_8058d51c
// 0x8058d5b0: sub_8058d5b0
// 0x8058d684: sub_8058d684
// 0x8058d818: sub_8058d818
// 0x8058d8e8: sub_8058d8e8
// 0x8058d918: sub_8058d918
// 0x8058d948: sub_8058d948
// 0x8058d97c: sub_8058d97c
// 0x8058d9a0: sub_8058d9a0
// 0x8058d9c4: sub_8058d9c4
// 0x8058d9e8: sub_8058d9e8
// 0x8058da6c: sub_8058da6c
// 0x8058da90: sub_8058da90
// 0x8058dae4: sub_8058dae4
// 0x8058db20: sub_8058db20
// 0x8058db70: sub_8058db70
// 0x8058db94: sub_8058db94
// 0x8058dc1c: sub_8058dc1c
// 0x8058dc4c: sub_8058dc4c
// 0x8058dc98: sub_8058dc98
// 0x8058dcdc: sub_8058dcdc
// 0x8058dd20: sub_8058dd20
// 0x8058dd64: sub_8058dd64
// 0x8058dda0: sub_8058dda0
// 0x8058ddfc: sub_8058ddfc
// 0x8058def0: sub_8058def0
// 0x8058df30: sub_8058df30
// 0x8058dfbc: sub_8058dfbc
// 0x8058e054: sub_8058e054
// 0x8058e1c8: sub_8058e1c8
// 0x8058e26c: sub_8058e26c
// 0x8058e638: sub_8058e638
// 0x8058e688: sub_8058e688
// 0x8058e764: sub_8058e764
// 0x8058e804: sub_8058e804
// 0x8058e844: sub_8058e844
// 0x8058e9d0: sub_8058e9d0
// 0x8058ea4c: sub_8058ea4c
// 0x8058ec48: sub_8058ec48
// 0x8058ec88: sub_8058ec88
// 0x8058ed20: sub_8058ed20
// 0x8058ed68: sub_8058ed68
// 0x8058eda8: sub_8058eda8
// 0x8058ee88: sub_8058ee88
// 0x8058eefc: sub_8058eefc
// 0x8058f08c: sub_8058f08c
// 0x8058f24c: sub_8058f24c
// 0x8058f2a0: sub_8058f2a0
// 0x8058f328: sub_8058f328
// 0x8058f4ec: sub_8058f4ec
// 0x8058f52c: sub_8058f52c
// 0x8058f56c: sub_8058f56c
// 0x8058f5ac: sub_8058f5ac
// 0x8058f5f4: sub_8058f5f4
// 0x8058f860: sub_8058f860
// 0x8058f8f0: sub_8058f8f0
// 0x8058f964: sub_8058f964
// 0x8058f9d0: sub_8058f9d0
// 0x8058fa10: sub_8058fa10
// 0x8058fa50: sub_8058fa50
// 0x8058fae8: sub_8058fae8
// 0x8058fb6c: sub_8058fb6c
// 0x8058fe14: sub_8058fe14
// 0x8058ff20: sub_8058ff20