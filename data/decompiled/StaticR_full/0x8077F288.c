/* Function at 0x8077F288, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8077F288(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8077F294
    r31 = r3;
    r3 = *(0xd4 + r3); // lwz @ 0x8077F29C
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0xd4 + r31); // lwz @ 0x8077F2A4
    /* li r4, 0 */ // 0x8077F2A8
    r12 = *(0 + r3); // lwz @ 0x8077F2AC
    r12 = *(0xc + r12); // lwz @ 0x8077F2B0
    /* mtctr r12 */ // 0x8077F2B4
    /* bctrl  */ // 0x8077F2B8
    r3 = *(0xd4 + r31); // lwz @ 0x8077F2BC
    /* li r4, 0 */ // 0x8077F2C0
    r3 = *(0x28 + r3); // lwz @ 0x8077F2C4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8077F2CC
    r12 = *(8 + r12); // lwz @ 0x8077F2D0
    /* mtctr r12 */ // 0x8077F2D4
    /* bctrl  */ // 0x8077F2D8
    /* fctiwz f0, f1 */ // 0x8077F2DC
    /* lis r3, 0 */ // 0x8077F2E0
    /* stfd f0, 8(r1) */ // 0x8077F2E4
    r0 = *(0xc + r1); // lwz @ 0x8077F2E8
    *(0 + r3) = r0; // sth @ 0x8077F2EC
    r31 = *(0x1c + r1); // lwz @ 0x8077F2F0
    r0 = *(0x24 + r1); // lwz @ 0x8077F2F4
    return;
}