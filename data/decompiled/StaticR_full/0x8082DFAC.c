/* Function at 0x8082DFAC, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8082DFAC(int r3, int r4)
{
    /* beqlr  */ // 0x8082DFB0
    r3 = *(0x180 + r3); // lwz @ 0x8082DFB4
    r12 = *(0 + r3); // lwz @ 0x8082DFB8
    r12 = *(0xe0 + r12); // lwz @ 0x8082DFBC
    /* mtctr r12 */ // 0x8082DFC0
    /* bctr  */ // 0x8082DFC4
}