/*
 * Address: 0x8058681C
 * REL Offset: 0x00073F80
 * Function: PlayerSub10_doRespawn
 * Size: 28 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub10_doRespawn(/* unknown params */)
{

    /* 0x73F80 */ f1 = *(f32*)(r3 + 0x14);
    /* 0x73F84 */ f2 = *(f32*)(r3 + 0x24);
    /* 0x73F88 */ r3 = r30;
    /* 0x73F8C */ *(f32*)(r1 + 0x20) = f0;
    /* 0x73F90 */ *(f32*)(r1 + 0x24) = f1;
    /* 0x73F94 */ *(f32*)(r1 + 0x28) = f2;
    /* 0x73F98 */ sub_0x00009B40();
    /* 0x73F9C */ r5 = *(r3);
    /* 0x73FA0 */ r29 = 0x0 /* 0 */;
    /* 0x73FA4 */ r4 = *(u32*)(r3 + 0x4);
    /* 0x73FA8 */ r0 = *(u32*)(r3 + 0x8);
    /* 0x73FAC */ *(u32*)(r1 + 0x14) = r5;
    /* 0x73FB0 */ *(u32*)(r1 + 0x18) = r4;
    /* 0x73FB4 */ *(u32*)(r1 + 0x1C) = r0;
    /* 0x73FB8 */ goto loc_0x0094;
    /* 0x73FBC */ r3 = r30;
    /* 0x73FC0 */ // clrlwi r4, r29, 0x18
    /* 0x73FC4 */ sub_0x00009BB4();
    /* 0x73FC8 */ // clrlwi. r0, r29, 0x18
    /* 0x73FCC */ r5 = *(r3);
    /* 0x73FD0 */ r4 = *(u32*)(r3 + 0x4);
    /* 0x73FD4 */ r0 = *(u32*)(r3 + 0x8);
    /* 0x73FD8 */ *(u32*)(r1 + 0x8) = r5;
    /* 0x73FDC */ *(u32*)(r1 + 0xC) = r4;
    /* 0x73FE0 */ *(u32*)(r1 + 0x10) = r0;
    /* 0x73FE4 */ if (0x78 == 0) goto loc_0x0078;
    /* 0x73FE8 */ f1 = *(f32*)(r1 + 0xC);
    /* 0x73FEC */ f0 = *(f32*)(r1 + 0x18);
}
