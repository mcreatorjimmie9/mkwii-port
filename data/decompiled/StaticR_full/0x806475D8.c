/* Function at 0x806475D8, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_806475D8(int r3)
{
    r0 = *(0x20 + r3); // lbz @ 0x806475D8
    /* beqlr  */ // 0x806475E0
    r3 = *(0x18 + r3); // lwz @ 0x806475E4
    /* b 0x808e4060 */ // 0x806475E8
}