/* Function at 0x8061F000, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061F000(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061F000
    r0 = *(0x24 + r3); // lwz @ 0x8061F004
    /* beqlr  */ // 0x8061F00C
    r3 = *(4 + r3); // lwz @ 0x8061F010
    /* b 0x80621f70 */ // 0x8061F014
}