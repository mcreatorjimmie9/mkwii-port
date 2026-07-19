/* Function at 0x806995E0, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806995E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806995F4
    r30 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x806995FC
    if (==) goto 0x0x80699624;
    r3 = r0;
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x80699610
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x80699618
    /* mtctr r12 */ // 0x8069961C
    /* bctrl  */ // 0x80699620
    r12 = *(0 + r30); // lwz @ 0x80699624
    r3 = r30;
    r4 = r31;
    r12 = *(0x40 + r12); // lwz @ 0x80699630
    /* mtctr r12 */ // 0x80699634
    /* bctrl  */ // 0x80699638
    r3 = r30;
    r5 = r31;
    /* li r4, 0x14 */ // 0x80699644
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x8069964C
    r31 = *(0xc + r1); // lwz @ 0x80699650
    r30 = *(8 + r1); // lwz @ 0x80699654
    return;
}