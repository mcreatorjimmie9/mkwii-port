/* Function at 0x80647608, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80647608(int r3)
{
    r0 = *(0x20 + r3); // lbz @ 0x80647608
    /* beqlr  */ // 0x80647610
    r3 = *(0x18 + r3); // lwz @ 0x80647614
    /* b 0x808e4008 */ // 0x80647618
}