/*
 * Address: 0x80737830
 * REL Offset: 0x00224F94
 * Function: shouldTrick__Q25Enemy14AITrickHandlerFv
 * Size: 44 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void shouldTrick__Q25Enemy14AITrickHandlerFv(void)
{

    /* 0x224F94 */ *(u32*)(r30 + 0xDC) = r7;
    /* 0x224F98 */ r3 = *(u32*)(r3 + 0x8);
    /* 0x224F9C */ *(u32*)(r30 + 0xE4) = r3;
    /* 0x224FA0 */ *(u32*)(r30 + 0xE8) = r0;
    /* 0x224FA4 */ *(u32*)(r30 + 0xEC) = r0;
    /* 0x224FA8 */ if (0x13c >= 0) goto loc_0x013C;
    /* 0x224FAC */ r3 = r30 + 0xF0;
    /* 0x224FB0 */ r4 = r30 + 0x108;
    /* 0x224FB4 */ r7 = r6 - r3;
    /* 0x224FB8 */ r8 = r7 + 0x7;
    /* 0x224FBC */ r0 = (s32)r8 >> 3;
    /* 0x224FC0 */ // addze r9, r0
    /* 0x224FC4 */ r10 = r9 + 0x1;
    /* 0x224FC8 */ // cmpwi r10, 8
    /* 0x224FCC */ if (0x10c <= 0) goto loc_0x010C;
    /* 0x224FD0 */ // cmplw r3, r6
    /* 0x224FD4 */ r3 = 0x0 /* 0 */;
    /* 0x224FD8 */ r6 = 0x0 /* 0 */;
    /* 0x224FDC */ if (0x70 > 0) goto loc_0x0070;
    /* 0x224FE0 */ // rlwinm. r0, r7, 0, 0, 0
    /* 0x224FE4 */ r7 = 0x1 /* 1 */;
    /* 0x224FE8 */ if (0x64 != 0) goto loc_0x0064;
    /* 0x224FEC */ // rlwinm. r0, r8, 0, 0, 0
    /* 0x224FF0 */ if (0x64 == 0) goto loc_0x0064;
    /* 0x224FF4 */ r7 = 0x0 /* 0 */;
    /* 0x224FF8 */ // cmpwi r7, 0
    /* 0x224FFC */ if (0x70 == 0) goto loc_0x0070;
    /* 0x225000 */ r6 = 0x1 /* 1 */;
    /* 0x225004 */ // cmpwi r6, 0
    /* 0x225008 */ if (0xa0 == 0) goto loc_0x00A0;
    /* 0x22500C */ // rlwinm. r7, r9, 0, 0, 0
    /* 0x225010 */ r6 = 0x1 /* 1 */;
    /* 0x225014 */ if (0x94 != 0) goto loc_0x0094;
    /* 0x225018 */ r0 = ROTL(r10, 0) & MASK(0, 0);
    /* 0x22501C */ // cmpw r7, r0
    /* 0x225020 */ if (0x94 == 0) goto loc_0x0094;
    /* 0x225024 */ r6 = 0x0 /* 0 */;
    /* 0x225028 */ // cmpwi r6, 0
    /* 0x22502C */ if (0xa0 == 0) goto loc_0x00A0;
    /* 0x225030 */ r3 = 0x1 /* 1 */;
    /* 0x225034 */ // cmpwi r3, 0
    /* 0x225038 */ if (0x10c == 0) goto loc_0x010C;
    /* 0x22503C */ r0 = r4 + 0x3F;
    /* 0x225040 */ r3 = 0x0 /* 0 */;
}
