/* Function at 0x8064762C, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8064762C(int r3)
{
    r0 = *(0x20 + r3); // lbz @ 0x8064762C
    /* beqlr  */ // 0x80647634
    r3 = *(0x14 + r3); // lwz @ 0x80647638
    /* b 0x808e19b4 */ // 0x8064763C
}