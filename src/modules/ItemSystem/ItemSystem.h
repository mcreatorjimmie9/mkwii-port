#pragma once
// ItemSystem module - Mario Kart Wii PC Port
// Phase 6: 83 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x8065e1b0 (address_range)
void ItemBehaviour_assertFail_8065e1b0(void);

// 0x0x8065e674 (address_range)
void ItemBehaviour_validate_8065e674(int);

// 0x0x8065e930 (address_range)
void item_ItemBehaviour_8065e930(int, u32, u32, u32);

// 0x0x8065e990 (address_range)
void ItemBehaviour_validate_8065e990(int);

// 0x0x8065eb44 (address_range)
void ItemBehaviour_validate_8065eb44(int);

// 0x0x8065ec88 (address_range)
void ItemBehaviour_validate_8065ec88(int);

// 0x0x8065f014 (address_range)
void item_ItemBehaviour_8065f014(u32, int);

// 0x0x8065f02c (address_range)
void item_ItemBehaviour_8065f02c(int, int);

// 0x0x8065f154 (address_range)
void item_ItemBehaviour_8065f154(int);

// 0x0x8065f224 (address_range)
void item_ItemBehaviour_8065f224(int);

// 0x0x8065f2fc (address_range)
void item_ItemBehaviour_8065f2fc(int);

// 0x0x8065f444 (address_range)
void item_ItemBehaviour_8065f444(int, u32, u32);

// 0x0x8065f480 (address_range)
void item_ItemBehaviour_8065f480(void);

// 0x0x8065f69c (address_range)
void ItemBehaviour_validate_8065f69c(int);

// 0x0x8065f804 (address_range)
void ItemBehaviour_assertFail_8065f804(void);

// 0x0x8065f9e8 (address_range)
void ItemBehaviour_validate_8065f9e8(int, u32);

// 0x0x8065faf8 (address_range)
void ItemBehaviour_assertFail_8065faf8(void);

// 0x0x8065fc08 (address_range)
void item_ItemBehaviour_8065fc08(void);

// 0x0x8066013c (address_range)
void item_ItemBehaviour_8066013c(void);

// 0x0x806604e0 (address_range)
u32 item_ItemBehaviour_806604e0(u32, u32, int);

// 0x0x80660588 (address_range)
void item_ItemBehaviour_80660588(int, u32);

// 0x0x80660674 (address_range)
void ItemBehaviour_validate_80660674(int);

// 0x0x8066082c (address_range)
void item_ItemBehaviour_8066082c(int, u32);

// 0x0x806608d0 (address_range)
void ItemBehaviour_validate_806608d0(int, u32, u32, u32, u32, u32, u32, u32);

// 0x0x80660958 (address_range)
void ItemBehaviour_validate_80660958(int);

// 0x0x80660a0c (address_range)
void ItemBehaviour_validate_80660a0c(int);

// 0x0x80660a9c (address_range)
void ItemBehaviour_validate_80660a9c(int);

// 0x0x80660b50 (address_range)
void item_ItemBehaviour_80660b50(int);

// 0x0x80660bdc (address_range)
void ItemBehaviour_validate_80660bdc(int);

// 0x0x80660d78 (address_range)
void item_ItemBehaviour_80660d78(void);

// 0x0x80660e24 (address_range)
int ItemBehaviour_validate_80660e24(int, int);

// 0x0x80660e64 (address_range)
void item_ItemBehaviour_80660e64(void);

// 0x0x80660f4c (address_range)
u32 ItemBehaviour_validate_80660f4c(u32);

// 0x0x80574a64 (main.dol_phase3)
void PlayerSub18_checkItemCollision(void);

// 0x0x805818c0 (main.dol_phase3)
void PlayerSub10_activateMushroom(void);

// 0x0x80582ffc (main.dol_phase3)
void PlayerSub10_activateMega(void);

// 0x0x80587d94 (main.dol_phase3)
void PlayerSub10_activateBullet(void);

// 0x0x8059e600 (main.dol_phase3)
void cancelBullet(void);

// 0x0x8065e5d4 (main.dol_phase3)
void createStaticInstance__Q23Net11ITEMHandlerFv(void);

// 0x0x8065e890 (main.dol_phase3)
void ITEMHandler_construct(void);

// 0x0x8065ead0 (main.dol_phase3)
void ITEMHandler_update(void);

// 0x0x8065f704 (main.dol_phase3)
void ITEMHandler_getPlayerStoredItem(void);

// 0x0x8065fa50 (main.dol_phase3)
void ITEMHandler_getPlayerMode(void);

// 0x0x80660224 (main.dol_phase3)
void ITEMHandler_importNewPackets(void);

// 0x0x80792fe4 (main.dol_phase3)
void initItemObjProperties(void);

// 0x0x80793364 (main.dol_phase3)
void copyItemObjProperties(void);

// 0x0x80793df8 (main.dol_phase3)
void ItemHolderPlayerb4_use(void);

// 0x0x807966d8 (main.dol_phase3)
void ItemHolderPlayerb4_calcRotatingItemObjs(void);

// 0x0x807981b4 (main.dol_phase3)
void ItemHolderItem_initObjs(void);

// 0x0x807982ec (main.dol_phase3)
void ItemHolderItem_spawn(void);

// 0x0x80798450 (main.dol_phase3)
void ItemHolderItem_despawn(void);

// 0x0x80798958 (main.dol_phase3)
void ItemHolderItem_update(void);

// 0x0x80799bc8 (main.dol_phase3)
void ItemHolderPlayer_init(void);

// 0x0x80799e10 (main.dol_phase3)
void ItemHolderPlayer_update(void);

// 0x0x8079b484 (main.dol_phase3)
void ItemHolder_destroy(void);

// 0x0x8079b7c0 (main.dol_phase3)
void ItemHolder_construct(void);

// 0x0x8079ba04 (main.dol_phase3)
void ItemHolderPlayer_destroy(void);

// 0x0x8079bc7c (main.dol_phase3)
void ItemHolder_init(void);

// 0x0x8079bd38 (main.dol_phase3)
void ItemHolder_update(void);

// 0x0x8079c194 (main.dol_phase3)
void ItemHolder_checkPlayerCollision(void);

// 0x0x8079c338 (main.dol_phase3)
void ItemHolder_initItemDirect(void);

// 0x0x8079c614 (main.dol_phase3)
void ItemHolder_spawnDirect(void);

// 0x0x8079c780 (main.dol_phase3)
void ItemHolder_spawnTc(void);

// 0x0x807a070c (main.dol_phase3)
void ItemObj_init(void);

// 0x0x807a0a38 (main.dol_phase3)
void ItemObj_spawn(void);

// 0x0x807a14d4 (main.dol_phase3)
void ItemObj_update(void);

// 0x0x807a2868 (main.dol_phase3)
void ItemObj_loadTeamsModel(void);

// 0x0x807a39bc (main.dol_phase3)
void ItemObj_checkPlayerCollision(void);

// 0x0x807a66ac (main.dol_phase3)
void ItemObjBomb_makeArray(void);

// 0x0x807a762c (main.dol_phase3)
void ItemObjBomb_loadModel(void);

// 0x0x807a9d90 (main.dol_phase3)
void ItemObjFib_makeArray(void);

// 0x0x807aa69c (main.dol_phase3)
void ItemHolderPlayer_useBlooper(void);

// 0x0x807ac4d8 (main.dol_phase3)
void ItemObjRed_makeArray(void);

// 0x0x807adec8 (main.dol_phase3)
void ItemObjBlue_makeArray(void);

// 0x0x807ae4f0 (main.dol_phase3)
void ItemObjBlue_loadModel(void);

// 0x0x807b6a98 (main.dol_phase3)
void ItemObjBlue_tryLockPlayer(void);

// 0x0x807ba064 (main.dol_phase3)
void ItemHolderPlayer_useLightning(void);

// 0x0x807bc864 (main.dol_phase3)
void ItemRoulette_update(void);

// 0x0x807bcc64 (main.dol_phase3)
void ItemSlotTable_createInstance(void);

// 0x0x807bd208 (main.dol_phase3)
void ItemSlotData_scaleTableForPlayerCount(void);

// 0x0x807bd868 (main.dol_phase3)
void ItemSlotData_checkSpawnTimer(void);

// 0x0x807bd914 (main.dol_phase3)
void ItemSlotData_decideItem(void);

// 0x0x807bded4 (main.dol_phase3)
void ItemSlotData_updateTimers(void);

#ifdef __cplusplus
}
#endif
