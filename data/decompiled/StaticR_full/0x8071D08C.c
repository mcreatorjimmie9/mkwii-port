/* Function at 0x8071D08C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D08C(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D08C
    /* bnelr  */ // 0x8071D094
    r3 = *(0 + r3); // lwz @ 0x8071D098
    /* slwi r0, r4, 2 */ // 0x8071D09C
    /* lwzx r3, r3, r0 */ // 0x8071D0A0
    r12 = *(0 + r3); // lwz @ 0x8071D0A4
    r12 = *(0x18 + r12); // lwz @ 0x8071D0A8
    /* mtctr r12 */ // 0x8071D0AC
    /* bctr  */ // 0x8071D0B0
}