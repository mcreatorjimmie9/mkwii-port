/* Function at 0x808BE7F8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808BE7F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808BE804
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808BE80C
    if (!=) goto 0x0x808be828;
    r4 = *(0x3ec + r3); // lwz @ 0x808BE818
    r3 = r3 + 0x6f8; // 0x808BE81C
    FUN_806CAD54(r3); // bl 0x806CAD54
    /* b 0x808be844 */ // 0x808BE824
    r12 = *(0 + r3); // lwz @ 0x808BE828
    r12 = *(0x10 + r12); // lwz @ 0x808BE82C
    /* mtctr r12 */ // 0x808BE830
    /* bctrl  */ // 0x808BE834
    r4 = r3;
    r3 = r31 + 0x6f8; // 0x808BE83C
    FUN_806CAD54(r4, r3); // bl 0x806CAD54
    r0 = *(0x14 + r1); // lwz @ 0x808BE844
    r31 = *(0xc + r1); // lwz @ 0x808BE848
    return;
}