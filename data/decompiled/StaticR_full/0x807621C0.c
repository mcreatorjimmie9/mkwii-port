/* Function at 0x807621C0, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807621C0(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x38(r1) */ // 0x807621CC
    /* fmr f31, f1 */ // 0x807621D0
    *(0x34 + r1) = r31; // stw @ 0x807621D4
    r31 = r4;
    r4 = r5;
    *(0x30 + r1) = r30; // stw @ 0x807621E0
    r30 = r3;
    r5 = r31;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    /* fmr f1, f31 */ // 0x807621F4
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r4 = r31;
    FUN_805A4464(r4, r4, r3, r5); // bl 0x805A4464
    r3 = *(8 + r1); // lwz @ 0x80762214
    r0 = *(0xc + r1); // lwz @ 0x80762218
    *(4 + r30) = r0; // stw @ 0x8076221C
    *(0 + r30) = r3; // stw @ 0x80762220
    r0 = *(0x10 + r1); // lwz @ 0x80762224
    *(8 + r30) = r0; // stw @ 0x80762228
    /* lfd f31, 0x38(r1) */ // 0x8076222C
    r31 = *(0x34 + r1); // lwz @ 0x80762230
    r30 = *(0x30 + r1); // lwz @ 0x80762234
    r0 = *(0x44 + r1); // lwz @ 0x80762238
    return;
}