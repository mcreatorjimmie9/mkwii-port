/* Function at 0x807EDF84, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EDF84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EDF90
    r31 = r3;
    r4 = *(0xa0 + r3); // lwz @ 0x807EDF98
    r4 = *(0 + r4); // lwz @ 0x807EDF9C
    r0 = *(0x2a + r4); // lha @ 0x807EDFA0
    *(0xb0 + r3) = r0; // stw @ 0x807EDFA4
    r12 = *(0 + r3); // lwz @ 0x807EDFA8
    r12 = *(0x54 + r12); // lwz @ 0x807EDFAC
    /* mtctr r12 */ // 0x807EDFB0
    /* bctrl  */ // 0x807EDFB4
    r3 = r31;
    /* li r4, 0 */ // 0x807EDFBC
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x807EDFC4
    r31 = *(0xc + r1); // lwz @ 0x807EDFC8
    return;
}