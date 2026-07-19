/* Function at 0x8071D034, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D034(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D034
    /* bnelr  */ // 0x8071D03C
    r3 = *(4 + r3); // lwz @ 0x8071D040
    /* slwi r0, r4, 2 */ // 0x8071D044
    /* lwzx r3, r3, r0 */ // 0x8071D048
    r12 = *(0 + r3); // lwz @ 0x8071D04C
    r12 = *(0x10 + r12); // lwz @ 0x8071D050
    /* mtctr r12 */ // 0x8071D054
    /* bctr  */ // 0x8071D058
}