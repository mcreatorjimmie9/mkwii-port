/* Function at 0x8061E720, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E720(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8061E720
    r4 = *(0 + r4); // lwz @ 0x8061E724
    r0 = *(0xb68 + r4); // lwz @ 0x8061E728
    /* bnelr  */ // 0x8061E730
    r3 = *(0 + r3); // lwz @ 0x8061E734
    r3 = *(0x24 + r3); // lwz @ 0x8061E738
    /* beqlr  */ // 0x8061E740
    r0 = *(0x334 + r3); // lhz @ 0x8061E744
    r0 = r0 | 0x40; // 0x8061E748
    *(0x334 + r3) = r0; // sth @ 0x8061E74C
    return;
}