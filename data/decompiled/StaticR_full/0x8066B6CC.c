/* Function at 0x8066B6CC, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_8066B6CC(int r3, int r4, int r6)
{
    /* li r6, 1 */ // 0x8066B6CC
    r0 = *(4 + r3); // lwz @ 0x8066B6D0
    r6 = r6 << r4; // slw
    /* and. r0, r6, r0 */ // 0x8066B6D8
    /* beqlr  */ // 0x8066B6DC
    /* mulli r0, r4, 0x5c */ // 0x8066B6E0
    r3 = r3 + r0; // 0x8066B6E4
    *(0xa4 + r3) = r5; // stb @ 0x8066B6E8
    r12 = *(0x5c + r3); // lwzu @ 0x8066B6EC
    r12 = *(0x14 + r12); // lwz @ 0x8066B6F0
    /* mtctr r12 */ // 0x8066B6F4
    /* bctr  */ // 0x8066B6F8
}