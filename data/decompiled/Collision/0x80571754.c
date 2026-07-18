/*
 * Address: 0x80571754
 * REL Offset: 0x0005EEB8
 * Function: checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo
 * Size: 137 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo(/* unknown params */)
{

    /* 0x5EEB8 */ r24 = ROTL(r6, 0x11) & MASK(0x1f, 0x1f);
    /* 0x5EEBC */ r0 = *(u32*)(r5 + 0x8);
    /* 0x5EEC0 */ r23 = ROTL(r7, 0x11) & MASK(0x1f, 0x1f);
    /* 0x5EEC4 */ // srwi r26, r3, 0x1f
    /* 0x5EEC8 */ r22 = ROTL(r6, 0x10) & MASK(0x1f, 0x1f);
    /* 0x5EECC */ // srwi r25, r0, 0x1f
    /* 0x5EED0 */ r21 = ROTL(r7, 0x10) & MASK(0x1f, 0x1f);
    /* 0x5EED4 */ r20 = ROTL(r6, 5) & MASK(0x1f, 0x1f);
    /* 0x5EED8 */ r19 = ROTL(r7, 5) & MASK(0x1f, 0x1f);
    /* 0x5EEDC */ if (0x88 == 0) goto loc_0x0088;
    /* 0x5EEE0 */ r3 = r31;
    /* 0x5EEE4 */ sub_0x0001F348();
    /* 0x5EEE8 */ r18 = r3;
    /* 0x5EEEC */ r3 = r30 + 0x4;
    /* 0x5EEF0 */ sub_0x0001F348();
    /* 0x5EEF4 */ // clrlwi r0, r3, 0x18
    /* 0x5EEF8 */ r0 = r0 * 0xf0;
    /* 0x5EEFC */ r3 = r29 + r0;
    /* 0x5EF00 */ r4 = *(u32*)(r3 + 0xF4);
    /* 0x5EF04 */ // cmpwi r4, 2
    /* 0x5EF08 */ if (0x5c != 0) goto loc_0x005C;
    /* 0x5EF0C */ r27 = 0x0 /* 0 */;
    /* 0x5EF10 */ goto loc_0x0088;
    /* 0x5EF14 */ // clrlwi r0, r18, 0x18
    /* 0x5EF18 */ r0 = r0 * 0xf0;
    /* 0x5EF1C */ r3 = r29 + r0;
    /* 0x5EF20 */ r0 = *(u32*)(r3 + 0xF4);
    /* 0x5EF24 */ // cmpwi r0, 2
    /* 0x5EF28 */ if (0x7c != 0) goto loc_0x007C;
    /* 0x5EF2C */ r27 = 0x0 /* 0 */;
    /* 0x5EF30 */ goto loc_0x0088;
    /* 0x5EF34 */ r0 = r0 - r4;
    /* 0x5EF38 */ r0 = __builtin_clz(r0);
    /* 0x5EF3C */ // srwi r27, r0, 5
    /* 0x5EF40 */ r3 = 0x00000;
    /* 0x5EF44 */ r29 = 0x0 /* 0 */;
    /* 0x5EF48 */ r3 = *(r3);
    /* 0x5EF4C */ r3 = *(u32*)(r3 + 0xB70);
    /* 0x5EF50 */ r3 = r3 + 0x-3;
    /* 0x5EF54 */ // cmplwi r3, 7
    /* 0x5EF58 */ if (0xb8 > 0) goto loc_0x00B8;
    /* 0x5EF5C */ r0 = 0x1 /* 1 */;
    /* 0x5EF60 */ r0 = r0 << r3;
    /* 0x5EF64 */ r0 = r0 & 0xc1;
    /* 0x5EF68 */ if (0xb8 == 0) goto loc_0x00B8;
    /* 0x5EF6C */ r29 = 0x1 /* 1 */;
    /* 0x5EF70 */ // cmpwi r27, 0
    /* 0x5EF74 */ r18 = 0x0 /* 0 */;
    /* 0x5EF78 */ if (0x9f8 != 0) goto loc_0x09F8;
    /* 0x5EF7C */ // cmpwi r20, 0
    /* 0x5EF80 */ if (0xd4 == 0) goto loc_0x00D4;
    /* 0x5EF84 */ // cmpwi r19, 0
    /* 0x5EF88 */ if (0xe4 == 0) goto loc_0x00E4;
    /* 0x5EF8C */ // cmpwi r20, 0
    /* 0x5EF90 */ if (0x284 != 0) goto loc_0x0284;
    /* 0x5EF94 */ // cmpwi r19, 0
    /* 0x5EF98 */ if (0x284 == 0) goto loc_0x0284;
    /* 0x5EF9C */ // cmpwi r19, 0
    /* 0x5EFA0 */ r0 = 0x0 /* 0 */;
    /* 0x5EFA4 */ r3 = 0x0 /* 0 */;
    /* 0x5EFA8 */ if (0x10c == 0) goto loc_0x010C;
    /* 0x5EFAC */ // cmpwi r20, 0
    /* 0x5EFB0 */ if (0x10c != 0) goto loc_0x010C;
    /* 0x5EFB4 */ // cmpwi r26, 0
    /* 0x5EFB8 */ if (0x10c != 0) goto loc_0x010C;
    /* 0x5EFBC */ r0 = 0x1 /* 1 */;
    /* 0x5EFC0 */ goto loc_0x0128;
    /* 0x5EFC4 */ // cmpwi r20, 0
    /* 0x5EFC8 */ if (0x128 == 0) goto loc_0x0128;
    /* 0x5EFCC */ // cmpwi r19, 0
    /* 0x5EFD0 */ if (0x128 != 0) goto loc_0x0128;
    /* 0x5EFD4 */ // cmpwi r25, 0
    /* 0x5EFD8 */ if (0x128 != 0) goto loc_0x0128;
    /* 0x5EFDC */ r3 = 0x1 /* 1 */;
    /* 0x5EFE0 */ // cmpwi r0, 0
    /* 0x5EFE4 */ if (0x1f0 == 0) goto loc_0x01F0;
    /* 0x5EFE8 */ r6 = *(u32*)(r1 + 0x80);
    /* 0x5EFEC */ r3 = r30 + 0x4;
    /* 0x5EFF0 */ *(u32*)(r1 + 0x44) = r6;
    /* 0x5EFF4 */ r4 = r1 + 0x44;
    /* 0x5EFF8 */ r5 = *(u32*)(r1 + 0x84);
    /* 0x5EFFC */ r0 = *(u32*)(r1 + 0x88);
    /* 0x5F000 */ *(u32*)(r1 + 0x48) = r5;
    /* 0x5F004 */ f0 = *(f32*)(r1 + 0x44);
    /* 0x5F008 */ f1 = *(f32*)(r1 + 0x48);
    /* 0x5F00C */ f2 = -f0;
    /* 0x5F010 */ *(u32*)(r1 + 0x4C) = r0;
    /* 0x5F014 */ f1 = -f1;
    /* 0x5F018 */ f0 = *(f32*)(r1 + 0x4C);
    /* 0x5F01C */ *(f32*)(r1 + 0x44) = f2;
    /* 0x5F020 */ f0 = -f0;
    /* 0x5F024 */ *(f32*)(r1 + 0x48) = f1;
    /* 0x5F028 */ *(f32*)(r1 + 0x4C) = f0;
    /* 0x5F02C */ sub_0x0001F624();
    /* 0x5F030 */ r3 = r31;
    /* 0x5F034 */ sub_0x0001F348();
    /* 0x5F038 */ r19 = r3;
    /* 0x5F03C */ r3 = r30 + 0x4;
    /* 0x5F040 */ sub_0x0001F60C();
    /* 0x5F044 */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5F048 */ // clrlwi r8, r19, 0x18
    /* 0x5F04C */ r4 = 0x6 /* 6 */;
    /* 0x5F050 */ r5 = 0x1 /* 1 */;
    /* 0x5F054 */ r12 = *(u32*)(r12 + 0xC);
    /* 0x5F058 */ r6 = 0x1 /* 1 */;
    /* 0x5F05C */ r7 = 0x0 /* 0 */;
    /* 0x5F060 */ r9 = 0x0 /* 0 */;
    /* 0x5F064 */ // mtctr r12
    /* 0x5F068 */ // bctrl 
    /* 0x5F06C */ // cmpwi r3, 0
    /* 0x5F070 */ if (0x9fc == 0) goto loc_0x09FC;
    /* 0x5F074 */ r3 = r30 + 0x4;
    /* 0x5F078 */ sub_0x0001F080();
    /* 0x5F07C */ r12 = *(r3);
    /* 0x5F080 */ r4 = 0x110 /* 272 */;
    /* 0x5F084 */ f1 = *(f32*)(r28 + 0x0);
    /* 0x5F088 */ r12 = *(u32*)(r12 + 0xE4);
    /* 0x5F08C */ // mtctr r12
    /* 0x5F090 */ // bctrl 
    /* 0x5F094 */ r3 = r30 + 0x4;
    /* 0x5F098 */ sub_0x000201CC();
    /* 0x5F09C */ r3 = r31;
    /* 0x5F0A0 */ sub_0x000201A8();
    /* 0x5F0A4 */ goto loc_0x09FC;
    /* 0x5F0A8 */ // cmpwi r3, 0
    /* 0x5F0AC */ if (0x27c == 0) goto loc_0x027C;
    /* 0x5F0B0 */ r3 = r31;
    /* 0x5F0B4 */ r4 = r1 + 0x80;
    /* 0x5F0B8 */ sub_0x0001F624();
    /* 0x5F0BC */ r3 = r30 + 0x4;
    /* 0x5F0C0 */ sub_0x0001F348();
    /* 0x5F0C4 */ r19 = r3;
    /* 0x5F0C8 */ r3 = r31;
    /* 0x5F0CC */ sub_0x0001F60C();
    /* 0x5F0D0 */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5F0D4 */ // clrlwi r8, r19, 0x18
    /* 0x5F0D8 */ r4 = 0x6 /* 6 */;
}
