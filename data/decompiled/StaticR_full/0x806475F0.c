/* Function at 0x806475F0, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_806475F0(int r3)
{
    r0 = *(0x20 + r3); // lbz @ 0x806475F0
    /* beqlr  */ // 0x806475F8
    r3 = *(0x14 + r3); // lwz @ 0x806475FC
    /* b 0x808e1a78 */ // 0x80647600
}