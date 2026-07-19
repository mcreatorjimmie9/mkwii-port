/* Function at 0x808A0AE8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_808A0AE8(int r3)
{
    r3 = *(0x18 + r3); // lwz @ 0x808A0AE8
    /* beqlr  */ // 0x808A0AF0
    r12 = *(0 + r3); // lwz @ 0x808A0AF4
    r12 = *(0x40 + r12); // lwz @ 0x808A0AF8
    /* mtctr r12 */ // 0x808A0AFC
    /* bctr  */ // 0x808A0B00
}