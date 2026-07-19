/* Function at 0x8061E754, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E754(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061E754
    r3 = *(0x24 + r3); // lwz @ 0x8061E758
    /* beqlr  */ // 0x8061E760
    r0 = *(0x334 + r3); // lhz @ 0x8061E764
    r0 = r0 rlwinm 0; // rlwinm
    *(0x334 + r3) = r0; // sth @ 0x8061E76C
    return;
}