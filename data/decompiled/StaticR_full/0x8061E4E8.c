/* Function at 0x8061E4E8, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E4E8(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061E4E8
    r3 = *(8 + r3); // lwz @ 0x8061E4EC
    r3 = *(0x90 + r3); // lwz @ 0x8061E4F0
    /* lfs f0, 0xa0(r3) */ // 0x8061E4F4
    /* stfs f0, 0(r4) */ // 0x8061E4F8
    /* lfs f0, 0xb0(r3) */ // 0x8061E4FC
    /* stfs f0, 4(r4) */ // 0x8061E500
    /* lfs f0, 0xc0(r3) */ // 0x8061E504
    /* stfs f0, 8(r4) */ // 0x8061E508
    return;
}