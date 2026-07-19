/* Function at 0x808A0AC8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_808A0AC8(int r3)
{
    r3 = *(0x18 + r3); // lwz @ 0x808A0AC8
    /* beqlr  */ // 0x808A0AD0
    r12 = *(0 + r3); // lwz @ 0x808A0AD4
    r12 = *(0x3c + r12); // lwz @ 0x808A0AD8
    /* mtctr r12 */ // 0x808A0ADC
    /* bctr  */ // 0x808A0AE0
}