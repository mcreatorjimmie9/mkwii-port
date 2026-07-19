/* Function at 0x80671BE8, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80671BE8(int r3, int r4)
{
    r4 = *(8 + r3); // lwz @ 0x80671BE8
    r0 = r4 + -3; // 0x80671BEC
    /* bgtlr  */ // 0x80671BF4
    r12 = *(0 + r3); // lwz @ 0x80671BF8
    r12 = *(0x58 + r12); // lwz @ 0x80671BFC
    /* mtctr r12 */ // 0x80671C00
    /* bctr  */ // 0x80671C04
}