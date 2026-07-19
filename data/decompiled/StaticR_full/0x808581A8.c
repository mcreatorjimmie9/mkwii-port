/* Function at 0x808581A8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808581A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808581B0
    /* stfd f31, 8(r1) */ // 0x808581B4
    r3 = *(0x6c + r3); // lwz @ 0x808581B8
    /* fmr f31, f1 */ // 0x808581BC
    /* li r4, 0 */ // 0x808581C0
    r3 = *(0x28 + r3); // lwz @ 0x808581C4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808581CC
    /* fmr f1, f31 */ // 0x808581D0
    r12 = *(0x1c + r12); // lwz @ 0x808581D4
    /* mtctr r12 */ // 0x808581D8
    /* bctrl  */ // 0x808581DC
    r0 = *(0x14 + r1); // lwz @ 0x808581E0
    /* lfd f31, 8(r1) */ // 0x808581E4
    return;
}