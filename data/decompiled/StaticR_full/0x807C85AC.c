/* Function at 0x807C85AC, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C85AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807C85B4
    /* lfs f0, 0(r4) */ // 0x807C85BC
    *(0xc + r1) = r31; // stw @ 0x807C85C0
    /* lis r31, 0 */ // 0x807C85C4
    *(8 + r1) = r30; // stw @ 0x807C85C8
    r30 = r3;
    /* stfs f0, 0xc(r3) */ // 0x807C85D0
    /* stfs f0, 0x10(r3) */ // 0x807C85D4
    r3 = *(0 + r31); // lwz @ 0x807C85D8
    r3 = *(0x8c + r3); // lwz @ 0x807C85DC
    FUN_807C16F8(); // bl 0x807C16F8
    *(8 + r30) = r3; // stw @ 0x807C85E4
    r3 = *(4 + r30); // lwz @ 0x807C85E8
    r3 = *(0 + r3); // lwz @ 0x807C85EC
    r3 = *(0x10 + r3); // lwz @ 0x807C85F0
    r3 = *(0x144 + r3); // lwz @ 0x807C85F4
    r12 = *(0x34 + r3); // lwz @ 0x807C85F8
    r12 = *(0x3c + r12); // lwz @ 0x807C85FC
    /* mtctr r12 */ // 0x807C8600
    /* bctrl  */ // 0x807C8604
    *(0x14 + r30) = r3; // stw @ 0x807C8608
    /* li r4, 0 */ // 0x807C860C
    r3 = *(0 + r31); // lwz @ 0x807C8610
    FUN_807BFD88(r4); // bl 0x807BFD88
    r3 = *(0x10 + r3); // lwz @ 0x807C8618
    r3 = *(0x144 + r3); // lwz @ 0x807C861C
    r12 = *(0x34 + r3); // lwz @ 0x807C8620
    r12 = *(0x3c + r12); // lwz @ 0x807C8624
    /* mtctr r12 */ // 0x807C8628
    /* bctrl  */ // 0x807C862C
    *(0x18 + r30) = r3; // stw @ 0x807C8630
    r31 = *(0xc + r1); // lwz @ 0x807C8634
    r30 = *(8 + r1); // lwz @ 0x807C8638
    r0 = *(0x14 + r1); // lwz @ 0x807C863C
    return;
}