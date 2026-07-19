/* Function at 0x807F1D1C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F1D1C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807F1D28
    r31 = r3;
    r3 = *(0xe4 + r3); // lwz @ 0x807F1D30
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0xe4 + r31); // lwz @ 0x807F1D38
    /* li r4, 0 */ // 0x807F1D3C
    r3 = *(0x28 + r3); // lwz @ 0x807F1D40
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F1D48
    r12 = *(8 + r12); // lwz @ 0x807F1D4C
    /* mtctr r12 */ // 0x807F1D50
    /* bctrl  */ // 0x807F1D54
    /* fctiwz f0, f1 */ // 0x807F1D58
    r3 = *(0xe4 + r31); // lwz @ 0x807F1D5C
    /* li r4, 0 */ // 0x807F1D60
    /* stfd f0, 8(r1) */ // 0x807F1D64
    r0 = *(0xc + r1); // lwz @ 0x807F1D68
    *(0xec + r31) = r0; // stw @ 0x807F1D6C
    r12 = *(0 + r3); // lwz @ 0x807F1D70
    r12 = *(0xc + r12); // lwz @ 0x807F1D74
    /* mtctr r12 */ // 0x807F1D78
    /* bctrl  */ // 0x807F1D7C
    r0 = *(0x24 + r1); // lwz @ 0x807F1D80
    r31 = *(0x1c + r1); // lwz @ 0x807F1D84
    return;
}