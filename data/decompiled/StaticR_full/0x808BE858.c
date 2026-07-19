/* Function at 0x808BE858, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808BE858(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808BE864
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808BE86C
    if (!=) goto 0x0x808be898;
    r12 = *(0 + r3); // lwz @ 0x808BE878
    r12 = *(0x10 + r12); // lwz @ 0x808BE87C
    /* mtctr r12 */ // 0x808BE880
    /* bctrl  */ // 0x808BE884
    r4 = r3;
    r3 = r31 + 0x6f8; // 0x808BE88C
    FUN_806CAD54(r4, r3); // bl 0x806CAD54
    /* b 0x808be8a4 */ // 0x808BE894
    r4 = *(0x3ec + r3); // lwz @ 0x808BE898
    r3 = r3 + 0x6f8; // 0x808BE89C
    FUN_806CAD54(r3, r3); // bl 0x806CAD54
    r0 = *(0x14 + r1); // lwz @ 0x808BE8A4
    r31 = *(0xc + r1); // lwz @ 0x808BE8A8
    return;
}