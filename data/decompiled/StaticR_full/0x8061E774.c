/* Function at 0x8061E774, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E774(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061E774
    r3 = *(0x24 + r3); // lwz @ 0x8061E778
    /* beqlr  */ // 0x8061E780
    r0 = *(0x334 + r3); // lhz @ 0x8061E784
    r0 = r0 | 8; // 0x8061E788
    *(0x334 + r3) = r0; // sth @ 0x8061E78C
    return;
}