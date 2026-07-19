/* Function at 0x8071D434, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D434(int r3, int r4)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D434
    /* bnelr  */ // 0x8071D43C
    r3 = *(0xc + r3); // lwz @ 0x8071D440
    /* slwi r0, r4, 2 */ // 0x8071D444
    /* lwzx r3, r3, r0 */ // 0x8071D448
    r12 = *(0 + r3); // lwz @ 0x8071D44C
    r12 = *(0x18 + r12); // lwz @ 0x8071D450
    /* mtctr r12 */ // 0x8071D454
    /* bctr  */ // 0x8071D458
}