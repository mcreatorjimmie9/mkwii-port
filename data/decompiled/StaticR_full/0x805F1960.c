/* Function at 0x805F1960, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F1960(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805F1968
    *(0x14 + r1) = r0; // stw @ 0x805F196C
    r4 = r4 + 0; // 0x805F1970
    *(0xc + r1) = r31; // stw @ 0x805F1974
    r31 = r3;
    r3 = r4 + 0x77; // 0x805F197C
    FUN_8061F57C(r4, r3); // bl 0x8061F57C
    if (==) goto 0x0x805f19a8;
    r5 = *(0x20 + r31); // lwz @ 0x805F198C
    r4 = r3;
    r3 = *(0x20 + r5); // lwz @ 0x805F1994
    r12 = *(0 + r3); // lwz @ 0x805F1998
    r12 = *(8 + r12); // lwz @ 0x805F199C
    /* mtctr r12 */ // 0x805F19A0
    /* bctrl  */ // 0x805F19A4
    r0 = *(0x14 + r1); // lwz @ 0x805F19A8
    r31 = *(0xc + r1); // lwz @ 0x805F19AC
    return;
}