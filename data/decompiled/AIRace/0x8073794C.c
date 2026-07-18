/*
 * Address: 0x8073794C
 * REL Offset: 0x002250B0
 * Function: update__Q25Enemy14AITrickHandlerFv
 * Size: 62 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void update__Q25Enemy14AITrickHandlerFv(void)
{

    /* 0x2250B0 */ // srwi r0, r0, 3
    /* 0x2250B4 */ // mtctr r0
    /* 0x2250B8 */ // cmplw r5, r3
    /* 0x2250BC */ if (0x20 >= 0) goto loc_0x0020;
    /* 0x2250C0 */ *(r5) = r4;
    /* 0x2250C4 */ *(u32*)(r5 + 0x4) = r4;
    /* 0x2250C8 */ r5 = r5 + 0x8;
    /* 0x2250CC */ // bdnz 0x10
    /* 0x2250D0 */ r5 = r30 + 0x150;
    /* 0x2250D4 */ r3 = r30 + 0x168;
    /* 0x2250D8 */ // cmplw r5, r3
    /* 0x2250DC */ r0 = 0x0 /* 0 */;
    /* 0x2250E0 */ *(u32*)(r30 + 0x148) = r0;
    /* 0x2250E4 */ *(u32*)(r30 + 0x14C) = r0;
    /* 0x2250E8 */ if (0x160 >= 0) goto loc_0x0160;
    /* 0x2250EC */ r6 = r30 + 0x150;
    /* 0x2250F0 */ r4 = r30 + 0x128;
    /* 0x2250F4 */ r7 = r3 - r6;
    /* 0x2250F8 */ r8 = r7 + 0x7;
    /* 0x2250FC */ r0 = (s32)r8 >> 3;
    /* 0x225100 */ // addze r9, r0
    /* 0x225104 */ r10 = r9 + 0x1;
    /* 0x225108 */ // cmpwi r10, 8
    /* 0x22510C */ if (0x130 <= 0) goto loc_0x0130;
    /* 0x225110 */ // cmplw r6, r3
    /* 0x225114 */ r3 = 0x0 /* 0 */;
    /* 0x225118 */ r6 = 0x0 /* 0 */;
    /* 0x22511C */ if (0x94 > 0) goto loc_0x0094;
    /* 0x225120 */ // rlwinm. r0, r7, 0, 0, 0
    /* 0x225124 */ r7 = 0x1 /* 1 */;
    /* 0x225128 */ if (0x88 != 0) goto loc_0x0088;
    /* 0x22512C */ // rlwinm. r0, r8, 0, 0, 0
    /* 0x225130 */ if (0x88 == 0) goto loc_0x0088;
    /* 0x225134 */ r7 = 0x0 /* 0 */;
    /* 0x225138 */ // cmpwi r7, 0
    /* 0x22513C */ if (0x94 == 0) goto loc_0x0094;
    /* 0x225140 */ r6 = 0x1 /* 1 */;
    /* 0x225144 */ // cmpwi r6, 0
    /* 0x225148 */ if (0xc4 == 0) goto loc_0x00C4;
    /* 0x22514C */ // rlwinm. r7, r9, 0, 0, 0
    /* 0x225150 */ r6 = 0x1 /* 1 */;
    /* 0x225154 */ if (0xb8 != 0) goto loc_0x00B8;
    /* 0x225158 */ r0 = ROTL(r10, 0) & MASK(0, 0);
    /* 0x22515C */ // cmpw r7, r0
    /* 0x225160 */ if (0xb8 == 0) goto loc_0x00B8;
    /* 0x225164 */ r6 = 0x0 /* 0 */;
    /* 0x225168 */ // cmpwi r6, 0
    /* 0x22516C */ if (0xc4 == 0) goto loc_0x00C4;
    /* 0x225170 */ r3 = 0x1 /* 1 */;
    /* 0x225174 */ // cmpwi r3, 0
    /* 0x225178 */ if (0x130 == 0) goto loc_0x0130;
    /* 0x22517C */ r0 = r4 + 0x3F;
    /* 0x225180 */ r3 = 0x0 /* 0 */;
    /* 0x225184 */ r0 = r0 - r5;
    /* 0x225188 */ // srwi r0, r0, 6
    /* 0x22518C */ // mtctr r0
    /* 0x225190 */ // cmplw r5, r4
    /* 0x225194 */ if (0x130 >= 0) goto loc_0x0130;
    /* 0x225198 */ *(r5) = r3;
    /* 0x22519C */ *(u32*)(r5 + 0x4) = r3;
    /* 0x2251A0 */ *(u32*)(r5 + 0x8) = r3;
    /* 0x2251A4 */ *(u32*)(r5 + 0xC) = r3;
}
