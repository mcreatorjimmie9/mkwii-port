/* Function at 0x80647644, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80647644(int r3)
{
    r0 = *(0x20 + r3); // lbz @ 0x80647644
    /* beqlr  */ // 0x8064764C
    r3 = *(0x18 + r3); // lwz @ 0x80647650
    /* b 0x808e4124 */ // 0x80647654
}