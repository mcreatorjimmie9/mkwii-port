/*
 * Address: 0x80570B0C
 * REL Offset: 0x0005E270
 * Function: init__Q24Kart11KartCollideFv
 * Size: 21 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ init__Q24Kart11KartCollideFv(void)
{

    /* 0x5E270 */ f1 = f1 * f31;
    /* 0x5E274 */ r5 = r1 + 0x2C;
    /* 0x5E278 */ f0 = f0 * f31;
    /* 0x5E27C */ *(f32*)(r1 + 0x2C) = f2;
    /* 0x5E280 */ *(f32*)(r1 + 0x30) = f1;
    /* 0x5E284 */ *(f32*)(r1 + 0x34) = f0;
    /* 0x5E288 */ sub_0xFFFFFFFFFFFE50E8();
    /* 0x5E28C */ r3 = r21 + 0xC;
    /* 0x5E290 */ r5 = r1 + 0x2C;
    /* 0x5E294 */ r4 = r3;
    /* 0x5E298 */ sub_0xFFFFFFFFFFFE50E8();
    /* 0x5E29C */ r27 = 0x1 /* 1 */;
    /* 0x5E2A0 */ r23 = r23 + 0x1;
    /* 0x5E2A4 */ // clrlwi r0, r23, 0x10
    /* 0x5E2A8 */ // cmplw r0, r25
    /* 0x5E2AC */ if (0xfffffffffffffea4 < 0) goto loc_0xFFFFFFFFFFFFFEA4;
    /* 0x5E2B0 */ r24 = r24 + 0x1;
    /* 0x5E2B4 */ // clrlwi r0, r24, 0x10
    /* 0x5E2B8 */ // cmplw r0, r26
    /* 0x5E2BC */ if (0xfffffffffffffe80 < 0) goto loc_0xFFFFFFFFFFFFFE80;
    /* 0x5E2C0 */ r3 = r27;
}
