/* Function at 0x808A0AA8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_808A0AA8(int r3)
{
    r3 = *(0x18 + r3); // lwz @ 0x808A0AA8
    /* beqlr  */ // 0x808A0AB0
    r12 = *(0 + r3); // lwz @ 0x808A0AB4
    r12 = *(0x34 + r12); // lwz @ 0x808A0AB8
    /* mtctr r12 */ // 0x808A0ABC
    /* bctr  */ // 0x808A0AC0
}