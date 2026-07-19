/* Function at 0x805E853C, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805E853C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E8544
    r3 = *(0xc + r3); // lwz @ 0x805E8548
    if (==) goto 0x0x805e8574;
    /* lis r4, 0 */ // 0x805E8554
    r4 = r4 + 0; // 0x805E8558
    *(8 + r1) = r4; // stw @ 0x805E855C
    r12 = *(0 + r3); // lwz @ 0x805E8564
    r12 = *(8 + r12); // lwz @ 0x805E8568
    /* mtctr r12 */ // 0x805E856C
    /* bctrl  */ // 0x805E8570
    r0 = *(0x14 + r1); // lwz @ 0x805E8574
    /* lis r3, 0 */ // 0x805E8578
    /* lfs f1, 0(r3) */ // 0x805E857C
    return;
}