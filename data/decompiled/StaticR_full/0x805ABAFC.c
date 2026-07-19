/* Function at 0x805ABAFC, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_805ABAFC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805ABAFC
    /* li r3, 0 */ // 0x805ABB00
    r4 = *(0 + r4); // lwz @ 0x805ABB04
    r4 = *(0x54 + r4); // lwz @ 0x805ABB08
    r4 = *(0xc + r4); // lwz @ 0x805ABB0C
    r0 = *(0x28 + r4); // lwz @ 0x805ABB10
    /* beqlr  */ // 0x805ABB18
    /* beqlr  */ // 0x805ABB20
    r3 = r4;
    return;
}