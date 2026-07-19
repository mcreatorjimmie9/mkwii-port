/* Function at 0x808A0A88, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_808A0A88(int r3)
{
    r3 = *(0x18 + r3); // lwz @ 0x808A0A88
    /* beqlr  */ // 0x808A0A90
    r12 = *(0 + r3); // lwz @ 0x808A0A94
    r12 = *(0x30 + r12); // lwz @ 0x808A0A98
    /* mtctr r12 */ // 0x808A0A9C
    /* bctr  */ // 0x808A0AA0
}