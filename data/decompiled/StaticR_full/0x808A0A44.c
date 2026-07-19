/* Function at 0x808A0A44, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_808A0A44(int r3, int r4, int r5, int r6)
{
    r6 = r3;
    r5 = r4;
    if (!=) goto 0x0x808a0a70;
    r3 = *(0x18 + r3); // lwz @ 0x808A0A54
    r4 = r6;
    r5 = *(0x88 + r6); // lhz @ 0x808A0A5C
    r12 = *(0 + r3); // lwz @ 0x808A0A60
    r12 = *(8 + r12); // lwz @ 0x808A0A64
    /* mtctr r12 */ // 0x808A0A68
    /* bctr  */ // 0x808A0A6C
    r3 = *(0x18 + r3); // lwz @ 0x808A0A70
    r4 = r6;
    r12 = *(0 + r3); // lwz @ 0x808A0A78
    r12 = *(8 + r12); // lwz @ 0x808A0A7C
    /* mtctr r12 */ // 0x808A0A80
    /* bctr  */ // 0x808A0A84
}