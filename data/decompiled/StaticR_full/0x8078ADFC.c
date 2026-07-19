/* Function at 0x8078ADFC, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8078ADFC(int r3, int r4)
{
    r3 = *(0x18 + r3); // lwz @ 0x8078ADFC
    /* beqlr  */ // 0x8078AE04
    /* li r4, 0 */ // 0x8078AE08
    /* b 0x805e3430 */ // 0x8078AE0C
}