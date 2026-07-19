/* Function at 0x80648AAC, size=108 bytes */
/* Stack frame: 0 bytes */

int FUN_80648AAC(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x80648AAC
    r0 = *(0 + r4); // lwz @ 0x80648AB0
    if (>=) goto 0x0x80648ac8;
    r0 = *(0x10 + r3); // lbz @ 0x80648ABC
    /* beqlr  */ // 0x80648AC4
    r0 = *(5 + r3); // lbz @ 0x80648AC8
    r6 = *(0xc + r3); // lwz @ 0x80648ACC
    /* slwi r0, r0, 2 */ // 0x80648AD0
    r4 = r6 + r0; // 0x80648AD4
    r5 = *(8 + r4); // lwz @ 0x80648AD8
    /* beqlr  */ // 0x80648AE0
    r0 = *(4 + r3); // lbz @ 0x80648AE4
    /* slwi r0, r0, 2 */ // 0x80648AE8
    r4 = r6 + r0; // 0x80648AEC
    r4 = *(8 + r4); // lwz @ 0x80648AF0
    /* beqlr  */ // 0x80648AF8
    r6 = *(0x1c + r6); // lwz @ 0x80648AFC
    /* lfs f1, 8(r3) */ // 0x80648B00
    r12 = *(0x14 + r6); // lwz @ 0x80648B04
    r3 = r6 + 0x14; // 0x80648B08
    r12 = *(0x1c + r12); // lwz @ 0x80648B0C
    /* mtctr r12 */ // 0x80648B10
    /* bctr  */ // 0x80648B14
}