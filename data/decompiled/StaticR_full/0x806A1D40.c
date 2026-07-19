/* Function at 0x806A1D40, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806A1D40(int r3, int r4, int r5)
{
    *(0x208 + r3) = r4; // stw @ 0x806A1D40
    r4 = r5;
    *(0x204 + r3) = r5; // stw @ 0x806A1D48
    r3 = *(0x214 + r3); // lwz @ 0x806A1D4C
    r12 = *(0 + r3); // lwz @ 0x806A1D50
    r12 = *(0x14 + r12); // lwz @ 0x806A1D54
    /* mtctr r12 */ // 0x806A1D58
    /* bctr  */ // 0x806A1D5C
}