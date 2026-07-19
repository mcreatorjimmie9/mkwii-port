/* Function at 0x806470D4, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_806470D4(int r3, int r4)
{
    /* lis r4, 0 */ // 0x806470D4
    r3 = *(0 + r4); // lwz @ 0x806470D8
    /* beqlr  */ // 0x806470E0
    /* li r0, 0 */ // 0x806470E4
    *(0 + r4) = r0; // stw @ 0x806470E8
    /* beqlr  */ // 0x806470EC
    r12 = *(0x10 + r3); // lwz @ 0x806470F0
    /* li r4, 1 */ // 0x806470F4
    r12 = *(8 + r12); // lwz @ 0x806470F8
    /* mtctr r12 */ // 0x806470FC
    /* bctr  */ // 0x80647100
}