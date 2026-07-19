/* Function at 0x80742498, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80742498(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807424A4
    r31 = r3;
    r3 = *(0x15c + r3); // lwz @ 0x807424AC
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0x15c + r31); // lwz @ 0x807424B4
    /* li r4, 0 */ // 0x807424B8
    r12 = *(0 + r3); // lwz @ 0x807424BC
    r12 = *(0xc + r12); // lwz @ 0x807424C0
    /* mtctr r12 */ // 0x807424C4
    /* bctrl  */ // 0x807424C8
    r0 = *(0x14 + r1); // lwz @ 0x807424CC
    r31 = *(0xc + r1); // lwz @ 0x807424D0
    return;
}