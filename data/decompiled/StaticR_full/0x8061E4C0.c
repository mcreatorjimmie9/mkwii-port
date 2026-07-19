/* Function at 0x8061E4C0, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E4C0(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061E4C0
    r3 = *(8 + r3); // lwz @ 0x8061E4C4
    r3 = *(0x90 + r3); // lwz @ 0x8061E4C8
    /* lfs f0, 0x9c(r3) */ // 0x8061E4CC
    /* stfs f0, 0(r4) */ // 0x8061E4D0
    /* lfs f0, 0xac(r3) */ // 0x8061E4D4
    /* stfs f0, 4(r4) */ // 0x8061E4D8
    /* lfs f0, 0xbc(r3) */ // 0x8061E4DC
    /* stfs f0, 8(r4) */ // 0x8061E4E0
    return;
}