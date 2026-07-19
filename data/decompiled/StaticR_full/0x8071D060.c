/* Function at 0x8071D060, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D060(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D060
    /* bnelr  */ // 0x8071D068
    r3 = *(8 + r3); // lwz @ 0x8071D06C
    /* slwi r0, r4, 2 */ // 0x8071D070
    /* lwzx r3, r3, r0 */ // 0x8071D074
    r12 = *(0 + r3); // lwz @ 0x8071D078
    r12 = *(0x10 + r12); // lwz @ 0x8071D07C
    /* mtctr r12 */ // 0x8071D080
    /* bctr  */ // 0x8071D084
}