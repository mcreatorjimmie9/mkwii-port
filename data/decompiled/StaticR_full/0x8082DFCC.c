/* Function at 0x8082DFCC, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8082DFCC(int r3, int r4)
{
    /* beqlr  */ // 0x8082DFD0
    r3 = *(0x180 + r3); // lwz @ 0x8082DFD4
    r12 = *(0 + r3); // lwz @ 0x8082DFD8
    r12 = *(0xe8 + r12); // lwz @ 0x8082DFDC
    /* mtctr r12 */ // 0x8082DFE0
    /* bctr  */ // 0x8082DFE4
}