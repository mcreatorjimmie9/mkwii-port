/*
 * Address: 0x80570BF4
 * REL Offset: 0x0005E358
 * Function: updateBbox__Q24Kart11KartCollideFv
 * Size: 22 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ updateBbox__Q24Kart11KartCollideFv(void)
{

    /* 0x5E358 */ r5 = *(r4);
    /* 0x5E35C */ r4 = r3 + 0x-7000;
    /* 0x5E360 */ r0 = *(r28);
    /* 0x5E364 */ r3 = *(u16*)(r5 + 0x4);
    /* 0x5E368 */ // and. r0, r0, r4
    /* 0x5E36C */ // clrlwi r30, r3, 0x1b
    /* 0x5E370 */ r29 = ROTL(r3, 0x1b) & MASK(0x1d, 0x1f);
    /* 0x5E374 */ if (0x2c == 0) goto loc_0x002C;
    /* 0x5E378 */ r3 = r28;
    /* 0x5E37C */ sub_0x00244B7C();
    /* 0x5E380 */ goto loc_0x0030;
    /* 0x5E384 */ r3 = 0x0 /* 0 */;
    /* 0x5E388 */ // cmpwi r3, 0
    /* 0x5E38C */ if (0x60 == 0) goto loc_0x0060;
    /* 0x5E390 */ *(u32*)(r31 + 0x74) = r30;
    /* 0x5E394 */ r3 = 0x00000;
    /* 0x5E398 */ *(u32*)(r31 + 0x78) = r29;
    /* 0x5E39C */ r3 = *(r3);
    /* 0x5E3A0 */ r0 = *(u16*)(r3 + 0x4);
    /* 0x5E3A4 */ // rlwinm. r0, r0, 0, 0x10, 0x10
    /* 0x5E3A8 */ if (0x60 == 0) goto loc_0x0060;
    /* 0x5E3AC */ r0 = *(r31);
}
