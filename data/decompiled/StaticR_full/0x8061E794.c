/* Function at 0x8061E794, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E794(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061E794
    r3 = *(0x24 + r3); // lwz @ 0x8061E798
    /* beqlr  */ // 0x8061E7A0
    r0 = *(0x334 + r3); // lhz @ 0x8061E7A4
    r0 = r0 | 0x18; // 0x8061E7A8
    *(0x334 + r3) = r0; // sth @ 0x8061E7AC
    return;
}