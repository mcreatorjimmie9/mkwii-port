/* Function at 0x8071D0B8, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D0B8(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D0B8
    /* bnelr  */ // 0x8071D0C0
    r3 = *(4 + r3); // lwz @ 0x8071D0C4
    /* slwi r0, r4, 2 */ // 0x8071D0C8
    /* lwzx r3, r3, r0 */ // 0x8071D0CC
    r12 = *(0 + r3); // lwz @ 0x8071D0D0
    r12 = *(0x18 + r12); // lwz @ 0x8071D0D4
    /* mtctr r12 */ // 0x8071D0D8
    /* bctr  */ // 0x8071D0DC
}