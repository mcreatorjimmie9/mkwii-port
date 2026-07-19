/* Function at 0x8061E510, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E510(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061E510
    r3 = *(8 + r3); // lwz @ 0x8061E514
    r3 = *(0x90 + r3); // lwz @ 0x8061E518
    /* lfs f0, 0xa4(r3) */ // 0x8061E51C
    /* stfs f0, 0(r4) */ // 0x8061E520
    /* lfs f0, 0xb4(r3) */ // 0x8061E524
    /* stfs f0, 4(r4) */ // 0x8061E528
    /* lfs f0, 0xc4(r3) */ // 0x8061E52C
    /* stfs f0, 8(r4) */ // 0x8061E530
    return;
}