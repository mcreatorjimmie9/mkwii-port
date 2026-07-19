/* Function at 0x80699558, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80699558(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069956C
    r30 = r3;
    r0 = *(0x98 + r3); // lwz @ 0x80699574
    if (==) goto 0x0x8069959c;
    r3 = r0;
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x80699588
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x80699590
    /* mtctr r12 */ // 0x80699594
    /* bctrl  */ // 0x80699598
    r12 = *(0 + r30); // lwz @ 0x8069959C
    r3 = r30;
    r4 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x806995A8
    /* mtctr r12 */ // 0x806995AC
    /* bctrl  */ // 0x806995B0
    r3 = r30;
    r5 = r31;
    /* li r4, 0x15 */ // 0x806995BC
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x806995C4
    r31 = *(0xc + r1); // lwz @ 0x806995C8
    r30 = *(8 + r1); // lwz @ 0x806995CC
    return;
}