/* Function at 0x808FC72C, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808FC72C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x28(r1) */ // 0x808FC738
    /* fmr f31, f1 */ // 0x808FC73C
    *(0x24 + r1) = r31; // stw @ 0x808FC740
    r31 = r4;
    r4 = r5;
    *(0x20 + r1) = r30; // stw @ 0x808FC74C
    r30 = r3;
    r5 = r31;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    /* fmr f1, f31 */ // 0x808FC760
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r3 = r30;
    r4 = r31;
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x34 + r1); // lwz @ 0x808FC780
    /* lfd f31, 0x28(r1) */ // 0x808FC784
    r31 = *(0x24 + r1); // lwz @ 0x808FC788
    r30 = *(0x20 + r1); // lwz @ 0x808FC78C
    return;
}