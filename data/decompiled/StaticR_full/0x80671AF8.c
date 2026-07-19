/* Function at 0x80671AF8, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80671AF8(int r3, int r4)
{
    r4 = *(8 + r3); // lwz @ 0x80671AF8
    r0 = r4 + -3; // 0x80671AFC
    /* bgtlr  */ // 0x80671B04
    r12 = *(0 + r3); // lwz @ 0x80671B08
    r12 = *(0x50 + r12); // lwz @ 0x80671B0C
    /* mtctr r12 */ // 0x80671B10
    /* bctr  */ // 0x80671B14
}