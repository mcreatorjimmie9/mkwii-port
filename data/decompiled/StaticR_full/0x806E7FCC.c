/* Function at 0x806E7FCC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E7FCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E7FDC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E7FE4
    r30 = r3;
    if (==) goto 0x0x806e8018;
    r3 = r3 + 8; // 0x806E7FF0
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r30); // lwz @ 0x806E7FF8
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x806E8000
    r12 = *(0x18 + r12); // lwz @ 0x806E8004
    /* mtctr r12 */ // 0x806E8008
    /* bctrl  */ // 0x806E800C
}