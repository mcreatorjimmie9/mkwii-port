/* Function at 0x807DB774, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB774(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DB77C
    *(0xc + r1) = r31; // stw @ 0x807DB784
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB78C
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DB794
    if (==) goto 0x0x807db7b8;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x807DB7A4
    r12 = *(0x20 + r12); // lwz @ 0x807DB7A8
    /* mtctr r12 */ // 0x807DB7AC
    /* bctrl  */ // 0x807DB7B0
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB844(r5, r3, r4); // bl 0x807DB844
    r0 = *(0x14 + r1); // lwz @ 0x807DB7C4
    r31 = *(0xc + r1); // lwz @ 0x807DB7C8
    r30 = *(8 + r1); // lwz @ 0x807DB7CC
    return;
}