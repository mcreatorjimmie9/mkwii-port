/* Function at 0x8071D0E4, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D0E4(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D0E4
    /* bnelr  */ // 0x8071D0EC
    r3 = *(8 + r3); // lwz @ 0x8071D0F0
    /* slwi r0, r4, 2 */ // 0x8071D0F4
    /* lwzx r3, r3, r0 */ // 0x8071D0F8
    r12 = *(0 + r3); // lwz @ 0x8071D0FC
    r12 = *(0x18 + r12); // lwz @ 0x8071D100
    /* mtctr r12 */ // 0x8071D104
    /* bctr  */ // 0x8071D108
}