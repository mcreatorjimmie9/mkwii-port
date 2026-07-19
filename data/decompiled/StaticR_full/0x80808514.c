/* Function at 0x80808514, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80808514(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 3 */ // 0x80808520
    *(0xc + r1) = r31; // stw @ 0x80808524
    r31 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x8080852C
    r12 = *(0 + r3); // lwz @ 0x80808530
    r12 = *(0x12c + r12); // lwz @ 0x80808534
    /* mtctr r12 */ // 0x80808538
    /* bctrl  */ // 0x8080853C
    /* li r0, 1 */ // 0x80808540
    *(0x11d + r31) = r0; // stb @ 0x80808544
    r31 = *(0xc + r1); // lwz @ 0x80808548
    r0 = *(0x14 + r1); // lwz @ 0x8080854C
    return;
}