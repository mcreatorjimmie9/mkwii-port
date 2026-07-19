/* Function at 0x8071D008, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D008(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D008
    /* bnelr  */ // 0x8071D010
    r3 = *(0 + r3); // lwz @ 0x8071D014
    /* slwi r0, r4, 2 */ // 0x8071D018
    /* lwzx r3, r3, r0 */ // 0x8071D01C
    r12 = *(0 + r3); // lwz @ 0x8071D020
    r12 = *(0x10 + r12); // lwz @ 0x8071D024
    /* mtctr r12 */ // 0x8071D028
    /* bctr  */ // 0x8071D02C
}