/* Function at 0x807761F8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807761F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80776204
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8077620C
    r12 = *(0xec + r12); // lwz @ 0x80776210
    /* mtctr r12 */ // 0x80776214
    /* bctrl  */ // 0x80776218
    r3 = *(0xb0 + r31); // lwz @ 0x8077621C
    r12 = *(0 + r3); // lwz @ 0x80776220
    r12 = *(0xc + r12); // lwz @ 0x80776224
    /* mtctr r12 */ // 0x80776228
    /* bctrl  */ // 0x8077622C
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb0 + r31); // lwz @ 0x80776238
    r4 = r31 + 0x58; // 0x8077623C
    r12 = *(0 + r3); // lwz @ 0x80776240
    r12 = *(0x78 + r12); // lwz @ 0x80776244
    /* mtctr r12 */ // 0x80776248
    /* bctrl  */ // 0x8077624C
    r0 = *(0x14 + r1); // lwz @ 0x80776250
    r31 = *(0xc + r1); // lwz @ 0x80776254
    return;
}