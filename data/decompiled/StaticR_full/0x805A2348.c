/* Function at 0x805A2348, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805A2348(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805A2350
    *(0x14 + r1) = r0; // stw @ 0x805A2354
    r3 = *(0 + r3); // lwz @ 0x805A2358
    if (==) goto 0x0x805a2388;
    if (==) goto 0x0x805a237c;
    r12 = *(0 + r3); // lwz @ 0x805A2368
    /* li r4, 1 */ // 0x805A236C
    r12 = *(8 + r12); // lwz @ 0x805A2370
    /* mtctr r12 */ // 0x805A2374
    /* bctrl  */ // 0x805A2378
    /* lis r3, 0 */ // 0x805A237C
    /* li r0, 0 */ // 0x805A2380
    *(0 + r3) = r0; // stw @ 0x805A2384
    r0 = *(0x14 + r1); // lwz @ 0x805A2388
    return;
}