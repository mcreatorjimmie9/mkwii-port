/* Function at 0x808A8670, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808A8670(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A867C
    r31 = r3;
    /* b 0x808a86b0 */ // 0x808A8684
    r12 = *(0 + r31); // lwz @ 0x808A8688
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x808A8690
    /* mtctr r12 */ // 0x808A8694
    /* bctrl  */ // 0x808A8698
    r12 = *(0 + r31); // lwz @ 0x808A869C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x808A86A4
    /* mtctr r12 */ // 0x808A86A8
    /* bctrl  */ // 0x808A86AC
    r0 = *(0xb4 + r31); // lwz @ 0x808A86B0
    if (!=) goto 0x0x808a8688;
    /* li r0, 0 */ // 0x808A86BC
    *(0xb0 + r31) = r0; // stw @ 0x808A86C0
    r3 = r31;
    /* li r4, 0 */ // 0x808A86C8
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x808A86D0
    r31 = *(0xc + r1); // lwz @ 0x808A86D4
    return;
}