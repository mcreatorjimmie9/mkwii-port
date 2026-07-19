/* Function at 0x8080AFB0, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080AFB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080AFBC
    r31 = r3;
    r3 = *(0xc4 + r3); // lwz @ 0x8080AFC4
    r12 = *(0 + r3); // lwz @ 0x8080AFC8
    r12 = *(0xc + r12); // lwz @ 0x8080AFCC
    /* mtctr r12 */ // 0x8080AFD0
    /* bctrl  */ // 0x8080AFD4
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xc4 + r31); // lwz @ 0x8080AFE0
    r4 = r31 + 0x58; // 0x8080AFE4
    r12 = *(0 + r3); // lwz @ 0x8080AFE8
    r12 = *(0x78 + r12); // lwz @ 0x8080AFEC
    /* mtctr r12 */ // 0x8080AFF0
    /* bctrl  */ // 0x8080AFF4
    r3 = *(0xc4 + r31); // lwz @ 0x8080AFF8
    r12 = *(0 + r3); // lwz @ 0x8080AFFC
    r12 = *(0x80 + r12); // lwz @ 0x8080B000
    /* mtctr r12 */ // 0x8080B004
    /* bctrl  */ // 0x8080B008
    r0 = *(0x14 + r1); // lwz @ 0x8080B00C
    r31 = *(0xc + r1); // lwz @ 0x8080B010
    return;
}