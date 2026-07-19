/* Function at 0x808DCF34, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808DCF34(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x808DCF40
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808DCF48
    r12 = *(0x38 + r12); // lwz @ 0x808DCF4C
    /* mtctr r12 */ // 0x808DCF50
    /* bctrl  */ // 0x808DCF54
    *(0x10 + r1) = r3; // stw @ 0x808DCF58
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x808DCF60
    r12 = *(0x38 + r12); // lwz @ 0x808DCF64
    /* mtctr r12 */ // 0x808DCF68
    /* bctrl  */ // 0x808DCF6C
    /* lis r5, 0 */ // 0x808DCF70
    r6 = *(0 + r5); // lwzu @ 0x808DCF74
    *(0x14 + r1) = r3; // stw @ 0x808DCF78
    r3 = r31;
    r0 = *(4 + r5); // lwz @ 0x808DCF80
    *(8 + r1) = r6; // stw @ 0x808DCF88
    /* li r6, 2 */ // 0x808DCF90
    /* li r7, 0 */ // 0x808DCF94
    *(0xc + r1) = r0; // stw @ 0x808DCF98
    FUN_808A1444(r5, r6, r7); // bl 0x808A1444
    r3 = *(8 + r31); // lwz @ 0x808DCFA0
    FUN_805EEF04(r6, r7); // bl 0x805EEF04
    r0 = *(0x24 + r1); // lwz @ 0x808DCFA8
    r31 = *(0x1c + r1); // lwz @ 0x808DCFAC
    return;
}