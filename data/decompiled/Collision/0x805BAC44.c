/*
 * Address: 0x805BAC44
 * REL Offset: 0x000A83A8
 * Function: createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff
 * Size: 47 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff(/* unknown params */)
{
    // Saved registers: r31, r30
    // Has prologue (saves LR)

    /* 0xA83A8 */ // save/restore LR
    /* 0xA83AC */ *(u32*)(r1 + 0x24) = r0;
    /* 0xA83B0 */ // stack frame setup/save/restore
    /* 0xA83B4 */ local_31 = r3;
    /* 0xA83B8 */ // stack frame setup/save/restore
    /* 0xA83BC */ r0 = *(u8*)(r3 + 0x26);
    /* 0xA83C0 */ // cmpwi r0, 0
    /* 0xA83C4 */ if (0x158 == 0) goto loc_0x0158;
    /* 0xA83C8 */ r0 = *(u32*)(r3 + 0x1C);
    /* 0xA83CC */ // cmpwi r0, 0
    /* 0xA83D0 */ if (0x1d4 == 0) goto loc_0x01D4;
    /* 0xA83D4 */ // cmpwi r4, 0
    /* 0xA83D8 */ if (0x48 != 0) goto loc_0x0048;
    /* 0xA83DC */ r4 = 0x00000;
    /* 0xA83E0 */ f1 = *(f32*)(r3 + 0x20);
    /* 0xA83E4 */ f0 = *(f32*)(r4 + 0x0);
    /* 0xA83E8 */ f0 = f1 + f0;
    /* 0xA83EC */ *(f32*)(r3 + 0x20) = f0;
    /* 0xA83F0 */ r0 = *(u8*)(r3 + 0x24);
    /* 0xA83F4 */ // cmpwi r0, 0
    /* 0xA83F8 */ if (0xe4 != 0) goto loc_0x00E4;
    /* 0xA83FC */ local_30 = *(u32*)(r3 + 0x1C);
    /* 0xA8400 */ r0 = *(local_30);
    /* 0xA8404 */ // cmpwi r0, 0
    /* 0xA8408 */ if (0x90 != 0) goto loc_0x0090;
    /* 0xA840C */ r3 = 0x00000;
    /* 0xA8410 */ r5 = 0x00000;
    /* 0xA8414 */ r6 = 0x00000;
    /* 0xA8418 */ r7 = 0x00000;
    /* 0xA841C */ r3 = r3 + 0x0;
    /* 0xA8420 */ r5 = r5 + 0x0;
    /* 0xA8424 */ r6 = r6 + 0x0;
    /* 0xA8428 */ r7 = r7 + 0x0;
    /* 0xA842C */ r4 = 0x28 /* 40 */;
    /* 0xA8430 */ // crclr cr1eq
    /* 0xA8434 */ sub_0xFFFFFFFFFFF9AFB0();
    /* 0xA8438 */ r4 = *(local_30);
    /* 0xA843C */ r0 = 0x43300000;
    /* 0xA8440 */ *(u32*)(r1 + 0x10) = r0;
    /* 0xA8444 */ r3 = 0x00000;
    /* 0xA8448 */ r0 = *(u16*)(r4 + 0x34);
    /* 0xA844C */ f2 = *(f64*)(r3 + 0x0);
    /* 0xA8450 */ // xoris r0, r0, 0x8000
    /* 0xA8454 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA8458 */ f0 = *(f32*)(local_31 + 0x20);
    /* 0xA845C */ f1 = *(f64*)(r1 + 0x10);
    /* 0xA8460 */ f1 = f1 - f2;
}
