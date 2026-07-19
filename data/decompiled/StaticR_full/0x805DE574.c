/* Function at 0x805DE574, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805DE574(int r3, int r4)
{
    r3 = *(8 + r3); // lwz @ 0x805DE574
    /* li r0, 1 */ // 0x805DE578
    /* lfs f0, 0(r4) */ // 0x805DE57C
    *(0x28 + r3) = r0; // stb @ 0x805DE580
    /* lfs f1, 4(r4) */ // 0x805DE584
    /* stfs f0, 0x2c(r3) */ // 0x805DE588
    /* lfs f0, 8(r4) */ // 0x805DE58C
    /* stfs f1, 0x30(r3) */ // 0x805DE590
    /* stfs f0, 0x34(r3) */ // 0x805DE594
    return;
}